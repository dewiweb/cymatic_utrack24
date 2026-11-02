// rea decompile_all
// name: DrawRibbonText
// address: 0x100bbb0b
// body: available
// range: 0x100bbb0b-0x100bbbf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCRibbonButton::DrawRibbonText(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class
   CRect,unsigned int,unsigned long)
    public: virtual int __thiscall CMFCRibbonButton::DrawRibbonText(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class
   CRect,unsigned int,unsigned long)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
DrawRibbonText(void *this,CDC *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [4];
  undefined1 *local_10;
  int *local_c;
  CMFCVisualManager *local_8;
  
  local_c = param_2;
  if (DAT_1016891c == 0) {
    iVar3 = -1;
    if (param_8 != -1) {
      puStack_28 = (undefined4 *)0x100bbbc2;
      iVar3 = (**(code **)(*(int *)param_1 + 0x30))();
    }
    iStack_30 = *param_2;
    uStack_2c = *(undefined4 *)(iStack_30 + -0xc);
    puStack_28 = &param_3;
    iStack_34 = 0x100bbbd9;
    uVar4 = (**(code **)(*(int *)param_1 + 0x68))();
    if (iVar3 != -1) {
      uStack_38 = 0x100bbbe8;
      iStack_34 = iVar3;
      (**(code **)(*(int *)param_1 + 0x30))();
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0x28);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
      puStack_28 = (undefined4 *)0x100bbb44;
      pHVar1 = GetParent(*(HWND *)(iVar3 + 0x20));
      puStack_28 = (undefined4 *)0x100bbb4a;
      pCVar2 = CWnd::FromHandle(pHVar1);
      puStack_28 = (undefined4 *)0x100bbb53;
      IsZoomed(*(HWND *)(pCVar2 + 0x20));
    }
    local_8 = CMFCVisualManager::GetInstance();
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = param_7;
    uStack_3c = param_3;
    uStack_38 = param_4;
    iStack_34 = param_5;
    iStack_30 = param_6;
    local_10 = (undefined1 *)&local_40;
    local_40 = FUN_10005e30((int *)(*local_c + -0x10));
    local_40 = local_40 + 4;
    (**(code **)(*(int *)local_8 + 0x2c4))(param_1);
    iVar3 = CDC::GetTextExtent(param_1,local_14);
    uVar4 = *(undefined4 *)(iVar3 + 4);
  }
  return uVar4;
}

