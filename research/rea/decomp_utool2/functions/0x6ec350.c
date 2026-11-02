// rea decompile_all
// name: FUN_006ec350
// address: 0x6ec350
// body: available
// range: 0x6ec350-0x6ec423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ec350(char param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728ff5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063eab0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (param_1 != '\0') {
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    iVar1 = in_ECX[0x2d];
    cVar2 = FUN_006e6420();
    if ((cVar2 != '\0') && (0 < iVar1)) {
      FUN_006e6060(in_ECX,in_ECX + 4,iVar1,1,0,0x3ff00000,0,0x3ff00000);
    }
  }
  (**(code **)(*in_ECX + 0x28))(0);
  if ((char)in_ECX[0x38] != '\0') {
    (**(code **)*in_ECX)(1);
  }
  ExceptionList = local_10;
  return;
}

