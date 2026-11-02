// rea decompile_all
// name: FUN_000f5eb4
// address: 0xf5eb4
// body: available
// range: 0xf5eb4-0xf628b inclusive
// range: 0xf62a8-0xf631b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f5eb4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  int local_34;
  undefined1 auStack_30 [12];
  
  local_34 = 0;
  FUN_000f7350(param_1);
  FUN_0012246c(param_1 + 0x424);
  iVar1 = FUN_001b5d7c();
  iVar2 = FUN_001306e4(param_1 + 0x490,iVar1);
  if (iVar2 == 0) {
    local_34 = 0;
  }
  if ((iVar1 == 1) && (iVar1 = FUN_000f48a8(param_1 + 0x2e4), iVar1 == 0)) {
    local_34 = 0;
  }
  FUN_000dfcb0();
  iVar1 = FUN_00130e50(param_1 + 0x490);
  if (iVar1 != 0) {
    FUN_000dfcb0();
    FUN_000e0b50();
  }
  piVar3 = (int *)FUN_00057ae8();
  (**(code **)(*piVar3 + 0x20))(piVar3,param_1 + 0x4ac);
  piVar3 = (int *)FUN_00057ae8();
  (**(code **)(*piVar3 + 0x24))(piVar3,param_1 + 0x4bc);
  piVar3 = (int *)FUN_00057ae8();
  (**(code **)(*piVar3 + 0x34))(piVar3,s__http__tcp_000f6298,s__archwave_000f628c,0,0);
  piVar3 = (int *)FUN_00057ae8();
  (**(code **)(*piVar3 + 0x30))(piVar3,0x14,5);
  iVar1 = FUN_000f7bd8(param_1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_00130d8c(param_1 + 0x490);
    if ((iVar1 == 0) || (iVar1 = FUN_000f5bec(param_1), iVar1 != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_00122458(param_1 + 0x424,uVar4);
    FUN_000b7fa8(&local_58,1);
    iVar1 = FUN_000f63f8(param_1);
    if (iVar1 == 0) {
      FUN_000b7fe8(&local_58);
      uVar4 = 0;
    }
    else {
      iVar1 = FUN_000f669c(param_1);
      if (iVar1 == 0) {
        FUN_000b7fe8(&local_58);
        uVar4 = 0;
      }
      else {
        iVar1 = FUN_000f8b80(param_1,0);
        if (iVar1 == 0) {
          FUN_000b7fe8(&local_58);
          uVar4 = 0;
        }
        else {
          FUN_000b7fe8(&local_58);
          local_38 = FUN_00142c6c();
          iVar1 = FUN_001bc6a8(local_38);
          if (iVar1 != 0) {
            FUN_001154ac(auStack_8c);
            FUN_00115494(auStack_8c,0,0x1000,0x16);
            FUN_00115494(auStack_8c,1,0x1000,0x18);
            FUN_00115494(auStack_8c,2,0x1000,0x16);
            FUN_00115494(auStack_8c,3,0x1000,0x16);
            FUN_00115494(auStack_8c,4,0x1000,0x18);
            FUN_00115494(auStack_8c,5,0x1000,0x19);
            FUN_001bc630(auStack_5c,local_38);
            uVar4 = FUN_0022d49c(auStack_5c);
            FUN_001bc650(&local_58,local_38);
            uVar5 = FUN_0022d49c(&local_58);
            uVar6 = FUN_001bc624(local_38);
            uVar7 = FUN_0009175c();
            FUN_00091560(uVar7,auStack_8c,uVar6,uVar5,uVar4,1,2,2);
            FUN_002329f0(&local_58);
            FUN_002329f0(auStack_5c);
            uVar4 = FUN_000aa570();
            FUN_000a5dfc(uVar4,param_1);
          }
          if (local_34 == 0) {
            local_58 = FUN_0012246c(param_1 + 0x424);
            uVar4 = FUN_001b5d88();
            FUN_000f6be0(param_1,uVar4,1);
            FUN_0012e10c(auStack_48);
            local_58 = FUN_0012246c(param_1 + 0x424);
            uVar4 = FUN_001b5d94();
            FUN_000b0e64(param_1,auStack_48,6,uVar4);
            local_4c = 2;
            FUN_000f5c68(param_1,auStack_48,2);
            FUN_0005b530(0x1b);
            uVar4 = FUN_000923c8();
            FUN_0009231c(uVar4,DAT_000f62a4);
            FUN_001282fc(auStack_54,0xc1400000,0);
            for (uVar8 = 0; (int)uVar8 < 0x18; uVar8 = uVar8 + 1) {
              FUN_00069f60(param_1 + 0x17c,uVar8 & 0xff,auStack_54,0);
            }
            FUN_000b06ac(auStack_30,param_1);
            piVar3 = (int *)FUN_0022bc54(auStack_30);
            uVar4 = (**(code **)(*piVar3 + 0x24))(piVar3);
            *DAT_000f631c = uVar4;
            thunk_FUN_000b1228(auStack_30);
            FUN_0003d428(DAT_000f6320);
            FUN_0012e13c(auStack_48);
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}

