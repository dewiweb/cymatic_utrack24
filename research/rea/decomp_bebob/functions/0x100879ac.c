// rea decompile_all
// name: CMFCToolBarButton::SetACCData
// address: 0x100879ac
// body: available
// range: 0x100879ac-0x10087bd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarButton::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarButton::SetACCData(CMFCToolBarButton *this,CWnd *param_1,CAccessibilityData *param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  int *local_220;
  int local_21c;
  int local_218;
  wchar_t local_214 [262];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x214;
  local_8 = 0x100879bb;
  CAccessibilityData::Clear(param_2);
  piVar1 = FUN_10005e30((int *)(*(int *)(this + 0x2c) + -0x10));
  local_220 = piVar1 + 4;
  local_8 = 0;
  if (((piVar1[1] == 0) && (*(int *)(this + 0x20) != 0)) && (*(int *)(this + 0x20) != -1)) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_218,(int *)ppuVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = FUN_1000abfa(*(uint *)(this + 0x20),local_214,0x100);
    if (uVar3 != 0) {
      iVar4 = AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&local_218,local_214,1,L'\n');
      if (iVar4 != 0) {
        FUN_10007c90(&local_220,&local_218);
      }
    }
    local_8 = local_8 & 0xffffff00;
    FUN_10001030((undefined4 *)(local_218 + -0x10));
  }
  FUN_10007c90(param_2,&local_220);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)param_2,L'&');
  FUN_100022b0(param_2 + 0x14,L"Press");
  pCVar5 = CWnd::GetParentFrame(param_1);
  if ((pCVar5 != (CFrameWnd *)0x0) && (*(int *)(pCVar5 + 0x20) != 0)) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_218,(int *)ppuVar2);
    local_8._0_1_ = 2;
    (**(code **)(*(int *)pCVar5 + 0x170))(*(undefined4 *)(this + 0x20),&local_218);
    FUN_10007c90(param_2 + 8,&local_218);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10001030((undefined4 *)(local_218 + -0x10));
  }
  pCVar5 = CWnd::GetParentFrame(*(CWnd **)(this + 0x6c));
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&local_21c,(int *)ppuVar2);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (pCVar5 != (CFrameWnd *)0x0) {
    iVar4 = CKeyboardManager::FindDefaultAccelerator
                      (*(uint *)(this + 0x20),
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_21c,pCVar5,1);
    if (iVar4 == 0) {
      pCVar5 = (CFrameWnd *)(**(code **)(*(int *)pCVar5 + 0x16c))();
      iVar4 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0x20),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_21c,pCVar5,iVar4);
      if (iVar4 == 0) goto LAB_10087b51;
    }
    FUN_10007c90(param_2 + 0xc,&local_21c);
  }
LAB_10087b51:
  *(undefined4 *)(param_2 + 0x20) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0x2b;
  *(undefined4 *)(param_2 + 0x1c) = 0x100000;
  if ((*(uint *)(this + 0x24) & 0x10000) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0x100010;
  }
  if ((*(uint *)(this + 0x24) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 1;
  }
  if ((*(uint *)(this + 0x24) & 0x20000) == 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x80;
  }
  else {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 4;
  }
  ((tagRECT *)(param_2 + 0x24))->left = *(LONG *)(this + 0x54);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x60);
  CWnd::ClientToScreen(param_1,(tagRECT *)(param_2 + 0x24));
  FUN_10001030((undefined4 *)(local_21c + -0x10));
  FUN_10001030(local_220 + -4);
  iVar4 = FUN_100f90cf();
  return iVar4;
}

