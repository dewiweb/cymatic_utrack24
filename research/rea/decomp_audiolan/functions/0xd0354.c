// rea decompile_all
// name: FUN_000d0354
// address: 0xd0354
// body: available
// range: 0xd0354-0xd05d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000d0354(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int **local_68;
  uint uStack_64;
  int **local_60;
  uint local_5c;
  undefined4 *puStack_58;
  int iStack_54;
  int local_48;
  int *local_3c;
  int *local_38;
  int *local_34 [2];
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_000cf680(param_1,2);
  uVar2 = FUN_000b9aac();
  FUN_00159dd0(&puStack_58,uVar2);
  piVar1 = DAT_000d05d4;
  iVar7 = *(int *)(local_48 + 8);
  if (iVar7 != local_48) {
    uVar8 = 0;
    do {
      iVar9 = *(int *)(iVar7 + 0x14);
      FUN_00154f34(&local_3c,iVar9);
      FUN_00155144(&local_38,iVar9);
      uVar3 = *(uint *)(iVar9 + 8);
      FUN_00155080(local_34,iVar9);
      local_5c = *(uint *)(iVar9 + 0xc) & 0xff;
      local_68 = &local_38;
      uStack_64 = uVar3 & 0xff;
      local_60 = local_34;
      (**(code **)(**(int **)(param_1 + 0x118) + 0x6c))
                (*(int **)(param_1 + 0x118),local_28,uVar8,&local_3c);
      if (local_34[0] != piVar1 + 3) {
        piVar4 = local_34[0] + -3;
        iVar9 = *piVar4;
        if ((iVar9 == -1) || ((piVar4 != piVar1 && (*piVar4 = iVar9 + -1, iVar9 == 0)))) {
          FUN_0010fa20(local_34[0] + -3,local_34[0][-2] + 0xe,0);
        }
      }
      if (local_38 != piVar1 + 3) {
        piVar4 = local_38 + -3;
        iVar9 = *piVar4;
        if ((iVar9 == -1) || ((piVar4 != piVar1 && (*piVar4 = iVar9 + -1, iVar9 == 0)))) {
          FUN_0010fa20(local_38 + -3,local_38[-2] + 0xe,0);
        }
      }
      if (local_3c != piVar1 + 3) {
        piVar4 = local_3c + -3;
        iVar9 = *piVar4;
        if ((iVar9 == -1) || ((piVar4 != piVar1 && (*piVar4 = iVar9 + -1, iVar9 == 0)))) {
          FUN_0010fa20(local_3c + -3,local_3c[-2] + 0xe,0);
        }
      }
      iVar9 = *(int *)(iVar7 + 0xc);
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar9 = *(int *)(iVar7 + 4);
        while (iVar5 = iVar9, iVar7 == *(int *)(iVar5 + 0xc)) {
          iVar7 = iVar5;
          iVar9 = *(int *)(iVar5 + 4);
        }
        if (*(int *)(iVar7 + 0xc) != iVar5) {
          iVar7 = iVar5;
        }
      }
      else {
        do {
          iVar7 = iVar9;
          iVar9 = *(int *)(iVar7 + 8);
        } while (*(int *)(iVar7 + 8) != 0);
      }
      uVar8 = uVar8 + 1 & 0xfffeffff;
    } while (iVar7 != local_48);
  }
  (**(code **)(**(int **)(param_1 + 0x118) + 0x70))(*(int **)(param_1 + 0x118),local_28);
  if (local_48 == 0) {
    return;
  }
  local_68 = *(int ***)(local_48 + 8);
  FUN_001ce9cc(&local_60,&puStack_58,&local_68,&uStack_64);
  *(int *)(local_48 + 0xc) = iStack_54;
  iStack_54 = local_48;
  puVar6 = puStack_58;
  if (puStack_58 == (undefined4 *)0x0) {
    return;
  }
  do {
    puStack_58 = (undefined4 *)*puVar6;
    FUN_0010fa20(puVar6[2],puVar6[1],0);
    FUN_0010fa20(puVar6,1,0);
    puVar6 = puStack_58;
  } while (puStack_58 != (undefined4 *)0x0);
  return;
}

