@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\projects
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% uremote_v36 -process "uRemote.exe" -noanalysis -scriptPath %SCR% -postScript DisasAt.java %OUT%\ur_thunks.txt 00489b14 00489940 0048fb72 0048fc17 0048fbf6 00489a22 00489a89 00489ad7 00489a49 -postScript DecompOne.java x %OUT%\ur_d9xx.txt 0064d990 0064da80 0064db70 0064e6a0 006380c0 00660e70
