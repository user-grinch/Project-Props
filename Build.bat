@echo off
set workingDir=%CD%\Project Props\data\maps\PP\

REM Convert IPL files
echo Converting IPL files

FOR %%i IN ("%workingDir%\*.ipl") DO (
	start %CD%\tools\fastman92_processor.exe /file_type ipl /input_type text /input_game GAME_EXACT_GTASA_PC /input_filename "%workingDir%\%%~ni.ipl" /output_type binary /output_game GAME_EXACT_GTASA_PC /output_filename "%workingDir%\img_src\%%~ni.ipl"
)

REM --------------------------------------------------
REM Build img archive

if not exist "%workingDir%\create_img_archive.txt" (
	echo ERROR: 'create_img_archive.txt' is missing."
	pause
)
if exist "%workingDir%\ProjectProps.img" (
	del "%workingDir%\ProjectProps.img"
)
echo Building img...

"%CD%\tools\fastman92ImgConsole32.exe" -script "%workingDir%\create_img_archive.txt"

REM --------------------------------------------------

pause
