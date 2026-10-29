@echo off
set GH=C:\tools\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat
set PROJ=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\ghidra\utrack_fw_proj
set SCR=C:\Users\Administrateur\Documents\GitHub\cymatic_utrack24\research\tools\ghidra
call %GH% %PROJ% utrack_fw -process "uT24_Audiolan_Release_ 4078.bcd" -noanalysis -scriptPath %SCR% -postScript LitVal.java 5af04 5af08 5af0c 5af10 5af14 5afc0 5afc4 5afc8 5afcc 5b048 5b04c 5b050 5b054 61178 6117c 61180 61184
