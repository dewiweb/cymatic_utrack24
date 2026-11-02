// rea decompile_all
// name: FUN_0023890c
// address: 0x23890c
// body: available
// range: 0x23890c-0x2389af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023890c(undefined4 param_1,short *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  FUN_002386cc(&local_14,param_1);
  FUN_00238684(auStack_18,param_1);
  while (iVar3 = FUN_0022da3c(&local_14,auStack_18), iVar3 != 0) {
    FUN_00232d80(&local_1c,&local_14);
    FUN_00232d9c(&local_1c);
    psVar1 = (short *)FUN_0022da08(&local_14);
    if (*psVar1 == *param_2) {
      uVar2 = FUN_00232d80(auStack_24,&local_14);
      FUN_00238724(auStack_20,param_1,uVar2);
    }
    local_14 = local_1c;
  }
  return;
}

