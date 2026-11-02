// rea decompile_all
// name: FUN_00071014
// address: 0x71014
// body: available
// range: 0x71014-0x710eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x710cc to 0x1eecc8 FUN_001eecc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00071014(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *local_10;
  
  *param_1 = DAT_000710ec;
  local_10 = param_4;
  FUN_00071c88(param_1);
  while (iVar2 = thunk_EXT_FUN_004002f0(param_1 + 0x34,&local_10,0), iVar2 == 0) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 4))();
    }
  }
  *param_1 = DAT_000710f0;
  FUN_00071c88(param_1);
  iVar2 = FUN_001ad838(param_1 + 0x30);
  piVar3 = (int *)(iVar2 + -0xc0);
  *piVar3 = DAT_000710f4;
  cVar1 = *(char *)(iVar2 + -4);
  if ((cVar1 != '\x06' && cVar1 != '\x05') && cVar1 != '\0') {
    *(undefined1 *)(iVar2 + -4) = 5;
    FUN_001d0518(iVar2 + -0xbc);
    (**(code **)(*piVar3 + 0x18))(piVar3);
    *(undefined1 *)(iVar2 + -4) = 6;
  }
  if (*(int *)(iVar2 + -0xbc) != 0) {
    FUN_001eecc8(*(undefined4 *)(iVar2 + -0xb0));
    FUN_001cfa80(iVar2 + -0xbc);
  }
  FUN_001eecc8(piVar3);
  return;
}

