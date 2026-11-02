// rea decompile_all
// name: FUN_000c2248
// address: 0xc2248
// body: available
// range: 0xc2248-0xc24f3 inclusive
// range: 0xc25f8-0xc265b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000c2248(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_28 [8];
  int *local_20;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_00003220(*param_2,0,0);
  uVar2 = FUN_00003220(param_2[1],0);
  iVar11 = 100;
  if (2 < param_3) {
    iVar11 = FUN_00003220(param_2[2],0);
  }
  pcVar3 = (char *)FUN_0008b800(auStack_28);
  *(undefined4 *)pcVar3 = s_l0__AudioHWService_000c24f4._0_4_;
  uVar4 = FUN_0008cf78();
  iVar5 = FUN_0008ce54(uVar4,s_l0__AudioHWService_000c24f4 + 4,auStack_28);
  piVar6 = local_20;
  if (iVar5 == 0) {
    FUN_000028a4(s_ERROR__could_not_get_AudioHWServ_000c254c);
    FUN_0008b818(auStack_28);
    return 0;
  }
  uVar4 = FUN_0018afd4();
  iVar5 = (**(code **)(*piVar6 + 0x80))(piVar6,uVar4,uVar1);
  if (iVar5 == 0) {
    FUN_000028a4(s_ERROR__could_not_get_pulser_GPIO_000c2574,uVar1);
    FUN_0008b818(auStack_28);
    return 0;
  }
  piVar6 = *(int **)(iVar5 + 0x14);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6,*(undefined4 *)(iVar5 + 0x10));
    piVar6 = *(int **)(iVar5 + 0x14);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(iVar5 + 0x10));
      puVar7 = *(undefined4 **)(iVar5 + 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(puVar7,*(undefined4 *)(iVar5 + 0x10));
      }
    }
  }
  uVar1 = FUN_0018afd4();
  iVar8 = (**(code **)(*local_20 + 0x80))(local_20,uVar1,uVar2);
  if (iVar8 != 0) {
    piVar6 = *(int **)(iVar8 + 0x14);
    if (piVar6 != (int *)0x0) {
      iVar9 = (**(code **)(*piVar6 + 0x20))
                        (piVar6,*(undefined4 *)(iVar8 + 0x10),2,DAT_000c2508,param_1);
      if (iVar9 != 0) {
        piVar6 = *(int **)(iVar8 + 0x14);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x28))(piVar6,*(undefined4 *)(iVar8 + 0x10));
        }
        iVar9 = FUN_001a0808(0xd0,1);
        piVar6 = (int *)0x0;
        if (iVar9 != 0) {
          piVar6 = (int *)FUN_0006e06c(iVar9,s_Pulse_Generator_000c2510,0,DAT_000c250c,DAT_000c250c,
                                       DAT_000c250c,DAT_000c250c,DAT_000c250c);
          *piVar6 = _DAT_000c2520;
          piVar6[0x33] = iVar5;
          piVar6[0x30] = 0;
          piVar6[0x31] = iVar11;
          piVar6[0x32] = 10;
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        FUN_00154c18(piVar6,0xffffffff);
        piVar10 = *(int **)(iVar8 + 0x14);
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x2c))(piVar10,*(undefined4 *)(iVar8 + 0x10));
        }
        if (piVar6[0x30] != iVar11) {
          FUN_000028a4(s_a__ERROR__sent__d_pulses__reques_000c2521 + 3,piVar6[0x30],iVar11);
          FUN_0008b818(auStack_28);
          return 0;
        }
        if (*(int *)(param_1 + 0x14) != iVar11) {
          FUN_000028a4(s_ERROR__got__d_interrupts__expect_000c265c,*(int *)(param_1 + 0x14),iVar11);
          FUN_0008b818(auStack_28);
          return 0;
        }
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        FUN_000028a4(s_PASSED__sent_received__d_pulses_000c2684,iVar11);
        FUN_0008b818(auStack_28);
        return 0;
      }
    }
    FUN_000028a4(s_ERROR__unable_to_install_interru_000c25c8);
    FUN_0008b818(auStack_28);
    return 0;
  }
  FUN_000028a4(s_ERROR__could_not_get_receiver_GP_000c259c,uVar2);
  FUN_0008b818(auStack_28);
  return 0;
}

