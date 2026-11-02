// rea decompile_all
// name: FUN_000e5e50
// address: 0xe5e50
// body: available
// range: 0xe5e50-0xe6087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e5e50(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_3 == 0x16) {
    iVar1 = FUN_001a48f0(param_1,0xb,0);
  }
  else {
    iVar1 = param_1;
    if (param_3 < 0x17) {
      if (param_3 == 0x12) {
        uVar2 = FUN_001b5ab8(param_2);
        *DAT_000e6088 = uVar2;
        iVar1 = FUN_001a48f0(param_1,0x1e,0);
      }
      else if (param_3 < 0x13) {
        if (param_3 == 0) {
          iVar1 = FUN_001a48f0(param_1,0x31,0);
        }
        else if (param_3 == 1) {
          iVar1 = FUN_001b54c0(param_2);
          if (iVar1 == 1) {
            FUN_000f4e84();
            uVar2 = FUN_000f5150();
            FUN_000b800c(uVar2,0);
          }
          uVar3 = FUN_000bc47c(param_1 + 0x14);
          iVar1 = FUN_000bc068(param_1 + 0x14,uVar3 ^ 1);
        }
      }
      else if (param_3 == 0x13) {
        FUN_001b56ac(param_2,DAT_000e6090,DAT_000e608c);
        iVar1 = 0;
        if (*DAT_000e608c != 0) {
          *DAT_000e6088 = *DAT_000e6090;
          iVar1 = FUN_001a48f0(param_1,0x1e,0);
        }
      }
      else if (param_3 == 0x14) {
        FUN_001a48f0(param_1,0x36,0);
        FUN_001a48f0(param_1,0x34,0);
        iVar1 = FUN_001a48f0(param_1,0x33,0);
      }
    }
    else if (param_3 == 0x18) {
      iVar1 = FUN_001a48f0(param_1,0x21,0);
    }
    else if (param_3 == 0x20) {
      iVar1 = FUN_001a48f0(param_1,0xd,0);
    }
    else if (param_3 == 0x21) {
      FUN_000bdd08(param_1 + 0x14);
      iVar1 = FUN_001a48f0(param_1,0xf,0);
    }
    else if (param_3 == 0x2f) {
      iVar1 = FUN_001b5ac4(param_2);
      if ((iVar1 != 1) && (iVar1 = FUN_001b5940(param_2), iVar1 == 0)) {
        return 0;
      }
      iVar1 = FUN_001a48f0(param_1,0x38,0);
    }
  }
  return iVar1;
}

