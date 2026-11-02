// rea decompile_all
// name: CDockingPanesRow::RemovePane
// address: 0x1008f28c
// body: available
// range: 0x1008f28c-0x1008f3fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008f3e0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::RemovePane(class CPane *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingPanesRow::RemovePane(CDockingPanesRow *this,CPane *param_1)

{
  __POSITION *p_Var1;
  int iVar2;
  BOOL BVar3;
  undefined4 local_38;
  HDWP local_34;
  CPane *local_30;
  __POSITION *local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  if (local_2c != (__POSITION *)0x0) {
    local_38 = 0;
    (**(code **)(*(int *)param_1 + 0x2ac))(0xffff,&local_38);
    CObList::RemoveAt((CObList *)(this + 0x24),local_2c);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(int *)(this + 0x30) == 0) {
      CDockSite::RemoveRow(*(CDockSite **)(this + 0x44),this);
    }
    else {
      p_Var1 = *(__POSITION **)(this + 0x28);
      while (p_Var1 != (__POSITION *)0x0) {
        if (p_Var1 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        local_2c = *(__POSITION **)p_Var1;
        local_30 = *(CPane **)(p_Var1 + 8);
        iVar2 = (**(code **)(*(int *)local_30 + 0x178))();
        p_Var1 = local_2c;
        if (((iVar2 != 0) || (*(int *)(this + 4) != 0)) && (local_30 != param_1)) {
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          ::GetWindowRect(*(HWND *)(local_30 + 0x20),&local_28);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          CPane::GetVirtualRect(local_30,(CRect *)&local_18);
          BVar3 = EqualRect(&local_18,&local_28);
          p_Var1 = local_2c;
          if (BVar3 == 0) {
            local_34 = BeginDeferWindowPos(*(int *)(this + 0x30));
            MovePane(this,local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,
                     &local_34);
            EndDeferWindowPos(local_34);
            p_Var1 = local_2c;
          }
        }
      }
      FUN_1008dd5a((int *)this);
      (**(code **)(*(int *)this + 0x44))(0);
      iVar2 = FUN_1008e6cb(this,0);
      if (iVar2 < *(int *)(this + 0xc)) {
        CDockSite::ResizeRow(*(CDockSite **)(this + 0x44),this,iVar2,1);
        *(int *)(this + 0xc) = iVar2;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

