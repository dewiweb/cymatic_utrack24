// rea decompile_all
// name: FUN_0004a8ec
// address: 0x4a8ec
// body: available
// range: 0x4a8ec-0x4ab79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004a8ec(void)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [2];
  undefined4 local_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  int *local_18;
  
  iVar2 = DAT_0004ab7c;
  if (*(int *)(DAT_0004ab7c + 8) == 0) {
    iVar4 = FUN_001a0808(0x154,1);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_000e3884();
    }
    *(undefined4 *)(iVar2 + 8) = uVar5;
  }
  uVar5 = FUN_0018a740(1);
  FUN_0016d964(DAT_0004ab80,uVar5);
  FUN_0002114e();
  uVar5 = FUN_0018a7a0(1);
  iVar4 = FUN_00020f74(_DAT_0004ab84,uVar5,1);
  if (iVar4 == 0) {
    pcVar6 = s_ERROR__PTP__InitEPL__EPLEnumDevi_0004ab9c;
  }
  else {
    iVar4 = FUN_00021138(iVar4,0);
    *(int *)(iVar2 + 0xc) = iVar4;
    if (iVar4 != 0) {
      FUN_000377bc(1);
      FUN_00037364(*(undefined4 *)(iVar2 + 0xc),1,0xfa,0,8);
      FUN_00037262(*(undefined4 *)(iVar2 + 0xc),1);
      FUN_000370dc(*(undefined4 *)(iVar2 + 0xc),3);
      FUN_000376bc(*(undefined4 *)(iVar2 + 0xc),3,3,1);
      pcVar6 = (char *)FUN_0008b800(auStack_20);
      *(undefined4 *)pcVar6 = s____l0__AudioHWService_0004ab85._3_4_;
      uVar5 = FUN_0008cf78();
      iVar4 = FUN_0008ce54(uVar5,s____l0__AudioHWService_0004ab85 + 7,auStack_20);
      if (iVar4 == 0) {
        FUN_000028a4(s_ERROR__PTP__InitEPL__Could_not_g_0004ac34);
      }
      else {
        uVar5 = FUN_0018ada8();
        uVar7 = FUN_0018afd4();
        iVar4 = (**(code **)(*local_18 + 0x80))(local_18,uVar7,uVar5);
        if (iVar4 == 0) {
          pcVar6 = s___ERROR__PTP__InitEPL__Could_not_0004abf6 + 2;
        }
        else {
          local_30 = 2;
          uVar5 = FUN_00037780();
          piVar8 = *(int **)(iVar4 + 0x14);
          pcVar6 = _DAT_0004abf4;
          if ((piVar8 != (int *)0x0) &&
             (iVar9 = (**(code **)(*piVar8 + 0x20))
                                (piVar8,*(undefined4 *)(iVar4 + 0x10),local_30,uVar5,0),
             pcVar6 = _DAT_0004abf4, iVar9 != 0)) {
            piVar8 = *(int **)(iVar4 + 0x14);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x28))(piVar8,*(undefined4 *)(iVar4 + 0x10));
            }
            goto LAB_0004a9fa;
          }
        }
        FUN_000028a4(pcVar6);
      }
LAB_0004a9fa:
      FUN_0003712c(*(undefined4 *)(iVar2 + 0xc),local_38,auStack_28);
      local_38[0] = local_38[0] + 2;
      FUN_000377ac();
      local_3c = 0;
      local_40 = DAT_0004ac70;
      FUN_00036fee(*(undefined4 *)(iVar2 + 0xc),3,local_38[0],0,0,0);
      FUN_0008b818(auStack_20);
      goto LAB_0004aa2a;
    }
    pcVar6 = s_ERROR__PTP__InitEPL__EPLEnumPort_0004abc8;
  }
  FUN_000028a4(pcVar6);
LAB_0004aa2a:
  FUN_00035778(DAT_0004ac74,0,1);
  uVar3 = FUN_00045004();
  *(undefined1 *)(iVar2 + 2) = uVar3;
  FUN_0003595c(0);
  FUN_00035a30(1);
  FUN_00035a5c(1);
  FUN_00035e00(1);
  FUN_000038a0(DAT_0004ac78,0x100);
  FUN_001b0c5c(DAT_0004ac88,0x1e,s_PTP2_Queue_0004ac7c);
  uVar5 = FUN_001b0dce(s__PTP_Timer_0004ac8f + 1,_DAT_0004ac8c,0,0xffffffff,0xffffffff);
  local_3c = FUN_001b0dce(s__PTP_Forwarder_0004ac9f + 1,_DAT_0004ac9c,0,0xffffffff,0xffffffff);
  uVar7 = FUN_0018ab18(0);
  FUN_0018dc6c(uVar7,DAT_0004acb0);
  FUN_0018dc40(uVar7,DAT_0004acb4);
  FUN_0018dc98(uVar7,DAT_0004acb8);
  iVar4 = FUN_0019dc00(0x20,0);
  if (iVar4 != 0) {
    local_40 = DAT_0004acbc;
    iVar9 = FUN_0019daa8(iVar4,&local_40,0);
    if (iVar9 != 0) {
      FUN_000028a4(s_ERROR__PTP__Failed_joining_multi_0004acc0);
    }
    local_40 = _DAT_0004acf8;
    iVar9 = FUN_0019daa8(iVar4,&local_40,0);
    if (iVar9 != 0) {
      FUN_000028a4(s_kERROR__PTP__Failed_joining_mult_0004acfb + 1);
    }
    FUN_0019d660(iVar4);
  }
  cVar1 = *(char *)(iVar2 + 1);
  while (cVar1 == '\0') {
    FUN_000357f4(DAT_0004ac74);
    FUN_00035a10();
    cVar1 = *(char *)(iVar2 + 1);
  }
  FUN_001ab930(1,DAT_0004acb0);
  FUN_001ab904(1,DAT_0004acb4);
  FUN_001ab95c(1,DAT_0004acb8);
  uVar7 = 200;
  while( true ) {
    FUN_0017b9f8(uVar7);
    iVar4 = FUN_001b0dc0(uVar5);
    if (iVar4 == 0) break;
    uVar7 = 100;
  }
  while (iVar4 = FUN_001b0dc0(local_3c), iVar4 != 0) {
    FUN_0017b9f8(100);
  }
  FUN_001b0c4c(DAT_0004ac88);
  FUN_00035944();
  FUN_00035770(DAT_0004ac74);
  piVar8 = *(int **)(iVar2 + 8);
  if (piVar8 != (int *)0x0) {
    *(undefined4 *)(iVar2 + 8) = 0;
    FUN_0017b9f8(1);
    (**(code **)(*piVar8 + 0x10))(piVar8);
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  return;
}

