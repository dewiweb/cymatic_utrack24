// rea decompile_all
// name: FUN_0019e4b0
// address: 0x19e4b0
// body: available
// range: 0x19e4b0-0x19e6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0019e4b0(int *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  short local_30;
  short local_2e;
  int local_2c;
  short local_28;
  short local_24;
  
  uVar8 = 0;
  if ((*(byte *)((int)param_1 + 0xf6) & 0x10) == 0) {
    if (*param_3 < 0x13) {
      return 5;
    }
    pcVar3 = (char *)*param_2;
    pbVar4 = (byte *)(pcVar3 + 3);
    uVar2 = (uint)(byte)pcVar3[1] + (uint)(byte)pcVar3[2] * 0x100;
    if (*pcVar3 == -0x80) {
      if (*pbVar4 == 1) {
        cVar1 = pcVar3[6];
        FUN_001727f0(&local_30);
        local_30 = (ushort)(byte)pcVar3[7] + (ushort)(byte)pcVar3[8] * 0x100;
        local_2e = (ushort)(byte)pcVar3[9] + (ushort)(byte)pcVar3[10] * 0x100;
        local_2c = (uint)(byte)pcVar3[0xb] + (uint)(byte)pcVar3[0xc] * 0x100 +
                   (uint)(byte)pcVar3[0xd] * 0x10000 + (uint)(byte)pcVar3[0xe] * 0x1000000;
        local_28 = (ushort)(byte)pcVar3[0xf] + (ushort)(byte)pcVar3[0x10] * 0x100;
        local_24 = (ushort)(byte)pcVar3[0x11] + (ushort)(byte)pcVar3[0x12] * 0x100;
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x134))(param_1,&local_30);
          pbVar4 = (byte *)(pcVar3 + 0x13);
        }
        else if (cVar1 == '\x01') {
          (**(code **)(*param_1 + 0x8c))(param_1,&local_30);
          pbVar4 = (byte *)(pcVar3 + 0x13);
        }
        else {
          uVar8 = 0x11;
          pbVar4 = pbVar4 + uVar2;
        }
      }
      else if (*pbVar4 == 2) {
        uVar7 = (uint)(byte)pcVar3[6];
        pbVar4 = (byte *)(pcVar3 + 7);
        if (uVar2 < uVar7 * 0xc + 4) {
          return 5;
        }
        uVar2 = 0;
        if (uVar7 != 0) {
          do {
            FUN_001727f0(&local_30);
            local_30 = (ushort)*pbVar4 + (ushort)pbVar4[1] * 0x100;
            local_2e = (ushort)pbVar4[2] + (ushort)pbVar4[3] * 0x100;
            local_2c = (uint)pbVar4[4] + (uint)pbVar4[5] * 0x100 + (uint)pbVar4[6] * 0x10000 +
                       (uint)pbVar4[7] * 0x1000000;
            pbVar5 = pbVar4 + 10;
            local_28 = (ushort)pbVar4[8] + (ushort)pbVar4[9] * 0x100;
            pbVar6 = pbVar4 + 0xb;
            pbVar4 = pbVar4 + 0xc;
            local_24 = (ushort)*pbVar5 + (ushort)*pbVar6 * 0x100;
            (**(code **)(*param_1 + 0x134))(param_1,&local_30);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar7);
        }
      }
      else {
        uVar8 = 0xf;
        pbVar4 = pbVar4 + uVar2;
      }
    }
    *param_3 = *param_3 - ((int)pbVar4 - *param_2);
    *param_2 = (int)pbVar4;
  }
  return uVar8;
}

