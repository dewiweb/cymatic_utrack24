// rea decompile_all
// name: FUN_00051830
// address: 0x51830
// body: available
// range: 0x51830-0x51abd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00051830(void)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [2];
  undefined4 local_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  int *local_18;
  
  iVar2 = DAT_00051ac0;
  if (*(int *)(DAT_00051ac0 + 8) == 0) {
    iVar4 = FUN_001f01c4(0x154,1);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_001433ac();
    }
    *(undefined4 *)(iVar2 + 8) = uVar5;
  }
  uVar5 = FUN_001db1b4(1);
  FUN_001c6cb8(DAT_00051ac4,uVar5);
  FUN_00026456();
  uVar5 = FUN_001db214(1);
  iVar4 = FUN_0002627c(DAT_00051ac8,uVar5,1);
  if (iVar4 == 0) {
    pcVar10 = s_ERROR__PTP__InitEPL__EPLEnumDevi_00051ae0;
  }
  else {
    iVar4 = FUN_00026440(iVar4,0);
    *(int *)(iVar2 + 0xc) = iVar4;
    if (iVar4 != 0) {
      FUN_0003d45c(1);
      FUN_0003cfbc(*(undefined4 *)(iVar2 + 0xc),1,0xfa,0,8);
      FUN_0003ceba(*(undefined4 *)(iVar2 + 0xc),1);
      FUN_0003cd34(*(undefined4 *)(iVar2 + 0xc),3);
      FUN_0003d314(*(undefined4 *)(iVar2 + 0xc),3,3,1);
      puVar6 = (undefined4 *)FUN_000b1210(auStack_20);
      *puVar6 = _DAT_00051acc;
      uVar5 = FUN_000b4964();
      iVar4 = FUN_000b4840(uVar5,s___AudioHWService_00051ace + 2,auStack_20);
      if (iVar4 == 0) {
        FUN_00002898(s_ERROR__PTP__InitEPL__Could_not_g_00051b78);
      }
      else {
        uVar5 = FUN_001db8f8();
        uVar7 = FUN_001dbf34();
        iVar4 = (**(code **)(*local_18 + 0x80))(local_18,uVar7,uVar5);
        if (iVar4 == 0) {
          pcVar10 = s_j__ERROR__PTP__InitEPL__Could_no_00051b39 + 3;
        }
        else {
          local_30 = 2;
          uVar5 = FUN_0003d3d8();
          piVar8 = *(int **)(iVar4 + 0x14);
          pcVar10 = _DAT_00051b38;
          if ((piVar8 != (int *)0x0) &&
             (iVar9 = (**(code **)(*piVar8 + 0x20))
                                (piVar8,*(undefined4 *)(iVar4 + 0x10),local_30,uVar5,0),
             pcVar10 = _DAT_00051b38, iVar9 != 0)) {
            piVar8 = *(int **)(iVar4 + 0x14);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x28))(piVar8,*(undefined4 *)(iVar4 + 0x10));
            }
            goto LAB_0005193e;
          }
        }
        FUN_00002898(pcVar10);
      }
LAB_0005193e:
      FUN_0003cd84(*(undefined4 *)(iVar2 + 0xc),local_38,auStack_28);
      local_38[0] = local_38[0] + 2;
      FUN_0003d44c();
      local_3c = 0;
      local_40 = DAT_00051bb4;
      FUN_0003cc46(*(undefined4 *)(iVar2 + 0xc),3,local_38[0],0,0,0);
      FUN_000b1228(auStack_20);
      goto LAB_0005196e;
    }
    pcVar10 = s_ERROR__PTP__InitEPL__EPLEnumPort_00051b0c;
  }
  FUN_00002898(pcVar10);
LAB_0005196e:
  FUN_0003b49c(DAT_00051bb8,0,1);
  uVar3 = FUN_0004b604();
  *(undefined1 *)(iVar2 + 2) = uVar3;
  FUN_0003b708(0);
  FUN_0003b7dc(1);
  FUN_0003b808(1);
  FUN_0003bacc(1);
  FUN_00003c58(DAT_00051bbc,0x100);
  FUN_001f9230(DAT_00051bcc,0x1e,s_PTP2_Queue_00051bc0);
  uVar5 = FUN_001f93a2(s__PTP_Timer_00051bd3 + 1,_DAT_00051bd0,0,0xffffffff,0xffffffff);
  local_3c = FUN_001f93a2(s__PTP_Forwarder_00051be3 + 1,_DAT_00051be0,0,0xffffffff,0xffffffff);
  uVar7 = FUN_001db66c(0);
  FUN_001dead4(uVar7,DAT_00051bf4);
  FUN_001deaa8(uVar7,DAT_00051bf8);
  FUN_001deb00(uVar7,DAT_00051bfc);
  iVar4 = FUN_001edbe8(0x20,0);
  if (iVar4 != 0) {
    local_40 = DAT_00051c00;
    iVar9 = FUN_001eda90(iVar4,&local_40,0);
    if (iVar9 != 0) {
      FUN_00002898(s_ERROR__PTP__Failed_joining_multi_00051c04);
    }
    local_40 = _DAT_00051c3c;
    iVar9 = FUN_001eda90(iVar4,&local_40,0);
    if (iVar9 != 0) {
      FUN_00002898(s_kERROR__PTP__Failed_joining_mult_00051c3f + 1);
    }
    FUN_001ed648(iVar4);
  }
  cVar1 = *(char *)(iVar2 + 1);
  while (cVar1 == '\0') {
    FUN_0003b518(DAT_00051bb8);
    FUN_0003b7bc();
    cVar1 = *(char *)(iVar2 + 1);
  }
  FUN_001f3a4c(1,DAT_00051bf4);
  FUN_001f3a20(1,DAT_00051bf8);
  FUN_001f3a78(1,DAT_00051bfc);
  uVar7 = 200;
  while( true ) {
    FUN_001d0130(uVar7);
    iVar4 = FUN_001f9394(uVar5);
    if (iVar4 == 0) break;
    uVar7 = 100;
  }
  while (iVar4 = FUN_001f9394(local_3c), iVar4 != 0) {
    FUN_001d0130(100);
  }
  FUN_001f9220(DAT_00051bcc);
  FUN_0003b6f0();
  FUN_0003b494(DAT_00051bb8);
  piVar8 = *(int **)(iVar2 + 8);
  if (piVar8 != (int *)0x0) {
    *(undefined4 *)(iVar2 + 8) = 0;
    FUN_001d0130(1);
    (**(code **)(*piVar8 + 0x10))(piVar8);
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  return;
}

