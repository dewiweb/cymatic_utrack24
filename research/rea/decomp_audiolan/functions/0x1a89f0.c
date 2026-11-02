// rea decompile_all
// name: FUN_001a89f0
// address: 0x1a89f0
// body: available
// range: 0x1a89f0-0x1a8c59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a89f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_20;
  
  if (param_2 == 0) {
    return -2;
  }
  iVar1 = FUN_00003318(param_2,0x2f);
  if (((iVar1 != 0) && (iVar2 = FUN_00003318(iVar1 + 1,0x2f), iVar2 != 0)) &&
     (iVar7 = iVar2 - iVar1, 1 < iVar7)) {
    if ((code *)*DAT_001a8c5c == entry) {
      iVar3 = FUN_0019b388(iVar7);
    }
    else {
      iVar3 = (*(code *)*DAT_001a8c5c)(iVar7);
    }
    *param_1 = iVar3;
    if (iVar3 == 0) {
      return -4;
    }
    FUN_001a3128(iVar3,iVar1 + 1,iVar7 + -1);
    iVar1 = FUN_00003318(iVar2 + 1,0x20);
    if (iVar1 != 0) {
      if (iVar1 == iVar2 + 1) {
        iVar7 = FUN_00003570(iVar1,&DAT_001a8c60,1);
        while (iVar7 == 0) {
          iVar1 = iVar1 + 1;
          iVar7 = FUN_000034d0(iVar1);
          if (iVar7 == 1) {
            return -5;
          }
          iVar7 = FUN_00003570(iVar1,&DAT_001a8c60,1);
        }
        iVar1 = FUN_00003318(iVar1 + 1,0x20);
        if (iVar1 == 0) {
          return -5;
        }
      }
      iVar7 = iVar1 - iVar2;
      if (1 < iVar7) {
        if ((code *)*DAT_001a8c5c == entry) {
          iVar3 = FUN_0019b388(iVar7);
        }
        else {
          iVar3 = (*(code *)*DAT_001a8c5c)(iVar7);
        }
        param_1[1] = iVar3;
        if (iVar3 != 0) {
          FUN_001a3128(iVar3,iVar2 + 1,iVar7 + -1);
          iVar2 = FUN_00003318(iVar1,0x28);
          if (iVar2 == 0) {
            iVar2 = FUN_000034d0(iVar1);
            uVar8 = iVar2 + iVar1;
          }
          else {
            iVar7 = FUN_00003318(iVar1,0x29);
            if (iVar7 == 0) {
              return -5;
            }
            iVar7 = iVar7 - iVar2;
            if (iVar7 < 2) {
              return -5;
            }
            if ((code *)*DAT_001a8c5c == entry) {
              iVar3 = FUN_0019b388(iVar7);
            }
            else {
              iVar3 = (*(code *)*DAT_001a8c5c)(iVar7);
            }
            param_1[4] = iVar3;
            if (iVar3 == 0) {
              return -4;
            }
            FUN_001a702a(iVar3,iVar2 + 1,iVar7 + -1);
            uVar8 = iVar2 - 1;
          }
          uVar4 = FUN_00003318(iVar1,0x3b);
          uVar6 = uVar8;
          if ((uVar4 != 0) && (uVar6 = uVar4, uVar4 < uVar8)) {
            iVar2 = uVar8 - uVar4;
            if (iVar2 + 1 < 2) {
              return -5;
            }
            if ((code *)*DAT_001a8c5c == entry) {
              iVar7 = FUN_0019b388(iVar2 + 1);
            }
            else {
              iVar7 = (*(code *)*DAT_001a8c5c)(iVar2 + 1);
            }
            if (iVar7 == 0) {
              return -4;
            }
            FUN_001a702a(iVar7,uVar4,iVar2);
            iVar2 = FUN_0016e3b0(param_1 + 5,iVar7);
            pcVar5 = (code *)*DAT_001a8c64;
            if (iVar2 != 0) {
              if (pcVar5 == entry) {
                FUN_0018a280(iVar7);
              }
              else {
                (*pcVar5)();
              }
              return iVar2;
            }
            if (pcVar5 == entry) {
              FUN_0018a280(iVar7);
            }
            else {
              (*pcVar5)();
            }
          }
          local_20 = FUN_00003318(iVar1,0x5b);
          if ((local_20 == 0) || (uVar6 <= local_20)) {
            uVar8 = FUN_00003318(iVar1,0x3a);
            local_20 = 0;
          }
          else {
            uVar8 = FUN_00003318(local_20,0x5d);
            if (uVar8 == 0) {
              return -5;
            }
            if (uVar6 < uVar8) {
              return -5;
            }
            iVar2 = uVar8 - local_20;
            if (iVar2 < 2) {
              return -5;
            }
            if ((code *)*DAT_001a8c5c == entry) {
              iVar7 = FUN_0019b388(iVar2);
            }
            else {
              iVar7 = (*(code *)*DAT_001a8c5c)();
            }
            param_1[2] = iVar7;
            if (iVar7 == 0) {
              return -4;
            }
            FUN_001a3128(iVar7,local_20 + 1,iVar2 + -1);
            uVar8 = FUN_00003318(uVar8,0x3a);
          }
          if ((uVar8 != 0) && (uVar8 < uVar6)) {
            iVar2 = uVar6 - uVar8;
            if (iVar2 < 2) {
              return -5;
            }
            if ((code *)*DAT_001a8c5c == entry) {
              iVar7 = FUN_0019b388(iVar2);
            }
            else {
              iVar7 = (*(code *)*DAT_001a8c5c)(iVar2);
            }
            param_1[3] = iVar7;
            if (iVar7 == 0) {
              return -4;
            }
            FUN_001a3128(iVar7,uVar8 + 1,iVar2 + -1);
            uVar6 = uVar8;
          }
          if (local_20 != 0) {
            return 0;
          }
          iVar2 = uVar6 - iVar1;
          if (iVar2 < 2) {
            return -5;
          }
          if ((code *)*DAT_001a8c5c == entry) {
            iVar7 = FUN_0019b388(iVar2);
          }
          else {
            iVar7 = (*(code *)*DAT_001a8c5c)(iVar2);
          }
          param_1[2] = iVar7;
          if (iVar7 != 0) {
            FUN_001a3128(iVar7,iVar1 + 1,iVar2 + -1);
            return 0;
          }
        }
        return -4;
      }
    }
  }
  return -5;
}

