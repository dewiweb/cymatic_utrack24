// rea decompile_all
// name: CFrameImpl::OnNcCalcSize
// address: 0x10060c4b
// body: available
// range: 0x10060c4b-0x10060dc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060c5c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnNcCalcSize(int,struct tagNCCALCSIZE_PARAMS *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::OnNcCalcSize(CFrameImpl *this,int param_1,tagNCCALCSIZE_PARAMS *param_2)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 == (tagNCCALCSIZE_PARAMS *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar3 = *(int *)(this + 0xfc);
  bVar1 = false;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) &&
      ((BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0x20)), BVar2 != 0 ||
       (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20)), BVar2 == 0)))) &&
     (*(int *)(*(int *)(this + 0xfc) + 0x314) != 0)) {
    bVar1 = true;
    iVar3 = AFX_GLOBAL_DATA::DwmIsCompositionEnabled((AFX_GLOBAL_DATA *)&DAT_10166aa0);
    if (iVar3 != 0) {
      iVar3 = GetSystemMetrics(0x21);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar3;
      iVar3 = GetSystemMetrics(0x21);
      *(int *)param_2 = *(int *)param_2 + iVar3;
      iVar3 = GetSystemMetrics(0x20);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - iVar3;
      return 1;
    }
  }
  iVar3 = *(int *)(this + 0x100);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) &&
     ((BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0x20)), BVar2 != 0 ||
      (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20)), BVar2 == 0)))) {
    iVar3 = *(int *)(*(int *)(this + 0x100) + 0x1044);
    iVar4 = IsOwnerDrawCaption(this);
    if ((iVar4 == 0) || (BVar2 = IsZoomed(*(HWND *)(*(int *)(this + 0xb0) + 0x20)), BVar2 != 0)) {
      *(undefined4 *)(*(int *)(this + 0x100) + 0x1044) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(this + 0x100) + 0x1044) = 1;
      iVar4 = GetSystemMetrics(0x21);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar4;
    }
    if (iVar3 != (*(int **)(this + 0x100))[0x411]) {
      (**(code **)(**(int **)(this + 0x100) + 0x20c))();
    }
  }
  if ((!bVar1) && (iVar3 = IsOwnerDrawCaption(this), iVar3 != 0)) {
    iVar3 = GetSystemMetrics(4);
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar3;
  }
  uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
  if (((uVar5 & 0x1000000) != 0) && ((bVar1 || (iVar3 = IsOwnerDrawCaption(this), iVar3 != 0)))) {
    return 1;
  }
  return 0;
}

