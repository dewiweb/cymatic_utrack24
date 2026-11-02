// rea decompile_all
// name: CMFCToolBarImages::EndDrawImage
// address: 0x100809d8
// body: available
// range: 0x100809d8-0x10080ab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10080a5d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBarImages::EndDrawImage(struct tagAFXDrawState &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarImages::EndDrawImage(CMFCToolBarImages *this,tagAFXDrawState *param_1)

{
  int iVar1;
  void *ho;
  HDC__ *hdc;
  
  if (*(int *)(this + 0x3c) != 0) {
    SelectObject(DAT_10168928,*(HGDIOBJ *)(param_1 + 4));
    AfxDeleteObject((void **)param_1);
  }
  SelectObject(DAT_10168924,*(HGDIOBJ *)(param_1 + 8));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  if (*(int *)(this + 8) == 0x20) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(this + 0xa4);
  }
  if ((*(int *)(this + 0x1c) != 0) || (iVar1 != -1)) {
    if (*(int *)(this + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    CDC::SelectGdiObject(*(HDC__ **)(this + 0x44),*(void **)(*(int *)(this + 0xa0) + 4));
    *(undefined4 *)(this + 0xa0) = 0;
    ho = CGdiObject::Detach((CGdiObject *)(this + 0x98));
    DeleteObject(ho);
    hdc = CDC::Detach((CDC *)(this + 0x40));
    DeleteDC(hdc);
  }
  *(undefined4 *)(this + 0x28) = 0;
  if (DAT_10168918 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10168934);
  }
  return;
}

