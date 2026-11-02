// rea decompile_all
// name: FUN_00696170
// address: 0x696170
// body: available
// range: 0x696170-0x696338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696170(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_34;
  int local_30;
  int local_28;
  undefined1 local_24 [8];
  double local_1c;
  undefined8 local_14;
  int local_8;
  
  piVar1 = *(int **)(in_ECX + 0xf0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))(&local_34);
    uVar3 = FUN_0046fc10(local_24,*(undefined4 *)(in_ECX + 0xfc),*(undefined4 *)(in_ECX + 0x100));
    (**(code **)(*piVar1 + 0xb0))(uVar3);
  }
  if (*(char *)(in_ECX + 0x9d) != '\0') {
    iVar7 = *(int *)(*(int *)(in_ECX + 0x7c) + 0x7c);
    iVar2 = *(int *)(*(int *)(in_ECX + 0x7c) + 0x80);
    (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))(&local_34);
    local_34 = local_34 - iVar7;
    fVar8 = (float)*(int *)(in_ECX + 0x18);
    local_8 = local_30 - iVar2;
    local_14._0_4_ = SUB84((double)(fVar8 * 0.05) + 6755399441055744.0,0);
    iVar5 = 1;
    if (1 < (int)local_14) {
      iVar5 = (int)local_14;
    }
    if (local_34 < iVar5) {
      local_14 = (double)(fVar8 * 0.2) + 6755399441055744.0;
      iVar7 = iVar7 + (local_34 - (int)local_14);
    }
    else {
      iVar5 = *(int *)(*(int *)(in_ECX + 0x7c) + 0xb8);
      local_14 = (double)CONCAT44(iVar5,(int)local_14);
      iVar6 = iVar5 - ((uint)(*(char *)(in_ECX + 0x97) == '\0') * 8 + 2);
      iVar4 = 0;
      if (0 < iVar6) {
        iVar4 = iVar6;
      }
      if (iVar4 < local_34) {
        if (*(char *)(in_ECX + 0x96) == '\0') {
          iVar4 = 10;
        }
        else {
          local_1c = (double)(fVar8 * 0.2) + 6755399441055744.0;
          iVar4 = local_1c._0_4_;
        }
        iVar7 = iVar7 + (iVar4 - iVar5) + local_34;
      }
    }
    iVar4 = (*(int *)(*(int *)(in_ECX + 0x80) + 0x18) - *(int *)(*(int *)(in_ECX + 0x7c) + 0xb8)) +
            8;
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
    if (*(char *)(in_ECX + 0x96) == '\0') {
      iVar4 = -(((*(int *)(in_ECX + 0x1c) - *(int *)(*(int *)(in_ECX + 0x80) + 0x1c)) -
                *(int *)(in_ECX + 0x100)) / 2);
    }
    else if (local_8 < 0) {
      iVar4 = 0;
      if (0 < local_8 + iVar2) {
        iVar4 = local_8 + iVar2;
      }
    }
    else {
      iVar4 = (*(int *)(*(int *)(in_ECX + 0x7c) + 0xbc) - *(int *)(in_ECX + 0x100)) - local_28;
      iVar5 = 0;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      iVar4 = iVar2;
      if (iVar5 < local_8) {
        iVar4 = iVar2 + 2 +
                (*(int *)(in_ECX + 0x100) - *(int *)(*(int *)(in_ECX + 0x7c) + 0xbc)) + local_28 +
                local_8;
      }
    }
    FUN_006ac370(iVar7,iVar4);
  }
  return;
}

