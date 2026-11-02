// rea decompile_all
// name: ATL::CImage::CreateEx
// address: 0x100204b1
// body: available
// range: 0x100204b1-0x100205b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CImage::CreateEx(int,int,int,unsigned long,unsigned long const
   *,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
ATL::CImage::CreateEx
          (CImage *this,int param_1,int param_2,int param_3,ulong param_4,ulong *param_5,
          ulong param_6)

{
  undefined4 *puVar1;
  BITMAPINFO *lpbmi;
  int iVar2;
  errno_t eVar3;
  HBITMAP pHVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  lpbmi = _ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::Allocate
                    ((CAtlSafeAllocBufferManager<ATL::CCRTAllocator> *)&local_8,0x428);
  puVar5 = local_8;
  if (lpbmi == (BITMAPINFO *)0x0) {
    while (puVar5 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar5;
      _free(puVar5);
      puVar5 = puVar1;
    }
    iVar2 = 0;
  }
  else {
    _memset(lpbmi,0,0x28);
    (lpbmi->bmiHeader).biWidth = param_1;
    (lpbmi->bmiHeader).biPlanes = 1;
    (lpbmi->bmiHeader).biSize = 0x28;
    (lpbmi->bmiHeader).biHeight = param_2;
    (lpbmi->bmiHeader).biBitCount = (WORD)param_3;
    (lpbmi->bmiHeader).biCompression = param_4;
    if (param_3 < 9) {
      _memset(lpbmi->bmiColors,0,0x400);
    }
    else if (param_4 == 3) {
      eVar3 = _memcpy_s(lpbmi->bmiColors,0xc,param_5,0xc);
      FUN_10004c40(eVar3);
    }
    pHVar4 = CreateDIBSection((HDC)0x0,lpbmi,0,(void **)(this + 8),(HANDLE)0x0,0);
    puVar5 = local_8;
    if (pHVar4 == (HBITMAP)0x0) {
      while (puVar5 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar5;
        _free(puVar5);
        puVar5 = puVar1;
      }
      iVar2 = 0;
    }
    else {
      *(HBITMAP *)(this + 4) = pHVar4;
      UpdateBitmapInfo(this,(-1 < param_2) + 1);
      puVar5 = local_8;
      if ((param_6 & 1) != 0) {
        this[0x1d] = (CImage)0x1;
      }
      while (puVar5 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar5;
        _free(puVar5);
        puVar5 = puVar1;
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}

