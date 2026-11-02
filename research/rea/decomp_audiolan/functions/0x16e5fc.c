// rea decompile_all
// name: FUN_0016e5fc
// address: 0x16e5fc
// body: available
// range: 0x16e5fc-0x16e815 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016e5fc(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_30 [4];
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  if ((code *)*DAT_0016e818 == entry) {
    puVar1 = (undefined4 *)FUN_0019b388(0x2c);
  }
  else {
    puVar1 = (undefined4 *)(*(code *)*DAT_0016e818)(0x2c);
  }
  *param_1 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -4;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  iVar2 = FUN_001a5694(param_3,0,&local_1c);
  if (iVar2 < 0) {
    if (*param_1 != 0) {
      if ((code *)*DAT_0016e81c == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_0016e81c)();
      }
    }
    return iVar2;
  }
  local_30[0] = FUN_001b91f6(local_1c);
  if (local_30[0] == 0) {
    if (*param_1 != 0) {
      if ((code *)*DAT_0016e81c == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_0016e81c)();
      }
    }
    return -5;
  }
  iVar2 = FUN_001a6f04(local_30[0],&DAT_0016e820);
  if (((iVar2 == 0) || (iVar2 = FUN_001a6f04(local_30[0],&DAT_0016e824), iVar2 == 0)) ||
     (iVar2 = FUN_001a6f04(local_30[0],&DAT_0016e828), iVar2 == 0)) {
    *(undefined4 *)*param_1 = 500;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    FUN_001a44cc(*param_1 + 4,0);
    FUN_0017da6c((undefined4 *)*param_1 + 1,*(undefined4 *)*param_1);
    *(undefined4 *)(*param_1 + 0x1c) = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = 500;
    *(undefined1 **)(*param_1 + 0x18) = &LAB_00007d00;
    FUN_001a44cc(*param_1 + 4,0);
    FUN_0017da6c((undefined4 *)*param_1 + 1,*(undefined4 *)*param_1);
    *(undefined4 *)(*param_1 + 0x1c) = 0xffffffff;
  }
  FUN_001a5664(param_3,0,&local_20);
  uVar3 = DAT_0016e830;
  if ((local_20 != 0) && (*(int *)(local_20 + 4) != 0)) {
    FUN_001a7c44(*(int *)(local_20 + 4) + 0x14,&DAT_0016e834,local_30);
    if (local_30[0] == 0) {
      local_20 = 0;
    }
    else if ((local_20 != 0) && (*(int *)(local_20 + 4) != 0)) {
      if (*(int *)(*(int *)(local_20 + 4) + 0x10) != 0) {
        uVar3 = FUN_001a1aa8();
      }
      iVar2 = *param_1;
      uVar4 = FUN_001a6f50(*(undefined4 *)(*(int *)(local_20 + 4) + 0xc));
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x24) != 0) {
          if ((code *)*DAT_0016e81c == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_0016e81c)();
          }
        }
        *(undefined4 *)(iVar2 + 0x24) = uVar4;
        *(undefined4 *)(iVar2 + 0x28) = uVar3;
      }
      goto LAB_0016e7f4;
    }
  }
  local_18 = 0;
  if (*(int *)(*(int *)(param_3 + 4) + 0x10) != 0) {
    uVar3 = FUN_001a1aa8();
  }
  FUN_001a7c44(*(int *)(param_3 + 4) + 0x14,s_maddr_0016e838,&local_18);
  if ((local_18 == 0) || (*(int *)(local_18 + 4) == 0)) {
    iVar2 = *param_1;
    uVar4 = FUN_001a6f50(*(undefined4 *)(*(int *)(param_3 + 4) + 0xc));
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x24);
      if (iVar5 != 0) {
        if ((code *)*DAT_0016e81c == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*DAT_0016e81c)(iVar5);
        }
      }
      *(undefined4 *)(iVar2 + 0x24) = uVar4;
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
    }
  }
  else {
    iVar2 = *param_1;
    uVar4 = FUN_001a6f50();
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x24);
      if (iVar5 != 0) {
        if ((code *)*DAT_0016e81c == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*DAT_0016e81c)(iVar5);
        }
      }
      *(undefined4 *)(iVar2 + 0x24) = uVar4;
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
    }
  }
LAB_0016e7f4:
  *(undefined1 **)(*param_1 + 0xc) = &LAB_00007d00;
  FUN_001a44cc(*param_1 + 0x10,0);
  FUN_0017da6c(*param_1 + 0x10,*(undefined4 *)(*param_1 + 0xc));
  return 0;
}

