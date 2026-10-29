@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\utrack_fw_proj
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% utrack_fw -process "uT24_Audiolan_Release_ 4078.bcd" -noanalysis -scriptPath %SCR% -postScript DecompOne.java x %OUT%\arc_proto_ctor.txt 60760 135cb0 165c4c 165d0c 11d8d8 165d6c 135b04 135a44
