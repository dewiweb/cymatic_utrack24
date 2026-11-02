// rea decompile_all
// name: CMFCRibbonEdit::OnDrawLabelAndImage
// address: 0x100ad8b5
// body: available
// range: 0x100ad8b5-0x100ada13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonEdit::OnDrawLabelAndImage(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonEdit::OnDrawLabelAndImage(CMFCRibbonEdit *this,CDC *param_1)

{
  CDC *pCVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  undefined4 uVar4;
  int local_2c;
  int local_28;
  int local_24;
  CDC *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  if ((*(int *)(this + 0x68) == 0) && (*(int *)(this + 100) == 0)) {
    (**(code **)(*(int *)this + 0x70))(&local_2c,1);
    local_24 = *(int *)(this + 0x18);
    if ((local_2c != 0) || (local_28 != 0)) {
      local_18.top = *(LONG *)(this + 0x1c);
      local_18.bottom = *(LONG *)(this + 0x24);
      local_18.left = *(int *)(this + 0x18) + *(int *)(this + 0xbc);
      local_18.right = local_2c + local_18.left;
      iVar2 = ((local_18.bottom - local_18.top) - local_28) / 2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      OffsetRect(&local_18,0,iVar2);
      (**(code **)(*(int *)this + 0x7c))
                (local_20,1,local_18.left,local_18.top,local_18.right,local_18.bottom);
      local_24 = local_18.right;
      param_1 = local_20;
    }
    if ((0 < *(int *)(this + 0xac)) && (*(int *)(this + 0x5c) == 0)) {
      local_1c = -1;
      iVar2 = (**(code **)(*(int *)this + 0x38))();
      if (iVar2 != 0) {
        pCVar3 = CMFCVisualManager::GetInstance();
        iVar2 = *(int *)param_1;
        uVar4 = (**(code **)(*(int *)pCVar3 + 0xc4))();
        local_1c = (**(code **)(iVar2 + 0x30))(uVar4);
      }
      pCVar1 = local_20;
      local_18.left = *(int *)(this + 0xbc) + local_24;
      local_18.top = *(LONG *)(this + 0x1c);
      local_18.right = *(LONG *)(this + 0x20);
      local_18.bottom = *(LONG *)(this + 0x24);
      uVar4 = 0x824;
      if (*(int *)(this + 0x174) == 1) {
        uVar4 = 0x825;
      }
      else if (*(int *)(this + 0x174) == 2) {
        uVar4 = 0x826;
      }
      (**(code **)(*(int *)this + 0x1bc))
                (local_20,this + 4,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar4,
                 0xffffffff);
      if (local_1c != -1) {
        (**(code **)(*(int *)pCVar1 + 0x30))(local_1c);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

