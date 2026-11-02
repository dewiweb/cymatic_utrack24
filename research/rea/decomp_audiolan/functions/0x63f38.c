// rea decompile_all
// name: FUN_00063f38
// address: 0x63f38
// body: available
// range: 0x63f38-0x6430b inclusive
// range: 0x643b0-0x643c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00063f38(int *param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  int *piStack_30;
  int iStack_2c;
  uint local_28;
  
  piStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  if (*DAT_0006430c == '\0') {
    FUN_000028a4(s___No_SDS_available_00064316 + 2);
    return 0;
  }
  if (param_3 == 0) {
    return 2;
  }
  iVar12 = *DAT_00064310;
  if (iVar12 == 0) {
    return 1;
  }
  bVar2 = false;
  uStack_7c = _DAT_00064314;
  uStack_98 = _DAT_00064314;
  iStack_94 = 0;
  uVar11 = 0;
  uVar10 = 0;
  bVar1 = false;
  if (param_3 != 0) {
    do {
      if (**(char **)(param_2 + uVar10 * 4) != '-') {
        FUN_00065b7c(&uStack_98);
        while ((uVar10 = uVar10 + 1, uVar10 < param_3 && (**(char **)(param_2 + uVar10 * 4) != '-'))
              ) {
          iStack_84 = iStack_94;
          if (iStack_94 == 0) {
            iStack_84 = DAT_0006432c;
          }
          auStack_88[0] = 2;
          auStack_a8[0] = 2;
          iStack_a4 = DAT_00064330;
          FUN_00065b94(&uStack_98,auStack_88,auStack_a8);
          auStack_a8[0] = 2;
          iStack_a4 = iStack_94;
          if (iStack_94 == 0) {
            iStack_a4 = DAT_0006432c;
          }
          iStack_84 = *(undefined4 *)(param_2 + uVar10 * 4);
          auStack_88[0] = 2;
          FUN_00065b94(&uStack_98,auStack_a8,auStack_88);
        }
        bVar1 = true;
        if (param_3 <= uVar10) goto LAB_000640e0;
      }
      do {
        iVar3 = FUN_00003960(*(undefined4 *)(param_2 + uVar10 * 4),DAT_00064334);
        if (iVar3 == 0) {
          bVar2 = true;
        }
        iVar3 = FUN_00003960(*(undefined4 *)(param_2 + uVar10 * 4),DAT_00064338);
        if (iVar3 == 0) {
          uVar11 = 1;
        }
        iVar3 = FUN_00003960(*(undefined4 *)(param_2 + uVar10 * 4),DAT_0006433c);
        if (iVar3 == 0) {
          uVar11 = 0;
        }
        uVar10 = uVar10 + 1;
        if (param_3 <= uVar10) {
          if (!bVar1) goto LAB_000640d4;
          goto LAB_000640e0;
        }
      } while (bVar1);
    } while( true );
  }
LAB_000640d4:
  FUN_00065b7c(&uStack_98,DAT_00064330);
LAB_000640e0:
  iVar3 = DAT_0006432c;
  if (iStack_94 != 0) {
    iVar3 = iStack_94;
  }
  iVar4 = FUN_000034d0(iVar3);
  if (*(char *)(iVar4 + iVar3 + -1) == '*') {
    iVar12 = (**(code **)(*piStack_30 + 0x20))(piStack_30,9,iStack_2c,local_28);
    uStack_98 = uStack_7c;
    FUN_0019f30c(iStack_94);
    return iVar12;
  }
  iVar5 = FUN_000034d0(iVar3);
  pcVar6 = (char *)(iVar3 + iVar5);
  FUN_000e1e1c(auStack_68,iVar12 + 0xfc);
  uVar7 = FUN_001b987c(auStack_50,0);
  FUN_0014f7b8(auStack_78,uVar7);
  FUN_001b98a8(auStack_50);
  iVar4 = iVar5;
  while ((iVar4 != 0 && (pcVar6 = pcVar6 + -1, *pcVar6 != '/' && *pcVar6 != '\\'))) {
    iVar4 = iVar4 + -1;
  }
  iVar5 = FUN_000b285c(piStack_30,iVar3,iVar5 - iVar4);
  if (iVar5 == 0) {
    iVar8 = FUN_0015c970(iVar12 + 0xfc);
    do {
      if (iVar8 == 0) {
        FUN_000028a4(s_No_leaf_name___s__found_000643c8,iVar3);
        goto LAB_00064188;
      }
      iVar8 = iVar8 + -1;
      FUN_000e1cfc(iVar12 + 0xfc,iVar8);
      FUN_0015c8fc(iVar12 + 0xfc,auStack_78);
      iVar9 = FUN_001609a4(auStack_78,iVar3 + iVar4);
    } while (iVar9 == 0);
    iVar3 = FUN_0015c938(iVar12 + 0xfc);
    iVar4 = FUN_000a5a68(auStack_48,auStack_78);
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == 0) {
      iVar4 = *DAT_00064340;
    }
    FUN_000028a4(s_Name___s___00064344,iVar4);
    FUN_001bbfc8(auStack_48);
    if (bVar2) {
      FUN_000028a4(s_Index__d__00064354,iVar8);
      if (iVar3 != 0) {
        FUN_000028a4(s_Type___s__00064360,*(undefined4 *)(iVar3 + 4));
      }
      uVar7 = FUN_0015ca98(iVar12 + 0xfc);
      iVar3 = FUN_0015cb50(iVar12 + 0xfc);
      if (iVar3 == 0) {
        pcVar6 = s_NO_Prop_00064378;
      }
      else {
        pcVar6 = s_Prop_set_0006436c;
      }
      FUN_000028a4(s___s___d_Proxies__00064380,pcVar6,uVar7);
    }
    FUN_000028a4(s_Value__00064394);
    iVar3 = FUN_0015cb14(iVar12 + 0xfc,uVar11);
    if (iVar3 == 0) {
      FUN_000028a4(s_not_printable_000643a0);
      iVar5 = 1;
    }
    FUN_000028a4(s___No_SDS_available_00064316 + 0x12);
  }
LAB_00064188:
  FUN_000e1e54(iVar12 + 0xfc,auStack_68);
  FUN_0014f868(auStack_78);
  FUN_000e1e40(auStack_68);
  uStack_98 = uStack_7c;
  FUN_0019f30c(iStack_94);
  return iVar5;
}

