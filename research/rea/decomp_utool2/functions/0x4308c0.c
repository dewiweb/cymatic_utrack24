// rea decompile_all
// name: FUN_004308c0
// address: 0x4308c0
// body: available
// range: 0x4308c0-0x430958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004308c0(void)

{
  char cVar1;
  LPCSTR in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 uVar3;
  WCHAR local_88 [64];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  cVar1 = FUN_00426fd0();
  if (cVar1 == '\0') {
    _memset(local_88,0,0x80);
    MultiByteToWideChar(0,0,in_EDX,0x20,local_88,0x40);
    FUN_0045cae0(local_88);
    uVar2 = extraout_EDX_00;
  }
  else {
    FUN_0062bed0(0x20);
    uVar2 = extraout_EDX;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar2,uVar3);
  return;
}

