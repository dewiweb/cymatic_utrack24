// rea decompile_all
// name: FUN_001b7d28
// address: 0x1b7d28
// body: available
// range: 0x1b7d28-0x1b7ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b7d28(int *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_40;
  byte *local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  int *piStack_20;
  uint uStack_1c;
  undefined4 local_18;
  
  piStack_20 = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  if (param_1[3] == 0) {
    FUN_00002898(s_ERROR__ResourceFontTable__getCha_001b7de0);
  }
  else if ((*(ushort *)((int)param_1 + 0x1a) <= param_2) && (param_2 <= *(ushort *)(param_1 + 7))) {
    pcVar5 = (char *)(param_1[3] + 9);
    for (iVar6 = 0; iVar6 < (int)(uint)*(ushort *)(param_1 + 5); iVar6 = iVar6 + 1) {
      iVar2 = FUN_0012d9a4(pcVar5 + 1);
      if (((*pcVar5 == '\a') &&
          (uVar4 = (uint)(byte)pcVar5[5] * 0x100 + (uint)(byte)pcVar5[6], uVar4 <= param_2)) &&
         (param_2 <= (uint)(byte)pcVar5[7] * 0x100 + (uint)(byte)pcVar5[8])) {
        uVar1 = *(ushort *)((int)param_1 + 0x16);
        pbVar3 = (byte *)(pcVar5 + 9);
        for (iVar6 = 0; iVar6 < (int)(param_2 - uVar4); iVar6 = iVar6 + 1) {
          pbVar3 = pbVar3 + (((int)(uVar1 - 1) >> 3) + 1) * (uint)*pbVar3 + 1;
        }
        local_24 = (uint)*pbVar3;
        local_28 = (**(code **)(*param_1 + 0x14))(param_1);
        local_34 = (uint)*(ushort *)(param_1 + 6);
        local_2c = local_24;
        local_38 = 0;
        local_40 = param_2;
        local_3c = pbVar3 + 1;
        local_30 = (uint)uVar1;
        FUN_00003b88(local_18,&local_40,0x1c);
        return 1;
      }
      pcVar5 = pcVar5 + iVar2 + 5;
    }
  }
  return 0;
}

