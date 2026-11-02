// rea decompile_all
// name: FUN_0006e268
// address: 0x6e268
// body: available
// range: 0x6e268-0x6e4bb inclusive
// range: 0x6e5e4-0x6e74b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006e268(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  undefined1 auStack_48 [25];
  undefined1 local_2f;
  
  uVar1 = s_T___No_thread_created__0006e4bc._0_4_;
  iVar6 = *(int *)s_T___No_thread_created__0006e4bc._0_4_;
  pcVar11 = (char *)0x0;
  iVar9 = 6;
  iVar12 = 0;
  if (iVar6 == 0) {
    FUN_000028a4(s_T___No_thread_created__0006e4bc + 4);
  }
  else if (param_3 == 0) {
    FUN_000028a4(s__2s_25s_8s_5s_10s_7s_8s_11s_0006e510,&DAT_0006e50c,&DAT_0006e504,&DAT_0006e4fc,
                 s_state_0006e4f4,&DAT_0006e4f0,s_stackU_0006e4e8,s_stackT_0006e4e0,
                 s_stackStart_0006e4d4);
    uVar1 = FUN_000435ac(_DAT_0006e530 + -0x400);
    FUN_000028a4(s__2d_25s_23s_7d_8d_0006e548,1,s_A_supervisor_stack_0006e532 + 2,&DAT_0006e500,
                 uVar1,0x400);
    uVar1 = FUN_000435ac(_DAT_0006e55c + -0x180);
    FUN_000028a4(s__2d_25s_23s_7d_8d_0006e548,2,s_A_user_system_stack_0006e55e + 2,&DAT_0006e500,
                 uVar1,0x180);
    uVar1 = FUN_000435ac(_DAT_0006e574 + -0x180);
    FUN_000028a4(s__2d_25s_23s_7d_8d_0006e548,3,s_A_irq_stack_0006e576 + 2,&DAT_0006e500,uVar1,0x180
                );
    uVar1 = FUN_000435ac(_DAT_0006e584 + -0x20);
    FUN_000028a4(s__2d_25s_23s_7d_8d_0006e548,4,s_A_fiq_stack_0006e586 + 2,&DAT_0006e500,uVar1,0x20)
    ;
    uVar1 = FUN_000435ac(_DAT_0006e594 + -0x80);
    FUN_000028a4(s__2d_25s_23s_7d_8d_0006e548,5,s_A_abort_undef_stack_0006e596 + 2,&DAT_0006e500,
                 uVar1,0x80);
    FUN_000028a4(&DAT_0006e5ac);
    do {
      FUN_000028a4(&DAT_0006e5b0,iVar9);
      FUN_000038f4(auStack_48,*(undefined4 *)(iVar6 + 0x34),0x19);
      local_2f = 0;
      FUN_000028a4(&DAT_0006e5b4,auStack_48);
      FUN_000028a4(s__2d__2d__ld_0006e5bc,*(undefined4 *)(iVar6 + 0x38),
                   *(undefined4 *)(iVar6 + 0x48),*(undefined4 *)(iVar6 + 0x18));
      uVar2 = *(uint *)(iVar6 + 0x3c);
      if (((int)uVar2 < 0) || (0xd < uVar2)) {
        puVar4 = &DAT_0006e5d0;
      }
      else {
        puVar4 = *(undefined **)(DAT_0006e5cc + uVar2 * 4);
      }
      FUN_000028a4(&DAT_0006e5d4,puVar4);
      FUN_000028a4(s__10ld_0006e5d8,*(undefined4 *)(iVar6 + 4));
      if (*(int *)(iVar6 + 0x3c) == 2) {
        FUN_000028a4(s__7s_0006e74c,&DAT_0006e500);
      }
      else {
        pcVar5 = *(char **)(iVar6 + 0xc);
        pcVar13 = *(char **)(iVar6 + 0x10);
        iVar10 = 0;
        if (pcVar13 < pcVar5) {
          FUN_000028a4(DAT_0006e5e0,pcVar13);
        }
        iVar3 = 1;
        pcVar7 = pcVar5;
        if (1 < (int)(pcVar13 + (1 - (int)pcVar5))) {
          do {
            if (*pcVar7 != '2') break;
            iVar3 = iVar3 + 1;
            iVar10 = iVar10 + 1;
            pcVar7 = pcVar7 + 1;
          } while (iVar3 < (int)(pcVar13 + (1 - (int)pcVar5)));
        }
        pcVar13 = pcVar13 + (-iVar10 - (int)pcVar5);
        FUN_000028a4(&DAT_0006e754,pcVar13);
        iVar10 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc);
        if ((int)pcVar13 < iVar10 + -199) {
          puVar4 = &DAT_0006e758;
        }
        else {
          if (iVar10 + -99 <= (int)pcVar13) {
            FUN_000028a4(&DAT_0006e760);
            goto LAB_0006e658;
          }
          puVar4 = &DAT_0006e75c;
        }
        FUN_000028a4(puVar4);
      }
LAB_0006e658:
      if (*(int *)(iVar6 + 0x3c) == 2) {
        pcVar5 = &DAT_0006e500;
        puVar4 = &DAT_0006e764;
      }
      else {
        pcVar13 = *(char **)(iVar6 + 0xc);
        pcVar7 = *(char **)(iVar6 + 0x10);
        pcVar5 = pcVar7 + (1 - (int)pcVar13);
        iVar12 = iVar12 + (int)pcVar5;
        iVar10 = 0;
        if (pcVar7 < pcVar13) {
          FUN_000028a4(DAT_0006e5e0,pcVar7);
        }
        iVar3 = 1;
        pcVar8 = pcVar13;
        if (1 < (int)(pcVar7 + (1 - (int)pcVar13))) {
          do {
            if (*pcVar8 != '2') break;
            iVar3 = iVar3 + 1;
            iVar10 = iVar10 + 1;
            pcVar8 = pcVar8 + 1;
          } while (iVar3 < (int)(pcVar7 + (1 - (int)pcVar13)));
        }
        pcVar11 = pcVar7 + (int)(pcVar11 + (-iVar10 - (int)pcVar13));
        puVar4 = &DAT_0006e768;
      }
      FUN_000028a4(puVar4,pcVar5);
      if (*(int *)(iVar6 + 0x3c) == 2) {
        puVar4 = &DAT_0006e500;
        pcVar5 = &DAT_0006e76c;
      }
      else {
        puVar4 = *(undefined **)(iVar6 + 0xc);
        pcVar5 = s_0x_08x_0006e770;
      }
      FUN_000028a4(pcVar5,puVar4);
      FUN_000028a4(&DAT_0006e5ac);
      iVar6 = *(int *)(iVar6 + 0x94);
      iVar9 = iVar9 + 1;
    } while (*(int *)s_T___No_thread_created__0006e4bc._0_4_ != iVar6);
    FUN_000028a4(s__22s_30ld_8ld_0006e780,s_Totals_0006e778,pcVar11,iVar12);
    FUN_000028a4(DAT_0006e790,200,100);
  }
  else {
    iVar12 = FUN_0000317c(*param_2);
    do {
      if (iVar12 == iVar9) {
        FUN_00185944(0,*(undefined4 *)(iVar6 + 8),iVar6);
        return 0;
      }
      iVar6 = *(int *)(iVar6 + 0x94);
      iVar9 = iVar9 + 1;
    } while (*(int *)uVar1 != iVar6 && iVar6 != 0);
  }
  return 0;
}

