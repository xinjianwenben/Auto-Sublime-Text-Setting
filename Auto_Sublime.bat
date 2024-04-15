@echo off
echo Do you need Mingw?(1/0)
set /P need=
if %need%==1 xcopy %cd%\mingw D:\mingw /S /I
xcopy "%cd%\need\ip" "C:\Users\%username%\AppData\Roaming\Sublime Text\Installed Packages" /S /I
xcopy "%cd%\need\lc" "C:\Users\%username%\AppData\Roaming\Sublime Text\Local" /S /I
xcopy "%cd%\need\pa" "C:\Users\%username%\AppData\Roaming\Sublime Text\Packages" /S /I
pause