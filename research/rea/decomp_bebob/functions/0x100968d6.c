// rea decompile_all
// name: GetCommandName
// address: 0x100968d6
// body: available
// range: 0x100968d6-0x1009692c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100968fd to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: char const * __thiscall CMFCToolBarsCustomizeDialog::GetCommandName(unsigned int)const 
    public: wchar_t const * __thiscall CMFCToolBarsCustomizeDialog::GetCommandName(unsigned
   int)const 
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall GetCommandName(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_8;
  
  local_8 = this;
  bVar2 = Lookup((void *)((int)this + 0xcc),*(wchar_t **)((int)this + 0x13c),&local_8);
  if (CONCAT31(extraout_var,bVar2) == 0) {
LAB_10096922:
    uVar4 = 0;
  }
  else {
    if (local_8 == (void *)0x0) {
LAB_100968fd:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    puVar3 = *(undefined4 **)((int)local_8 + 4);
    do {
      if (puVar3 == (undefined4 *)0x0) goto LAB_10096922;
      if (puVar3 == (undefined4 *)0x0) goto LAB_100968fd;
      iVar1 = puVar3[2];
      puVar3 = (undefined4 *)*puVar3;
      if (iVar1 == 0) goto LAB_100968fd;
    } while (*(int *)(iVar1 + 0x20) != param_1);
    uVar4 = *(undefined4 *)(iVar1 + 0x2c);
  }
  return uVar4;
}

