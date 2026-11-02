// rea decompile_all
// name: FUN_1001292c
// address: 0x1001292c
// body: available
// range: 0x1001292c-0x100129c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1001292c(uint param_1)

{
  CRenderTarget *this;
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  
  this = (CRenderTarget *)FUN_100128ef(param_1);
  if (this != (CRenderTarget *)0x0) {
    if (*(int *)(this + 4) == 0) {
      if (param_1 == 0) {
        pHVar1 = (HWND)0x0;
      }
      else {
        pHVar1 = *(HWND *)(param_1 + 0x20);
      }
      FUN_1001842d(this,pHVar1);
      if (*(int *)(this + 4) == 0) {
        return 0;
      }
    }
    FUN_100183bb(this);
    LVar2 = SendMessageW(*(HWND *)(param_1 + 0x20),DAT_101665bc,0,(LPARAM)this);
    iVar3 = FUN_10018332((int)this);
    if (iVar3 == -0x7766fff4) {
      FUN_10018514(this,*(HWND *)(param_1 + 0x20));
      SendMessageW(*(HWND *)(param_1 + 0x20),DAT_10166634,0,(LPARAM)this);
    }
    if (LVar2 != 0) {
      ValidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0);
      return 1;
    }
  }
  return 0;
}

