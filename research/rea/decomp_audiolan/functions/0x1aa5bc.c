// rea decompile_all
// name: FUN_001aa5bc
// address: 0x1aa5bc
// body: available
// range: 0x1aa5bc-0x1aa797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_001aa5bc(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *local_38;
  byte *local_20;
  
  if (param_2 == (byte *)0x0) {
    FUN_00024642(0,s_putDomainNameAsLabels____s_ptr_i_001aa798,param_4);
    return (byte *)0x0;
  }
  local_38 = param_4;
  local_20 = param_2;
  if (*param_4 == 0) {
    if (param_3 <= param_2) {
      return (byte *)0x0;
    }
  }
  else {
    do {
      bVar1 = *local_38;
      uVar2 = (uint)bVar1;
      if (0x3f < uVar2) {
        FUN_00024642(0,s_Malformed_domain_name____s__labe_001aa7c0,param_4);
        return (byte *)0x0;
      }
      if (param_4 + 0x100 <= local_38 + uVar2 + 1) {
        FUN_00024642(0,s_Malformed_domain_name____s__more_001aa7f8,param_4);
        return (byte *)0x0;
      }
      if ((param_1 != (byte *)0x0) && (pbVar9 = param_2 + (-1 - uVar2), uVar2 != 0)) {
        for (; param_1 <= pbVar9; pbVar9 = pbVar9 + -1) {
          if (((*pbVar9 == uVar2) && (pbVar9[1] == local_38[1])) &&
             (pbVar7 = pbVar9, pbVar5 = local_38, pbVar9 + uVar2 < param_2)) {
            do {
              uVar6 = (uint)*pbVar5;
              uVar4 = 0;
              uVar8 = ~uVar6 & 1;
              if (uVar8 != 0) {
                do {
                  if (pbVar7[uVar4] != pbVar5[uVar4]) goto LAB_001aa6a8;
                  uVar4 = uVar4 + 1;
                } while ((int)uVar4 < (int)uVar8);
              }
              uVar4 = uVar8;
              if (uVar8 < uVar6 + 1) {
                do {
                  if (pbVar7[uVar4] != pbVar5[uVar4]) break;
                  if (pbVar7[uVar4 + 1] != pbVar5[uVar4 + 1]) {
                    uVar4 = uVar4 + 1;
                    break;
                  }
                  uVar4 = uVar4 + 2;
                } while ((int)uVar4 < (int)(uVar6 + 1));
              }
LAB_001aa6a8:
              if ((int)uVar4 <= (int)uVar6) break;
              pbVar5 = pbVar5 + uVar6 + 1;
              pbVar3 = pbVar7 + uVar6 + 1;
              if (*pbVar5 == 0) {
                if (*pbVar3 == 0) {
                  if (pbVar9 == (byte *)0x0) goto LAB_001aa728;
                  uVar2 = (int)pbVar9 - (int)param_1 & 0xffff;
                  if (param_3 < local_20 + 2) {
                    return (byte *)0x0;
                  }
                  *local_20 = (byte)(uVar2 >> 8) | 0xc0;
                  local_20 = local_20 + 1;
                  *local_20 = (byte)uVar2;
                  goto LAB_001aa722;
                }
                break;
              }
              uVar4 = (uint)*pbVar3;
              pbVar7 = pbVar3;
              if (((0x3f < uVar4) &&
                  (((uVar4 < 0xc0 || (param_2 <= pbVar3 + 1)) ||
                   ((pbVar7 = param_1 + (uint)pbVar3[1] + (uVar4 & 0x3f) * 0x100, pbVar3 < pbVar7 ||
                    (0x3f < *pbVar7)))))) || (param_2 <= pbVar7 + *pbVar5)) break;
            } while( true );
          }
        }
      }
LAB_001aa728:
      pbVar9 = local_38 + 1;
      if (param_3 <= local_20 + uVar2 + 1) {
        return (byte *)0x0;
      }
      *local_20 = bVar1;
      pbVar7 = local_20 + 1;
      if (uVar2 != 0) {
        if ((bVar1 & 1) != 0) {
          *pbVar7 = *pbVar9;
          local_38 = pbVar9;
          local_20 = pbVar7;
        }
        for (uVar4 = (uint)(bVar1 >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar5 = local_38 + 1;
          local_38 = local_38 + 2;
          local_20[1] = *pbVar5;
          local_20 = local_20 + 2;
          *local_20 = *local_38;
        }
        pbVar9 = pbVar9 + uVar2;
        pbVar7 = pbVar7 + uVar2;
      }
      local_20 = pbVar7;
      local_38 = pbVar9;
    } while (*local_38 != 0);
  }
  *local_20 = 0;
LAB_001aa722:
  return local_20 + 1;
}

