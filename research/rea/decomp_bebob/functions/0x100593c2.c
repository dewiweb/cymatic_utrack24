// rea decompile_all
// name: CMDIFrameWnd::OnCommand
// address: 0x100593c2
// body: available
// range: 0x100593c2-0x10059430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMDIFrameWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIFrameWnd::OnCommand(CMDIFrameWnd *this,uint param_1,long param_2)

{
  CMDIChildWnd *pCVar1;
  int iVar2;
  
  pCVar1 = MDIGetActive(this,(int *)0x0);
  if (((pCVar1 == (CMDIChildWnd *)0x0) ||
      (iVar2 = FUN_10012208((CWnd *)pCVar1,*(undefined4 *)(pCVar1 + 0x20),0x111,param_1,param_2),
      iVar2 == 0)) && (iVar2 = CFrameWnd::OnCommand((CFrameWnd *)this,param_1,param_2), iVar2 == 0))
  {
    if ((param_2 != 0) || (((ushort)param_1 & 0xf000) != 0xf000)) {
      return 0;
    }
    (**(code **)(*(int *)this + 0x11c))(0x111,param_1,0);
  }
  return 1;
}

