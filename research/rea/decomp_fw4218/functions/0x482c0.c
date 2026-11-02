// rea decompile_all
// name: FUN_000482c0
// address: 0x482c0
// body: available
// range: 0x482c0-0x48373 inclusive
// range: 0x4848c-0x48533 inclusive
// range: 0x48648-0x4866b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000482c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00013244(s_cfgConvertFromVersion__convertin_00048374);
  iVar1 = FUN_00048b88(s__cfg_AppSettings_AudioLan_Interf_000483b8,&DAT_000483b0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00049518(s__cfg_AppSettings_Sync_Mode_000483e4,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_00049518(s__cfg_AppSettings_Sync_GroupId_00048400,0);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_00049518(s__cfg_AppSettings_Sync_SlaveIndex_00048420,0);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          iVar1 = FUN_00049518(s__cfg_AppSettings_Sync_Slave_1_Id_00048444,0);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            iVar1 = FUN_00049518(s__cfg_AppSettings_Sync_Slave_2_Id_00048468,0);
            if (iVar1 == 0) {
              uVar2 = 0;
            }
            else {
              iVar1 = FUN_00049518(s__cfg_AppSettings_Sync_Slave_3_Id_00048534,0);
              if (iVar1 == 0) {
                uVar2 = 0;
              }
              else {
                iVar1 = FUN_00049518(s__cfg_AppSettings_Global_ClockSou_00048558,0);
                if (iVar1 == 0) {
                  uVar2 = 0;
                }
                else {
                  iVar1 = FUN_00049518(s__cfg_AppSettings_Global_ClockSou_00048588,3);
                  if (iVar1 == 0) {
                    uVar2 = 0;
                  }
                  else {
                    iVar1 = FUN_00049518(s__cfg_AppSettings_Global_ClockSou_000485b0,0);
                    if (iVar1 == 0) {
                      uVar2 = 0;
                    }
                    else {
                      iVar1 = FUN_00049518(s__cfg_AppSettings_SavedSettings_C_000485e0,0);
                      if (iVar1 == 0) {
                        uVar2 = 0;
                      }
                      else {
                        iVar1 = FUN_00049518(s__cfg_AppSettings_SavedSettings_C_00048618,3);
                        if (iVar1 == 0) {
                          uVar2 = 0;
                        }
                        else {
                          iVar1 = FUN_00049518(s__cfg_AppSettings_SavedSettings_C_0004866c,0);
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
      }
    }
  }
  return uVar2;
}

