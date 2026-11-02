// rea decompile_all
// name: CDialogTemplate::SetFont
// address: 0x10053c64
// body: available
// range: 0x10053c64-0x10053d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::SetFont(wchar_t const *,unsigned short)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDialogTemplate::SetFont(CDialogTemplate *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  DLGTEMPLATE *pDVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  size_t sVar6;
  void *pvVar7;
  int iVar8;
  rsize_t rVar9;
  int iVar10;
  uint uVar11;
  WORD WVar12;
  void *pvVar13;
  bool bVar14;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  pDVar2 = GlobalLock(*(HGLOBAL *)this);
  bVar14 = *(short *)((int)&pDVar2->style + 2) == -1;
  iVar3 = HasFont(pDVar2);
  iVar8 = (uint)bVar14 * 2 + 1;
  iVar1 = iVar8 * 2;
  if (bVar14) {
    uVar11._0_2_ = pDVar2->y;
    uVar11._2_2_ = pDVar2->cx;
    pDVar2->y = (short)(uVar11 | 0x40);
    pDVar2->cx = (short)((uVar11 | 0x40) >> 0x10);
  }
  else {
    pDVar2->style = pDVar2->style | 0x40;
  }
  iVar4 = lstrlenW(param_1);
  if ((iVar4 < 0x20) && (iVar4 = iVar1 + 2 + iVar4 * 2, iVar1 <= iVar4)) {
    puVar5 = (ushort *)GetFontSizeField(pDVar2);
    iVar10 = 0;
    if (iVar3 != 0) {
      sVar6 = _wcslen((wchar_t *)(puVar5 + iVar8));
      iVar10 = iVar1 + 2 + sVar6 * 2;
    }
    pvVar7 = (void *)((uint)(iVar10 + 3 + (int)puVar5) & 0xfffffffc);
    pvVar13 = (void *)((uint)((int)puVar5 + iVar4 + 3) & 0xfffffffc);
    if (bVar14) {
      WVar12 = pDVar2->cy;
    }
    else {
      WVar12 = pDVar2->cdit;
    }
    if ((iVar4 != iVar10) && (WVar12 != 0)) {
      uVar11 = (*(uint *)(this + 4) - (int)pvVar7) + (int)pDVar2;
      if (*(uint *)(this + 4) < uVar11) goto LAB_10053d3d;
      FUN_10004d70(pvVar13,uVar11,pvVar7,uVar11);
    }
    *puVar5 = param_2;
    rVar9 = iVar4 + iVar8 * -2;
    FUN_10004d70(puVar5 + iVar8,rVar9,param_1,rVar9);
    *(int *)(this + 4) = (int)pvVar13 + (*(int *)(this + 4) - (int)pvVar7);
    GlobalUnlock(*(HGLOBAL *)this);
    *(undefined4 *)(this + 8) = 0;
    iVar8 = 1;
  }
  else {
LAB_10053d3d:
    iVar8 = 0;
  }
  return iVar8;
}

