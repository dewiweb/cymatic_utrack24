// rea decompile_all
// name: FUN_00633320
// address: 0x633320
// body: available
// range: 0x633320-0x6333eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00633320(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  LPCWSTR _Memory;
  undefined4 *in_ECX;
  _SHFILEOPSTRUCTW local_2c;
  LPCWSTR local_8;
  
  if (*(char *)*in_ECX != '\0') {
    puVar1 = (undefined4 *)FUN_00458890();
    DVar2 = GetFileAttributesW((LPCWSTR)*puVar1);
    if (DVar2 != 0xffffffff) {
      iVar3 = FUN_0045d6b0(*in_ECX);
      FID_conflict__free((void *)0x0);
      _Memory = (LPCWSTR)FUN_004c5556(iVar3 + 8,1);
      if (_Memory == (LPCWSTR)0x0) {
        FUN_0045d6b0();
      }
      else {
        local_8 = _Memory;
        FUN_0045e270(*in_ECX);
      }
      local_2c.hwnd = (HWND)0x0;
      local_2c.pTo = (LPCWSTR)0x0;
      local_2c._20_8_ = 0;
      local_2c._16_4_ = 0x65c;
      local_2c.lpszProgressTitle._2_2_ = 0;
      local_2c.wFunc = 3;
      local_2c.pFrom = _Memory;
      iVar3 = SHFileOperationW(&local_2c);
      FID_conflict__free(_Memory);
      return iVar3 == 0;
    }
  }
  return true;
}

