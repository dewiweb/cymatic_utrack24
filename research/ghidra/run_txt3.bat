@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\projects
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% uremote_v36 -process "uRemote.exe" -noanalysis -scriptPath %SCR% -postScript TxtScan2.java %OUT%\ur_appmsg.txt c8cbb4 c8cffc c8d418 c8d4c8 c8cb64 c8d338 -postScript DecompOne.java x %OUT%\ur_base.txt 0066c1c0 0066aa00 00676300
