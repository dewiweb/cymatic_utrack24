// rea decompile_all
// name: CPaneContainer::DeletePane
// address: 0x100ca752
// body: available
// range: 0x100ca752-0x100ca939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::DeletePane(class CDockablePane *,enum
   CPaneContainer::BC_FIND_CRITERIA)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneContainer::DeletePane(CPaneContainer *this,CDockablePane *param_1,BC_FIND_CRITERIA param_2)

{
  int iVar1;
  CWnd *this_00;
  int iVar2;
  int *piVar3;
  CPaneContainer *pCVar4;
  int iVar5;
  tagRECT *ptVar6;
  undefined1 local_38 [4];
  int local_34;
  int *local_30;
  HDWP local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  (**(code **)(*(int *)this + 0xc))(&local_18,0);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
  if (*(int *)(this + 0xc) != 0) {
    IsPaneDividerHorz(this);
  }
  local_2c = BeginDeferWindowPos(10);
  if (param_2 == 0) {
    if (param_1 != *(CDockablePane **)(this + 4)) goto LAB_100ca90f;
    piVar3 = *(int **)(this + 8);
    *(undefined4 *)(this + 4) = 0;
    if (piVar3 != (int *)0x0) {
LAB_100ca7ce:
      (**(code **)(*piVar3 + 0x2a8))
                (local_38,local_18.left,local_18.top,local_18.right,local_18.bottom,0,&local_2c);
      goto LAB_100ca90f;
    }
    pCVar4 = *(CPaneContainer **)(this + 0x14);
  }
  else {
    if ((param_2 != 1) || (param_1 != *(CDockablePane **)(this + 8))) goto LAB_100ca90f;
    piVar3 = *(int **)(this + 4);
    *(undefined4 *)(this + 8) = 0;
    if (piVar3 != (int *)0x0) goto LAB_100ca7ce;
    pCVar4 = *(CPaneContainer **)(this + 0x10);
  }
  if ((pCVar4 == (CPaneContainer *)0x0) || (iVar1 = IsEmpty(pCVar4), iVar1 != 0)) {
    pCVar4 = *(CPaneContainer **)(this + 0x18);
    if (pCVar4 != (CPaneContainer *)0x0) {
      do {
        iVar1 = IsEmpty(pCVar4);
        if (iVar1 == 0) break;
        pCVar4 = *(CPaneContainer **)(pCVar4 + 0x18);
      } while (pCVar4 != (CPaneContainer *)0x0);
      if ((pCVar4 != (CPaneContainer *)0x0) &&
         (local_30 = *(int **)(pCVar4 + 0xc), local_30 != (int *)0x0)) {
        iVar1 = (**(code **)(*local_30 + 0x160))();
        if (iVar1 == 0) {
          iVar1 = local_28.right - local_28.left;
        }
        else {
          iVar1 = local_28.bottom - local_28.top;
        }
        local_34 = local_30[0x42] + 2 + iVar1 * 2;
        iVar1 = FID_conflict_IsLeftPartEmpty(pCVar4,0);
        if (iVar1 == 0) {
          iVar1 = FID_conflict_IsLeftPartEmpty(pCVar4,0);
          if (iVar1 == 0) goto LAB_100ca90f;
          iVar1 = *(int *)pCVar4;
          iVar2 = (**(code **)(*local_30 + 0x160))(1,1,&local_2c);
          iVar5 = local_34;
        }
        else {
          iVar1 = *(int *)pCVar4;
          iVar2 = (**(code **)(*local_30 + 0x160))(0,1,&local_2c);
          iVar5 = -local_34;
        }
        (**(code **)(iVar1 + 0x34))(iVar5,iVar2 == 0);
      }
    }
  }
  else {
    ptVar6 = &local_18;
    this_00 = (CWnd *)(**(code **)(**(int **)(this + 0x1c) + 0x74))();
    CWnd::ScreenToClient(this_00,ptVar6);
    (**(code **)(*(int *)this + 0x48))
              (local_18.left,local_18.top,local_18.right,local_18.bottom,&local_2c,0);
  }
LAB_100ca90f:
  EndDeferWindowPos(local_2c);
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

