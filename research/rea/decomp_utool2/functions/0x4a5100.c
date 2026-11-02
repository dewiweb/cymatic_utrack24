// rea decompile_all
// name: FUN_004a5100
// address: 0x4a5100
// body: available
// range: 0x4a5100-0x4a51a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004a5100(void)

{
  uint uVar1;
  void *pvVar2;
  int in_ECX;
  float10 fVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007037b2;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x70) != 0) && (*(int *)(*(int *)(in_ECX + 0x70) + 8) != 0)) {
    if (*(int *)(in_ECX + 0x70) != 0) {
      fVar3 = (float10)(**(code **)(**(int **)(*(int *)(in_ECX + 0x70) + 8) + 0x3c))();
      ExceptionList = local_10;
      return fVar3;
    }
    fVar3 = (float10)(**(code **)(iRam00000000 + 0x3c))();
    ExceptionList = local_10;
    return fVar3;
  }
  if (DAT_00c8a67c == 0) {
    pvVar2 = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960(uVar1,pvVar2);
  }
  ExceptionList = local_10;
  return (float10)*(float *)(DAT_00c8a67c + 0x8c);
}

