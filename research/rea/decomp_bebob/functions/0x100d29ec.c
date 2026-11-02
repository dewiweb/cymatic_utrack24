// rea decompile_all
// name: CMiniDockFrameWnd::OnNcLButtonDown
// address: 0x100d29ec
// body: available
// range: 0x100d29ec-0x100d2aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d2a32 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMiniDockFrameWnd::OnNcLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMiniDockFrameWnd::OnNcLButtonDown
          (CMiniDockFrameWnd *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 2) {
    CWnd::ActivateTopParent((CWnd *)this);
    if (((byte)this[0x1c4] & 0x40) == 0) {
      iVar2 = 1;
      uVar1 = 0;
      do {
        if (*(int *)(this + 0x1e4) <= iVar2) break;
        uVar1 = FUN_100d299c(this + 0x120,iVar2);
        iVar2 = iVar2 + 1;
      } while (uVar1 == 0);
      if ((uVar1 != 0) && (*(int *)(uVar1 + 0xb4) != 0)) {
        (**(code **)**(undefined4 **)(uVar1 + 0xb4))(param_3,param_4);
        return;
      }
LAB_100d2a32:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
  }
  else if (param_1 - 10U < 8) {
    CWnd::ActivateTopParent((CWnd *)this);
    iVar2 = 1;
    uVar1 = 0;
    do {
      if (*(int *)(this + 0x1e4) <= iVar2) break;
      uVar1 = FUN_100d299c(this + 0x120,iVar2);
      iVar2 = iVar2 + 1;
    } while (uVar1 == 0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0xb4) != 0)) {
      (**(code **)(**(int **)(uVar1 + 0xb4) + 4))(param_1,param_3,param_4);
      return;
    }
    goto LAB_100d2a32;
  }
  CWnd::Default((CWnd *)this);
  return;
}

