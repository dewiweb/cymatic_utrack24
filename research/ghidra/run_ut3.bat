@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\utrack_fw_proj
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% utrack_fw -process "uTRACK24_Release_4218.bcd" -noanalysis -scriptPath %SCR% -postScript ThumbPeek.java %OUT%\ut_audiolan_peek.txt 12f4d4 -postScript ArmPeek.java %OUT%\ut_audiolan_apeek.txt 12f4d4
