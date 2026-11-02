// rea decompile_all
// name: CMFCRibbonGallery::GetRegularSize
// address: 0x100b0cfd
// body: available
// range: 0x100b0cfd-0x100b0e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonGallery::GetRegularSize(class CDC *)
   
   Library: Visual Studio 2010 Release */

CDC * __thiscall CMFCRibbonGallery::GetRegularSize(CMFCRibbonGallery *this,CDC *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c [2];
  int local_14 [3];
  int local_8;
  
  (**(code **)(*(int *)this + 0x1e4))(local_14 + 2);
  iVar2 = 0x10;
  if (*(CMFCRibbonCategory **)(this + 0x2c) != (CMFCRibbonCategory *)0x0) {
    puVar1 = (undefined4 *)
             CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)(this + 0x2c),(int)local_14);
    local_1c[0] = *puVar1;
    iVar2 = puVar1[1];
  }
  uVar5 = (uint)(local_8 <= (iVar2 * 3) / 2);
  *(uint *)(this + 0x2ec) = uVar5;
  if ((*(int *)(this + 0x308) != 0) && (uVar5 == 0)) {
    *(undefined4 *)(this + 0x2c8) = 6;
    if ((*(int *)(this + 0x38) != 0) && (*(int *)(*(int *)(this + 0x38) + 0xe30) == 0)) {
      *(undefined4 *)(this + 0x2c8) = 3;
    }
  }
  *(undefined4 *)(this + 0x308) = 0;
  iVar2 = IsButtonLook(this);
  if (iVar2 == 0) {
    if (*(int *)(this + 0x16c) == 0) {
      CreateIcons(this);
    }
    if (*(CMFCRibbonCategory **)(this + 0x2c) == (CMFCRibbonCategory *)0x0) {
      local_14[0] = 0;
      local_14[1] = 0;
      piVar3 = local_14;
    }
    else {
      piVar3 = (int *)CMFCRibbonCategory::GetImageSize
                                (*(CMFCRibbonCategory **)(this + 0x2c),(int)local_1c);
    }
    if (*(int *)(this + 0x2ec) == 0) {
      iVar6 = (local_14[2] + 8) * *(int *)(this + 0x2c8);
      iVar2 = local_8 + 0x12;
    }
    else {
      iVar6 = *(int *)(this + 0x2c8) * local_14[2];
      iVar2 = 3;
      if ((((*piVar3 != 0) || (piVar3[1] != 0)) && (local_8 != 0)) &&
         (iVar4 = (piVar3[1] * 2) / local_8, 2 < iVar4)) {
        iVar2 = iVar4;
      }
      iVar2 = iVar2 * local_8 + 6;
    }
    iVar4 = (**(code **)(*(int *)this + 0x1a0))();
    *(int *)param_1 = iVar6 + 0xc + iVar4;
    *(int *)(param_1 + 4) = iVar2;
  }
  else {
    CMFCRibbonButton::GetRegularSize((CMFCRibbonButton *)this,param_1);
  }
  return param_1;
}

