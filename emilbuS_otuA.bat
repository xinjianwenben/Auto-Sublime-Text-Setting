@echo off
echo Do you need Mingw?(1/0)
set /P need=
if %need%==1 xcopy D:\mingw %cd%\mingw /S /I
xcopy "C:\Users\%username%\AppData\Roaming\Sublime Text\Installed Packages" "%cd%\need\ip" /S /I
xcopy "C:\Users\%username%\AppData\Roaming\Sublime Text\Local" "%cd%\need\lc" /S /I
xcopy "C:\Users\%username%\AppData\Roaming\Sublime Text\Packages" "%cd%\need\pa" /S /I
pause