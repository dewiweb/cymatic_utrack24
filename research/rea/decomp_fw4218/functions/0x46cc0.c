// rea decompile_all
// name: FUN_00046cc0
// address: 0x46cc0
// body: available
// range: 0x46cc0-0x46fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00046cc0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (*_DAT_00046fac == 0) {
    FUN_00002898(s_W__Reconfiguring_DP83640_PHY_for_00046fad + 3);
    if ((param_2 != 1) || (param_3 != 1)) {
      FUN_00002898(s_Warning__Initial_settings_have_b_00046fe8);
    }
    iVar1 = FUN_000471d8(param_1,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_001ff7bc(param_1,0,&DAT_00002100);
      if (iVar1 == 0) {
        iVar1 = 1;
        do {
          FUN_001d0130(10);
          iVar3 = FUN_001f3414(param_1,1,&local_28);
          if (iVar3 != 0) {
            uVar2 = 0xffffffff;
            goto LAB_00046d00;
          }
        } while (((local_28 & 4) != 4) && (iVar1 = iVar1 + -1, iVar1 != 0));
        if (iVar1 == 0) {
          pcVar4 = s_failure_00047020;
        }
        else {
          pcVar4 = s_success_00047018;
        }
        FUN_00002898(s_Connection___s_after__d_ms_00047028,pcVar4,(1 - iVar1) * 10);
        iVar1 = FUN_000471d8(param_1,param_4);
        if (iVar1 == 0) {
          iVar1 = FUN_001f3414(param_1,4,&local_30);
          if (iVar1 == 0) {
            iVar1 = FUN_001ff7bc(param_1,4,local_30 & 0xffff & DAT_00047044);
            if (iVar1 == 0) {
              iVar1 = 1;
              do {
                FUN_001d0130(10);
                iVar3 = FUN_001f3414(param_1,1,&local_28);
                if (iVar3 != 0) {
                  uVar2 = 0xffffffff;
                  goto LAB_00046d00;
                }
                iVar3 = FUN_001f3414(param_1,5,&local_2c);
                if (iVar3 != 0) {
                  uVar2 = 0xffffffff;
                  goto LAB_00046d00;
                }
              } while ((((local_28 & 4) != 4) && ((local_2c & 0xffff & DAT_00047048) == 0)) &&
                      (iVar1 = iVar1 + -1, iVar1 != 0));
              if (iVar1 == 0) {
                pcVar4 = s_failure_00047020;
              }
              else {
                pcVar4 = s_success_00047018;
              }
              FUN_00002898(s_Connection___s_after__d_ms_00047028,pcVar4,(1 - iVar1) * 10);
              FUN_00002898(s_Enabling_1MHz_PTP_clock_output___0004704c);
              FUN_001ff7bc(param_1,0x13,6);
              FUN_001ff7bc(param_1,0x14,DAT_00047070);
              FUN_001ff7bc(param_1,0x13,0);
              FUN_001ff7bc(param_1,0x1c,0);
              iVar3 = FUN_001f3414(param_1,0x19,&local_28);
              if (iVar3 == 0) {
                FUN_001ff7bc(param_1,0x19,local_28 & 0xffff & DAT_0004708c);
              }
              else {
                FUN_00002898(s_PHYTER__read_failed_00047074);
              }
              uVar2 = 1;
              *_DAT_00046fac = 1;
              if (iVar1 == 0) {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_001f3414(param_1,0,&local_28);
    if (iVar1 == 0) {
      if ((local_28 & 4) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
LAB_00046d00:
  return CONCAT44(local_30,uVar2);
}

