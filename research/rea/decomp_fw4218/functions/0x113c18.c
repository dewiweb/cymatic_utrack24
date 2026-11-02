// rea decompile_all
// name: FUN_00113c18
// address: 0x113c18
// body: available
// range: 0x113c18-0x113ea3 inclusive
// range: 0x113fd4-0x11410f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00113c18(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_94 [32];
  undefined1 auStack_74 [88];
  
  FUN_000f8ee0();
  uVar1 = FUN_001b9a28();
  FUN_00122480(auStack_74,uVar1);
  FUN_00122460(auStack_74);
  iVar2 = FUN_001b4f2c();
  for (uVar5 = 0; (int)uVar5 < iVar2 / 2; uVar5 = uVar5 + 1) {
    FUN_000028cc(auStack_94,s_FU_LineIn_02d__02d_00113ea4,uVar5 * 2 + 1,uVar5 * 2 + 2);
    iVar3 = FUN_001c6b14(0x8c,_DAT_00113eb8);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
      iVar3 = FUN_00143178(iVar3,uVar1,uVar5 + 0xb5 & 0xff,auStack_94,param_1[0x36],
                           (uVar5 & 0x7f) << 1,uVar5 * 2 + 1 & 0xff);
    }
    param_1[uVar5 + 0x37] = iVar3;
    if (param_1[uVar5 + 0x37] == 0) {
      FUN_00002898(s____ERROR__createCustomUnitBlocks_00113eb9 + 3,uVar5 + 0xb5,auStack_94);
      FUN_00122588(auStack_74);
      return 0;
    }
    iVar3 = FUN_0005e078(param_1[uVar5 + 0x37]);
    if (iVar3 == 0) {
      FUN_00002898(s_ERROR__createCustomUnitBlocks__C_00113ef8,uVar5 + 0xb5,auStack_94);
      FUN_00122588(auStack_74);
      return 0;
    }
  }
  iVar3 = FUN_001c6b14(0x8c,_DAT_00113eb8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
    iVar3 = FUN_00143178(iVar3,uVar1,0x98,s_FU_MonVol_00113f38,param_1[0x36],0x18,0xff);
  }
  param_1[0x43] = iVar3;
  if (param_1[0x43] == 0) {
    FUN_00002898(s_ERROR__createCustomUnitBlocks__C_00113f44,0x98);
    FUN_00122588(auStack_74);
    uVar1 = 0;
  }
  else {
    iVar3 = FUN_0005e078(param_1[0x43]);
    if (iVar3 == 0) {
      FUN_00002898(DAT_00113f84,0x98);
      FUN_00122588(auStack_74);
      uVar1 = 0;
    }
    else {
      iVar3 = FUN_001c6b14(0x8c,_DAT_00113eb8);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
        iVar3 = FUN_00143178(iVar3,uVar1,0x97,s_FU_BusVol_00113f88,param_1[0x36],0x19,0xff);
      }
      param_1[0x44] = iVar3;
      if (param_1[0x44] == 0) {
        FUN_00002898(s_ERROR__createCustomUnitBlocks__C_00113f94,0x97);
        FUN_00122588(auStack_74);
        uVar1 = 0;
      }
      else {
        iVar3 = FUN_0005e078(param_1[0x44]);
        if (iVar3 == 0) {
          FUN_00002898(_DAT_00114110,0x97);
          FUN_00122588(auStack_74);
          uVar1 = 0;
        }
        else {
          for (uVar5 = 1; (int)uVar5 < 3; uVar5 = uVar5 + 1) {
            for (iVar3 = 0; iVar3 < iVar2 / 2; iVar3 = iVar3 + 1) {
              uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
              iVar4 = FUN_000866f8(uVar1,param_1[iVar3 + 0x37],uVar5 & 0xff);
              if (iVar4 == 0) {
                FUN_00002898(s___ERROR__createCustomUnitBlocks__00114112 + 2,iVar3 + 0xb5);
                FUN_00122588(auStack_74);
                return 0;
              }
            }
            uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
            iVar3 = FUN_000866f8(uVar1,param_1[0x43],uVar5 & 0xff);
            if (iVar3 == 0) {
              FUN_00002898(DAT_00114154,0x98);
              FUN_00122588(auStack_74);
              return 0;
            }
            uVar1 = (**(code **)(*param_1 + 0x24))(param_1);
            iVar3 = FUN_000866f8(uVar1,param_1[0x44],uVar5 & 0xff);
            if (iVar3 == 0) {
              FUN_00002898(DAT_00114158,0x97);
              FUN_00122588(auStack_74);
              return 0;
            }
          }
          FUN_00122588(auStack_74);
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

