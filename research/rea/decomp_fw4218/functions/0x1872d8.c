// rea decompile_all
// name: FUN_001872d8
// address: 0x1872d8
// body: available
// range: 0x1872d8-0x187347 inclusive
// range: 0x18bcac-0x18bcd7 inclusive
// range: 0x18bd48-0x18be03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x187318 to 0x18be04 FUN_0018be04 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x187324 to 0x18bce4 FUN_0018bce4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x187344 to 0x18cd64 FUN_0018cd64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001872d8(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 == 0x204) {
    uVar2 = FUN_0018cd64(param_1 + 0x90,param_3);
    return uVar2;
  }
  if (param_2 < 0x205) {
    if (param_2 == 0x24) {
      uVar2 = FUN_0018be04(param_1 + 0x90);
      return uVar2;
    }
    if (param_2 == 0x41) {
      uVar2 = *(uint *)(param_1 + 0x94);
      if (*(uint *)(param_1 + 0x94) == 0) {
        return 0;
      }
      do {
        uVar5 = uVar2;
        if ((*(byte *)(uVar5 + 0x10c) & 0x80) != 0) {
          return uVar5;
        }
        uVar2 = *(uint *)(uVar5 + 0x108);
      } while (*(uint *)(uVar5 + 0x108) != 0);
      return uVar5;
    }
  }
  else {
    if (param_2 == 0x225) {
      uVar2 = FUN_0018bce4(param_1 + 0x90,param_3);
      return uVar2;
    }
    if (param_2 == 0x22a) {
      uVar5 = *(uint *)(param_1 + 0x94);
      uVar2 = uVar5;
      if (uVar5 != 0) {
        do {
          uVar3 = (uint)*(ushort *)(uVar2 + 0x90);
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
            uVar3 = *(uint *)(uVar2 + 0x104);
            if (uVar3 == 0) {
              uVar3 = uVar5;
              if (uVar5 != uVar2) {
                uVar3 = (uint)*(ushort *)(uVar2 + 0x90);
              }
              uVar4 = 0;
              if (uVar5 != uVar2) {
                do {
                  bVar6 = *(ushort *)(uVar5 + 0x90) < uVar3;
                  if (bVar6) {
                    uVar4 = uVar5;
                  }
                  uVar5 = *(uint *)(uVar5 + (uint)bVar6 * 4 + 0x104);
                } while (uVar5 != uVar2);
                return uVar4;
              }
              return 0;
            }
            do {
              if ((*(byte *)(uVar3 + 0x10c) & 0x80) != 0) {
                return uVar3;
              }
              uVar3 = *(uint *)(uVar3 + 0x108);
            } while (uVar3 != 0);
            return 0;
          }
          uVar4 = *(uint *)(uVar2 + uVar3 * 4 + 0x104);
          if (uVar4 == 0) {
            return 0;
          }
          bVar1 = 0;
          if (uVar3 != 0) {
            bVar1 = *(byte *)(uVar2 + 0x10c);
          }
          uVar2 = uVar4;
        } while (uVar3 == 0 || (bVar1 & 0x80) == 0);
      }
      return 0;
    }
  }
  return 0;
}

