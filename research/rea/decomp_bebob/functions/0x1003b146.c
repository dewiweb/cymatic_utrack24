// rea decompile_all
// name: OnFloatStatus
// address: 0x1003b146
// body: available
// range: 0x1003b146-0x1003b1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: long __thiscall CMiniFrameWnd::OnFloatStatus(unsigned int,long)
    protected: long __thiscall CPaneFrameWnd::OnFloatStatus(unsigned int,long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __thiscall OnFloatStatus(void *this,uint param_1)

{
  ulong uVar1;
  undefined4 local_8;
  
  local_8 = 0;
  uVar1 = CWnd::GetExStyle(this);
  if (((uVar1 & 0x100) != 0) && ((param_1 & 0x40) != 0)) {
    local_8 = 1;
  }
  if ((param_1 & 3) != 0) {
    CWnd::SetWindowPos(this,(CWnd *)0x0,0,0,0,0,
                       (-(uint)((param_1 & 1) != 0) & 0xffffffc0) + 0x80 | 0x17);
  }
  if ((param_1 & 0x30) != 0) {
    CWnd::EnableWindow(this,param_1 >> 4 & 1);
  }
  if ((param_1 & 0xc) != 0) {
    uVar1 = CWnd::GetExStyle(this);
    if ((uVar1 & 0x100) != 0) {
      CWnd::ModifyStyle(this,0x100,0,0);
      SendMessageW(*(HWND *)((int)this + 0x20),0x86,param_1 >> 2 & 1,0);
      CWnd::ModifyStyle(this,0,0x100,0);
    }
  }
  return local_8;
}

