@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\utrack_fw_proj
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% utrack_fw -process "uT24_Audiolan_Release_ 4078.bcd" -noanalysis -scriptPath %SCR% -postScript ThumbPeek.java %OUT%\arc_tpeek1.txt 61178 61228 61538 6185c 62854
