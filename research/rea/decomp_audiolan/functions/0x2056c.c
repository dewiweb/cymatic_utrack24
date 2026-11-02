// rea decompile_all
// name: FUN_0002056c
// address: 0x2056c
// body: available
// range: 0x2056c-0x206dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0002056c(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar6 = (uint)*param_1;
  pbVar7 = param_1 + 0x100;
  if ((uVar6 != 0) && (uVar6 < 0x40)) {
    if (uVar6 + 1 != 0) {
      pbVar3 = param_2 + -1;
      pbVar5 = param_1 + -1;
      if ((uVar6 & 1) != 1) {
        *param_2 = *param_1;
        pbVar3 = param_2;
        pbVar5 = param_1;
      }
      for (iVar4 = (int)(uVar6 + 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 2;
        pbVar3[1] = *pbVar1;
        pbVar3 = pbVar3 + 2;
        *pbVar3 = *pbVar5;
      }
      param_1 = param_1 + uVar6 + 1;
    }
    uVar6 = (uint)*param_1;
    if (((uVar6 != 0) && (uVar6 < 0x40)) && (param_1[1] == 0x5f)) {
      if (uVar6 + 1 != 0) {
        pbVar3 = param_1 + -1;
        pbVar5 = param_3 + -1;
        if ((uVar6 & 1) != 1) {
          *param_3 = *param_1;
          pbVar3 = param_1;
          pbVar5 = param_3;
        }
        for (iVar4 = (int)(uVar6 + 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 2;
          pbVar5[1] = *pbVar1;
          pbVar5 = pbVar5 + 2;
          *pbVar5 = *pbVar3;
        }
        param_1 = param_1 + uVar6 + 1;
        param_3 = param_3 + uVar6 + 1;
      }
      if (((((*param_1 != 0) && (*param_1 == 4)) && (param_1[1] == 0x5f)) &&
          ((((param_1[2] | 0x20) == 0x75 && ((param_1[3] | 0x20) == 100)) ||
           (((param_1[2] | 0x20) == 0x74 && ((param_1[3] | 0x20) == 99)))))) &&
         ((param_1[4] | 0x20) == 0x70)) {
        *param_3 = *param_1;
        iVar4 = 2;
        pbVar3 = param_1;
        pbVar5 = param_3;
        do {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 2;
          pbVar5[1] = *pbVar1;
          pbVar5 = pbVar5 + 2;
          iVar4 = iVar4 + -1;
          *pbVar5 = *pbVar3;
        } while (iVar4 != 0);
        param_1 = param_1 + 5;
        param_3[5] = 0;
        bVar2 = *param_1;
        while( true ) {
          uVar6 = (uint)bVar2;
          if (uVar6 == 0) {
            *param_4 = 0;
            return 1;
          }
          if ((0x3f < uVar6) || (pbVar7 <= param_1 + uVar6 + 2)) break;
          if (uVar6 + 1 != 0) {
            pbVar3 = param_1 + -1;
            pbVar5 = param_4 + -1;
            if ((uVar6 & 1) != 1) {
              *param_4 = *param_1;
              pbVar3 = param_1;
              pbVar5 = param_4;
            }
            for (iVar4 = (int)(uVar6 + 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
              pbVar1 = pbVar3 + 1;
              pbVar3 = pbVar3 + 2;
              pbVar5[1] = *pbVar1;
              pbVar5 = pbVar5 + 2;
              *pbVar5 = *pbVar3;
            }
            param_1 = param_1 + uVar6 + 1;
            param_4 = param_4 + uVar6 + 1;
          }
          bVar2 = *param_1;
        }
      }
    }
  }
  return 0;
}

