// rea decompile_all
// name: CDrawingManager::CreateBitmap_32
// address: 0x1009c4c8
// body: available
// range: 0x1009c4c8-0x1009c570 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static struct HBITMAP__ * __stdcall CDrawingManager::CreateBitmap_32(class CSize const
   &,void * *)
   
   Library: Visual Studio 2010 Release */

HBITMAP__ * CDrawingManager::CreateBitmap_32(CSize *param_1,void **param_2)

{
  int iVar1;
  long lVar2;
  HBITMAP pHVar3;
  HBITMAP__ *pHVar4;
  int iVar5;
  LONG *pLVar6;
  void *local_38;
  BITMAPINFO local_34;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_2 != (void **)0x0) {
    *param_2 = (void *)0x0;
  }
  iVar1 = *(int *)param_1;
  if ((0 < iVar1) && (*(int *)(param_1 + 4) != 0)) {
    pLVar6 = &local_34.bmiHeader.biWidth;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar6 = 0;
      pLVar6 = pLVar6 + 1;
    }
    local_34.bmiHeader.biHeight = *(LONG *)(param_1 + 4);
    local_34.bmiHeader.biSize = 0x28;
    local_34.bmiHeader.biWidth = iVar1;
    lVar2 = _labs(local_34.bmiHeader.biHeight);
    local_34.bmiHeader.biSizeImage = *(int *)param_1 * lVar2;
    local_34.bmiHeader.biPlanes = 1;
    local_34.bmiHeader.biBitCount = 0x20;
    local_34.bmiHeader.biCompression = 0;
    local_38 = (void *)0x0;
    pHVar3 = CreateDIBSection((HDC)0x0,&local_34,0,&local_38,(HANDLE)0x0,0);
    if (((local_38 != (void *)0x0) && (pHVar3 != (HBITMAP)0x0)) && (param_2 != (void **)0x0)) {
      *param_2 = local_38;
    }
  }
  pHVar4 = (HBITMAP__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar4;
}

