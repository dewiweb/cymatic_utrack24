// rea decompile_all
// name: CDialogTemplate::SetSystemFont
// address: 0x10053d88
// body: available
// range: 0x10053d88-0x10053e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::SetSystemFont(unsigned short)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDialogTemplate::SetSystemFont(CDialogTemplate *this,ushort param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  wchar_t *pwVar2;
  ushort uVar3;
  int local_64 [7];
  wchar_t local_48 [32];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar3 = 10;
  pwVar2 = L"System";
  h = GetStockObject(0x11);
  if (h == (HGDIOBJ)0x0) {
    h = GetStockObject(0xd);
    if (h == (HGDIOBJ)0x0) goto LAB_10053e06;
  }
  iVar1 = GetObjectW(h,0x5c,local_64);
  if (iVar1 != 0) {
    pwVar2 = local_48;
    hdc = GetDC((HWND)0x0);
    if (local_64[0] < 0) {
      local_64[0] = -local_64[0];
    }
    iVar1 = GetDeviceCaps(hdc,0x5a);
    iVar1 = MulDiv(local_64[0],0x48,iVar1);
    uVar3 = (ushort)iVar1;
    ReleaseDC((HWND)0x0,hdc);
  }
LAB_10053e06:
  if (param_1 == 0) {
    param_1 = uVar3;
  }
  SetFont(this,pwVar2,param_1);
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

