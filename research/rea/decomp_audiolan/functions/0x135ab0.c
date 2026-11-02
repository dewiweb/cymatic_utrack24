// rea decompile_all
// name: FUN_00135ab0
// address: 0x135ab0
// body: available
// range: 0x135ab0-0x135bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x135b6c to 0x10f1ec FUN_0010f1ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00135ab0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined2 local_24;
  
  iVar2 = *(int *)(param_2 + 8);
  while (iVar2 != 0) {
    (**(code **)(**(int **)(iVar2 + 0xc) + 0x7c))
              (auStack_30,*(int **)(iVar2 + 0xc),*(undefined2 *)(iVar2 + 0x10));
    iVar1 = FUN_0015e784(auStack_2c,param_3);
    if (iVar1 == 0) goto LAB_00135b70;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
    FUN_0010f210(auStack_30);
  }
  iVar2 = *(int *)(param_2 + 0x14);
  while( true ) {
    if (iVar2 == 0) {
      FUN_0010f1ec(param_1);
      return;
    }
    iVar1 = FUN_0015e784(iVar2 + 0xc,param_3);
    if (iVar1 == 0) break;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x14);
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  FUN_0010f1ec(auStack_30);
  FUN_0010e240(auStack_2c,param_3);
  local_24 = *(undefined2 *)(iVar2 + 0x16);
LAB_00135b70:
  FUN_0010f198(param_1,auStack_30);
  FUN_0010f210(auStack_30);
  return;
}

