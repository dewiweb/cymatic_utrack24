// rea decompile_all
// name: FUN_00429840
// address: 0x429840
// body: available
// range: 0x429840-0x429a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00429840(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *_Memory;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar8;
  undefined1 uVar9;
  int iVar10;
  double dVar11;
  undefined4 uVar12;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fd920;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  local_8 = 1;
  cVar3 = FUN_0042aa90(uVar4);
  if (cVar3 == '\0') {
    uVar9 = 0;
    goto LAB_00429a38;
  }
  iVar10 = *(int *)(in_ECX + 0x60);
  if (iVar10 == 0) {
LAB_0042991e:
    iVar10 = *(int *)(in_ECX + 100);
LAB_00429921:
    puVar1 = (undefined4 *)(in_ECX + 0x88);
    *(undefined8 *)(in_ECX + 0x70) = *(undefined8 *)(iVar10 + 0x18);
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(iVar10 + 0x28);
    *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar10 + 0x2c);
    uVar5 = extraout_ECX;
    if (puVar1 != (undefined4 *)(iVar10 + 0x3c)) {
      FUN_00414760((undefined4 *)(iVar10 + 0x3c));
      _Memory = (void *)*puVar1;
      *puVar1 = 0;
      *(undefined4 *)(in_ECX + 0x8c) = 0;
      *(undefined4 *)(in_ECX + 0x90) = 0;
      FID_conflict__free(_Memory);
      uVar5 = extraout_ECX_01;
    }
  }
  else {
    iVar6 = *(int *)(in_ECX + 100);
    if (iVar6 == 0) {
      if (iVar10 == 0) goto LAB_0042991e;
      goto LAB_00429921;
    }
    dVar11 = *(double *)(iVar6 + 0x18);
    if (*(double *)(iVar10 + 0x18) <= *(double *)(iVar6 + 0x18)) {
      dVar11 = *(double *)(iVar10 + 0x18);
    }
    *(double *)(in_ECX + 0x70) = dVar11;
    iVar7 = *(int *)(iVar10 + 0x28);
    if (*(int *)(iVar6 + 0x28) < *(int *)(iVar10 + 0x28)) {
      iVar7 = *(int *)(iVar6 + 0x28);
    }
    *(int *)(in_ECX + 0x78) = iVar7;
    iVar7 = *(int *)(iVar10 + 0x2c);
    if (*(int *)(iVar10 + 0x2c) < *(int *)(iVar6 + 0x2c)) {
      iVar7 = *(int *)(iVar6 + 0x2c);
    }
    *(int *)(in_ECX + 0x7c) = iVar7;
    FUN_00414720(iVar10 + 0x3c);
    FUN_00434c00(*(int *)(in_ECX + 100) + 0x3c);
    uVar5 = extraout_ECX_00;
  }
  uVar12 = *(undefined4 *)(in_ECX + 0x7c);
  uVar5 = FUN_004f64e0(uVar12,uVar5,*(undefined4 *)(in_ECX + 0x9c),uVar12);
  FUN_00410380(uVar5,uVar12);
  iVar10 = *(int *)(in_ECX + 0x78);
  if (iVar10 != *(int *)(in_ECX + 0x7c)) {
    uVar5 = FUN_004f64e0(iVar10,extraout_ECX_02,*(undefined4 *)(in_ECX + 0x9c),iVar10);
    FUN_00410380(uVar5,iVar10);
  }
  iVar10 = 0x40;
  local_14 = 0x28;
  do {
    if ((*(int *)(in_ECX + 0x78) <= iVar10) && (iVar10 < 0x801)) {
      piVar8 = *(int **)(in_ECX + 0x94);
      piVar2 = piVar8 + *(int *)(in_ECX + 0x9c);
      for (; piVar8 != piVar2; piVar8 = piVar8 + 1) {
        if (iVar10 == *piVar8) goto LAB_00429a0b;
      }
      iVar6 = iVar10;
      uVar5 = FUN_004f64e0(iVar10,piVar8,*(undefined4 *)(in_ECX + 0x9c),iVar10);
      FUN_00410380(uVar5,iVar6);
    }
LAB_00429a0b:
    if (iVar10 < 0x200) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x80;
      if (iVar10 < 0x400) {
        iVar6 = 0x40;
      }
    }
    iVar10 = iVar10 + iVar6;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  uVar9 = 1;
LAB_00429a38:
  FID_conflict__free((void *)0x0);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return uVar9;
}

