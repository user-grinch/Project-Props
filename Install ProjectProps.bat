@echo off
set workingDir=%CD%\modloader\Project Props\
echo Props Props Installer
echo ---------------------
echo.
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
echo Installation Complete  
pause