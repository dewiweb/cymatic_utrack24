// rea decompile_all
// name: FUN_0013b5a0
// address: 0x13b5a0
// body: available
// range: 0x13b5a0-0x13b6af inclusive
// range: 0x13b7e0-0x13b86b inclusive
// range: 0x13b8c0-0x13b9a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0013b5a0(int param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_28 [8];
  int *local_20;
  
  puVar2 = (undefined4 *)FUN_000b1210(auStack_28);
  *puVar2 = _DAT_0013b6b0;
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___AudioHWService_0013b6b2 + 2,auStack_28);
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__Could_NOT_retrieve_AudioH_0013b6fc);
    goto LAB_0013b938;
  }
  pcVar5 = (char *)FUN_000032fc(*param_2,0);
  iVar4 = (**(code **)(*local_20 + 0x70))(local_20,pcVar5);
  if (iVar4 == 0) {
    pcVar7 = s_ERROR__Could_not_retrieve_AV_Int_0013b6c4;
  }
  else if (param_3 < 3) {
    if (param_3 < 2) {
LAB_0013b844:
      FUN_000b1228(auStack_28);
      return 6;
    }
    iVar6 = FUN_00003d18(param_2[1],&DAT_0013b9a4);
    if (iVar6 != 0) {
      iVar6 = FUN_00003d18(param_2[1],s_enable_0013b9ac);
      if (iVar6 == 0) {
        cVar1 = *(char *)(iVar4 + 0x6c);
        if ((cVar1 == '\x01') ||
           ((cVar1 != '\x02' &&
            (((cVar1 != '\x03' && (cVar1 == '\x04')) || (*(char *)(iVar4 + 0x6d) != '\x01')))))) {
          *(undefined1 *)(iVar4 + 0x6d) = 1;
          (**(code **)(*(int *)(iVar4 + 0x50) + 8))();
          pcVar5 = s_Sample_rate___signal_detection_e_0013ba24;
        }
        else {
          pcVar5 = s_ERROR__Could_not_enable_observer_0013ba4c;
        }
      }
      else {
        iVar6 = FUN_00003d18(param_2[1],s_disable_0013b9b4);
        if (iVar6 != 0) goto LAB_0013b844;
        cVar1 = *(char *)(iVar4 + 0x6c);
        if ((cVar1 == '\x01') ||
           ((cVar1 != '\x02' &&
            (((cVar1 != '\x03' && (cVar1 == '\x04')) || (*(char *)(iVar4 + 0x6d) != '\0')))))) {
          *(undefined1 *)(iVar4 + 0x6d) = 0;
          (**(code **)(*(int *)(iVar4 + 0x50) + 8))();
          pcVar5 = s_Sample_rate___signal_detection_d_0013ba70;
        }
        else {
          pcVar5 = s_ERROR__Could_not_disable_sample_r_0013ba9c;
        }
      }
      FUN_00002898(pcVar5);
      goto LAB_0013b938;
    }
    switch(*(uint *)(iVar4 + 0xd0) & 0xff) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00002898(s__z___z__0z__4z__<z*__z*_Hz*_Lz*__0013b9bc + 0x20,
                 s__z___z__0z__4z__<z*__z*_Hz*_Lz*__0013b9bc._28_4_);
    if (*(char *)(iVar4 + 0x8d) == '\0') {
      pcVar5 = s_false_0013ba04;
    }
    else {
      pcVar5 = (char *)0x13b9fc;
    }
    pcVar7 = s_Signal_available____s_0013ba0c;
  }
  else {
    iVar6 = FUN_00003d18(param_2[1],s_observer_0013b6f0);
    if (iVar6 != 0) goto LAB_0013b938;
    iVar6 = FUN_00003d18(param_2[2],&DAT_0013b728);
    if (iVar6 != 0) {
      iVar6 = FUN_00003d18(param_2[2],s_remove_0013b72c);
      if (iVar6 != 0) goto LAB_0013b844;
      FUN_0005b2a4(iVar4 + 0xb0,param_1 + 0x14);
      FUN_0005b2a4(iVar4 + 0x70,param_1 + 0x14);
      goto LAB_0013b938;
    }
    iVar6 = FUN_0005b1b8(iVar4 + 0xb0,param_1 + 0x14);
    if (iVar6 == 0) {
      pcVar7 = s_ERROR__Could_not_add_sample_rate_0013b764;
    }
    else {
      pcVar7 = s_Sample_rate_observer_of_AV_Inter_0013b734;
    }
    FUN_00002898(pcVar7,pcVar5);
    iVar4 = FUN_0005b1b8(iVar4 + 0x70,param_1 + 0x14);
    pcVar7 = DAT_0013b7dc;
    if (iVar4 != 0) {
      pcVar7 = s_Signal_available_observer_of_AV_I_0013b7a4;
    }
  }
  FUN_00002898(pcVar7,pcVar5);
LAB_0013b938:
  FUN_000b1228(auStack_28);
  return 0;
}

