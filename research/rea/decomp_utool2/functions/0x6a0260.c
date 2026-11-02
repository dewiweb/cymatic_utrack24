// rea decompile_all
// name: FUN_006a0260
// address: 0x6a0260
// body: available
// range: 0x6a0260-0x6a0303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006a0260(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722ad3;
  local_10 = ExceptionList;
  if (0 < *(int *)(in_ECX + 8)) {
    ExceptionList = &local_10;
    operator_new(0x104);
    local_8 = 0;
    if ((*(int *)(param_1 + 8) < 1) || (*(int *)(param_1 + 0xc) < 1)) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    uVar2 = FUN_00496b80(in_ECX,0,param_1,bVar1 ^ 1,((byte)DAT_00c8a9c8 & 0x70) != 0,param_2);
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}

