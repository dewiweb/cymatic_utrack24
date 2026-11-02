// rea decompile_all
// name: FUN_00185ae4
// address: 0x185ae4
// body: available
// range: 0x185ae4-0x185bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00185ae4(int param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6)

{
  int iVar1;
  int iVar2;
  
  if (((((param_2 == (char *)0x0) || (*param_2 == '\0')) || (param_3 == (char *)0x0)) ||
      (*param_3 == '\0')) ||
     (((param_4 == (char *)0x0 || (*param_4 == '\0')) &&
      ((param_5 == (char *)0x0 || (*param_5 == '\0')))))) {
    return 0xfffffffe;
  }
  if ((code *)*DAT_00185bd4 == entry) {
    iVar1 = FUN_0019b388(DAT_00185bd8);
  }
  else {
    iVar1 = (*(code *)*DAT_00185bd4)();
  }
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  FUN_000038a0(iVar1,0x104);
  FUN_000027f4(iVar1,0x32,&DAT_00185bdc,param_2);
  FUN_000027f4(iVar1 + 0x32,0x32,&DAT_00185bdc,param_3);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    if ((param_5 == (char *)0x0) || (*param_5 == '\0')) goto LAB_00185b8a;
    iVar2 = iVar1 + 0x96;
    param_4 = param_5;
  }
  else {
    iVar2 = iVar1 + 100;
  }
  FUN_000027f4(iVar2,0x32,&DAT_00185bdc,param_4);
LAB_00185b8a:
  if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
    FUN_000027f4(iVar1 + 200,0x32,&DAT_00185bdc,param_6);
  }
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0xb0) = iVar1;
    *(undefined4 *)(iVar1 + 0x100) = 0;
    *(undefined4 *)(iVar1 + 0xfc) = 0;
  }
  else {
    *(int *)(iVar1 + 0x100) = iVar2;
    *(undefined4 *)(iVar1 + 0xfc) = 0;
    *(int *)(iVar2 + 0xfc) = iVar1;
    *(int *)(param_1 + 0xb0) = iVar1;
  }
  return 0;
}

