// rea decompile_all
// name: FUN_001a9890
// address: 0x1a9890
// body: available
// range: 0x1a9890-0x1a9ad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a98b2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a98e2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a9910 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a997e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a9994 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a99d2 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a9a3a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a9a58 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1a9aa8 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001a9904) */
/* WARNING: Removing unreachable block (ram,0x001a9a9a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_001a9890(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  if (param_1 == 0) {
    iVar10 = 0x38;
  }
  else if (param_1 == 1) {
    iVar10 = 0x24;
  }
  else if (param_1 == 2) {
    iVar10 = 0x10;
  }
  else {
    if (param_1 != 3) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,
                   s___pbuf_alloc__bad_pbuf_layer_001a9ad6 + 2,0xe8,_DAT_001a9ad4,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    iVar10 = 0;
  }
  uVar2 = (undefined2)param_2;
  if (param_3 == 0) {
    puVar5 = (undefined4 *)FUN_0019c794(iVar10 + 0x10 + (param_2 + 3 & 0xfffffffc));
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar5[1] = (int)puVar5 + iVar10 + 0x13 & 0xfffffffc;
    *(undefined2 *)(puVar5 + 2) = uVar2;
    *(undefined2 *)((int)puVar5 + 10) = uVar2;
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  else if ((param_3 == 1) || (param_3 == 2)) {
    puVar5 = (undefined4 *)FUN_0019cbdc(0xc);
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar5[1] = 0;
    *(undefined2 *)(puVar5 + 2) = uVar2;
    *(undefined2 *)((int)puVar5 + 10) = uVar2;
    *puVar5 = 0;
    *(char *)(puVar5 + 3) = (char)param_3;
  }
  else {
    if (param_3 != 3) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,s_pbuf_alloc__erroneous_type_001a9b28
                   ,0x154,_DAT_001a9ad4,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    puVar5 = (undefined4 *)FUN_0019cbdc(0xd);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_001b0bf0();
      pcVar4 = DAT_001a9b74;
      cVar1 = *DAT_001a9b74;
      *DAT_001a9b74 = '\x01';
      FUN_001b0c3c();
      if ((cVar1 == '\0') && (iVar10 = FUN_001b6dd4(_DAT_001a9b78,0), iVar10 != 0)) {
        FUN_001b0bf0();
        *pcVar4 = '\0';
        FUN_001b0c3c();
      }
      return (undefined4 *)0x0;
    }
    *(undefined1 *)(puVar5 + 3) = 3;
    *puVar5 = 0;
    uVar9 = (int)puVar5 + iVar10 + 0x13 & 0xfffffffc;
    puVar5[1] = uVar9;
    uVar8 = 0x600 - iVar10;
    *(undefined2 *)(puVar5 + 2) = uVar2;
    uVar6 = uVar8;
    if ((int)param_2 < (int)uVar8) {
      uVar6 = param_2;
    }
    puVar11 = puVar5 + 0x184;
    *(short *)((int)puVar5 + 10) = (short)uVar6;
    if (puVar11 < (undefined4 *)(uVar9 + (uVar6 & 0xffff))) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,
                   s__check_p_>payload___p_>len_does_n_001a9b7b + 1,0x100,_DAT_001a9ad4);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    if ((int)uVar8 < 1) {
      FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,
                   s_PBUF_POOL_BUFSIZE_must_be_bigger_001a9bb0,0x103,_DAT_001a9ad4);
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    *(undefined2 *)((int)puVar5 + 0xe) = 1;
    puVar3 = puVar5;
    for (param_2 = param_2 - (uVar6 & 0xffff); 0 < (int)param_2; param_2 = param_2 - uVar6) {
      puVar7 = (undefined4 *)FUN_0019cbdc(0xd);
      if (puVar7 == (undefined4 *)0x0) {
        FUN_001b0bf0();
        pcVar4 = DAT_001a9b74;
        cVar1 = *DAT_001a9b74;
        *DAT_001a9b74 = '\x01';
        FUN_001b0c3c();
        if ((cVar1 == '\0') && (iVar10 = FUN_001b6dd4(_DAT_001a9b78,0), iVar10 != 0)) {
          FUN_001b0bf0();
          *pcVar4 = '\0';
          FUN_001b0c3c();
        }
        FUN_001aa008(puVar5);
        return (undefined4 *)0x0;
      }
      *(undefined1 *)(puVar7 + 3) = 3;
      *(undefined1 *)((int)puVar7 + 0xd) = 0;
      *puVar7 = 0;
      iVar10 = DAT_001a9be4;
      *puVar3 = puVar7;
      if (iVar10 <= (int)param_2) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,s_rem_len_<_max_u16_t_001a9be8,
                     0x11e,_DAT_001a9ad4);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *(short *)(puVar7 + 2) = (short)param_2;
      uVar6 = param_2 & 0xffff;
      if (0x5ff < (param_2 & 0xffff)) {
        uVar6 = 0x600;
      }
      *(short *)((int)puVar7 + 10) = (short)uVar6;
      puVar7[1] = puVar7 + 4;
      if (((uint)puVar7 & 3) != 0) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,
                     s_pbuf_alloc__pbuf_q_>payload_prop_001a9bfc,0x123,_DAT_001a9ad4);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (puVar11 < (undefined4 *)(puVar5[1] + (uint)*(ushort *)((int)puVar5 + 10))) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001a9af4,
                     s__check_p_>payload___p_>len_does_n_001a9b7b + 1,0x125,_DAT_001a9ad4);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *(undefined2 *)((int)puVar7 + 0xe) = 1;
      puVar3 = puVar7;
    }
  }
  *(undefined2 *)((int)puVar5 + 0xe) = 1;
  *(undefined1 *)((int)puVar5 + 0xd) = 0;
  return puVar5;
}

