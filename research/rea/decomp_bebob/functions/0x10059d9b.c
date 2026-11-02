// rea decompile_all
// name: CMDIChildWnd::OnMDIActivate
// address: 0x10059d9b
// body: available
// range: 0x10059d9b-0x10059e6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWnd::OnMDIActivate(int,class CWnd *,class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIChildWnd::OnMDIActivate(CMDIChildWnd *this,int param_1,CWnd *param_2,CWnd *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CMDIFrameWnd *pCVar7;
  
  *(undefined4 *)(this + 0x114) = 0;
  UpdateClientEdge(this,(tagRECT *)0x0);
  piVar2 = (int *)FUN_10054804((int)this);
  if ((param_1 == 0) && (piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x18c))(0,piVar2,piVar2);
  }
  bVar1 = false;
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(this + 0xa0) + 0x5c))(param_1);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_10059e0f;
    }
  }
  uVar4 = 0;
  if ((param_1 != 0) || (param_2 != (CWnd *)0x0)) {
    uVar4 = 1;
  }
  (**(code **)(*(int *)this + 0x19c))(uVar4);
LAB_10059e0f:
  if ((param_1 != 0) && (piVar2 != (int *)0x0)) {
    pHVar5 = GetActiveWindow();
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar7 = GetMDIFrame(this);
    if (pCVar7 == (CMDIFrameWnd *)pCVar6) {
      (**(code **)(*piVar2 + 0x18c))(1,piVar2,piVar2);
    }
  }
  if (!bVar1) {
    (**(code **)(*(int *)this + 0x1bc))(param_1,param_2,0);
    pCVar7 = GetMDIFrame(this);
    DrawMenuBar(*(HWND *)(pCVar7 + 0x20));
  }
  return;
}

