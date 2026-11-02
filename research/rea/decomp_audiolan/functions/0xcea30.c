// rea decompile_all
// name: FUN_000cea30
// address: 0xcea30
// body: available
// range: 0xcea30-0xced7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000cea30(int param_1,undefined4 param_2,uint param_3,uint *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puStack_48;
  int iStack_44;
  int local_38;
  undefined4 local_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  
  if (param_4 == (uint *)0x0 || param_5 == (undefined4 *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,1);
    if (param_5 != (undefined4 *)0x0) {
      iVar3 = FUN_001da44c(param_5 + 3);
      iVar3 = FUN_001da44c(iVar3 + -8);
      FUN_001da44c(iVar3 + -4);
      FUN_0019f30c();
    }
    FUN_0019f30c(param_4);
    return;
  }
  uVar1 = FUN_000b9aac();
  FUN_00159dd0(&puStack_48,uVar1);
  uVar6 = 6;
  iVar3 = *(int *)(local_38 + 8);
  do {
    if (iVar3 == local_38) {
LAB_000ceca4:
      (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar6);
      if (param_5 != (undefined4 *)0x0) {
        iVar3 = FUN_001da44c(param_5 + 3);
        iVar3 = FUN_001da44c(iVar3 + -8);
        FUN_001da44c(iVar3 + -4);
        FUN_0019f30c();
      }
      FUN_0019f30c(param_4);
      if (local_38 == 0) {
        return;
      }
      iStack_28 = local_38;
      local_2c = *(undefined4 *)(local_38 + 8);
      FUN_001ce9cc(auStack_24,&puStack_48,&local_2c,&iStack_28);
      *(int *)(local_38 + 0xc) = iStack_44;
      iStack_44 = local_38;
      puVar4 = puStack_48;
      if (puStack_48 == (undefined4 *)0x0) {
        return;
      }
      do {
        puStack_48 = (undefined4 *)*puVar4;
        FUN_0010fa20(puVar4[2],puVar4[1],0);
        FUN_0010fa20(puVar4,1,0);
        puVar4 = puStack_48;
      } while (puStack_48 != (undefined4 *)0x0);
      return;
    }
    if (param_3 == 0) {
      iVar3 = *(int *)(iVar3 + 0x14);
      uVar6 = 1;
      if (((*param_4 & 1) != 0) && (iVar2 = FUN_000704c4(iVar3,*param_5), iVar2 == 0)) {
        FUN_000028a4(DAT_000ced7c);
        uVar6 = 0;
      }
      uVar1 = DAT_000ced80;
      if (((*param_4 & 2) != 0) || ((*param_4 & 4) != 0)) {
        local_2c = DAT_000ced80;
        if ((*param_4 & 2) == 0) {
          FUN_00155144(&iStack_28,iVar3);
          FUN_001da4a8(&local_2c,&iStack_28);
          FUN_001da44c(&iStack_28);
        }
        else {
          FUN_001da4a8(&local_2c,param_5 + 1);
        }
        if ((*param_4 & 4) == 0) {
          uVar5 = *(uint *)(iVar3 + 8) & 0xff;
        }
        else {
          uVar5 = (uint)*(byte *)(param_5 + 2);
        }
        iVar2 = FUN_00070690(iVar3,local_2c,uVar5);
        if (iVar2 == 0) {
          FUN_000028a4(DAT_000ced84);
          uVar6 = 0;
        }
        FUN_001da44c(&local_2c);
      }
      if (((*param_4 & 8) != 0) || ((*param_4 & 0x10) != 0)) {
        local_2c = uVar1;
        if ((*param_4 & 8) == 0) {
          FUN_00155080(&iStack_28,iVar3);
          FUN_001da4a8(&local_2c,&iStack_28);
          FUN_001da44c(&iStack_28);
        }
        else {
          FUN_001da4a8(&local_2c,param_5 + 3);
        }
        if ((*param_4 & 0x10) == 0) {
          uVar5 = *(uint *)(iVar3 + 0xc) & 0xff;
        }
        else {
          uVar5 = (uint)*(byte *)(param_5 + 4);
        }
        iVar3 = FUN_00070260(iVar3,local_2c,uVar5,0);
        if (iVar3 == 0) {
          FUN_000028a4(DAT_000ced88);
          uVar6 = 0;
        }
        FUN_001da44c(&local_2c);
      }
      uVar6 = uVar6 ^ 1;
      goto LAB_000ceca4;
    }
    param_3 = param_3 - 1 & 0xffff;
    iVar2 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      for (iVar2 = *(int *)(iVar3 + 4); iVar3 == *(int *)(iVar2 + 0xc); iVar2 = *(int *)(iVar2 + 4))
      {
        iVar3 = iVar2;
      }
      if (*(int *)(iVar3 + 0xc) != iVar2) {
        iVar3 = iVar2;
      }
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
  } while( true );
}

