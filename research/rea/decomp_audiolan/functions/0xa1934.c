// rea decompile_all
// name: FUN_000a1934
// address: 0xa1934
// body: available
// range: 0xa1934-0xa1b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000a1934(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puStack_40;
  int iStack_3c;
  int local_30;
  int *local_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  
  FUN_00159dd0(&puStack_40,param_1[0x4d]);
  piVar1 = DAT_000a1b34;
  iVar8 = *(int *)(local_30 + 8);
  if (iVar8 != local_30) {
    do {
      uVar9 = *(undefined4 *)(iVar8 + 0x14);
      FUN_00155144(&local_24,uVar9);
      uVar6 = local_24[-1];
      if (uVar6 == 0) {
        if (local_24 != piVar1 + 3) {
          piVar3 = local_24 + -3;
          iVar2 = *piVar3;
          if (iVar2 == -1) goto LAB_000a1a34;
          if (piVar3 != piVar1) {
            *piVar3 = iVar2 + -1;
            goto joined_r0x000a19d0;
          }
        }
      }
      else {
        uVar5 = *(uint *)(*param_2 + -4);
        if (uVar5 < uVar6) {
          uVar6 = uVar5;
        }
        iVar2 = FUN_0000339c(local_24,*param_2,uVar6);
        if ((iVar2 == 0) && (local_24[-1] == *(int *)(*param_2 + -4))) {
          (**(code **)(*param_1 + 0xf0))(param_1,uVar9);
        }
        if (local_24 != piVar1 + 3) {
          piVar3 = local_24 + -3;
          iVar2 = *piVar3;
          if (iVar2 == -1) {
LAB_000a1a34:
            FUN_0010fa20(local_24 + -3,local_24[-2] + 0xe,0);
          }
          else if (piVar3 != piVar1) {
            *piVar3 = iVar2 + -1;
joined_r0x000a19d0:
            if (iVar2 == 0) goto LAB_000a1a34;
          }
        }
      }
      iVar2 = *(int *)(iVar8 + 0xc);
      if (*(int *)(iVar8 + 0xc) == 0) {
        iVar2 = *(int *)(iVar8 + 4);
        while (iVar7 = iVar2, iVar8 == *(int *)(iVar7 + 0xc)) {
          iVar8 = iVar7;
          iVar2 = *(int *)(iVar7 + 4);
        }
        if (*(int *)(iVar8 + 0xc) != iVar7) {
          iVar8 = iVar7;
        }
      }
      else {
        do {
          iVar8 = iVar2;
          iVar2 = *(int *)(iVar8 + 8);
        } while (*(int *)(iVar8 + 8) != 0);
      }
    } while (iVar8 != local_30);
  }
  if (local_30 == 0) {
    return;
  }
  iStack_20 = local_30;
  FUN_001ce9cc(auStack_1c,&puStack_40,&local_24,&iStack_20);
  *(int *)(local_30 + 0xc) = iStack_3c;
  iStack_3c = local_30;
  puVar4 = puStack_40;
  if (puStack_40 != (undefined4 *)0x0) {
    do {
      puStack_40 = (undefined4 *)*puVar4;
      FUN_0010fa20(puVar4[2],puVar4[1],0);
      FUN_0010fa20(puVar4,1,0);
      puVar4 = puStack_40;
    } while (puStack_40 != (undefined4 *)0x0);
    return;
  }
  return;
}

