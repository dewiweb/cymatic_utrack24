// rea decompile_all
// name: CPngImage::LoadFromBuffer
// address: 0x10082e18
// body: available
// range: 0x10082e18-0x10082ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10082ea4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPngImage::LoadFromBuffer(unsigned char *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPngImage::LoadFromBuffer(CPngImage *this,uchar *param_1,uint param_2)

{
  HGLOBAL hMem;
  LPVOID _Dst;
  HRESULT HVar1;
  CImage *this_00;
  HBITMAP__ *pHVar2;
  int iVar3;
  CPngImage *local_8;
  
  local_8 = this;
  hMem = GlobalAlloc(2,param_2);
  if (hMem != (HGLOBAL)0x0) {
    local_8 = (CPngImage *)0x0;
    _Dst = GlobalLock(hMem);
    FID_conflict__memcpy(_Dst,param_1,param_2);
    HVar1 = CreateStreamOnHGlobal(hMem,0,(LPSTREAM *)&local_8);
    if (HVar1 == 0) {
      if (DAT_10168918 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10168934);
      }
      if (DAT_101688e0 == (CImage *)0x0) {
        this_00 = FUN_1000858a(0x34);
        if (this_00 == (CImage *)0x0) {
          DAT_101688e0 = (CImage *)0x0;
        }
        else {
          DAT_101688e0 = (CImage *)ATL::CImage::CImage(this_00);
        }
        if (DAT_101688e0 == (CImage *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
      }
      ATL::CImage::Load(DAT_101688e0,(IStream *)local_8);
      (*(*(IStreamVtbl **)&local_8->field_0x0)->Release)((IStream *)local_8);
      pHVar2 = ATL::CImage::Detach(DAT_101688e0);
      iVar3 = CMenu::Attach((CMenu *)this,(HMENU__ *)pHVar2);
      if (DAT_10168918 == 0) {
        return iVar3;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10168934);
      return iVar3;
    }
  }
  return 0;
}

