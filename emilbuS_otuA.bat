@echo off
echo Do you need Mingw?(1/0)
set /P need=
if %need%==1 xcopy D:\mingw %cd%\mingw /S /I
xcopy "C:\Users\%username%\AppData\Roaming\Sublime Text" "%cd%\need\Sublime Text" /S /I
pause
