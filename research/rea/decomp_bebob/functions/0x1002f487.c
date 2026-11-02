// rea decompile_all
// name: CMFCToolBar::OnSize
// address: 0x1002f487
// body: available
// range: 0x1002f487-0x1002f55a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::OnSize(CMFCToolBar *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  
  SetRoundedRgn(this);
  CBasePane::OnSize((CBasePane *)this,param_1,param_2,param_3);
  if ((DAT_10166e54 != 0) && (*(int *)(this + 0xb04) == 0)) {
    FUN_1002809e((CPane *)this);
  }
  if (*(int *)(this + 0xb68) == 0) {
    (**(code **)(*(int *)this + 0x3e0))();
  }
  iVar1 = (**(code **)(*(int *)this + 0x16c))();
  if (iVar1 != 0) {
    pCVar2 = AFXGetParentFrame((CWnd *)this);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMiniFrameWnd_1012f3d4,(CObject *)pCVar2);
    if (pCVar3 != (CObject *)0x0) {
      pHVar4 = GetSystemMenu(*(HWND *)(pCVar3 + 0x20),0);
      pCVar5 = CMenu::FromHandle(pHVar4);
      if (pCVar5 != (CMenu *)0x0) {
        DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf120,0);
        DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf020,0);
        DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf030,0);
        iVar1 = (**(code **)(*(int *)this + 0x1c4))();
        if (iVar1 == 0) {
          EnableMenuItem(*(HMENU *)(pCVar5 + 4),0xf060,1);
        }
      }
    }
  }
  return;
}

