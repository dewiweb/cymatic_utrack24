// rea decompile_all
// name: CMFCColorMenuButton::SetColor
// address: 0x100eb804
// body: available
// range: 0x100eb804-0x100eb8f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eb8ac to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCColorMenuButton::SetColor(unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorMenuButton::SetColor(CMFCColorMenuButton *this,ulong param_1,int param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  int iVar3;
  undefined *puVar4;
  CObject *pCVar5;
  undefined4 *puVar6;
  CObList local_2c [4];
  undefined4 *local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100eb810;
  *(ulong *)(this + 0xe8) = param_1;
  puVar2 = (ulong *)CMap<unsigned_int,unsigned_int,int,int>::operator[]
                              ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_10163134,
                               *(uint *)(this + 0x20));
  *puVar2 = param_1;
  iVar3 = *(int *)(this + 0x6c);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    InvalidateRect(*(HWND *)(iVar3 + 0x20),(RECT *)(this + 0x54),1);
  }
  if (param_2 != 0) {
    CObList::CObList(local_2c,10);
    local_8 = 0;
    iVar3 = FUN_1002643c(*(int *)(this + 0x20),local_2c);
    if (0 < iVar3) {
      while (local_28 != (undefined4 *)0x0) {
        if (local_28 == (undefined4 *)0x0) goto LAB_100eb8ac;
        puVar6 = (undefined4 *)*local_28;
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_101630d8,
                                    (CObject *)local_28[2]);
        local_28 = puVar6;
        if ((pCVar5 != (CObject *)0x0) && (pCVar5 != (CObject *)this)) {
          (**(code **)(*(int *)pCVar5 + 0xf8))(param_1,0);
        }
      }
    }
    puVar4 = FUN_10026ef9();
    puVar6 = *(undefined4 **)(puVar4 + 4);
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) {
LAB_100eb8ac:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorBar_10161cc0,(CObject *)*puVar1);
      if ((pCVar5 != (CObject *)0x0) && (*(int *)(pCVar5 + 0xd8c) == *(int *)(this + 0x20))) {
        FUN_100a8956(pCVar5,param_1);
      }
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_2c);
  }
  return;
}

