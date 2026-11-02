// rea decompile_all
// name: FUN_006c70b0
// address: 0x6c70b0
// body: available
// range: 0x6c70b0-0x6c715f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c70b0(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725ebf;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xc0) != 2) {
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_0063bf80(local_24);
    cVar1 = (**(code **)(*(int *)*puVar2 + 0x14))(puVar2 + 2);
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    if (cVar1 == '\0') {
      if (*(int *)(in_ECX + 0xc0) == 0) {
        FUN_006c7090(param_1);
      }
      else {
        FUN_006c7060(param_1);
      }
      goto LAB_006c7140;
    }
  }
  FUN_006c6fd0(param_1);
LAB_006c7140:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

