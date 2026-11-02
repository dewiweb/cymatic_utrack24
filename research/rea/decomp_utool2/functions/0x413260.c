// rea decompile_all
// name: FUN_00413260
// address: 0x413260
// body: available
// range: 0x413260-0x4132ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413260(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc9d1;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar3) {
    FUN_0040ede0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  puVar4 = (undefined4 *)(in_ECX[2] * 0x10 + *in_ECX);
  in_ECX[2] = in_ECX[2] + 1;
  local_8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = (int *)*param_1;
    *puVar4 = piVar1;
    (**(code **)(*piVar1 + 0x58))(puVar4 + 2,param_1 + 2,uVar2);
  }
  ExceptionList = local_10;
  return;
}

