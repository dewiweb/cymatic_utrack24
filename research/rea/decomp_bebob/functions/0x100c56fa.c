// rea decompile_all
// name: CPaneContainerManager::GetAvailableSpace
// address: 0x100c56fa
// body: available
// range: 0x100c56fa-0x100c57d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c5778 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainerManager::GetAvailableSpace(class CRect &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainerManager::GetAvailableSpace(CPaneContainerManager *this,CRect *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  puVar2 = *(undefined4 **)(this + 8);
  while (puVar2 != (undefined4 *)0x0) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_100c5778;
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    GetWindowRect(*(HWND *)(*piVar1 + 0x20),&local_28);
    UnionRect(&local_18,&local_18,&local_28);
  }
  puVar2 = *(undefined4 **)(this + 0x24);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      (**(code **)(*(int *)this + 0x2c))(param_1);
      SubtractRect((LPRECT)param_1,(RECT *)param_1,&local_18);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    GetWindowRect(*(HWND *)(*piVar1 + 0x20),&local_28);
    UnionRect(&local_18,&local_18,&local_28);
  }
LAB_100c5778:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

