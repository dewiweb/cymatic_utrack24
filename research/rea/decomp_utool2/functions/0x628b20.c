// rea decompile_all
// name: FUN_00628b20
// address: 0x628b20
// body: available
// range: 0x628b20-0x628bb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628b20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071db30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_00628bc0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar2 = piVar1[2] + 1;
  if (piVar1[1] < iVar2) {
    FUN_0040ede0(iVar2 / 2 + piVar1[2] + 9 & 0xfffffff8);
  }
  puVar3 = (undefined4 *)(piVar1[2] * 0x10 + *piVar1);
  piVar1[2] = piVar1[2] + 1;
  local_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = (int *)*param_1;
    *puVar3 = piVar1;
    (**(code **)(*piVar1 + 0x58))(puVar3 + 2,param_1 + 2);
  }
  ExceptionList = local_10;
  return;
}

