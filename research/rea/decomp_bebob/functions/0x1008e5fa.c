// rea decompile_all
// name: CDockingPanesRow::GetAvailableLength
// address: 0x1008e5fa
// body: available
// range: 0x1008e5fa-0x1008e6ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008e6af to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingPanesRow::GetAvailableLength(int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockingPanesRow::GetAvailableLength(CDockingPanesRow *this,int param_1)

{
  undefined4 *puVar1;
  CPane *this_00;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  GetClientRect(this,(CRect *)&local_28);
  puVar1 = *(undefined4 **)(this + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return iVar2;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    this_00 = (CPane *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = (**(code **)(*(int *)this_00 + 0x178))();
    if ((iVar2 != 0) || (*(int *)(this + 4) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      if (param_1 == 0) {
        ::GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
      }
      else {
        CPane::GetVirtualRect(this_00,(CRect *)&local_18);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

