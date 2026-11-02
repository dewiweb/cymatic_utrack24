// rea decompile_all
// name: FUN_000b88e4
// address: 0xb88e4
// body: available
// range: 0xb88e4-0xb89b7 inclusive
// range: 0x110984-0x110adb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb89b4 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b88e4(int param_1,int param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint *puVar8;
  uint *puVar9;
  
  if (*(char *)(param_1 + 0xf29) == '\0') {
    uVar3 = FUN_00110eec();
    uVar2 = FUN_00110ca4(uVar3,0,1);
    *(undefined1 *)(param_1 + 0xf29) = uVar2;
    uVar3 = FUN_00110eec();
    FUN_00110ca4(uVar3,2,1);
    iVar6 = _DAT_000b89b8;
    *(undefined1 *)(param_1 + 0xf29) = 1;
    if (*(int **)(iVar6 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar6 + 8) + 0x10))();
      if (*(int **)(iVar6 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar6 + 8) + 4))();
      }
      *(undefined4 *)(iVar6 + 8) = 0;
    }
    iVar4 = FUN_001a0808(200,1);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_0014a4ec();
    }
    *(int **)(iVar6 + 8) = piVar5;
    (**(code **)(*piVar5 + 8))();
  }
  if (param_2 != 3) {
    iVar6 = FUN_00110eec();
    if (*(char *)(iVar6 + 0x29) == '\0') {
      *(undefined1 *)(iVar6 + 0x29) = 1;
    }
    puVar1 = DAT_00110adc;
    puVar8 = DAT_00110adc + 0x10;
    puVar9 = DAT_00110adc + 0x22c0;
    if (param_2 == 1) {
      FUN_00110ca4(iVar6,0,1,extraout_r3,unaff_r4,unaff_r5,unaff_r6);
      FUN_00110ca4(iVar6,2,1);
      *puVar1 = *puVar1 & 0x7fffffff;
      *puVar8 = *puVar8 | 0x80000000;
      iVar6 = FUN_00050d28(iVar6 + 0x60);
      if (iVar6 == 0) {
        pcVar7 = s_FAILED_00110ae4;
      }
      else {
        pcVar7 = &DAT_00110ae0;
      }
      uVar3 = FUN_000028a4(s_SDATA_test__s_00110aec,pcVar7);
    }
    else if (param_2 == 2) {
      iVar6 = FUN_000510fc(iVar6 + 0x60);
      if (iVar6 == 0) {
        pcVar7 = s_FAILED_00110ae4;
      }
      else {
        pcVar7 = &DAT_00110ae0;
      }
      uVar3 = FUN_000028a4(s_I2C_Reg_test__s_00110b00,pcVar7);
    }
    else if (param_2 == 4) {
      FUN_00110ca4(iVar6,0,0,extraout_r3,unaff_r4,unaff_r5,unaff_r6);
      *puVar1 = *puVar1 | 0x80000000;
      FUN_00110ca4(iVar6,2,1);
      *puVar8 = *puVar8 & 0x7fffffff;
      *puVar9 = *puVar9 | 8;
      uVar3 = FUN_000028a4(s___>_Verify_clocks__LRCK___SCLK___00110b14);
    }
    else {
      uVar3 = FUN_000028a4(s_Unknown_test_mode__d_00110b4c,param_2);
    }
    return uVar3;
  }
  FUN_000426d8();
  uVar3 = thunk_FUN_000028a4(s_______>_Verify_clocks__LRCK___SC_000b89b9 + 3);
  return uVar3;
}

