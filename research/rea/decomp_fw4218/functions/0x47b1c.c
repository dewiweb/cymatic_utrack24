// rea decompile_all
// name: FUN_00047b1c
// address: 0x47b1c
// body: available
// range: 0x47b1c-0x47c1f inclusive
// range: 0x47d6c-0x47e33 inclusive
// range: 0x47f40-0x47f47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00047b1c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  FUN_00013244(s_cfgConvertFromVersion__convertin_00047c20);
  iVar1 = FUN_00049558(s__cfg_AppSettings_Global_EnableMI_00047c5c,auStack_8);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00048b88(s__cfg_AppSettings_Global_EnableMI_00047c5c,&DAT_00047c80), iVar1 == 0))
  {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_000497b4(s__cfg_AppSettings_CopperLan_Dupli_00047c88,auStack_c);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00049518(s__cfg_AppSettings_CopperLan_Dupli_00047c88,0), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_000497b4(s__cfg_AppSettings_CopperLan_Dupli_00047cb4,auStack_10);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_00049518(s__cfg_AppSettings_CopperLan_Dupli_00047cb4,1), iVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_000497b4(s__cfg_AppSettings_CopperLan_Model_00047ce0,auStack_14);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_00048b88(s__cfg_AppSettings_CopperLan_Model_00047ce0,s_0x0001_00047d04),
           iVar1 == 0)) {
          uVar2 = 0;
        }
        else {
          iVar1 = FUN_00049940(s__cfg_System_Threads_Main_UI_Time_00047d0c,0x13);
          if ((iVar1 == 0) ||
             (iVar1 = FUN_00049940(s__cfg_System_Threads_Main_UI_Time_00047d38,0x13), iVar1 == 0)) {
            uVar2 = 0;
          }
          else {
            iVar1 = FUN_000497b4(s__cfg_AppSettings_Global_uRemoteI_00047e34,auStack_18);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_00049518(s__cfg_AppSettings_Global_uRemoteI_00047e34,0), iVar1 == 0)) {
              uVar2 = 0;
            }
            else {
              iVar1 = FUN_00049558(s__cfg_AppSettings_Playback_Multit_00047e58,auStack_1c);
              if ((iVar1 == 0) &&
                 (iVar1 = FUN_00048b88(s__cfg_AppSettings_Playback_Multit_00047e58,s_false_00047e90)
                 , iVar1 == 0)) {
                uVar2 = 0;
              }
              else {
                iVar1 = FUN_00049558(s__cfg_AppSettings_Playback_Stereo_00047e98,auStack_20);
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_00048b88(s__cfg_AppSettings_Playback_Stereo_00047e98,&DAT_00047c80),
                   iVar1 == 0)) {
                  uVar2 = 0;
                }
                else {
                  iVar1 = FUN_00048b88(s__cfg_AppSettings_SavedSettings_M_00047ecc,s_false_00047e90)
                  ;
                  if (iVar1 == 0) {
                    uVar2 = 0;
                  }
                  else {
                    iVar1 = FUN_00048b88(s__cfg_AppSettings_SavedSettings_S_00047f08,&DAT_00047c80);
                    if (iVar1 == 0) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

