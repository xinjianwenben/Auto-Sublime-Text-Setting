@echo off
echo Do you need Mingw?(1/0)
set /P need=
if %need%==1 xcopy %cd%\mingw D:\mingw /S /I
rmdir "%cd%\need\Sublime Text"
xcopy "%cd%\need\Sublime Text" "C:\Users\%username%\AppData\Roaming\Sublime Text" /S /I
pause
