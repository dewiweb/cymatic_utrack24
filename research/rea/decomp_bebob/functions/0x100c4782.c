// rea decompile_all
// name: CPaneContainerManager::CreatePaneDivider
// address: 0x100c4782
// body: available
// range: 0x100c4782-0x100c484f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c482d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CPaneDivider * __thiscall CPaneContainerManager::CreatePaneDivider(class
   CRect,unsigned long,int)
   
   Library: Visual Studio 2010 Release */

CPaneDivider * __thiscall CPaneContainerManager::CreatePaneDivider(CPaneContainerManager *this)

{
  undefined4 *puVar1;
  CObject *pCVar2;
  CPaneDivider *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  
  pCVar2 = CRuntimeClass::CreateObject((CRuntimeClass *)PTR_PTR_10161288);
  this_00 = (CPaneDivider *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar2)
  ;
  CPaneDivider::Init(this_00,0,(CWnd *)0x0);
  iVar4 = DAT_10162310;
  if (in_stack_00000018 == -1) {
    DAT_10162310 = DAT_10162310 + 1;
    in_stack_00000018 = iVar4;
  }
  if (DAT_10162310 <= in_stack_00000018) {
    DAT_10162310 = in_stack_00000018 + 1;
  }
  puVar5 = *(undefined4 **)(this + 0x24);
  while( true ) {
    if (puVar5 == (undefined4 *)0x0) {
      iVar4 = (**(code **)(*(int *)this_00 + 0x2a4))
                        (0,in_stack_00000014,&stack0x00000004,*(undefined4 *)(this + 0x4c),
                         in_stack_00000018,0);
      if (iVar4 == 0) {
        (**(code **)(*(int *)this_00 + 4))(1);
        this_00 = (CPaneDivider *)0x0;
      }
      else {
        FUN_1007169e(this_00,5);
        *(CPaneContainerManager **)(this_00 + 0x158) = this;
        CObList::AddTail((CObList *)(this + 0x20),(CObject *)this_00);
      }
      return this_00;
    }
    if (puVar5 == (undefined4 *)0x0) break;
    puVar1 = puVar5 + 2;
    puVar5 = (undefined4 *)*puVar5;
    iVar3 = CWnd::GetDlgCtrlID((CWnd *)*puVar1);
    iVar4 = DAT_10162310;
    if (iVar3 == in_stack_00000018) {
      DAT_10162310 = DAT_10162310 + 1;
      in_stack_00000018 = iVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

