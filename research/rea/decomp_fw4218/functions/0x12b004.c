// rea decompile_all
// name: FUN_0012b004
// address: 0x12b004
// body: available
// range: 0x12b004-0x12b153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12b150 to 0x12a678 FUN_0012a678 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012b004(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_18;
  
  piVar2 = *(int **)(param_1 + 0x118);
  if (*(int **)(param_1 + 0x11c) == piVar2) {
    return;
  }
  while (*(int *)(*piVar2 + 8) != *(int *)(param_2 + 8)) {
    piVar2 = piVar2 + 1;
    if (*(int **)(param_1 + 0x11c) == piVar2) {
      return;
    }
  }
  iVar4 = *piVar2;
  if (iVar4 == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_2 + 8) + 0x6d) == '\0') {
    iVar3 = *(int *)(iVar4 + 8);
    cVar1 = *(char *)(iVar3 + 0xcc);
    iStack_18 = param_4;
    if ((cVar1 == '\x01') ||
       ((cVar1 != '\x02' &&
        (((cVar1 != '\x03' && (cVar1 == '\x04')) || (*(int *)(iVar3 + 0xd0) != 0xff)))))) {
      *(undefined4 *)(iVar3 + 0xd0) = 0xff;
      (**(code **)(*(int *)(iVar3 + 0xb0) + 8))();
    }
    FUN_0012a678(param_1,iVar4);
    return;
  }
  *(undefined1 *)(iVar4 + 0xd) = 0;
  *(undefined1 *)(iVar4 + 0xc) = 0;
  *(undefined1 *)(iVar4 + 0x14) = 0xff;
  iStack_18 = iVar4;
  FUN_002425b0(param_1 + 0x124,&iStack_18);
  if (*(char *)(*(int *)(param_1 + 0x140) + 8) == '\0') {
    iStack_18 = 0;
    piVar2 = *(int **)(*(int *)(param_1 + 0x140) + 4);
    (**(code **)(*piVar2 + 0x24))(piVar2,0,0,100);
    *(undefined1 *)(*(int *)(param_1 + 0x140) + 8) = 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x144) + 8) != '\0') {
    return;
  }
  iStack_18 = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0x144) + 4);
  (**(code **)(*piVar2 + 0x24))(piVar2,1,0,100);
  *(undefined1 *)(*(int *)(param_1 + 0x144) + 8) = 1;
  return;
}

