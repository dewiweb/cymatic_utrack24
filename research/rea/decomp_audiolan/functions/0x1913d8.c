// rea decompile_all
// name: FUN_001913d8
// address: 0x1913d8
// body: available
// range: 0x1913d8-0x1916df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1914ee to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1914fe to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1915e8 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1915f8 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x191634 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1916dc to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001913d8(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                int *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  int local_68;
  int *local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 auStack_50 [32];
  int local_30;
  undefined1 *local_2c;
  int local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  local_30 = 0;
  local_24 = param_1;
  puStack_20 = param_2;
  puStack_1c = param_3;
  puStack_18 = param_4;
  iVar2 = FUN_001917bc(param_1,param_2,param_3,param_4,&local_74,&local_70,&local_6c);
  if ((iVar2 == 0) && (((param_5 == (int *)0x0 || (*param_5 != 0)) || (param_5[1] != 0)))) {
    local_68 = 0;
    local_64 = (int *)0x0;
    local_54 = 0;
    local_2c = auStack_50;
    puStack_60 = param_2;
    puStack_5c = param_3;
    puStack_58 = param_4;
    iVar2 = FUN_001b0d78(local_2c,0,s_lwIP_select_001916e0);
    if (iVar2 != 0) {
      return -1;
    }
    FUN_001b0bf0();
    local_68 = *DAT_001916ec;
    if (local_68 != 0) {
      *(int **)(local_68 + 4) = &local_68;
    }
    piVar1 = DAT_001916ec;
    *DAT_001916ec = (int)&local_68;
    piVar1[1] = piVar1[1] + 1;
    FUN_001b0c3c();
    uVar6 = 0;
    if (0 < local_24) {
      do {
        uVar3 = (int)uVar6 >> 0x1f;
        if ((((param_2 != (undefined1 *)0x0) &&
             (((uint)(byte)param_2[(int)((uVar3 >> 0x1d) + uVar6) >> 3] & 1 << (uVar6 & 7)) != 0))
            || ((param_3 != (undefined1 *)0x0 &&
                (((uint)(byte)param_3[(int)((uVar3 >> 0x1d) + uVar6) >> 3] & 1 << (uVar6 & 7)) != 0)
                ))) ||
           ((param_4 != (undefined1 *)0x0 &&
            (((uint)(byte)param_4[(int)((uVar3 >> 0x1d) + uVar6) >> 3] & 1 << (uVar6 & 7)) != 0))))
        {
          if ((0x1f < uVar6) ||
             ((*(int *)(DAT_001916f0 + uVar6 * 0x18) == 0 ||
              (iVar2 = uVar6 * 0x18 + DAT_001916f0, iVar2 == 0)))) {
            FUN_00015210(s_Assertion___s__failed_at_line__d_00191718,s_sock____NULL_00191750,
                         DAT_0019174c,DAT_001916f4);
                    /* WARNING: Subroutine does not return */
            FUN_000032f8();
          }
          FUN_001b0bf0();
          iVar4 = *(int *)(iVar2 + 0x14) + 1;
          *(int *)(iVar2 + 0x14) = iVar4;
          if (iVar4 < 1) {
            FUN_00015210(s_Assertion___s__failed_at_line__d_00191718,
                         s_sock_>select_waiting_>_0_001916fc,DAT_001916f8,DAT_001916f4);
                    /* WARNING: Subroutine does not return */
            FUN_000032f8();
          }
          FUN_001b0c3c();
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < local_24);
    }
    iVar2 = FUN_001917bc(local_24,param_2,param_3,param_4,&local_74,&local_70,&local_6c);
    if (iVar2 == 0) {
      if (param_5 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        FUN_0016daa4(param_5[1] + 500);
        iVar4 = extraout_r1 + *param_5 * 1000;
        if (iVar4 == 0) {
          iVar4 = 1;
        }
      }
      local_30 = FUN_001b0c00(local_2c,iVar4);
    }
    uVar6 = 0;
    if (0 < local_24) {
      do {
        uVar3 = (int)uVar6 >> 0x1f;
        if ((((param_2 != (undefined1 *)0x0) &&
             (((uint)(byte)param_2[(int)((uVar3 >> 0x1d) + uVar6) >> 3] & 1 << (uVar6 & 7)) != 0))
            || ((param_3 != (undefined1 *)0x0 &&
                (((uint)(byte)param_3[(int)((uVar3 >> 0x1d) + uVar6) >> 3] & 1 << (uVar6 & 7)) != 0)
                ))) ||
           ((param_4 != (undefined1 *)0x0 &&
            (((uint)(byte)param_4[(int)((uVar3 >> 0x1d) + uVar6) >> 3] & 1 << (uVar6 & 7)) != 0))))
        {
          if ((0x1f < uVar6) ||
             ((*(int *)(DAT_001916f0 + uVar6 * 0x18) == 0 ||
              (iVar4 = uVar6 * 0x18 + DAT_001916f0, iVar4 == 0)))) {
            FUN_00015210(s_Assertion___s__failed_at_line__d_00191718,s_sock____NULL_00191750,
                         DAT_00191780,DAT_001916f4);
                    /* WARNING: Subroutine does not return */
            FUN_000032f8();
          }
          FUN_001b0bf0();
          iVar5 = *(int *)(iVar4 + 0x14) + -1;
          *(int *)(iVar4 + 0x14) = iVar5;
          if (iVar5 < 0) {
            FUN_00015210(s_Assertion___s__failed_at_line__d_00191718,
                         s_sock_>select_waiting_>__0_00191764,DAT_00191760,DAT_001916f4);
                    /* WARNING: Subroutine does not return */
            FUN_000032f8();
          }
          FUN_001b0c3c();
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < local_24);
    }
    FUN_001b0bf0();
    if (local_68 != 0) {
      *(int **)(local_68 + 4) = local_64;
    }
    piVar1 = DAT_001916ec;
    if ((int *)*DAT_001916ec == &local_68) {
      if (local_64 != (int *)0x0) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_00191718,s_select_cb_prev____NULL_00191788,
                     DAT_00191784,DAT_001916f4);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *DAT_001916ec = local_68;
    }
    else {
      if (local_64 == (int *)0x0) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_00191718,s_select_cb_prev____NULL_001917a4,
                     DAT_001917a0,DAT_001916f4);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *local_64 = local_68;
    }
    piVar1[1] = piVar1[1] + 1;
    FUN_001b0c3c();
    FUN_001b0d70(local_2c);
    if (local_30 != -1) {
      iVar2 = FUN_001917bc(local_24,param_2,param_3,param_4,&local_74,&local_70,&local_6c);
    }
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_74;
    param_2[1] = local_73;
    param_2[2] = local_72;
    param_2[3] = local_71;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = local_70;
    param_3[1] = local_6f;
    param_3[2] = local_6e;
    param_3[3] = local_6d;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = local_6c;
    param_4[1] = local_6b;
    param_4[2] = local_6a;
    param_4[3] = local_69;
  }
  return iVar2;
}

