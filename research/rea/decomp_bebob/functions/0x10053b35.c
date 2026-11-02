// rea decompile_all
// name: CDialogTemplate::GetTemplateSize
// address: 0x10053b35
// body: available
// range: 0x10053b35-0x10053c01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static unsigned int __cdecl CDialogTemplate::GetTemplateSize(struct DLGTEMPLATE const
   *)
   
   Library: Visual Studio 2010 Release */

uint __cdecl CDialogTemplate::GetTemplateSize(DLGTEMPLATE *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  ushort *puVar4;
  ushort uVar5;
  WORD WVar6;
  bool bVar7;
  
  bVar7 = *(short *)((int)&param_1->style + 2) == -1;
  pwVar1 = (wchar_t *)GetFontSizeField(param_1);
  iVar2 = HasFont(param_1);
  if (iVar2 != 0) {
    sVar3 = _wcslen(pwVar1 + (uint)bVar7 * 2 + 1);
    pwVar1 = pwVar1 + (uint)bVar7 * 2 + 1 + sVar3 + 1;
  }
  if (bVar7) {
    WVar6 = param_1->cy;
  }
  else {
    WVar6 = param_1->cdit;
  }
  if (WVar6 != 0) {
    do {
      puVar4 = (ushort *)(((int)pwVar1 + 3U & 0xfffffffc) + (-(uint)bVar7 & 6) + 0x12);
      if (*puVar4 == 0xffff) {
        puVar4 = puVar4 + 2;
      }
      else {
        do {
          uVar5 = *puVar4;
          puVar4 = puVar4 + 1;
        } while (uVar5 != 0);
      }
      if (*puVar4 == 0xffff) {
        puVar4 = puVar4 + 2;
      }
      else {
        do {
          uVar5 = *puVar4;
          puVar4 = puVar4 + 1;
        } while (uVar5 != 0);
      }
      uVar5 = *puVar4;
      if ((uVar5 != 0) && (!bVar7)) {
        uVar5 = uVar5 - 2;
      }
      WVar6 = WVar6 - 1;
      pwVar1 = (wchar_t *)((int)puVar4 + uVar5 + 2);
    } while (WVar6 != 0);
  }
  return (int)pwVar1 - (int)param_1;
}

