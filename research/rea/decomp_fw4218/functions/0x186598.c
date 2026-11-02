// rea decompile_all
// name: FUN_00186598
// address: 0x186598
// body: available
// range: 0x186598-0x18664b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00186598(int *param_1,undefined4 param_2,ushort param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint local_18;
  
  uVar1 = *(undefined4 *)(param_1[9] + 0x188);
  *(ushort *)(param_5 + 0x4c) = param_3 | 0x3704;
  *(undefined4 *)(param_5 + 0x48) = uVar1;
  iVar3 = 0;
  local_18 = param_4;
  FUN_00172810(param_5 + 0x1c,param_4);
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  local_18 = *(byte *)(param_1 + 0x1b) & 1;
  iVar2 = FUN_0014d6a8(param_5,uVar1,param_2,(*(byte *)(param_1 + 0x1b) & 3) >> 1);
  if (iVar2 != 0) {
    local_18 = *(uint *)(iVar2 + 0x18);
    iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,&local_18);
    if (iVar3 != 0) {
      FUN_001a2410(param_1[9] + 0x4a0,param_5,0);
    }
  }
  return iVar3;
}

