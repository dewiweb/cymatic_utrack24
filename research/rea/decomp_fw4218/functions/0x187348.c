// rea decompile_all
// name: FUN_00187348
// address: 0x187348
// body: available
// range: 0x187348-0x1873bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18738c to 0x18db88 FUN_0018db88 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1873b8 to 0x18e874 FUN_0018e874 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00187348(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 == DAT_001873bc) {
    uVar2 = FUN_0018e874(param_1 + 0x80,param_3);
    return uVar2;
  }
  if (param_2 < DAT_001873bc) {
    if (param_2 == 0x26) {
      uVar2 = FUN_0018db88(param_1 + 0x80);
      return uVar2;
    }
    if (param_2 == 0x42) {
      uVar2 = *(uint *)(param_1 + 0x84);
      if (*(uint *)(param_1 + 0x84) == 0) {
        return 0;
      }
      do {
        uVar5 = uVar2;
        if ((*(byte *)(uVar5 + 0x100) & 0x80) != 0) {
          return uVar5;
        }
        uVar2 = *(uint *)(uVar5 + 0xfc);
      } while (*(uint *)(uVar5 + 0xfc) != 0);
      return uVar5;
    }
  }
  else {
    if (param_2 - DAT_001873bc == 0x24) {
      uVar2 = *(uint *)(param_1 + 0x84);
      if (*(uint *)(param_1 + 0x84) != 0) {
        do {
          uVar5 = (uint)*(ushort *)(uVar2 + 0xf2);
          bVar7 = param_3 < uVar5;
          bVar6 = param_3 == uVar5;
          if (!bVar7 && !bVar6) {
            uVar5 = 1;
          }
          if (bVar7) {
            uVar5 = 0;
          }
          if (bVar6) {
            if (uVar2 == 0) {
              return 0;
            }
            uVar2 = FUN_0022c124();
            return uVar2;
          }
          uVar3 = *(uint *)(uVar2 + uVar5 * 4 + 0xf8);
          if (uVar3 == 0) {
            return 0;
          }
          if (uVar5 != 0) {
            uVar2 = (uint)*(byte *)(uVar2 + 0x100);
          }
          uVar4 = uVar2 & 0x80;
          uVar2 = uVar3;
        } while (uVar5 == 0 || uVar4 == 0);
      }
      return 0;
    }
    if (param_2 - DAT_001873bc == 0x28) {
      uVar5 = *(uint *)(param_1 + 0x84);
      uVar2 = uVar5;
      if (uVar5 != 0) {
        do {
          uVar3 = (uint)*(ushort *)(uVar2 + 0xf2);
          bVar7 = param_3 < uVar3;
          bVar6 = param_3 == uVar3;
          if (!bVar7 && !bVar6) {
            uVar3 = 1;
          }
          if (bVar7) {
            uVar3 = 0;
          }
          if (bVar6) {
            if (uVar2 == 0) {
              return 0;
            }
            uVar3 = *(uint *)(uVar2 + 0xf8);
            if (uVar3 == 0) {
              uVar3 = uVar5;
              if (uVar5 != uVar2) {
                uVar3 = (uint)*(ushort *)(uVar2 + 0xf2);
              }
              uVar4 = 0;
              if (uVar5 != uVar2) {
                do {
                  bVar6 = *(ushort *)(uVar5 + 0xf2) < uVar3;
                  if (bVar6) {
                    uVar4 = uVar5;
                  }
                  uVar5 = *(uint *)(uVar5 + (uint)bVar6 * 4 + 0xf8);
                } while (uVar5 != uVar2);
                return uVar4;
              }
              return 0;
            }
            do {
              if ((*(byte *)(uVar3 + 0x100) & 0x80) != 0) {
                return uVar3;
              }
              uVar3 = *(uint *)(uVar3 + 0xfc);
            } while (uVar3 != 0);
            return 0;
          }
          uVar4 = *(uint *)(uVar2 + uVar3 * 4 + 0xf8);
          if (uVar4 == 0) {
            return 0;
          }
          bVar1 = 0;
          if (uVar3 != 0) {
            bVar1 = *(byte *)(uVar2 + 0x100);
          }
          uVar2 = uVar4;
        } while (uVar3 == 0 || (bVar1 & 0x80) == 0);
      }
      return 0;
    }
  }
  return 0;
}

