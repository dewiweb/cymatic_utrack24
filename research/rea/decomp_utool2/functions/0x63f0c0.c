// rea decompile_all
// name: FUN_0063f0c0
// address: 0x63f0c0
// body: available
// range: 0x63f0c0-0x63f192 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063f0c0(int param_1,undefined4 param_2,byte param_3,LPARAM param_4)

{
  int iVar1;
  HDC hdc;
  int *_Memory;
  int local_68;
  tagLOGFONTW local_64;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((param_1 != 0) && ((param_3 & 1) == 0)) {
    _memset(&local_64,0,0x5c);
    local_64.lfWeight = 0;
    local_64.lfCharSet = '\x01';
    local_64.lfOutPrecision = '\b';
    local_64.lfClipPrecision = '\0';
    local_64.lfQuality = '\0';
    local_64.lfPitchAndFamily = '\0';
    FUN_0045cae0(param_1 + 0x1c);
    FUN_0045e270(local_68);
    hdc = CreateCompatibleDC((HDC)0x0);
    EnumFontFamiliesExW(hdc,&local_64,FUN_0063f1a0,param_4,0);
    DeleteDC(hdc);
    _Memory = (int *)(local_68 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

