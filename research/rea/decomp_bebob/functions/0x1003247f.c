// rea decompile_all
// name: CMFCVisualManager::OnDrawTasksGroupIcon
// address: 0x1003247f
// body: available
// range: 0x1003247f-0x10032539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTasksGroupIcon(class CDC *,class
   CMFCTasksPaneTaskGroup *,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawTasksGroupIcon
          (CMFCVisualManager *this,CDC *param_1,CMFCTasksPaneTaskGroup *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  CMFCTasksPaneTaskGroup *pCVar1;
  CMFCTasksPaneTaskGroup *pCVar2;
  int iVar3;
  CMFCTasksPaneTaskGroup *pCVar4;
  int iVar5;
  HDC hdc;
  int iVar6;
  
  pCVar4 = param_2;
  pCVar1 = param_2 + 0x5c;
  if (*(HICON *)pCVar1 != (HICON)0x0) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 8) + 0x3a8);
    iVar3 = *(int *)(param_2 + 0x34);
    pCVar2 = param_2 + 0x40;
    if (iVar5 == -1) {
      iVar5 = *(int *)(this + 0xb0);
    }
    iVar6 = *(int *)(param_2 + 0x54) + iVar3 + param_3;
    if (((iVar6 - *(int *)(param_2 + 0x54)) - iVar3) / 2 < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((iVar6 - iVar3) - *(int *)(param_2 + 0x54)) / 2;
    }
    param_2 = (CMFCTasksPaneTaskGroup *)
              (((*(int *)pCVar2 - *(int *)(param_2 + 0x58)) - (*(int *)(param_2 + 0x38) + iVar5)) /
              2);
    if ((int)param_2 < 0) {
      param_2 = (CMFCTasksPaneTaskGroup *)0x0;
    }
    if (param_1 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    iVar5 = *(int *)(pCVar4 + 0x58);
    DrawIconEx(hdc,iVar6 + iVar3,(*(int *)pCVar2 - iVar5) - (int)param_2,*(HICON *)pCVar1,
               *(int *)(pCVar4 + 0x54),iVar5,0,(HBRUSH)0x0,3);
  }
  return;
}

