// rea decompile_all
// name: FUN_00152e20
// address: 0x152e20
// body: available
// range: 0x152e20-0x152f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x152f54 to 0x172128 FUN_00172128 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00152e20(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  if (param_3 - (int)*param_2 < 0x14) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)*param_2;
  uVar3 = *param_2;
  *param_2 = uVar3 + 4;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(uVar3 + 4);
  uVar3 = *param_2;
  pbVar4 = (byte *)(uVar3 + 2);
  *param_2 = (uint)pbVar4;
  bVar1 = *pbVar4;
  *param_2 = uVar3 + 4;
  *(byte *)(param_1 + 0x30) = bVar1 ^ 0x5f;
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)*param_2;
  *param_2 = *param_2 + 2;
  *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) ^ 0xe519;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)*param_2;
  *param_2 = *param_2 + 2;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) ^ 0xa588;
  cVar2 = *(char *)*param_2;
  *param_2 = (uint)((char *)*param_2 + 1);
  *(bool *)(param_1 + 0x36) = cVar2 != -0x41;
  *param_2 = *param_2 + 1;
  iVar5 = FUN_00172128(param_1 + 0x18,param_2);
  if (iVar5 != 0) {
    *param_2 = *param_2 + 1 & 0xfffffffe;
    iVar5 = FUN_00172128(param_1 + 0x20,param_2,param_3);
    if (iVar5 != 0) {
      *param_2 = *param_2 + 1 & 0xfffffffe;
      FUN_00172128(param_1 + 0x28,param_2,param_3);
      return;
    }
    return;
  }
  return;
}

