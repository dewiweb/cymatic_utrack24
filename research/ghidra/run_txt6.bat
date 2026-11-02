@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\projects
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% uremote_v36 -process "uRemote.exe" -noanalysis -scriptPath %SCR% -postScript DecompOne.java x %OUT%\ur_disp.txt 00631240 00635070 006764a0 0064d140 0064d240 0064d300 0064d6a0 0064d7a0 0064dc40 0064e0b0
