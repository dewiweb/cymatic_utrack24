// rea decompile_all
// name: CMFCColorBar::ContextToSize
// address: 0x100a841f
// body: available
// range: 0x100a841f-0x100a85e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a8443 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCColorBar::ContextToSize(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorBar::ContextToSize(CMFCColorBar *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((this == (CMFCColorBar *)0x0) || (*(HWND *)(this + 0x20) == (HWND)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  iVar1 = (**(code **)(*(int *)this + 0x2a4))(&local_20,1);
  iVar1 = (uint)(*(int *)(iVar1 + 4) < local_18.bottom - local_18.top) * 2 + -1;
  while( true ) {
    iVar2 = (**(code **)(*(int *)this + 0x2a4))(&local_20,1);
    iVar4 = local_18.bottom - local_18.top;
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 == iVar4) break;
    if (iVar1 < 0) {
      if (iVar2 < iVar4) break;
    }
    else if (iVar4 < iVar2) {
      *(int *)(this + 0xdc4) = *(int *)(this + 0xdc4) - iVar1;
      *(int *)(this + 0xd6c) = (*(int *)(this + 0xdc4) * 3) / 2;
      break;
    }
    *(int *)(this + 0xdc4) = *(int *)(this + 0xdc4) + iVar1;
    *(int *)(this + 0xd6c) = (*(int *)(this + 0xdc4) * 3) / 2;
  }
  piVar3 = (int *)(**(code **)(*(int *)this + 0x2a4))(&local_20,1);
  iVar1 = (uint)(*piVar3 < local_18.right - local_18.left) * 2 + -1;
  do {
    piVar3 = (int *)(**(code **)(*(int *)this + 0x2a4))(&local_20,1);
    iVar2 = *piVar3;
    iVar4 = local_18.right - local_18.left;
    if (iVar2 == iVar4) {
LAB_100a8542:
      *(int *)(this + 0xdc0) = *(int *)(this + 0xdc0) + -1;
      *(int *)(this + 0xdc4) = *(int *)(this + 0xdc4) + -1;
      if (param_1 != 0) {
        iVar1 = *(int *)(this + 0xdc0);
        if (*(int *)(this + 0xdc4) <= *(int *)(this + 0xdc0)) {
          iVar1 = *(int *)(this + 0xdc4);
        }
        *(int *)(this + 0xdc4) = iVar1;
        *(int *)(this + 0xdc0) = iVar1;
        *(int *)(this + 0xd6c) = (iVar1 * 3) / 2;
      }
      if (param_2 == 0) {
        *(undefined4 *)(this + 0xd68) = 0;
        *(undefined4 *)(this + 0xd64) = 0;
      }
      else {
        (**(code **)(*(int *)this + 0x2a4))(&local_20,1);
        *(int *)(this + 0xd64) = ((local_18.right - local_18.left) - local_20) / 2;
        *(int *)(this + 0xd68) = ((local_18.bottom - local_18.top) - local_1c) / 2;
      }
      (**(code **)(*(int *)this + 0x3e0))();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar1 < 0) {
      if (iVar2 < iVar4) goto LAB_100a8542;
    }
    else if (iVar4 < iVar2) {
      *(int *)(this + 0xdc4) = *(int *)(this + 0xdc4) - iVar1;
      goto LAB_100a8542;
    }
    *(int *)(this + 0xdc0) = *(int *)(this + 0xdc0) + iVar1;
  } while( true );
}

