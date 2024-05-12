@echo off
:restart
echo.
echo.
set /p folder="Enter the folder name: "
cd c\%folder%
for %%i in (*.c) do (
    gcc -o %%~ni %%i
    set "name=%%~ni"
)
.\%name%
cd ..\..
echo.
echo.
set /p restart="Do you want to restart the program (yes/no)? "
if /i "%restart%"=="yes" goto restart
if /i "%restart%"=="y" goto restart
if /i "%restart%"=="no" goto end
if /i "%restart%"=="n" goto end
:end5