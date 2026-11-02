// rea decompile_all
// name: CMenuImages::Draw
// address: 0x10037c2b
// body: available
// range: 0x10037c2b-0x10037ca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CMenuImages::Draw(class CDC *,enum CMenuImages::IMAGES_IDS,class
   CRect const &,enum CMenuImages::IMAGE_STATE,class CSize const &)
   
   Library: Visual Studio 2010 Release */

void CMenuImages::Draw(CDC *param_1,IMAGES_IDS param_2,CRect *param_3,IMAGE_STATE param_4,
                      CSize *param_5)

{
  int iVar1;
  CSize *pCVar2;
  int local_c;
  int local_8;
  
  iVar1 = CSize::operator==(param_5,(tagSIZE)0x0);
  pCVar2 = param_5;
  if (iVar1 != 0) {
    pCVar2 = (CSize *)FUN_10037b18(&local_c);
  }
  iVar1 = (*(int *)(param_3 + 8) - *(int *)param_3) - *(int *)pCVar2;
  local_c = *(int *)param_3 + iVar1 % 2 + iVar1 / 2;
  iVar1 = (*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) - *(int *)(pCVar2 + 4);
  local_8 = *(int *)(param_3 + 4) + iVar1 % 2 + iVar1 / 2;
  Draw(param_1,param_2,(CPoint *)&local_c,param_4,param_5);
  return;
}

