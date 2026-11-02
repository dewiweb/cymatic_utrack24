// rea decompile_all
// name: CPreviewDC::MirrorMappingMode
// address: 0x100f3619
// body: available
// range: 0x100f3619-0x100f3717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewDC::MirrorMappingMode(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewDC::MirrorMappingMode(CPreviewDC *this,int param_1)

{
  LPSIZE lpsize;
  LPSIZE lpsize_00;
  LONG LVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  long lVar4;
  
  if (param_1 != 0) {
    lpsize = (LPSIZE)(this + 0x38);
    GetViewportExtEx(*(HDC *)(this + 8),lpsize);
    lpsize_00 = (LPSIZE)(this + 0x30);
    GetWindowExtEx(*(HDC *)(this + 8),lpsize_00);
    LVar1 = lpsize_00->cx;
    while ((((-0x4000 < LVar1 && (lpsize_00->cx < 0x4000)) && (iVar3 = lpsize->cx, -0x4000 < iVar3))
           && (iVar3 < 0x4000))) {
      LVar1 = lpsize_00->cx * 2;
      lpsize_00->cx = LVar1;
      lpsize->cx = iVar3 * 2;
    }
    iVar3 = *(int *)(this + 0x34);
    while (((-0x4000 < iVar3 && (*(int *)(this + 0x34) < 0x4000)) &&
           ((iVar2 = *(int *)(this + 0x3c), -0x4000 < iVar2 && (iVar2 < 0x4000))))) {
      iVar3 = *(int *)(this + 0x34) * 2;
      *(int *)(this + 0x34) = iVar3;
      *(int *)(this + 0x3c) = iVar2 * 2;
    }
    iVar3 = GetDeviceCaps(*(HDC *)(this + 8),0x58);
    lVar4 = _AfxMultMultDivDiv(lpsize->cx,*(int *)(this + 0x10),DAT_10164b38,*(int *)(this + 0x14),
                               iVar3);
    hdc = *(HDC *)(this + 8);
    lpsize->cx = lVar4;
    iVar3 = GetDeviceCaps(hdc,0x5a);
    lVar4 = _AfxMultMultDivDiv(*(int *)(this + 0x3c),*(int *)(this + 0x10),DAT_10164b3c,
                               *(int *)(this + 0x14),iVar3);
    *(long *)(this + 0x3c) = lVar4;
  }
  if (*(HDC *)(this + 4) != (HDC)0x0) {
    SetMapMode(*(HDC *)(this + 4),8);
    SetWindowExtEx(*(HDC *)(this + 4),*(int *)(this + 0x30),*(int *)(this + 0x34),(LPSIZE)0x0);
    SetViewportExtEx(*(HDC *)(this + 4),*(int *)(this + 0x38),*(int *)(this + 0x3c),(LPSIZE)0x0);
    MirrorViewportOrg(this);
  }
  return;
}

