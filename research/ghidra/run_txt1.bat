@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\projects
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% uremote_v36 -process "uRemote.exe" -noanalysis -scriptPath %SCR% -postScript TxtScan.java %OUT%\ur_txtscan.txt -postScript DecompOne.java %OUT%\ur_e290.txt 0064e290 00630930 0062fc00 006328d0 00676f70 00635e70 0064de20
