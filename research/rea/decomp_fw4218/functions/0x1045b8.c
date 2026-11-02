// rea decompile_all
// name: FUN_001045b8
// address: 0x1045b8
// body: available
// range: 0x1045b8-0x104863 inclusive
// range: 0x104968-0x1049cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001045b8(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_28 [8];
  int *local_20;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_000032fc(*param_2,0,0);
  uVar2 = FUN_000032fc(param_2[1],0);
  iVar10 = 100;
  if (2 < param_3) {
    iVar10 = FUN_000032fc(param_2[2],0);
  }
  puVar3 = (undefined4 *)FUN_000b1210(auStack_28);
  *puVar3 = _DAT_00104864;
  uVar4 = FUN_000b4964();
  iVar5 = FUN_000b4840(uVar4,s___AudioHWService_00104866 + 2,auStack_28);
  piVar6 = local_20;
  if (iVar5 == 0) {
    FUN_00002898(s_ERROR__could_not_get_AudioHWServ_001048bc);
    FUN_000b1228(auStack_28);
    return 0;
  }
  uVar4 = FUN_001dbf34();
  iVar5 = (**(code **)(*piVar6 + 0x80))(piVar6,uVar4,uVar1);
  if (iVar5 == 0) {
    FUN_00002898(s_ERROR__could_not_get_pulser_GPIO_001048e4,uVar1);
    FUN_000b1228(auStack_28);
    return 0;
  }
  piVar6 = *(int **)(iVar5 + 0x14);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6,*(undefined4 *)(iVar5 + 0x10));
    piVar6 = *(int **)(iVar5 + 0x14);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(iVar5 + 0x10));
      puVar3 = *(undefined4 **)(iVar5 + 0x14);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(puVar3,*(undefined4 *)(iVar5 + 0x10));
      }
    }
  }
  uVar1 = FUN_001dbf34();
  iVar7 = (**(code **)(*local_20 + 0x80))(local_20,uVar1,uVar2);
  if (iVar7 != 0) {
    piVar6 = *(int **)(iVar7 + 0x14);
    if (piVar6 != (int *)0x0) {
      iVar8 = (**(code **)(*piVar6 + 0x20))
                        (piVar6,*(undefined4 *)(iVar7 + 0x10),2,DAT_00104878,param_1);
      if (iVar8 != 0) {
        piVar6 = *(int **)(iVar7 + 0x14);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x28))(piVar6,*(undefined4 *)(iVar7 + 0x10));
        }
        iVar8 = FUN_001f01c4(0xd0,1);
        piVar6 = (int *)0x0;
        if (iVar8 != 0) {
          piVar6 = (int *)FUN_0006f700(iVar8,s_Pulse_Generator_00104880,0,DAT_0010487c,DAT_0010487c,
                                       DAT_0010487c,DAT_0010487c,DAT_0010487c);
          *piVar6 = _DAT_00104890;
          piVar6[0x33] = iVar5;
          piVar6[0x30] = 0;
          piVar6[0x31] = iVar10;
          piVar6[0x32] = 10;
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        FUN_001b280c(piVar6,0xffffffff);
        piVar9 = *(int **)(iVar7 + 0x14);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0x2c))(piVar9,*(undefined4 *)(iVar7 + 0x10));
        }
        if (piVar6[0x30] != iVar10) {
          FUN_00002898(s_7__ERROR__sent__d_pulses__reques_00104891 + 3,piVar6[0x30],iVar10);
          FUN_000b1228(auStack_28);
          return 0;
        }
        if (*(int *)(param_1 + 0x14) != iVar10) {
          FUN_00002898(s_ERROR__got__d_interrupts__expect_001049cc,*(int *)(param_1 + 0x14),iVar10);
          FUN_000b1228(auStack_28);
          return 0;
        }
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        FUN_00002898(s_PASSED__sent_received__d_pulses_001049f4,iVar10);
        FUN_000b1228(auStack_28);
        return 0;
      }
    }
    FUN_00002898(s_ERROR__unable_to_install_interru_00104938);
    FUN_000b1228(auStack_28);
    return 0;
  }
  FUN_00002898(s_ERROR__could_not_get_receiver_GP_0010490c,uVar2);
  FUN_000b1228(auStack_28);
  return 0;
}

