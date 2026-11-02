// rea decompile_all
// name: FUN_001a80e0
// address: 0x1a80e0
// body: available
// range: 0x1a80e0-0x1a82f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a80e0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  
  uVar3 = FUN_00003318(param_2 + 1,0x3d);
  if ((uVar3 == 0) || ((uVar4 = FUN_00003318(param_2 + 1,0x3b), uVar4 != 0 && (uVar4 <= uVar3)))) {
    uVar3 = 0;
  }
  uVar4 = FUN_00003318(param_2 + 1,0x3b);
  do {
    uVar1 = uVar4;
    if (uVar1 == 0) {
      iVar5 = FUN_000034d0(param_2);
      uVar4 = iVar5 + param_2;
      if (uVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar5 = uVar4 - uVar3;
        if (iVar5 < 2) {
          return 0xfffffffb;
        }
        if ((code *)*DAT_001a82f4 == entry) {
          iVar6 = FUN_0019b388(iVar5);
        }
        else {
          iVar6 = (*(code *)*DAT_001a82f4)(iVar5);
        }
        if (iVar6 == 0) {
          return 0xfffffffc;
        }
        FUN_001a702a(iVar6,uVar3 + 1,iVar5 + -1);
        FUN_0016f8dc(iVar6);
        uVar4 = uVar3;
      }
      iVar5 = uVar4 - param_2;
      if (iVar5 < 2) {
        if (iVar6 != 0) {
          pcVar8 = (code *)*DAT_001a82f8;
joined_r0x001a816a:
          if (pcVar8 == entry) {
            FUN_0018a280(iVar6);
          }
          else {
            (*pcVar8)(iVar6);
          }
        }
        return 0xfffffffb;
      }
      if ((code *)*DAT_001a82f4 == entry) {
        iVar7 = FUN_0019b388(iVar5);
      }
      else {
        iVar7 = (*(code *)*DAT_001a82f4)(iVar5);
      }
      if (iVar7 != 0) {
        FUN_001a702a(iVar7,param_2 + 1,iVar5 + -1);
        FUN_0016f8dc(iVar7);
        iVar5 = FUN_001a7adc(param_1 + 0x14,iVar7,iVar6);
        puVar2 = DAT_001a82f8;
        if (iVar5 == 0) {
          return 0;
        }
        if ((code *)*DAT_001a82f8 == entry) {
          FUN_0018a280(iVar7);
        }
        else {
          (*(code *)*DAT_001a82f8)(iVar7);
        }
        if (iVar6 != 0) {
          if ((code *)*puVar2 == entry) {
            FUN_0018a280(iVar6);
            return 0xfffffffc;
          }
          (*(code *)*puVar2)(iVar6);
          return 0xfffffffc;
        }
        return 0xfffffffc;
      }
      if (iVar6 != 0) {
        pcVar8 = (code *)*DAT_001a82f8;
joined_r0x001a81c2:
        if (pcVar8 == entry) {
          FUN_0018a280(iVar6);
        }
        else {
          (*pcVar8)(iVar6);
        }
      }
      return 0xfffffffc;
    }
    if (uVar3 == 0) {
      iVar6 = 0;
      uVar3 = uVar1;
    }
    else {
      iVar5 = uVar1 - uVar3;
      if (iVar5 < 2) {
        return 0xfffffffb;
      }
      if ((code *)*DAT_001a82f4 == entry) {
        iVar6 = FUN_0019b388(iVar5);
      }
      else {
        iVar6 = (*(code *)*DAT_001a82f4)();
      }
      if (iVar6 == 0) {
        return 0xfffffffc;
      }
      FUN_001a702a(iVar6,uVar3 + 1,iVar5 + -1);
      FUN_0016f8dc(iVar6);
    }
    iVar5 = uVar3 - param_2;
    if (iVar5 < 2) {
      if (iVar6 == 0) {
        return 0xfffffffb;
      }
      pcVar8 = (code *)*DAT_001a82f8;
      goto joined_r0x001a816a;
    }
    if ((code *)*DAT_001a82f4 == entry) {
      iVar7 = FUN_0019b388(iVar5);
    }
    else {
      iVar7 = (*(code *)*DAT_001a82f4)(iVar5);
    }
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        return 0xfffffffc;
      }
      pcVar8 = (code *)*DAT_001a82f8;
      goto joined_r0x001a81c2;
    }
    FUN_001a702a(iVar7,param_2 + 1,iVar5 + -1);
    FUN_0016f8dc(iVar7);
    iVar5 = FUN_001a7adc(param_1 + 0x14,iVar7,iVar6);
    puVar2 = DAT_001a82f8;
    if (iVar5 != 0) {
      if ((code *)*DAT_001a82f8 == entry) {
        FUN_0018a280(iVar7);
      }
      else {
        (*(code *)*DAT_001a82f8)();
      }
      if (iVar6 == 0) {
        return 0xfffffffc;
      }
      pcVar8 = (code *)*puVar2;
      goto joined_r0x001a81c2;
    }
    uVar3 = FUN_00003318(uVar1 + 1,0x3d);
    if (((uVar3 != 0) && (uVar4 = FUN_00003318(uVar1 + 1,0x3b), uVar4 != 0)) && (uVar4 <= uVar3)) {
      uVar3 = 0;
    }
    uVar4 = FUN_00003318(uVar1 + 1,0x3b);
    param_2 = uVar1;
  } while( true );
}

