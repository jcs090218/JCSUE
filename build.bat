@echo off
REM ========================================================================
REM $File: build.bat $
REM $Date: 2017-03-02 00:20:01 $
REM $Revision: $
REM $Creator: Jen-Chieh Shen $
REM $Notice: See LICENSE.txt for modification and distribution information
REM                    Copyright (c) 2017 by Shen, Jen-Chieh $
REM ========================================================================


REM DESCRIPTION(jenchieh): pack the needed files into
REM one zip file.


REM package info
set PACKAGE_NAME=JCSUE
set PACKAGE_EXTENSION=.zip

REM package version
set VER_MAJOR=1
set VER_MINOR=0
set VER_PATCH=1

REM content root folder.
set CONTENT_ROOT=%CD%\Content\JCSUE
set SOURCE_ROOT=%CD%\Source\JCSUE
set BUILD_DIR=%CD%\Build


set CONTENT_ADDITION_NAME=content
set SOURCE_ADDITION_NAME=source

REM ------------- script start ------------------

REM output file name!
set REAL_PACKAGE_NAME=%PACKAGE_NAME%_%VER_MAJOR%_%VER_MINOR%_%VER_PATCH%_%PACKAGE_EXTENSION%

REM temporary directory
set TEMP_DIR=C:\%PACKAGE_NAME%_temp_%VER_MAJOR%_%VER_MINOR%_%VER_PATCH%

set TEMP_CONTENT_FOLDER=%TEMP_DIR%/%PACKAGE_NAME%_%CONTENT_ADDITION_NAME%
set TEMP_SOURCE_FOLDER=%TEMP_DIR%/%PACKAGE_NAME%_%SOURCE_ADDITION_NAME%

REM make temp directory
mkdir "%TEMP_DIR%"

mkdir "%TEMP_CONTENT_FOLDER%"
mkdir "%TEMP_SOURCE_FOLDER%"

REM #################################################################################
REM IMPORTANT(jenchieh): 這裡使用了多線程,所已主線成可能已經結束 但壓縮還沒有結束...
REM #################################################################################
set COMPRESSTIME=2500

REM ##############################
REM create the zip vb script.
REM ##############################
REM ATTENTION(jenchieh): 不能有'/'在path裡面才能使用壓縮的vs script.
echo [build.bat]: Creating the vb script...
echo Set objArgs = WScript.Arguments > _zipIt.vbs
echo InputFolder = objArgs(0) >> _zipIt.vbs
echo ZipFile = objArgs(1) >> _zipIt.vbs
echo CreateObject("Scripting.FileSystemObject").CreateTextFile(ZipFile, True).Write "PK" ^& Chr(5) ^& Chr(6) ^& String(18, vbNullChar) >> _zipIt.vbs
echo Set objShell = CreateObject("Shell.Application") >> _zipIt.vbs
echo Set source = objShell.NameSpace(InputFolder).Items >> _zipIt.vbs
echo objShell.NameSpace(ZipFile).CopyHere(source) >> _zipIt.vbs
echo wScript.Sleep %COMPRESSTIME% >> _zipIt.vbs

REM copy the conten file and source file to according folder.
xcopy /e "%CONTENT_ROOT%" "%TEMP_CONTENT_FOLDER%"
xcopy /e "%SOURCE_ROOT%" "%TEMP_SOURCE_FOLDER%"

REM ################
REM zip the folder
REM ################
echo [build.bat]: Start zipping the target file and output the file to destination folder...
echo Compress time: %COMPRESSTIME% (ms)
echo Temp Directory: "%TEMP_DIR%"
echo Output Directory: "%BUILD_DIR%"
CScript  _zipIt.vbs "%TEMP_DIR%"  "%BUILD_DIR%\%REAL_PACKAGE_NAME%"


REM Lastly, remove temporary folder!
REM SOURCE(jenchieh): https://ss64.com/nt/xcopy.html
echo Removing temporary file.
rmdir "%TEMP_DIR%" /s /q

echo[
echo --------------------------------------------------------------
echo "Done building package. -> "%BUILD_DIR%\%REAL_PACKAGE_NAME%""
echo --------------------------------------------------------------

REM ------------ end block --------------
:end
exit /b     REM end the script without closing the terminal process.
