// rea decompile_all
// name: CPropertyPage::CommonConstruct
// address: 0x100d799e
// body: available
// range: 0x100d799e-0x100d7a6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d7a11 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPropertyPage::CommonConstruct(char const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPropertyPage::CommonConstruct(CPropertyPage *this,char *param_1,uint param_2)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)(this + 0x94) + 4) = 0x80;
  if (param_1 != (char *)0x0) {
    pAVar1 = AfxGetModuleState();
    *(undefined4 *)(*(int *)(this + 0x94) + 8) = *(undefined4 *)(pAVar1 + 0xc);
  }
  *(char **)(*(int *)(this + 0x94) + 0xc) = param_1;
  *(code **)(*(int *)(this + 0x94) + 0x18) = AfxDlgProc;
  *(CPropertyPage **)(*(int *)(this + 0x94) + 0x1c) = this;
  *(undefined **)(*(int *)(this + 0x94) + 0x20) = &DAT_100d6402;
  if (param_2 != 0) {
    iVar2 = FUN_100064e0(this + 0x98,param_2);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    *(undefined4 *)(*(int *)(this + 0x94) + 0x14) = *(undefined4 *)(this + 0x98);
    *(uint *)(*(int *)(this + 0x94) + 4) = *(uint *)(*(int *)(this + 0x94) + 4) | 8;
  }
  iVar2 = AfxHelpEnabled();
  if (iVar2 != 0) {
    *(uint *)(*(int *)(this + 0x94) + 4) = *(uint *)(*(int *)(this + 0x94) + 4) | 0x20;
  }
  if (((uint)param_1 & 0xffff0000) == 0) {
    *(uint *)(this + 0x74) = (uint)param_1 & 0xffff;
  }
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(*(int *)(this + 0x94) + 0xc);
  *(undefined4 *)(this + 0x9c) = 1;
  return;
}

