// rea decompile_all
// name: FUN_00127fac
// address: 0x127fac
// body: available
// range: 0x127fac-0x12826f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00127fac(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int extraout_r1;
  int extraout_r1_00;
  undefined8 uVar8;
  undefined1 local_204 [300];
  undefined1 auStack_d8 [96];
  uint local_78;
  int local_74;
  uint local_70;
  undefined1 auStack_6c [4];
  undefined4 local_68 [3];
  byte local_5a;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  uint local_48;
  undefined1 auStack_3c [28];
  
  iVar1 = *(int *)(param_1 + 0xc0);
  iVar2 = FUN_00232084(&local_78,iVar1 + 0x1f8);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 0x1fc);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0x200);
  piVar3 = (int *)FUN_000cbaf0();
  if (piVar3 == (int *)0x0) {
    FUN_00232190(&local_78);
    return;
  }
  uVar4 = FUN_001ad814(auStack_d8);
  FUN_001ad784(uVar4,1,1,1,s_Queue_00128270);
  uVar4 = (**(code **)*piVar3)(piVar3);
  FUN_00123418(local_68,auStack_d8,uVar4,&local_78,1);
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,local_68,0xffffffff);
  local_68[0] = DAT_00128278;
  if (iVar1 != 0) {
    FUN_00002898(DAT_0012827c,local_78);
    FUN_00232190(auStack_54);
    goto LAB_00128258;
  }
  FUN_00232190(auStack_54);
  FUN_00123634(auStack_3c,auStack_d8,uVar4,local_4c,local_74);
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,auStack_3c,0xffffffff);
  uVar5 = DAT_00128280;
  if (iVar1 == 0) {
    if (0 < (int)local_70) {
      uVar6 = *(int *)(*(int *)(param_1 + 0xc0) + 0x9c) - *(int *)(*(int *)(param_1 + 0xc0) + 0xa0);
      if (local_70 <= uVar6) {
        uVar6 = local_70;
      }
      FUN_00123544(auStack_6c,auStack_d8,uVar4,local_4c,local_204,uVar6,1);
      piVar3 = (int *)FUN_000cbaf0();
      uVar8 = (**(code **)(*piVar3 + 8))(piVar3,auStack_6c,0xffffffff);
      iVar1 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        local_78 = (uint)local_5a;
        uVar5 = DAT_00128284;
        goto LAB_001280f4;
      }
      uVar6 = 0;
      if (local_48 != 0) {
        do {
          iVar2 = *(int *)(param_1 + 0xc0);
          iVar1 = *(int *)(iVar2 + 0xa0);
          if (iVar1 != *(int *)(iVar2 + 0x9c)) {
            puVar7 = *(undefined1 **)(iVar2 + 0xb0);
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = local_204[uVar6];
            }
            puVar7 = puVar7 + 1;
            if (*(undefined1 **)(iVar2 + 0xa8) <= puVar7) {
              puVar7 = *(undefined1 **)(iVar2 + 0xa4);
            }
            *(undefined1 **)(iVar2 + 0xb0) = puVar7;
            FUN_000298e0(iVar2 + 0xa0);
            iVar1 = extraout_r1;
          }
          uVar6 = uVar6 + 1 & 0xfffeffff;
        } while (uVar6 < local_48);
      }
      local_70 = local_70 - local_48;
      if (0 < (int)local_70) {
        local_74 = local_74 + local_48;
        if (local_48 == 0) {
          FUN_001d0130(2,iVar1);
          iVar1 = extraout_r1_00;
        }
        FUN_001d0130(local_48 >> 2,iVar1);
        FUN_001cf828(param_1 + 0xc4);
      }
    }
    FUN_0012c504(local_68,auStack_d8,uVar4,local_4c);
    piVar3 = (int *)FUN_000cbaf0();
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3,local_68,0xffffffff);
    if (iVar1 != 0) {
      FUN_00002898(DAT_00128288,local_78);
    }
  }
  else {
LAB_001280f4:
    FUN_00002898(uVar5,local_78);
  }
LAB_00128258:
  FUN_001ad838(auStack_d8);
  FUN_00232190(&local_78);
  return;
}

