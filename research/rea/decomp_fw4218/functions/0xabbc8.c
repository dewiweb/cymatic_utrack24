// rea decompile_all
// name: FUN_000abbc8
// address: 0xabbc8
// body: available
// range: 0xabbc8-0xac0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000abbc8(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_14c [8];
  undefined1 auStack_144 [8];
  char local_13c [252];
  undefined4 local_40;
  undefined1 auStack_3c [8];
  int local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  FUN_000f4e84();
  local_30 = FUN_000f4fc0();
  (**(code **)(*param_2 + 0x34))(auStack_2c,param_2);
  local_34 = FUN_001bece0(auStack_2c);
  iVar3 = local_34 - DAT_000ac0c8;
  if (local_34 == DAT_000ac0c8) {
    (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
    iVar2 = FUN_001be9f0(auStack_3c);
    iVar3 = FUN_00171ea4(auStack_3c);
    if (iVar2 != 0) {
      uVar1 = FUN_0000328c(iVar2,0,10);
      iVar3 = FUN_0013e404(param_1 + 0x848,uVar1);
    }
  }
  else if (local_34 < DAT_000ac0c8) {
    if (local_34 == 0xb002) {
      (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
      iVar2 = FUN_001be9a8(auStack_3c);
      iVar2 = iVar2 + 1;
      iVar3 = FUN_00171ea4(auStack_3c);
      if (iVar2 < 0xff) {
        (**(code **)(*param_3 + 0xc4))(auStack_144,param_3);
        uVar1 = FUN_001be9f0(auStack_144);
        FUN_000039d4(local_13c,uVar1,iVar2);
        iVar3 = FUN_00171ea4(auStack_144);
        pcVar6 = local_13c;
        for (iVar5 = 0; (0 < iVar2 && (pcVar4 = pcVar6, iVar5 < 6)); iVar5 = iVar5 + 1) {
          for (; (*pcVar4 != '\0' && (*pcVar4 != ':')); pcVar4 = pcVar4 + 1) {
            iVar2 = iVar2 + -1;
          }
          *pcVar4 = '\0';
          iVar3 = FUN_00003258(pcVar6);
          local_14c[iVar5] = (char)iVar3;
          pcVar6 = pcVar4 + 1;
          iVar2 = iVar2 + -1;
        }
        if (iVar5 == 6) {
          FUN_00092aa8(local_30,local_14c[0],local_14c[1],local_14c[2],local_14c[3],local_14c[4],
                       local_14c[5]);
          (**(code **)(**(int **)(param_1 + 0x2b4) + 0x58))(*(int **)(param_1 + 0x2b4),0);
          iVar3 = (**(code **)(**(int **)(param_1 + 0x4ec) + 0x58))(*(int **)(param_1 + 0x4ec),0);
        }
      }
    }
    else if (local_34 == 0xb004) {
      iVar3 = FUN_001b5540(local_30);
      if (iVar3 == 0) {
        (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
        iVar2 = FUN_000aab74(param_1,auStack_3c,&local_40);
        iVar3 = FUN_00171ea4(auStack_3c);
        if (iVar2 != 0) {
          FUN_00093cd0(local_30,local_40);
          iVar3 = (**(code **)(**(int **)(param_1 + 0x4f4) + 0x58))(*(int **)(param_1 + 0x4f4),0);
        }
      }
    }
    else if (local_34 == 0xb005) {
      iVar3 = FUN_001b5540(local_30);
      if (iVar3 == 0) {
        (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
        iVar2 = FUN_000aab74(param_1,auStack_3c,&local_40);
        iVar3 = FUN_00171ea4(auStack_3c);
        if (iVar2 != 0) {
          FUN_00092ef8(local_30,local_40);
          iVar3 = (**(code **)(**(int **)(param_1 + 0x4f8) + 0x58))(*(int **)(param_1 + 0x4f8),0);
        }
      }
    }
    else {
      iVar3 = local_34 + -0xc001;
      if (iVar3 == 0) {
        (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
        uVar1 = FUN_001beccc(auStack_3c);
        FUN_0013eab8(param_1 + 0x848,uVar1);
        iVar3 = FUN_00171ea4(auStack_3c);
      }
    }
  }
  else if (iVar3 == 1) {
    (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
    iVar2 = FUN_001be9f0(auStack_3c);
    iVar3 = FUN_00171ea4(auStack_3c);
    if (iVar2 != 0) {
      uVar1 = FUN_0000328c(iVar2,0,10);
      iVar3 = FUN_0013e49c(param_1 + 0x848,uVar1);
    }
  }
  else if (iVar3 == 2) {
    (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
    iVar2 = FUN_001be9f0(auStack_3c);
    iVar3 = FUN_00171ea4(auStack_3c);
    if (iVar2 != 0) {
      uVar1 = FUN_0000328c(iVar2,0,10);
      iVar3 = FUN_0013e47c(param_1 + 0x848,uVar1);
    }
  }
  else if (iVar3 == 0xe) {
    (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
    iVar2 = FUN_001be9f0(auStack_3c);
    iVar3 = FUN_00171ea4(auStack_3c);
    if (iVar2 != 0) {
      uVar1 = FUN_0000328c(iVar2,0,10);
      iVar3 = FUN_00093a7c(local_30,uVar1);
    }
  }
  else {
    iVar3 = iVar3 + -0x205f;
    if (iVar3 == 0) {
      (**(code **)(*param_3 + 0xc4))(auStack_3c,param_3);
      FUN_000ab2b8(param_1,auStack_3c);
      iVar3 = FUN_00171ea4(auStack_3c);
    }
  }
  return iVar3;
}

