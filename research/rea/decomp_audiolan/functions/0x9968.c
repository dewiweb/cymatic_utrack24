// rea decompile_all
// name: FUN_00009968
// address: 0x9968
// body: available
// range: 0x9968-0x9aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9a94 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00009968(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  iVar2 = DAT_00009df0;
  param_1[1] = DAT_00009df0 + 0x54;
  *param_1 = iVar2;
  uVar1 = FUN_0008cf78();
  FUN_0008cf08(uVar1,param_1);
  FUN_0018eb20(param_1 + 0x35);
  FUN_0006ffb4(param_1 + 1);
  FUN_0010fa20(param_1[0x5e],param_1[0x60] - param_1[0x5e] >> 2,0);
  piVar4 = param_1 + 0x57;
  iVar2 = param_1[0x5b];
  if (iVar2 != 0) {
    local_18 = *(undefined4 *)(iVar2 + 8);
    local_14 = iVar2;
    FUN_001d1974(auStack_10,piVar4,&local_18,&local_14);
    iVar2 = param_1[0x5b];
    *(int *)(iVar2 + 0xc) = param_1[0x58];
    param_1[0x58] = iVar2;
    piVar3 = (int *)*piVar4;
    while (piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      FUN_0010fa20(piVar3[2],piVar3[1],0);
      FUN_0010fa20(piVar3,1,0);
      piVar3 = (int *)*piVar4;
    }
  }
  iVar2 = FUN_0008b818(param_1 + 0x54);
  piVar3 = (int *)(iVar2 + -8);
  piVar6 = (int *)0x0;
  FUN_001a0700(DAT_00009df4);
  piVar4 = *(int **)(iVar2 + -4);
  if (piVar4 == (int *)0x0) {
    if (*piVar3 != 0) goto LAB_00009a94;
  }
  else {
    if (*piVar3 == 0) {
LAB_00009a94:
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    iVar5 = *piVar4;
    *piVar4 = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      FUN_0019f30c(*(undefined4 *)(iVar2 + -4));
      piVar6 = (int *)*piVar3;
    }
    *piVar3 = 0;
    *(undefined4 *)(iVar2 + -4) = 0;
  }
  FUN_001a0d18(DAT_00009df4);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  iVar2 = FUN_0008b818(iVar2 + -0x14);
  FUN_001a07f0(iVar2 + -0x24);
  iVar2 = FUN_000701bc(iVar2 + -0x138);
  return iVar2 + -4;
}

