// rea decompile_all
// name: FUN_001a4134
// address: 0x1a4134
// body: available
// range: 0x1a4134-0x1a42b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a4134(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return -2;
  }
  uVar1 = FUN_00003318(param_2,0x22,param_3,param_4,param_4);
  uVar2 = FUN_00003318(param_2,0x3c);
  if ((uVar2 != 0) && (iVar3 = FUN_00003318(uVar2,0x3e), iVar3 == 0)) {
    return -5;
  }
  if ((uVar1 == 0) || (uVar2 < uVar1)) {
    if (uVar2 != 0) {
      if (param_2 != uVar2) {
        iVar3 = uVar2 - param_2;
        if (iVar3 + 1 < 2) {
          return -5;
        }
        if ((code *)*DAT_001a42b8 == entry) {
          iVar4 = FUN_0019b388(iVar3 + 1);
        }
        else {
          iVar4 = (*(code *)*DAT_001a42b8)(iVar3 + 1);
        }
        *param_1 = iVar4;
        if (iVar4 == 0) {
          return -4;
        }
        FUN_001a3128(iVar4,param_2,iVar3);
      }
      param_2 = uVar2 + 1;
    }
  }
  else if (uVar2 != 0) {
    uVar1 = FUN_0016f10c(param_2);
    if (uVar1 == 0) {
      return -5;
    }
    iVar3 = FUN_0016f10c(uVar1 + 1);
    if (iVar3 == 0) {
      return -5;
    }
    if (uVar2 < uVar1) {
      return -5;
    }
    iVar4 = iVar3 - uVar1;
    if (1 < iVar4 + 2) {
      if ((code *)*DAT_001a42b8 == entry) {
        iVar5 = FUN_0019b388(iVar4 + 2);
      }
      else {
        iVar5 = (*(code *)*DAT_001a42b8)(iVar4 + 2);
      }
      *param_1 = iVar5;
      if (iVar5 == 0) {
        return -4;
      }
      FUN_001a702a(iVar5,uVar1,iVar4 + 1);
    }
    iVar3 = FUN_00003318(iVar3 + 1,0x3c);
    if (iVar3 == 0) {
      return -5;
    }
    param_2 = iVar3 + 1;
  }
  iVar3 = FUN_00003318(param_2,0x3e);
  if (iVar3 == 0) {
    iVar3 = FUN_00003318(param_2,0x40);
    if (iVar3 == 0) {
      iVar4 = FUN_00003318(param_2,0x3b);
    }
    else {
      iVar4 = FUN_00003318(iVar3,0x3b);
    }
    if (iVar4 == 0) {
      iVar3 = FUN_000034d0(param_2);
      iVar3 = iVar3 + param_2;
      goto LAB_001a4224;
    }
    iVar3 = iVar4 + -1;
  }
  else {
    iVar4 = FUN_00003318(iVar3,0x3b);
    iVar3 = iVar3 + -1;
    if (iVar4 == 0) goto LAB_001a4224;
  }
  iVar4 = FUN_0016e3b0(param_1 + 2,iVar4);
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_001a4224:
  iVar3 = iVar3 - param_2;
  if (iVar3 + 2 < 7) {
    return -5;
  }
  iVar4 = FUN_001a7a88(param_1 + 1);
  if (iVar4 == 0) {
    if ((code *)*DAT_001a42b8 == entry) {
      iVar4 = FUN_0019b388(iVar3 + 2);
    }
    else {
      iVar4 = (*(code *)*DAT_001a42b8)(iVar3 + 2);
    }
    if (iVar4 != 0) {
      FUN_001a702a(iVar4,param_2,iVar3 + 1);
      iVar3 = FUN_001a7cac(param_1[1],iVar4);
      if ((code *)*DAT_001a42bc == entry) {
        FUN_0018a280(iVar4);
      }
      else {
        (*(code *)*DAT_001a42bc)(iVar4);
      }
      return iVar3;
    }
    return -4;
  }
  return iVar4;
}

