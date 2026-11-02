// rea decompile_all
// name: FUN_0002bccc
// address: 0x2bccc
// body: available
// range: 0x2bccc-0x2bd25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002bccc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0002bd50;
  if ((char)param_1[3] != '\x01') {
    FUN_00002898(s_Tried_to_write_negative_time__ab_0002bd28);
    return;
  }
  FUN_0003cd34(*DAT_0002bd50,3);
  FUN_0003cdd8(*puVar1,*param_1,param_1[2]);
  iVar2 = DAT_0002bd54;
  iVar3 = param_1[1];
  *(undefined4 *)(DAT_0002bd54 + 0x40) = 0;
  *(int *)(iVar2 + 0x44) = iVar3;
  iVar3 = *param_1;
  *(int *)(iVar2 + 0x2c) = iVar3;
  iVar3 = iVar3 + 2;
  FUN_0003d44c(iVar3);
  FUN_0003cc46(*puVar1,3,iVar3,0,0,0,DAT_0002bd58,0);
  return;
}

