@echo off
:restart
echo.
echo.
set /p folder="Enter the folder name: "
cd %folder%
for %%i in (*.java) do (
    javac %%i
    set "name=%%~ni"
)
cd ..
java -cp "." %folder%.%name%
echo.
echo.
set /p restart="Do you want to restart the program (yes/no)? "
if /i "%restart%"=="yes" goto restart
if /i "%restart%"=="y" goto restart