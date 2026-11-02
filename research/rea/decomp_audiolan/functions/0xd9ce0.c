// rea decompile_all
// name: FUN_000d9ce0
// address: 0xd9ce0
// body: available
// range: 0xd9ce0-0xd9e0f inclusive
// range: 0xd9f10-0xda07b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d9ce0(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_28 [8];
  int *local_20;
  
  uVar9 = FUN_00003960(*param_2,s_status_000d9e10);
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      pcVar3 = s_SD_Ram_Stress_Thread_not_running_000d9e88;
      goto LAB_000d9db8;
    }
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xd0);
    pcVar3 = s_SD_Ram_Stress_Thread_running__er_000d9eac;
  }
  else {
    if ((1 < param_3) && (iVar2 = FUN_00003960(*param_2,s_start_000d9e18), iVar2 == 0)) {
      iVar2 = FUN_00003220(param_2[1],0);
      uVar7 = 1;
      if ((param_3 == 3) && (iVar4 = FUN_00003960(param_2[2],&DAT_000d9edc), iVar4 == 0)) {
        uVar7 = 10;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_000028a4(s_ERROR__SD_Ram_Stress_Thread_alre_000d9ee0);
        return 0;
      }
      uVar7 = FUN_001a0808(0x100000,uVar7);
      *(undefined4 *)(param_1 + 0x18) = uVar7;
      iVar4 = FUN_001a0808(0xe8,1);
      piVar5 = (int *)0x0;
      if (iVar4 != 0) {
        iVar8 = *(int *)(param_1 + 0x18);
        piVar5 = (int *)FUN_0006e06c(iVar4,s_SD_Ram_Stress_Test_000da080,0);
        *piVar5 = DAT_000da094;
        *(undefined1 *)(piVar5 + 0x32) = 0;
        piVar5[0x33] = 0;
        piVar5[0x37] = iVar2;
        piVar5[0x34] = 0;
        piVar5[0x35] = iVar8;
        piVar5[0x36] = 0x40000;
        uVar1 = DAT_000da098;
        piVar5[0x38] = 0;
        piVar5[0x31] = uVar1 >> 4 | uVar1 << 0x1c;
        piVar5[0x30] = uVar1;
        piVar5[0x39] = 0;
        pcVar3 = (char *)FUN_0008b800(auStack_28);
        *(undefined4 *)pcVar3 = s_l0__AudioHWService_000da09c._0_4_;
        uVar7 = FUN_0008cf78();
        iVar2 = FUN_0008ce54(uVar7,s_l0__AudioHWService_000da09c + 4,auStack_28);
        if (iVar2 == 0) {
          FUN_000028a4(s_ERROR__could_not_get_AudioHWServ_000da0b0);
          FUN_0008b818(auStack_28);
        }
        else {
          uVar7 = FUN_0018afd4();
          iVar2 = (**(code **)(*local_20 + 0x80))(local_20,uVar7,piVar5[0x37]);
          piVar5[0x38] = iVar2;
          if (iVar2 == 0) {
            FUN_000028a4(s_ERROR__could_not_get_Sdram_Erorr_000da0d8,piVar5[0x37]);
            FUN_0008b818(auStack_28);
          }
          else {
            piVar6 = *(int **)(iVar2 + 0x14);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0xc))(piVar6,*(undefined4 *)(iVar2 + 0x10));
            }
            piVar6 = *(int **)(piVar5[0x38] + 0x14);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(piVar5[0x38] + 0x10));
            }
            FUN_0008b818(auStack_28);
          }
        }
      }
      *(int **)(param_1 + 0x14) = piVar5;
      (**(code **)(*piVar5 + 8))();
      return 0;
    }
    uVar9 = FUN_00003960(*param_2,&DAT_000d9e20);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      return 6;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      pcVar3 = s_ERROR__SD_Ram_Stress_Thread_is_n_000d9e28;
LAB_000d9db8:
      FUN_000028a4(pcVar3,uVar7);
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 200) = 0;
    FUN_00154c18(*(undefined4 *)(param_1 + 0x14),1000);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xd0);
    FUN_0019f30c(*(undefined4 *)(param_1 + 0x18));
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    }
    pcVar3 = s_SD_Ram_Stress_Thread_stopped__er_000d9e58;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_000028a4(pcVar3,uVar7);
  return 0;
}

