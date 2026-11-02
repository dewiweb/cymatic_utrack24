// rea decompile_all
// name: FUN_000b5300
// address: 0xb5300
// body: available
// range: 0xb5300-0xb542b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000b5300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [20];
  
  FUN_00064a34(auStack_38);
  piVar1 = (int *)FUN_0022bc90(param_1 + 0xc4);
  (**(code **)(*piVar1 + 0x58))(piVar1,auStack_38);
  FUN_000d7ae4(auStack_3c,0,0,0,0);
  if (param_5 == 0) {
    FUN_000d7ad4(auStack_3c,2);
    FUN_000d7adc(auStack_3c,1);
  }
  else {
    FUN_000d7ad4(auStack_3c,1);
    FUN_000d7adc(auStack_3c,1);
  }
  piVar1 = (int *)FUN_0022bc90(param_1 + 0xc4);
  iVar2 = (**(code **)(*piVar1 + 0x28))
                    (piVar1,auStack_38,param_2,param_3,param_4,auStack_3c,0,param_1 + 0xd0,
                     0xffffffff,0xffffffff);
  if (iVar2 == 0) {
    pcVar3 = s_FAILED_000b5434;
  }
  else {
    pcVar3 = s_SUCCESS_000b542c;
  }
  FUN_00002898(s_ScrollText____s__Animation_handl_000b543c,pcVar3,*(undefined4 *)(param_1 + 0xd0));
  FUN_000d7afc(auStack_3c);
  FUN_00064a58(auStack_38);
  return;
}

