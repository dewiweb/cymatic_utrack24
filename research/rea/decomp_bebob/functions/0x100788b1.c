// rea decompile_all
// name: CDockablePane::DockPaneStandard
// address: 0x100788b1
// body: available
// range: 0x100788b1-0x100789cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPane * __thiscall CDockablePane::DockPaneStandard(int &)
   
   Library: Visual Studio 2010 Release */

CPane * __thiscall CDockablePane::DockPaneStandard(CDockablePane *this,int *param_1)

{
  char cVar1;
  SHORT SVar2;
  undefined4 uVar3;
  int iVar4;
  CObject *pCVar5;
  uint uVar6;
  CPane *pCVar7;
  CObject *pCVar8;
  CObject *local_8;
  
  pCVar8 = (CObject *)0x0;
  local_8 = (CObject *)0x0;
  cVar1 = (**(code **)(*(int *)this + 0x1b4))();
  uVar3 = DAT_10160710;
  if (cVar1 < '\0') {
    uVar3 = 0xffffffff;
  }
  iVar4 = (**(code **)(*(int *)this + 0x2b4))(uVar3,&local_8);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,local_8);
  if ((pCVar5 != (CObject *)this) && (SVar2 = GetAsyncKeyState(0x11), -1 < SVar2)) {
    if (pCVar5 != (CObject *)0x0) {
      pCVar8 = (CObject *)(**(code **)(*(int *)pCVar5 + 0x224))(0);
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,pCVar8);
    }
    if (iVar4 == 2) {
      if (pCVar8 != (CObject *)0x0) {
        uVar6 = (**(code **)(*(int *)this + 0x1bc))();
        if ((uVar6 & 0x40) == 0) {
          return (CPane *)0x0;
        }
        if (local_8 != (CObject *)0x0) {
          iVar4 = (**(code **)(*(int *)pCVar8 + 0x248))(this);
          *param_1 = (uint)(iVar4 == 0);
          return (CPane *)this;
        }
      }
      iVar4 = (**(code **)(*(int *)this + 500))(pCVar5,0,5);
      *param_1 = iVar4;
    }
    else if ((((iVar4 == 3) && (pCVar5 != (CObject *)0x0)) &&
             (iVar4 = (**(code **)(*(int *)pCVar5 + 0x180))(this), iVar4 != 0)) &&
            (iVar4 = (**(code **)(*(int *)this + 0x188))(), iVar4 != 0)) {
      (**(code **)(*(int *)this + 0x23c))(0);
      pCVar7 = (CPane *)(**(code **)(*(int *)this + 0x34c))(pCVar5,5,1,0);
      *param_1 = (uint)(pCVar7 != (CPane *)0x0);
      return pCVar7;
    }
  }
  return (CPane *)0x0;
}

