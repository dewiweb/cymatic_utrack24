// rea decompile_all
// name: CDockSite::RepositionPanes
// address: 0x10090f56
// body: available
// range: 0x10090f56-0x10091054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10091023 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockSite::RepositionPanes(class CRect &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockSite::RepositionPanes(CDockSite *this,CRect *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int _X;
  long lVar4;
  int _X_00;
  undefined4 *puVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if ((*(int *)(param_1 + 8) - *(int *)param_1 == local_18.right - local_18.left) &&
     (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) == local_18.bottom - local_18.top)) {
    puVar5 = *(undefined4 **)(this + 0x120);
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) {
LAB_10091023:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      FUN_1008ffc5((CDockingPanesRow *)*puVar1);
    }
  }
  else {
    _X = (*(int *)(param_1 + 8) - *(int *)param_1) - (local_18.right - local_18.left);
    _X_00 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) - (local_18.bottom - local_18.top);
    puVar5 = *(undefined4 **)(this + 0x120);
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) goto LAB_10091023;
      puVar1 = (undefined4 *)*puVar5;
      piVar2 = (int *)puVar5[2];
      if (_X != 0) {
        iVar3 = *piVar2;
        lVar4 = _labs(_X);
        (**(code **)(iVar3 + 0x3c))(param_1,2,0 < _X,lVar4);
      }
      puVar5 = puVar1;
      if (_X_00 != 0) {
        iVar3 = *piVar2;
        lVar4 = _labs(_X_00);
        (**(code **)(iVar3 + 0x3c))(param_1,6,0 < _X_00,lVar4);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

