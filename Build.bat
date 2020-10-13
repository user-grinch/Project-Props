@echo off
set workingDir=%CD%\modloader\Project Props\

REM Convert IPL files
echo Converting IPL files
echo ------------------------------------
FOR %%i IN ("%workingDir%\raw\*.ipl") DO (
	cmd /C ""%CD%\fastman92_processor.exe" /file_type ipl /input_type text /input_game GAME_EXACT_GTASA_PC /input_filename "%workingDir%\raw\%%~ni.ipl" /output_type binary /output_game GAME_EXACT_GTASA_PC /output_filename "%workingDir%\data\%%~ni.ipl""    
)
echo ------------------------------------
echo Converting finished
pause
