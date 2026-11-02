// rea decompile_all
// name: OnCmdMsg
// address: 0x1001b93f
// body: available
// range: 0x1001b93f-0x1001b9c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CDialog::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
    public: virtual int __thiscall CPropertySheet::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __thiscall
OnCmdMsg(void *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int *piVar5;
  
  iVar1 = CCmdTarget::OnCmdMsg(this,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if ((((param_2 == 0) || (param_2 == -1)) && ((param_1 & 0x8000) != 0)) && (param_1 < 0xf000)) {
      pHVar3 = GetParent(*(HWND *)((int)this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 != (CWnd *)0x0) {
        iVar1 = (**(code **)(*(int *)pCVar4 + 0xc))(param_1,param_2,param_3,param_4);
        if (iVar1 != 0) goto LAB_1001b960;
      }
      piVar5 = (int *)FUN_1000c31d();
      if (piVar5 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar5 + 0xc))(param_1,param_2,param_3,param_4);
        if (iVar1 != 0) goto LAB_1001b960;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_1001b960:
    uVar2 = 1;
  }
  return uVar2;
}

