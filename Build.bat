@echo off
set workingDir=%CD%\Project Props\

REM Convert IPL files
echo Converting IPL files

FOR %%i IN ("%workingDir%\raw\*.ipl") DO (
	start %CD%\tools\fastman92_processor.exe /file_type ipl /input_type text /input_game GAME_EXACT_GTASA_PC /input_filename "%workingDir%\raw\%%~ni.ipl" /output_type binary /output_game GAME_EXACT_GTASA_PC /output_filename "%workingDir%\data\%%~ni.ipl"
)

echo Converting finished
pause
