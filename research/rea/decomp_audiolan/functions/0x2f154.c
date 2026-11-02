// rea decompile_all
// name: FUN_0002f154
// address: 0x2f154
// body: available
// range: 0x2f154-0x2f54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f154(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  byte *local_4c;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  ushort local_3c [2];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  undefined1 auStack_30 [28];
  
  uVar7 = DAT_0002f550;
  iVar13 = *(int *)(param_2 + 0xc);
  uVar12 = (uint)CONCAT11(*(undefined1 *)(iVar13 + 0x2a),*(undefined1 *)(iVar13 + 0x2b));
  if ((uVar12 != *(ushort *)(*param_1 + 2)) && (uVar12 != DAT_0002f54c)) {
    iVar13 = FUN_00030b90(DAT_0002f550);
    if (iVar13 != 0) {
      FUN_00029e6c(uVar7);
      FUN_00029eac(4,DAT_0002f554);
    }
    return;
  }
  if ((*(byte *)(iVar13 + 0x2e) & 0xf) != 0) {
    FUN_000358f6(*(undefined2 *)(iVar13 + 0x34));
    cVar1 = *(char *)(iVar13 + 0x2c);
    cVar2 = *(char *)(iVar13 + 0x2d);
    uVar6 = FUN_000358f6(*(undefined2 *)(iVar13 + 0x1e));
    FUN_0002fef8(param_1,uVar6,iVar13 + 0x14,cVar1 - cVar2);
    uVar7 = DAT_0002f550;
    iVar13 = FUN_00030b90(DAT_0002f550);
    if (iVar13 == 0) {
      return;
    }
    FUN_00029e6c(uVar7);
    uVar7 = 4;
    pcVar11 = DAT_0002f55c;
    goto LAB_0002f204;
  }
  iVar8 = FUN_00030b90(_DAT_0002f560);
  if (iVar8 != 0) {
    FUN_00029e6c(_DAT_0002f560);
    FUN_00029eac(6,s__MM__USER_DESCRIPTION_management_0002f563 + 1);
  }
  local_48 = param_1;
  local_40 = FUN_000358f6(*(undefined2 *)(iVar13 + 0x1e));
  local_40 = local_40 & 0xffff;
  cVar1 = *(char *)(iVar13 + 0x2c) - *(char *)(iVar13 + 0x2d);
  local_4c = (byte *)0x0;
  local_44 = 0;
  FUN_000358a2(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_,0,1000);
  uVar5 = s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._4_4_;
  uVar7 = s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_;
  FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + 0x22,iVar13 + 0x14,10);
  *(char *)(uVar7 + 0x2c) = cVar1;
  *(char *)(uVar7 + 0x2d) = cVar1;
  *(undefined1 *)(uVar7 + 0x2e) = 2;
  local_38[0] = 0x8000;
  local_38[0] = FUN_0003586c();
  FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._8_4_,local_38,2);
  iVar13 = FUN_000259dc(&local_4c);
  if (iVar13 == 0) {
LAB_0002f504:
    FUN_000358f6(*(undefined2 *)(uVar5 + 4));
    FUN_0002fef8(local_48,local_40,uVar7 + 0x14,*(char *)(uVar7 + 0x2c) - *(char *)(uVar7 + 0x2d));
  }
  else {
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._12_4_,local_4c,1);
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._16_4_,*(undefined4 *)(local_4c + 4),
                 *local_4c);
    bVar3 = *local_4c;
    uVar12 = bVar3 + 0x39;
    if ((999 < uVar12) ||
       (puVar9 = (undefined2 *)FUN_000259b8(1,local_3c), puVar9 == (undefined2 *)0x0))
    goto LAB_0002f504;
    local_34[0] = FUN_0003586c(local_3c[0]);
    FUN_0003589a(uVar7 + uVar12,local_34,2);
    iVar13 = bVar3 + 0x3b;
    if (999 < iVar13 + (uint)local_3c[0]) goto LAB_0002f35a;
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + iVar13,puVar9);
    uVar12 = iVar13 + (uint)local_3c[0] & 0xffff;
    FUN_00035818(puVar9);
    if (999 < uVar12) goto LAB_0002f504;
    puVar9 = (undefined2 *)FUN_00035892(0x14);
    iVar13 = FUN_00025a2c(1,puVar9);
    if (iVar13 == 0) {
LAB_0002f35a:
      FUN_00035818(puVar9);
      goto LAB_0002f504;
    }
    uVar10 = (ushort)puVar9[1] + 4 & 0xffff;
    uVar6 = FUN_0003586c(*puVar9);
    *puVar9 = uVar6;
    uVar6 = FUN_0003586c(puVar9[1]);
    puVar9[1] = uVar6;
    if ((999 < uVar12 + uVar10) || (0x14 < uVar10)) goto LAB_0002f35a;
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + uVar12,puVar9,uVar10);
    uVar12 = uVar12 + uVar10 & 0xffff;
    FUN_00035818(puVar9);
    if ((999 < uVar12) || (iVar13 = FUN_000259a4(&local_44), iVar13 == 0)) goto LAB_0002f504;
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + uVar12,local_44,3);
    uVar12 = uVar12 + 4 & 0xffff;
    if ((999 < uVar12) || (iVar13 = FUN_000259ec(&local_4c), iVar13 == 0)) goto LAB_0002f504;
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + uVar12,local_4c,1);
    uVar12 = uVar12 + 1 & 0xffff;
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + uVar12,
                 *(undefined4 *)(local_4c + 4),*local_4c);
    uVar12 = *local_4c + uVar12 & 0xffff;
    if ((999 < uVar12) ||
       (iVar13 = FUN_00025a48(&local_4c), uVar4 = s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_,
       iVar13 == 0)) goto LAB_0002f504;
    FUN_0003589a(s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_ + uVar12,local_4c,1);
    uVar12 = uVar12 + 1 & 0xffff;
    FUN_0003589a(uVar4 + uVar12,*(undefined4 *)(local_4c + 4),*local_4c);
    uVar12 = *local_4c + uVar12 & 0xffff;
    if ((999 < uVar12) || (iVar13 = FUN_00025ad0(&local_4c), iVar13 == 0)) goto LAB_0002f504;
    FUN_0003589a(uVar4 + uVar12,local_4c,1);
    uVar12 = uVar12 + 1 & 0xffff;
    FUN_0003589a(uVar4 + uVar12,*(undefined4 *)(local_4c + 4),*local_4c);
    uVar12 = *local_4c + uVar12 & 0xffff;
    if ((999 < uVar12) || (iVar13 = FUN_000259fc(1,uVar4 + uVar12), iVar13 == 0)) goto LAB_0002f504;
    uVar10 = uVar12 + 6 & 0xffff;
    if ((uVar12 + 6 & 1) != 0) {
      uVar10 = uVar10 + 1 & 0xffff;
    }
    uVar6 = FUN_0003586c(1);
    *(undefined2 *)uVar5 = uVar6;
    uVar6 = FUN_0003586c(uVar10 - 0x34);
    *(undefined2 *)(uVar5 + 2) = uVar6;
    uVar6 = FUN_0003586c(1);
    *(undefined2 *)(uVar5 + 4) = uVar6;
    FUN_00030ace(auStack_30);
    FUN_00030b0c(auStack_30,s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c._0_4_,uVar10,0xd);
    FUN_0002f5f0(local_48,uVar7,local_40,uVar10);
    FUN_00033eb4(*(undefined2 *)(*local_48 + 2),auStack_30);
  }
  uVar7 = _DAT_0002f560;
  iVar13 = FUN_00030b90(_DAT_0002f560);
  if (iVar13 == 0) {
    return;
  }
  FUN_00029e6c(uVar7);
  uVar7 = 6;
  pcVar11 = s__rI_TrI_ZrI__rI__rI_MM__CLOCK_DE_0002f59c + 0x14;
LAB_0002f204:
  FUN_00029eac(uVar7,pcVar11);
  return;
}

