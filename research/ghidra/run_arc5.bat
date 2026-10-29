@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\utrack_fw_proj
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
set OUT=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\dumps
call %GH% %PROJ% utrack_fw -process "uT24_Audiolan_Release_ 4078.bcd" -noanalysis -scriptPath %SCR% -postScript LitVal.java 66bd8 66bdc -postScript FuncAt.java %OUT%\arc_vt_fns.txt 1708cc 1715b8 17185c 171a38 171b2c 171d34 171e98 171ee0 171f30 1720b0 1720d4 17210c 172174 172190 1721b4 1722a8 1723e8 172628 172680 1726cc
