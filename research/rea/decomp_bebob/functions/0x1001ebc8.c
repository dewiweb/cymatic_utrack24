// rea decompile_all
// name: ATL::CImage::AlphaBlend
// address: 0x1001ebc8
// body: available
// range: 0x1001ebc8-0x1001ec27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CImage::AlphaBlend(struct HDC__
   *,int,int,int,int,int,int,int,int,unsigned char,unsigned char)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
ATL::CImage::AlphaBlend
          (CImage *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,uchar param_10,uchar param_11)

{
  BOOL BVar1;
  BYTE BStack00000029;
  uchar uStack0000002a;
  BYTE BStack0000002b;
  
  uStack0000002a = param_10;
  BStack00000029 = '\0';
  param_10 = param_11;
  BStack0000002b = this[0x1d] != (CImage)0x0;
  GetDC(this);
  BVar1 = ::AlphaBlend(param_1,param_2,param_3,param_4,param_5,*(HDC *)(this + 0x28),param_6,param_7
                       ,param_8,param_9,_param_10);
  ReleaseDC(this);
  return BVar1;
}

