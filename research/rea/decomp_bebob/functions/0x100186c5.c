// rea decompile_all
// name: AFX_GLOBAL_DATA::CreateDitherBitmap
// address: 0x100186c5
// body: available
// range: 0x100186c5-0x1001879c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HBITMAP__ * __thiscall AFX_GLOBAL_DATA::CreateDitherBitmap(struct HDC__ *)
   
   Library: Visual Studio 2010 Release */

HBITMAP__ * __thiscall AFX_GLOBAL_DATA::CreateDitherBitmap(AFX_GLOBAL_DATA *this,HDC__ *param_1)

{
  DWORD DVar1;
  uint uVar2;
  HBITMAP__ *pHVar3;
  BITMAPINFO local_90;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  int local_28 [8];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  _memset(&local_90,0,0x68);
  local_90.bmiHeader.biCompression = 0;
  local_90.bmiHeader.biPlanes = 1;
  local_90.bmiHeader.biBitCount = 1;
  local_90.bmiColors[0].rgbBlue = (BYTE)((uint)DAT_10166ab4 >> 0x10);
  local_90.bmiHeader.biSize = 0x28;
  local_90.bmiHeader.biWidth = 8;
  local_90.bmiHeader.biHeight = 8;
  local_90.bmiColors[0].rgbGreen = (BYTE)((uint)DAT_10166ab4 >> 8);
  local_90.bmiColors[0].rgbRed = (BYTE)DAT_10166ab4;
  DVar1 = GetSysColor(0x14);
  local_64 = (undefined1)(DVar1 >> 0x10);
  local_62 = (undefined1)DVar1;
  local_63 = (undefined1)(DVar1 >> 8);
  uVar2 = 0;
  do {
    local_28[uVar2] = (-(uint)((uVar2 & 1) != 0) & 0x5554aaab) + 0x5555aaaa;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  CreateDIBitmap(param_1,&local_90.bmiHeader,4,local_28,&local_90,0);
  pHVar3 = (HBITMAP__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar3;
}

