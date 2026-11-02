// rea decompile_all
// name: FUN_0016acb0
// address: 0x16acb0
// body: available
// range: 0x16acb0-0x16ae0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16ada0 to 0x16209c FUN_0016209c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016acb0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0xc1c);
  iVar4 = piVar1[1];
  if (param_2 == 0) {
    if (iVar3 == 0) {
      return;
    }
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      piVar1 = (int *)(uint)*(byte *)(iVar2 + 0x34);
    }
    if (iVar2 == 0 || ((uint)piVar1 & 4) == 0) {
      FUN_0016209c(iVar3,0);
      FUN_00162320(*(undefined4 *)(param_1 + 0xc1c));
      FUN_0015ef58(*(undefined4 *)(iVar4 + 0x160),*(undefined4 *)(param_1 + 0xc1c));
      *(undefined4 *)(param_1 + 0xc1c) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0016add8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0x28))(*(undefined4 *)(param_1 + 0x10),1);
    return;
  }
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_001c6b14(0x244,DAT_0016ae0c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0016238c();
    if (iVar3 != 0) {
      iVar2 = FUN_001622a0(iVar3,*(undefined4 *)(iVar4 + 0x164),*(undefined4 *)(iVar4 + 0x168),
                           *(undefined4 *)(iVar4 + 0x174));
      if ((iVar2 == 0) && (iVar2 = FUN_0015ec0c(*(undefined4 *)(iVar4 + 0x160),iVar3), iVar2 == 0))
      {
        *(undefined4 *)(iVar3 + 0x234) = *(undefined4 *)(iVar4 + 0x160);
      }
      else {
        *(undefined4 *)(iVar3 + 0x234) = 0;
        FUN_0015ef58(*(undefined4 *)(iVar4 + 0x160),iVar3);
        iVar3 = 0;
      }
    }
  }
  *(int *)(param_1 + 0xc1c) = iVar3;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x16c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
  }
  if (*(int *)(param_1 + 0xc1c) != 0) {
    FUN_0016209c(*(int *)(param_1 + 0xc1c),1);
    return;
  }
  return;
}

