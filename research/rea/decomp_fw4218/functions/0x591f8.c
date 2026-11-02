// rea decompile_all
// name: FUN_000591f8
// address: 0x591f8
// body: available
// range: 0x591f8-0x5943f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000591f8(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  int *local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  FUN_001a2920(auStack_40,param_1 + 0x2c);
  FUN_0011ae60(auStack_58,0xffffffff,0,0,0,0xffffffff);
  local_38 = (int *)FUN_0022bc6c(param_1 + 0x20);
  iVar1 = (**(code **)(*local_38 + 0x38))(local_38,local_28,auStack_58,param_6);
  if (iVar1 == 0) {
    FUN_00002898(DAT_00059440,local_28,param_6);
    FUN_001a2938(auStack_40);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_001ba360(auStack_58);
    uVar3 = uVar3 & 0xff;
    uVar4 = FUN_001ba36c(auStack_58);
    uVar4 = uVar4 & 0xff;
    pbVar5 = (byte *)FUN_001b5fc0(auStack_58);
    if (((pbVar5 == (byte *)0x0) || (uVar3 == 0)) || (uVar4 == 0)) {
      FUN_001a2938(auStack_40);
      uVar2 = 0;
    }
    else {
      FUN_00064a0c(auStack_6c,param_2,param_3,param_2 + uVar3,param_3 + uVar4);
      FUN_0006492c(auStack_6c,param_1 + 0x1ac);
      iVar1 = uVar4 - 1;
      for (iVar10 = 0; iVar10 < (iVar1 >> 3) + 1; iVar10 = iVar10 + 1) {
        for (iVar9 = 0; iVar9 < (int)uVar3; iVar9 = iVar9 + 1) {
          iVar6 = FUN_001b23b0(param_1 + 0x1ac);
          if ((iVar6 <= param_2 + iVar9) ||
             (iVar6 = FUN_001b23bc(param_1 + 0x1ac), param_2 + iVar9 < iVar6)) {
            iVar6 = FUN_001b2390(param_1 + 0x1ac);
            if (param_3 < iVar6) {
              iVar6 = FUN_001b2390(param_1 + 0x1ac);
              uVar7 = iVar6 - param_3;
            }
            else {
              uVar7 = 0;
            }
            while( true ) {
              uVar8 = uVar4;
              if (7 < uVar4) {
                uVar8 = 8;
              }
              if (((int)uVar8 <= (int)uVar7) ||
                 (iVar6 = FUN_001b23c8(param_1 + 0x1ac), iVar6 <= (int)(param_3 + uVar7))) break;
              uVar8 = param_5;
              if (((uint)*pbVar5 & 1 << (uVar7 & 0xff)) != 0) {
                uVar8 = param_5 ^ 1;
              }
              FUN_00098e90(param_1 + 0x10,param_2 + iVar9,param_3 + uVar7,uVar8);
              uVar7 = uVar7 + 1;
            }
          }
          pbVar5 = pbVar5 + 1;
        }
        param_3 = param_3 + 8;
        uVar4 = uVar4 - 8 & 0xff;
      }
      FUN_00057bfc(param_1,auStack_6c);
      FUN_00064a58(auStack_6c);
      FUN_001a2938(auStack_40);
      uVar2 = 1;
    }
  }
  return uVar2;
}

