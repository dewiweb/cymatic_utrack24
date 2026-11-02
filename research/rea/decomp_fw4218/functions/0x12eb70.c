// rea decompile_all
// name: FUN_0012eb70
// address: 0x12eb70
// body: available
// range: 0x12eb70-0x12ec9f inclusive
// range: 0x12eda0-0x12ef0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0012eb70(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_28 [8];
  int *local_20;
  
  uVar10 = FUN_00003d18(*param_2,s_status_0012eca0);
  uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      pcVar3 = s_SD_Ram_Stress_Thread_not_running_0012ed18;
      goto LAB_0012ec48;
    }
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xd0);
    pcVar3 = s_SD_Ram_Stress_Thread_running__er_0012ed3c;
  }
  else {
    if ((1 < param_3) && (iVar2 = FUN_00003d18(*param_2,s_start_0012eca8), iVar2 == 0)) {
      iVar2 = FUN_000032fc(param_2[1],0);
      uVar8 = 1;
      if ((param_3 == 3) && (iVar4 = FUN_00003d18(param_2[2],&DAT_0012ed6c), iVar4 == 0)) {
        uVar8 = 10;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_00002898(s_ERROR__SD_Ram_Stress_Thread_alre_0012ed70);
        return 0;
      }
      uVar8 = FUN_001f01c4(0x100000,uVar8);
      *(undefined4 *)(param_1 + 0x18) = uVar8;
      iVar4 = FUN_001f01c4(0xe8,1);
      piVar5 = (int *)0x0;
      if (iVar4 != 0) {
        iVar9 = *(int *)(param_1 + 0x18);
        piVar5 = (int *)FUN_0006f700(iVar4,s_SD_Ram_Stress_Test_0012ef10,0);
        *piVar5 = DAT_0012ef24;
        *(undefined1 *)(piVar5 + 0x32) = 0;
        piVar5[0x33] = 0;
        piVar5[0x37] = iVar2;
        piVar5[0x34] = 0;
        piVar5[0x35] = iVar9;
        piVar5[0x36] = 0x40000;
        uVar1 = DAT_0012ef28;
        piVar5[0x38] = 0;
        piVar5[0x31] = uVar1 >> 4 | uVar1 << 0x1c;
        piVar5[0x30] = uVar1;
        piVar5[0x39] = 0;
        puVar6 = (undefined4 *)FUN_000b1210(auStack_28);
        *puVar6 = _DAT_0012ef2c;
        uVar8 = FUN_000b4964();
        iVar2 = FUN_000b4840(uVar8,s___AudioHWService_0012ef2e + 2,auStack_28);
        if (iVar2 == 0) {
          FUN_00002898(s_ERROR__could_not_get_AudioHWServ_0012ef40);
          FUN_000b1228(auStack_28);
        }
        else {
          uVar8 = FUN_001dbf34();
          iVar2 = (**(code **)(*local_20 + 0x80))(local_20,uVar8,piVar5[0x37]);
          piVar5[0x38] = iVar2;
          if (iVar2 == 0) {
            FUN_00002898(s_ERROR__could_not_get_Sdram_Erorr_0012ef68,piVar5[0x37]);
            FUN_000b1228(auStack_28);
          }
          else {
            piVar7 = *(int **)(iVar2 + 0x14);
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 0xc))(piVar7,*(undefined4 *)(iVar2 + 0x10));
            }
            piVar7 = *(int **)(piVar5[0x38] + 0x14);
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 0x14))(piVar7,*(undefined4 *)(piVar5[0x38] + 0x10));
            }
            FUN_000b1228(auStack_28);
          }
        }
      }
      *(int **)(param_1 + 0x14) = piVar5;
      (**(code **)(*piVar5 + 8))();
      return 0;
    }
    uVar10 = FUN_00003d18(*param_2,&DAT_0012ecb0);
    uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 != 0) {
      return 6;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      pcVar3 = s_ERROR__SD_Ram_Stress_Thread_is_n_0012ecb8;
LAB_0012ec48:
      FUN_00002898(pcVar3,uVar8);
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 200) = 0;
    FUN_001b280c(*(undefined4 *)(param_1 + 0x14),1000);
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xd0);
    FUN_001eecc8(*(undefined4 *)(param_1 + 0x18));
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    }
    pcVar3 = s_SD_Ram_Stress_Thread_stopped__er_0012ece8;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_00002898(pcVar3,uVar8);
  return 0;
}

