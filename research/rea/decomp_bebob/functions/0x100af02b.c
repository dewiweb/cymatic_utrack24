// rea decompile_all
// name: CMFCRibbonGalleryIcon::OnDraw
// address: 0x100af02b
// body: available
// range: 0x100af02b-0x100af1b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGalleryIcon::OnDraw(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonGalleryIcon::OnDraw(CMFCRibbonGalleryIcon *this,CDC *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  CMFCVisualManager *pCVar4;
  undefined4 local_38;
  undefined4 local_34;
  IMAGES_IDS local_30;
  CDC *local_2c;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  BVar1 = IsRectEmpty((RECT *)(this + 0x18));
  if (BVar1 == 0) {
    if (*(int *)(this + 0x168) < 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x274))(param_1,this);
      iVar2 = *(int *)(this + 0x168);
      if (iVar2 == -1) {
        local_30 = 7;
      }
      else {
        local_30 = -(uint)(iVar2 != -2) & 0x1d;
      }
      local_28.left = *(LONG *)(this + 0x18);
      local_28.top = *(LONG *)(this + 0x1c);
      local_28.right = *(LONG *)(this + 0x20);
      local_c = *(int *)(this + 0x24);
      if (iVar2 == -3) {
        if ((local_28.right - local_28.left) + 2 < local_c - local_28.top) {
          local_c = (local_28.right - local_28.left) + 2 + local_28.top;
        }
      }
      local_28.bottom = local_c;
      local_18 = local_28.left;
      local_14 = local_28.top;
      local_10 = local_28.right;
      OffsetRect(&local_28,0,1);
      local_38 = 0;
      local_34 = 0;
      CMenuImages::Draw(local_2c,local_30,(CRect *)&local_28,3,(CSize *)&local_38);
      local_38 = 0;
      local_34 = 0;
      CMenuImages::Draw(local_2c,local_30,(CRect *)&local_18,(uint)(*(int *)(this + 0x78) != 0),
                        (CSize *)&local_38);
    }
    else {
      iVar2 = (**(code **)(**(int **)(this + 0x164) + 0x38))();
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
        if ((*(int *)(*(int *)(this + 0x164) + 0x2fc) != 0) ||
           (*(int *)(*(int *)(this + 0x164) + 0x2f8) == 0)) {
          uVar3 = (**(code **)(*(int *)this + 0x1cc))(param_1);
        }
        (**(code **)(**(int **)(this + 0x164) + 0x1fc))
                  (local_2c,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                   *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24),
                   *(undefined4 *)(this + 0x168),this,uVar3);
        if ((*(int *)(*(int *)(this + 0x164) + 0x2fc) != 0) ||
           (*(int *)(*(int *)(this + 0x164) + 0x2f8) == 0)) {
          (**(code **)(*(int *)this + 0x1d0))(local_2c);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

