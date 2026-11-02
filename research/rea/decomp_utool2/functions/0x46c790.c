// rea decompile_all
// name: FUN_0046c790
// address: 0x46c790
// body: available
// range: 0x46c790-0x46c873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c790(HDC param_1,UINT param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  UINT local_28;
  undefined4 local_24;
  float local_20;
  _GLYPHMETRICS local_1c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_24 = param_3;
  local_28 = param_2;
  iVar1 = FUN_0046c9b0(&local_28);
  if (iVar1 < 0) {
    local_24 = 0xffffffff;
    iVar1 = FUN_0046c9b0(&local_28);
    if (iVar1 < 0) {
      local_24 = 0xffffffff;
      local_1c.gmCellIncX = 0;
      GetGlyphOutlineW(param_1,param_2,0x82,&local_1c,0,(LPVOID)0x0,(MAT2 *)&DAT_00c02380);
      local_20 = (float)(int)local_1c.gmCellIncX / (float)*(int *)(in_ECX + 0x38);
      FUN_0046c8f0(&local_28);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

