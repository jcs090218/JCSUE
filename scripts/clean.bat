@echo off
:: ========================================================================
:: $File: clean.bat $
:: $Date: 2017-03-03 20:34:27 $
:: $Revision: $
:: $Creator: Jen-Chieh Shen $
:: $Notice: See LICENSE.txt for modification and distribution information
::                    Copyright (c) 2017 by Shen, Jen-Chieh $
:: ========================================================================

::
:: DESCRIPTION: clean up the unreal project.
::

cd ..

:ask_to_delete
echo You sure you want to clean the Unreal Project? (y/n):
set /p SURE=


if /i "%SURE%"=="y" goto i_am_sure
if /i "%SURE%"=="n" goto end
echo Incorrect input & goto ask_to_delete

:i_am_sure

del *.sln
del *.VC.db

mkdir Binaries
mkdir Saved
mkdir Intermediate

cd "Binaries"

FOR /D %%p IN ("%CD%*.*") DO rmdir "%%p" /s /q
del *.* /q

cd "../Saved"

FOR /D %%p IN ("%CD%*.*") DO rmdir "%%p" /s /q
del *.* /q

cd "../Intermediate"

cd ..

rmdir Binaries
rmdir Saved
rmdir Intermediate

:: ------------ end block --------------
:end
exit /b
