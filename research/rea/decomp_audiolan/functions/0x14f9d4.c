// rea decompile_all
// name: FUN_0014f9d4
// address: 0x14f9d4
// body: available
// range: 0x14f9d4-0x14fa69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0014f9d4(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 local_18;
  
  if (param_2 != (byte *)0x0) {
    uVar2 = (uint)*param_2;
    iVar5 = 0;
    pbVar4 = param_2;
    if (uVar2 == 0) {
      return param_1;
    }
    do {
      if (uVar2 < 0x80) {
        iVar3 = 1;
      }
      else if (uVar2 < 0x800) {
        iVar3 = 2;
      }
      else {
        iVar3 = 3;
      }
      iVar5 = iVar5 + iVar3;
      uVar2 = (uint)pbVar4[1];
      pbVar4 = pbVar4 + 1;
    } while (uVar2 != 0);
    if (iVar5 == 0) {
      return param_1;
    }
    iVar5 = *(int *)(param_1 + 8) + iVar5;
    local_18 = param_4;
    if (*(char *)(param_1 + 0xc) != '\0') {
      uVar2 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        uVar2 = *(uint *)(*(int *)(param_1 + 4) + 4);
      }
      if (iVar5 + 1U <= uVar2) goto LAB_0014fa30;
    }
    iVar3 = FUN_000a5910(param_1 + 4);
    if (iVar3 != 0) {
LAB_0014fa30:
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 != 0) {
        iVar3 = iVar3 + 8;
      }
      puVar6 = (undefined1 *)(iVar3 + *(int *)(param_1 + 8));
      bVar1 = *param_2;
      while (bVar1 != 0) {
        uVar2 = (uint)local_18 >> 0x10;
        local_18 = CONCAT22((short)uVar2,(ushort)bVar1);
        iVar3 = FUN_000989c0(&local_18,puVar6);
        param_2 = param_2 + 1;
        puVar6 = puVar6 + iVar3;
        bVar1 = *param_2;
      }
      *puVar6 = 0;
      *(int *)(param_1 + 8) = iVar5;
      return param_1;
    }
  }
  return param_1;
}

