// rea decompile_all
// name: FUN_0043f130
// address: 0x43f130
// body: available
// range: 0x43f130-0x43f699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f130(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int unaff_ESI;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 unaff_EDI;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  if ((*(uint *)(in_ECX + 0x80) & 1) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x14))(0);
  }
  uVar16 = *(undefined4 *)(in_ECX + 0x88);
  uVar3 = *(undefined4 *)(in_ECX + 0x8c);
  lVar19 = *(longlong *)(in_ECX + 0x88);
  lVar18 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0xc))();
  if ((lVar18 != lVar19) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 8))(uVar16,uVar3), cVar1 == '\0')) {
    return;
  }
  uVar13 = *(uint *)(in_ECX + 0x10);
  lVar19 = __allmul(*(int *)(in_ECX + 0x14) * uVar13 >> 3,0,*(undefined4 *)(in_ECX + 0x78),
                    *(undefined4 *)(in_ECX + 0x7c));
  if (*(int *)(in_ECX + 0x84) == 0) {
    uStack_30 = (uint)(ushort)(undefined3)uStack_30;
    if (uVar13 < 3) goto LAB_0043f1df;
  }
  else {
    uStack_30 = CONCAT13(1,(undefined3)uStack_30);
  }
  uStack_30._0_3_ = CONCAT12(1,(undefined2)uStack_30);
LAB_0043f1df:
  if (*(int *)(in_ECX + 0x34) == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(int *)(in_ECX + 0x34) + 8;
  }
  if (*(int *)(in_ECX + 0x3c) == 0) {
    uStack_1c = 0;
  }
  else {
    uStack_1c = *(int *)(in_ECX + 0x3c) + 8;
  }
  if (*(int *)(in_ECX + 0x44) == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(int *)(in_ECX + 0x44) + 8;
  }
  if (*(int *)(in_ECX + 0x4c) == 0) {
    uStack_24 = 0;
  }
  else {
    uStack_24 = *(int *)(in_ECX + 0x4c) + 8;
  }
  if (*(int *)(in_ECX + 0x54) == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(int *)(in_ECX + 0x54) + 8;
  }
  if (*(int *)(in_ECX + 0x5c) == 0) {
    uStack_2c = 0;
  }
  else {
    uStack_2c = *(int *)(in_ECX + 0x5c) + 8;
  }
  if (*(int *)(in_ECX + 100) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(int *)(in_ECX + 100) + 8;
  }
  if (*(int *)(in_ECX + 0x6c) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(int *)(in_ECX + 0x6c) + 8;
  }
  if (*(int *)(in_ECX + 0x74) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 0x74) + 8;
  }
  uVar4 = (uint)lVar19 & 1;
  uVar5 = uVar4 + uVar2;
  uVar6 = uVar5 + uVar14;
  uVar7 = uVar6 + uVar13;
  uVar8 = uVar7 + uStack_2c;
  uVar9 = uVar8 + uStack_28;
  uVar10 = uVar9 + uStack_24;
  uVar11 = uVar10 + uStack_20;
  uVar12 = uVar11 + uStack_1c;
  lVar19 = lVar19 + CONCAT44((uint)CARRY4(uVar4,uVar2) + (uint)CARRY4(uVar5,uVar14) +
                             (uint)CARRY4(uVar6,uVar13) + (uint)CARRY4(uVar7,uStack_2c) +
                             (uint)CARRY4(uVar8,uStack_28) + (uint)CARRY4(uVar9,uStack_24) +
                             (uint)CARRY4(uVar10,uStack_20) + (uint)CARRY4(uVar11,uStack_1c) +
                             (uint)CARRY4(uVar12,uStack_18),uVar12 + uStack_18);
  uVar13 = (uint)lVar19;
  uVar14 = uVar13 + 0x60;
  iVar15 = uVar14 + (uVar14 & 1);
  if (uStack_30._3_1_ == '\0') {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x46464952);
    iVar20 = iVar15;
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x34364652);
    iVar20 = -1;
  }
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar20);
  cVar1 = 'V';
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))();
  if ((char)((uint)unaff_ESI >> 0x18) == '\0') {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x4b4e554a);
    cVar1 = (char)((uint)unaff_EDI >> 0x10);
    uVar16 = 0x34;
    if (cVar1 != '\0') {
      uVar16 = 0x1c;
    }
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(uVar16);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x44))(0,uVar16);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x34367364);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x1c);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x2c))
              (iVar15,(int)((ulonglong)lVar19 >> 0x20) + (uint)(0xffffff9f < uVar13) +
                      (uint)CARRY4(uVar14,uVar14 & 1));
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x2c))(uStack_2c,uStack_30);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x44))(0,0xc);
  }
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x20746d66);
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x10);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))
              ((-(uint)(*(uint *)(in_ECX + 0x14) < 0x20) & 0xfffffffe) + 3);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x28);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(0xfffffffe);
  }
  uVar16 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))();
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))((int)*(double *)(in_ECX + 8));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))
            ((int)(((double)unaff_ESI + (double)(&DAT_00c24bb0)[-(unaff_ESI >> 0x1f)]) *
                  *(double *)(in_ECX + 8)));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(unaff_ESI);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(*(undefined2 *)(in_ECX + 0x14));
  if ((char)((uint)uVar16 >> 0x10) != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(0x16);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(*(undefined2 *)(in_ECX + 0x14));
    iVar15 = **(int **)(in_ECX + 0x1c);
    uVar3 = FUN_0043f0d0();
    (**(code **)(iVar15 + 0x24))(uVar3);
    puVar17 = &DAT_00bfd928;
    if (0x1f < *(uint *)(in_ECX + 0x14)) {
      puVar17 = &DAT_00bfd918;
    }
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(*puVar17);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(*(undefined2 *)(puVar17 + 1));
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(*(undefined2 *)((int)puVar17 + 6));
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))(puVar17 + 2,8);
  }
  cVar1 = (char)((uint)uVar16 >> 0x18);
  iVar15 = *(int *)(in_ECX + 0x34);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x74786562);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x34) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x30),*(int *)(in_ECX + 0x34));
    }
  }
  iVar15 = *(int *)(in_ECX + 0x3c);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x6c6d7861);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x3c) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x38),*(int *)(in_ECX + 0x3c));
    }
  }
  iVar15 = *(int *)(in_ECX + 0x44);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x6c706d73);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x44) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x40),*(int *)(in_ECX + 0x44));
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x74736e69);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(7);
    if (*(int *)(in_ECX + 0x4c) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x48),*(int *)(in_ECX + 0x4c));
    }
  }
  iVar15 = *(int *)(in_ECX + 0x54);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x20657563);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x54) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x50),*(int *)(in_ECX + 0x54));
    }
  }
  iVar15 = *(int *)(in_ECX + 0x5c);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x5453494c);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x5c) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x58),*(int *)(in_ECX + 0x5c));
    }
  }
  iVar15 = *(int *)(in_ECX + 100);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x5453494c);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 100) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x60),*(int *)(in_ECX + 100));
    }
  }
  iVar15 = *(int *)(in_ECX + 0x6c);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x64696361);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x6c) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x68),*(int *)(in_ECX + 0x6c));
    }
  }
  iVar15 = *(int *)(in_ECX + 0x74);
  if (iVar15 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x6e6b7254);
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
    if (*(int *)(in_ECX + 0x74) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))
                (*(undefined4 *)(in_ECX + 0x70),*(int *)(in_ECX + 0x74));
    }
  }
  if (cVar1 == '\0') {
    iVar15 = *(int *)(in_ECX + 0x78) * unaff_ESI;
  }
  else {
    iVar15 = -1;
  }
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(0x61746164);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x24))(iVar15);
  *(bool *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x14) == 0x20;
  return;
}

