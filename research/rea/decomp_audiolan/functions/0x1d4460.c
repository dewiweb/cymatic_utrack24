// rea decompile_all
// name: FUN_001d4460
// address: 0x1d4460
// body: available
// range: 0x1d4460-0x1d4637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d4634 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d4460(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  
  iVar1 = param_1[4];
  if (iVar1 == param_1[3]) {
    if (param_2 == 3) {
      return;
    }
    if (param_2 == 4) {
      return;
    }
    goto LAB_001d4634;
  }
  if ((uint)(iVar1 - param_1[3]) < 8) goto LAB_001d4634;
  uVar2 = *(uint *)(iVar1 + -4);
  if (*(char *)(iVar1 + -8) == '\0') {
    if (uVar2 == 0) {
      FUN_001d6238(*param_1,10);
    }
    else {
      if ((uVar2 & 1) == 0) {
        FUN_001d6238(*param_1,0x2c);
        iVar4 = *param_1;
        uVar6 = 10;
      }
      else {
        FUN_001d6238(*param_1,0x3a);
        iVar4 = *param_1;
        uVar6 = 0x20;
      }
      FUN_001d6238(iVar4,uVar6);
    }
    if ((*(uint *)(iVar1 + -4) & 1) == 0) {
      uVar9 = (undefined1)param_1[7];
      iVar7 = *param_1;
      iVar8 = ((uint)(param_1[4] - param_1[3]) >> 3) * param_1[8];
      iVar4 = *(int *)(iVar7 + 0xc);
      if (*(uint *)(iVar7 + 0x10) <= (uint)(iVar4 + iVar8)) {
        iVar3 = *(int *)(iVar7 + 8);
        iVar4 = iVar4 - iVar3;
        uVar2 = *(int *)(iVar7 + 0x14) << 1;
        uVar5 = iVar4 + iVar8;
        if (uVar2 < uVar5) goto LAB_001d45d4;
        goto LAB_001d450c;
      }
      goto LAB_001d45dc;
    }
  }
  else {
    if (uVar2 != 0) {
      FUN_001d6238(*param_1,0x2c);
    }
    FUN_001d6238(*param_1,10);
    uVar9 = (undefined1)param_1[7];
    iVar7 = *param_1;
    iVar8 = ((uint)(param_1[4] - param_1[3]) >> 3) * param_1[8];
    iVar4 = *(int *)(iVar7 + 0xc);
    if (*(uint *)(iVar7 + 0x10) <= (uint)(iVar4 + iVar8)) {
      iVar3 = *(int *)(iVar7 + 8);
      iVar4 = iVar4 - iVar3;
      uVar2 = *(int *)(iVar7 + 0x14) << 1;
      uVar5 = iVar4 + iVar8;
      if (uVar2 < uVar5) {
LAB_001d45d4:
        uVar2 = uVar5;
      }
LAB_001d450c:
      iVar3 = FUN_001ab47c(iVar3,uVar2);
      iVar4 = iVar3 + iVar4;
      *(uint *)(iVar7 + 0x14) = uVar2;
      *(int *)(iVar7 + 8) = iVar3;
      *(int *)(iVar7 + 0xc) = iVar4;
      *(uint *)(iVar7 + 0x10) = iVar3 + uVar2;
    }
LAB_001d45dc:
    *(int *)(iVar7 + 0xc) = iVar4 + iVar8;
    FUN_00003850(iVar4,iVar8,uVar9);
  }
  if (((*(char *)(iVar1 + -8) != '\0') || ((*(uint *)(iVar1 + -4) & 1) != 0)) || (param_2 == 5)) {
    *(int *)(iVar1 + -4) = *(int *)(iVar1 + -4) + 1;
    return;
  }
LAB_001d4634:
                    /* WARNING: Subroutine does not return */
  FUN_000032f8();
}

