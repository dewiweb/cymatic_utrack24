// rea decompile_all
// name: FUN_0015e1f8
// address: 0x15e1f8
// body: available
// range: 0x15e1f8-0x15e317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15e314 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015e1f8(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_001f00bc(param_1 + 3);
  uVar4 = 0xff;
  do {
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      for (uVar2 = *(uint *)(uVar3 + 0x18); uVar2 != 0; uVar2 = *(uint *)(uVar2 + 0x18)) {
        uVar3 = uVar2;
      }
      while (uVar3 != 0) {
        uVar2 = (uint)*(byte *)(uVar3 + 0x17);
        if (uVar2 == uVar4) {
          if (*(int *)(uVar3 + 8) != 0) {
            FUN_0015dcb8(*(undefined4 *)(uVar3 + 4),uVar3);
            *(undefined4 *)(uVar3 + 4) = 0;
          }
          *(undefined4 *)(uVar3 + 8) = 0;
          uVar3 = param_1[1];
          if (uVar3 == 0) break;
          for (uVar2 = *(uint *)(uVar3 + 0x18); uVar2 != 0; uVar2 = *(uint *)(uVar2 + 0x18)) {
            uVar3 = uVar2;
          }
        }
        else if (uVar3 == 0) {
          uVar3 = param_1[1];
          if (uVar3 != 0) {
            uVar2 = *(uint *)(uVar3 + 0x18);
          }
          if (uVar3 != 0 && uVar2 != 0) {
            do {
              uVar3 = uVar2;
              uVar2 = *(uint *)(uVar3 + 0x18);
            } while (*(uint *)(uVar3 + 0x18) != 0);
          }
        }
        else {
          pbVar1 = (byte *)(uVar3 + 0x20);
          uVar3 = *(uint *)(uVar3 + 0x1c);
          uVar2 = uVar3;
          if ((*pbVar1 & 0x80) == 0) {
            do {
              uVar3 = uVar2;
              if (uVar3 == 0) goto LAB_0015e2fc;
              uVar2 = *(uint *)(uVar3 + 0x18);
            } while (*(uint *)(uVar3 + 0x18) != 0);
          }
        }
      }
    }
LAB_0015e2fc:
    uVar4 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      param_1[1] = 0;
      *param_1 = 0;
      FUN_001f06d4(param_1 + 3);
      return;
    }
  } while( true );
}

