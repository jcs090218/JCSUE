@echo off
:: ========================================================================
:: $File: clean_code.bat $
:: $Date: 2017-03-12 01:21:33 $
:: $Revision: $
:: $Creator: Jen-Chieh Shen $
:: $Notice: See LICENSE.txt for modification and distribution information
::                    Copyright (c) 2017 by Shen, Jen-Chieh $
:: ========================================================================


:: DESCRIPTION(jenchieh): Use this bat while you want to rebuild
:: the solution file for Unreal Engine.
::
:: According to this
:: SOURCE(jenchieh):
:: https://answers.unrealengine.com/questions/166179/how-do-i-remove-a-c-class-from-my-project-code.html
::

:ask_to_delete
echo You sure you want to clean the Unreal Project Binaries? (y/n):
set /p SURE=

if /i "%SURE%"=="y" goto i_am_sure
if /i "%SURE%"=="n" goto end
echo Incorrect input & goto ask_to_delete

mkdir Binaries

FOR /D %%p IN ("%CD%*.*") DO rmdir "%%p" /s /q
del *.* /q

:: go back to root.
cd ..

rmdir Binaries

:: ------------ end block --------------
:end
exit /b

cd "Binaries"
