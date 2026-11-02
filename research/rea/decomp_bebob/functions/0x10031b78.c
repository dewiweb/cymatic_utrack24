// rea decompile_all
// name: CMFCVisualManager::OnFillBarBackground
// address: 0x10031b78
// body: available
// range: 0x10031b78-0x10031cb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillBarBackground(class CDC *,class
   CBasePane *,class CRect,class CRect,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnFillBarBackground
          (CMFCVisualManager *this,CDC *param_1,CObject *param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7)

{
  CObject *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  BOOL BVar5;
  tagRECT *ptVar6;
  ulong uVar7;
  CBrush *pCVar8;
  HBRUSH hbr;
  
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_10134538,param_2);
  if (pCVar1 == (CObject *)0x0) {
    pHVar2 = GetParent(*(HWND *)(param_2 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_10134538,(CObject *)pCVar3);
    if (pCVar1 == (CObject *)0x0) {
      iVar4 = CObject::IsKindOf(param_2,(CRuntimeClass *)&PTR_s_CMFCOutlookBarPane_10162150);
      if (iVar4 != 0) {
        (**(code **)(*(int *)param_2 + 0x430))(param_1,param_4,param_5,param_6,param_7);
        return;
      }
      iVar4 = CObject::IsKindOf(param_2,(CRuntimeClass *)&PTR_s_CMFCCaptionBar_10133a80);
      if (iVar4 == 0) {
        iVar4 = CObject::IsKindOf(param_2,(CRuntimeClass *)
                                          &PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40);
        if ((iVar4 == 0) || (hbr = DAT_10166b64, *(int *)(param_2 + 0xd08) == 0)) {
          pCVar8 = (CBrush *)&DAT_10166b30;
          if (*(int *)(param_2 + 0x80) == 0) {
            pCVar8 = (CBrush *)&DAT_10166b68;
          }
          BVar5 = IsRectEmpty((RECT *)&stack0x0000001c);
          ptVar6 = (tagRECT *)&param_4;
          if (BVar5 == 0) {
            ptVar6 = (tagRECT *)&stack0x0000001c;
          }
          CDC::FillRect(param_1,ptVar6,pCVar8);
          return;
        }
      }
      else {
        hbr = DAT_10166b6c;
        if (*(int *)(param_2 + 0x2b0) == 0) {
          uVar7 = *(ulong *)(param_2 + 0x2a8);
          if (*(ulong *)(param_2 + 0x2a8) == 0xffffffff) {
            uVar7 = DAT_10166af0;
          }
          CDC::FillSolidRect(param_1,(tagRECT *)&stack0x0000001c,uVar7);
          return;
        }
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000001c,hbr);
      return;
    }
  }
  (**(code **)(*(int *)this + 0x1c))(param_1,param_2,param_4,param_5,param_6,param_7);
  return;
}

