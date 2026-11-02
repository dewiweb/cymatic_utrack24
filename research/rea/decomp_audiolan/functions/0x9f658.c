// rea decompile_all
// name: FUN_0009f658
// address: 0x9f658
// body: available
// range: 0x9f658-0x9f75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9f758 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0009f658(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  uint local_20;
  int iStack_1c;
  
  uVar1 = (**(code **)(*param_1 + 0xbc))(param_1);
  iVar2 = FUN_0004669c(uVar1,0);
  uVar1 = DAT_0009f75c;
  if (iVar2 == 0) {
    thunk_FUN_000028a4(DAT_0009f764);
    return;
  }
  piVar3 = *(int **)param_1[0x5a];
  if (piVar3 != (int *)param_1[0x5a]) {
    do {
      piVar3[8] = param_2;
      local_20 = piVar3[4];
      local_23 = 6;
      local_24 = 1;
      local_28 = uVar1;
      iStack_1c = param_2;
      (**(code **)(*param_1 + 0xcc))(param_1,&local_28);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[0x5a]);
  }
  uVar1 = DAT_0009f760;
  piVar3 = *(int **)param_1[0x60];
  if (piVar3 != (int *)param_1[0x60]) {
    do {
      piVar3[8] = param_2;
      local_20 = (uint)*(byte *)((int)piVar3 + 0xe);
      local_23 = 7;
      local_24 = 1;
      local_28 = uVar1;
      iStack_1c = param_2;
      (**(code **)(*param_1 + 0xcc))(param_1,&local_28);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[0x60]);
    return;
  }
  return;
}

