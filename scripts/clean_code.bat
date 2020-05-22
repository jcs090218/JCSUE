@echo off
:: ========================================================================
:: $File: clean_code.bat $
:: $Date: 2017-03-12 01:21:33 $
:: $Revision: $
:: $Creator: Jen-Chieh Shen $
:: $Notice: See LICENSE.txt for modification and distribution information
::                    Copyright (c) 2017 by Shen, Jen-Chieh $
:: ========================================================================

::
:: DESCRIPTION: Use this bat while you want to rebuild the 
:: solution file for Unreal Engine.
::
:: According to this
:: SOURCE: https://answers.unrealengine.com/questions/166179/how-do-i-remove-a-c-class-from-my-project-code.html
::

cd ..

:ask_to_delete
echo You sure you want to clean the Unreal Project Binaries? (y/n):
set /p SURE=

if /i "%SURE%"=="y" goto i_am_sure
if /i "%SURE%"=="n" goto end
echo Incorrect input & goto ask_to_delete

:i_am_sure

rmdir Binaries /S /Q

:: ------------ end block --------------
:end
exit /b

cd "Binaries"
