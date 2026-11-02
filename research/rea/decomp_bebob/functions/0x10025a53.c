// rea decompile_all
// name: CMFCToolBar::GetButtonSize
// address: 0x10025a53
// body: available
// range: 0x10025a53-0x10025ac9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CSize __thiscall CMFCToolBar::GetButtonSize(void)const 
   
   Library: Visual Studio 2010 Release */

int * __thiscall CMFCToolBar::GetButtonSize(CMFCToolBar *this)

{
  int iVar1;
  CMFCToolBar *pCVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  int *piVar5;
  int *in_stack_00000004;
  CMFCToolBar *local_c;
  CMFCToolBar *pCStack_8;
  
  if (*(int *)(this + 0xb04) == 0) {
    pCVar2 = (CMFCToolBar *)&DAT_101603fc;
    if (*(int *)(this + 0xb08) == 0) {
      pCVar2 = (CMFCToolBar *)&DAT_101603ec;
    }
  }
  else {
    pCVar2 = this + 0xbac;
    if (*(int *)(this + 0xb08) == 0) {
      pCVar2 = this + 0xb9c;
    }
  }
  iVar3 = *(int *)pCVar2;
  in_stack_00000004[1] = *(int *)(pCVar2 + 4);
  iVar1 = *(int *)this;
  *in_stack_00000004 = iVar3;
  local_c = this;
  pCStack_8 = this;
  iVar3 = (**(code **)(iVar1 + 0x35c))();
  if (iVar3 != 0) {
    pCVar4 = CMFCVisualManager::GetInstance();
    piVar5 = (int *)(**(code **)(*(int *)pCVar4 + 0x13c))(&local_c);
    iVar3 = piVar5[1];
    *in_stack_00000004 = *in_stack_00000004 + *piVar5;
    in_stack_00000004[1] = in_stack_00000004[1] + iVar3;
  }
  return in_stack_00000004;
}

