@echo off
set workingDir=%CD%\modloader\Project Props\
echo Props Props Installer
echo ---------------------
echo.
echo Installation Methods:
echo 1. Weeds / 2dGroundObjects / ProcObj
echo 2. Weeds / 2dGroundobjects
echo 3. ProcObj only
echo.
echo Weeds = Plants.
echo 2dGroundObjects = manholes, litters, oilspills, etc.
echo ProcObj = Objects placed randomly on roads and pavements.
echo.
echo.
choice  /C 123 /M "Select an installation method."

if "%ERRORLEVEL%"=="1" (
	MOVE /Y "%CD%\optional\Lae_stream7.ipl" "%workingDir%ipl_src\"
	MOVE /Y "%CD%\optional\lae_stream8.ipl" "%workingDir%ipl_src\"
	MOVE /Y "%CD%\optional\procobj.dat" "%workingDir%files\"
	MOVE /Y "%CD%\optional\surfinfo.dat" "%workingDir%files\"
)
if "%ERRORLEVEL%"=="2" (
	MOVE /Y "%CD%\optional\lae_stream7.ipl" "%workingDir%ipl_src\"
	MOVE /Y "%CD%\optional\lae_stream8.ipl" "%workingDir%ipl_src\"
)
if "%ERRORLEVEL%"=="3" (
	MOVE /Y "%CD%\optional\procobj.dat" "%workingDir%files\"
	MOVE /Y "%CD%\optional\surfinfo.dat" "%workingDir%files\"
)

echo ---------------------------------
echo Converting IPLs (Text to Binary):
echo ---------------------------------
echo.
FOR %%i IN ("%workingDir%\ipl_src\*.ipl") DO (
	echo Processing %%~ni.ipl...
	echo -------------------------------------------
	cmd /C ""%CD%\tools\fastman92_processor.exe" /file_type ipl /input_type text /input_game GAME_EXACT_GTASA_PC /input_filename "%workingDir%\ipl_src\%%~ni.ipl" /output_type binary /output_game GAME_EXACT_GTASA_PC /output_filename "%workingDir%\img_src\%%~ni.ipl""    
	echo.
)
echo Finished Convertering IPLs
echo.
echo ----------------------------------------
echo Building IMG archive (ProjectProps.img):
echo ----------------------------------------
echo.
cmd /C ""%CD%\tools\fastman92ImgConsole32.exe" -script "%workingDir%\ProjectProps.img.txt""  
echo Finished Building IMG archive
echo.
echo Clearning up...
echo.
@RD /S /Q "%workingDir%\ipl_src\"
@RD /S /Q "%workingDir%\img_src\"
@RD /S /Q "%CD%\optional\"
@RD /S /Q "%CD%\tools\"
@DEL /S /Q "%CD%\README.md"
@DEL /S /Q "%workingDir%\ProjectProps.img.txt"
@DEL /S /Q "%CD%\Install ProjectProps.bat"
echo Installation Complete  
pause