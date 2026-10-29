@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\utrack_fw_proj
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% utrack_fw -process "uTRACK24_Release_4218.bcd" -noanalysis -scriptPath %SCR% -postScript DecompOne.java x %OUT%\ut_audiolan_cmd.txt 12f4d4 -postScript LitVal.java 2dad78 -postScript XrefTo.java x %OUT%\ut_audiolan_xref.txt 12f4d4
