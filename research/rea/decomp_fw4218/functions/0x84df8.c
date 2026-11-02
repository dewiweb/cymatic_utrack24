// rea decompile_all
// name: FUN_00084df8
// address: 0x84df8
// body: available
// range: 0x84df8-0x84ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00084df8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [128];
  
  iVar1 = FUN_0022cefc(*DAT_00084edc + 0xc,&DAT_00084ed8,0xffffffff);
  FUN_0022d1b0(auStack_94,*DAT_00084edc + 0xc,iVar1 + 1,0xffffffff);
  if (*(int *)*DAT_00084edc < 1) {
    uVar2 = FUN_0022d168(auStack_94);
    FUN_000028cc(auStack_90,s______ls_00084ee8,uVar2);
  }
  else {
    uVar2 = FUN_0022d168(auStack_94);
    FUN_000028cc(auStack_90,s__d___ls_00084ee0,*(undefined4 *)*DAT_00084edc,uVar2);
  }
  FUN_00083654(param_1);
  uVar2 = FUN_0011eda0();
  FUN_00120534(uVar2,auStack_90);
  FUN_000856e0(param_1,0);
  FUN_0011eda0();
  FUN_00120610();
  FUN_00232190(auStack_94);
  return;
}

