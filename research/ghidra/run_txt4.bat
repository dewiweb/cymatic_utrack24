@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\projects
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% uremote_v36 -process "uRemote.exe" -noanalysis -scriptPath %SCR% -postScript DecompOne.java x %OUT%\ur_ser.txt 00485aa0 00485ac0 00485ad0 0064d130 0064d100 0064cad0 00676670 00634590 0064f240 0064f1d0 0064f150
