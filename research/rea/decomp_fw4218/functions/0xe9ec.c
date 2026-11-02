// rea decompile_all
// name: FUN_0000e9ec
// address: 0xe9ec
// body: available
// range: 0xe9ec-0xeb33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000eb18) */
/* WARNING: Removing unreachable block (ram,0x0000eb2c) */
/* WARNING: Removing unreachable block (ram,0x0000eafc) */
/* WARNING: Removing unreachable block (ram,0x0000eb00) */
/* WARNING: Removing unreachable block (ram,0x0000eb1c) */

void FUN_0000e9ec(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *local_38 [2];
  undefined1 auStack_30 [8];
  int *local_28;
  int *local_20 [2];
  
  iVar1 = param_1[2];
  FUN_001f00bc();
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (((iVar2 != 8) && (iVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar2 != 10)) &&
     ((char)param_1[0xcc] != '\0')) {
    FUN_000ca360(local_38,param_1[2]);
    if (local_38[0] != (int *)0x0) {
      puVar3 = (undefined4 *)FUN_000b11ec(auStack_30,param_1[2] + 0x13c);
      *puVar3 = DAT_0000f04c;
      uVar4 = (**(code **)(*local_28 + 0x2c))();
      (**(code **)(*local_38[0] + 0x3c))(local_38[0],param_1[0xcd],uVar4);
      FUN_000b1228(auStack_30);
      FUN_000ca360(local_20,param_1[2]);
      (**(code **)(*local_20[0] + 0x28))(local_20[0],param_1 + 0x16);
      FUN_00202008(local_20);
    }
    param_1[0xcd] = -1;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    FUN_00202008(local_38);
  }
  FUN_001f06d4(iVar1 + 0x118);
  return;
}

