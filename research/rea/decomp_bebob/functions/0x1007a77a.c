// rea decompile_all
// name: CDockablePane::DockToWindow
// address: 0x1007a77a
// body: available
// range: 0x1007a77a-0x1007a84b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::DockToWindow(class CDockablePane *,unsigned
   long,struct tagRECT const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockablePane::DockToWindow
          (CDockablePane *this,CDockablePane *param_1,ulong param_2,tagRECT *param_3)

{
  CPaneDivider *pCVar1;
  BOOL BVar2;
  CFrameWnd *pCVar3;
  int iVar4;
  undefined4 uVar5;
  
  pCVar1 = GetDefaultPaneDivider(param_1);
  if (pCVar1 == (CPaneDivider *)0x0) {
    CWnd::ShowWindow((CWnd *)this,5);
  }
  else {
    if ((*(HWND *)(this + 0x33c) != (HWND)0x0) &&
       (BVar2 = IsWindow(*(HWND *)(this + 0x33c)), BVar2 != 0)) {
      (**(code **)(*(int *)this + 0x23c))(0);
    }
    iVar4 = *(int *)this;
    uVar5 = 0;
    pCVar3 = AFXGetParentFrame((CWnd *)this);
    (**(code **)(iVar4 + 0x308))(pCVar3,uVar5);
    iVar4 = (**(code **)(*(int *)pCVar1 + 0x274))(this,param_1,param_2,param_3);
    if (iVar4 != 0) {
      CBasePane::InsertPane((CBasePane *)this,(CBasePane *)this,(CBasePane *)param_1,1);
      *(undefined4 *)(this + 0x33c) = *(undefined4 *)(pCVar1 + 0x20);
      (**(code **)(*(int *)this + 0x1ec))(1);
      (**(code **)(*(int *)this + 0x234))(0,0,0,0,0,0x7f,0);
      (**(code **)(*(int *)this + 0x264))(0);
      (**(code **)(*(int *)this + 0x2fc))(this,0,0);
      return 1;
    }
  }
  return 0;
}

