// rea decompile_all
// name: CMFCListCtrl::OnCustomDraw
// address: 0x100cc71a
// body: available
// range: 0x100cc71a-0x100cc817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cc72a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCListCtrl::OnCustomDraw(struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCListCtrl::OnCustomDraw(CMFCListCtrl *this,tagNMHDR *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  HGDIOBJ pvVar5;
  
  if (param_1 == (tagNMHDR *)0x0) {
LAB_100cc72a:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 1) || (iVar1 == 0x10001)) {
    *param_2 = 0x20;
  }
  else {
    if (iVar1 == 0x30001) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      iVar1 = *(int *)(param_1 + 0x38);
      uVar3 = (**(code **)(*(int *)this + 0x174))(uVar2,iVar1);
      *(undefined4 *)(param_1 + 0x34) = uVar3;
      uVar3 = (**(code **)(*(int *)this + 0x170))(uVar2,iVar1);
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      if (((iVar1 == *(int *)(this + 0x124)) && (*(int *)(this + 300) != 0)) &&
         (LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x1000,0,0), *(int *)(param_1 + 0x34) == LVar4
         )) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(this + 0x120);
      }
      pvVar5 = (HGDIOBJ)(**(code **)(*(int *)this + 0x178))
                                  (uVar2,iVar1,*(undefined4 *)(param_1 + 0x2c));
      if (pvVar5 != (HGDIOBJ)0x0) {
        pvVar5 = SelectObject(*(HDC *)(param_1 + 0x10),pvVar5);
        *(HGDIOBJ *)(this + 0x130) = pvVar5;
        if (pvVar5 != (HGDIOBJ)0x0) {
          *param_2 = 0x12;
          return;
        }
        goto LAB_100cc72a;
      }
    }
    else {
      if (iVar1 != 0x30002) {
        return;
      }
      if (*(HGDIOBJ *)(this + 0x130) != (HGDIOBJ)0x0) {
        SelectObject(*(HDC *)(param_1 + 0x10),*(HGDIOBJ *)(this + 0x130));
        *(undefined4 *)(this + 0x130) = 0;
      }
    }
    *param_2 = 0;
  }
  return;
}

