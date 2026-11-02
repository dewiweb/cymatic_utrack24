// rea decompile_all
// name: FUN_00628510
// address: 0x628510
// body: available
// range: 0x628510-0x6285c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628510(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071da4d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  FUN_00635720(*in_EDX,&DAT_00c00b44,&DAT_00c00cf8);
  FUN_0062c6c0(uVar2);
  uVar2 = in_ECX[2];
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    cVar1 = FUN_00629eb0();
    if ((cVar1 == '\0') && (uVar2 < (uint)in_ECX[2])) {
      FUN_004179e0(uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

