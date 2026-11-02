// rea decompile_all
// name: CMFCCaptionButton::GetSize
// address: 0x1003830d
// body: available
// range: 0x1003830d-0x10038367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CSize __stdcall CMFCCaptionButton::GetSize(void)
   
   Library: Visual Studio 2010 Release */

void CMFCCaptionButton::GetSize(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  int *piVar6;
  int *in_stack_00000004;
  undefined4 local_1c [2];
  undefined1 local_14 [12];
  int local_8;
  
  pCVar5 = CMFCVisualManager::GetInstance();
  piVar6 = (int *)(**(code **)(*(int *)pCVar5 + 0x140))(local_14);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  local_8 = DAT_10162084 * 2;
  iVar4 = DAT_10162080 * 2;
  piVar6 = (int *)FUN_10037b18(local_1c);
  iVar3 = *piVar6;
  in_stack_00000004[1] = iVar2 + piVar6[1] + local_8;
  *in_stack_00000004 = iVar1 + iVar3 + iVar4;
  return;
}

