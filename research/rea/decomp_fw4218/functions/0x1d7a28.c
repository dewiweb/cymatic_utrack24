// rea decompile_all
// name: FUN_001d7a28
// address: 0x1d7a28
// body: available
// range: 0x1d7a28-0x1d7de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001d7a28(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10,
                undefined1 *param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar1 = FUN_001d7a0c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13);
  if (iVar1 != 0) {
    FUN_001d805c();
    return iVar1;
  }
  if (param_1 == 0x1b) {
    uVar3 = 0xb;
    uVar4 = 0x28;
    param_12 = 0x23;
    goto LAB_001d7cf8;
  }
  if (param_1 < 0x1c) {
    if (param_1 == 0x12) {
      uVar3 = 4;
      uVar4 = 0x26;
      param_12 = 4;
      goto LAB_001d7cf8;
    }
    if (param_1 < 0x13) {
      if (param_1 == 1) {
        uVar3 = 1;
        uVar4 = 1;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
      if (param_1 == 2) {
        uVar3 = 1;
        uVar4 = 3;
        if ((param_2 & 0x80) == 0) {
          param_12 = 7;
        }
        else {
          param_12 = 0x23;
        }
        goto LAB_001d7cf8;
      }
      if (param_1 == 8) {
        uVar3 = 0xc;
        uVar4 = 0x17;
        param_12 = 0x23;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x11) {
        uVar3 = 0x1b;
        uVar4 = 0x2b;
        param_12 = 0x4b;
        goto LAB_001d7cf8;
      }
    }
    else {
      if (param_1 == 0x15) {
        uVar3 = 0xb;
        uVar4 = 0x20;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x16) {
        uVar3 = 0x16;
        uVar4 = 0x27;
        if (param_2 == 3) {
          param_12 = 4;
        }
        else {
          param_12 = 0x23;
        }
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x17) {
        uVar3 = 5;
        uVar4 = 0x13;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
    }
  }
  else {
    if (param_1 == 0x40) {
      uVar3 = 0x28;
      uVar4 = 0xa2;
      if (param_2 == 0x10) {
        param_12 = 4;
      }
      else {
        param_12 = 0x4b;
      }
      goto LAB_001d7cf8;
    }
    if (param_1 < 0x41) {
      if (param_1 == 0x1c) {
        uVar3 = 0xe;
        uVar4 = 0x31;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x20) {
        uVar3 = 4;
        uVar4 = 2;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x28) {
        uVar3 = 0xc;
        uVar4 = 0x1a;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x30) {
        uVar3 = 1;
        uVar4 = 1;
        param_12 = 7;
        goto LAB_001d7cf8;
      }
    }
    else {
      if (param_1 == 0x41) {
        uVar3 = 0x3b;
        uVar4 = 0x8f;
        param_12 = 0x4b;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x45) {
        uVar3 = 0x3b;
        uVar4 = 0x8f;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
      if (param_1 == 0x46) {
        uVar3 = 0xc;
        uVar4 = 0;
        param_12 = 4;
        goto LAB_001d7cf8;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0x79;
LAB_001d7cf8:
  uVar2 = param_6 + param_4 + param_8 + 7;
  *param_11 = (char)uVar2;
  param_11[1] = (char)param_1;
  param_11[2] = (char)param_2;
  param_11[3] = (char)param_3;
  puVar5 = param_11 + 5;
  param_11[4] = (char)((uint)param_3 >> 8);
  if (0 < param_4) {
    FUN_000039e0(puVar5,param_5,param_4);
    puVar5 = puVar5 + param_4;
  }
  if (0 < param_6) {
    FUN_000039e0(puVar5,param_7,param_6);
    puVar5 = puVar5 + param_6;
  }
  if (0 < param_8) {
    FUN_000039e0(puVar5,param_9,param_8);
    puVar5 = puVar5 + param_8;
  }
  FUN_001d75d0((uVar2 & 0xff) - 2 & 0xff,param_11,puVar5);
  iVar1 = FUN_001d770c(param_11,param_12,param_13,uVar3,uVar4);
  if (iVar1 != 0) {
    FUN_001d805c();
  }
  return iVar1;
}

