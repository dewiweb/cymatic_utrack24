// rea decompile_all
// name: FUN_0068bf30
// address: 0x68bf30
// body: available
// range: 0x68bf30-0x68c018 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068bf30(int *param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  int local_20;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072139d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(code **)(*in_ECX + 0xb8) == FUN_006d45e0) {
    FUN_0068b9e0(&local_20);
  }
  else {
    (**(code **)(*in_ECX + 0xb8))(&local_20,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  }
  cVar2 = FUN_0068b100();
  if (cVar2 != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    ExceptionList = local_10;
    return;
  }
  local_8 = 0;
  if (*(char *)((int)in_ECX + 0x71) == '\0') {
LAB_0068bfd9:
    iVar3 = in_ECX[0x38];
    if (in_ECX[7] + -4 < in_ECX[0x38]) {
      iVar3 = in_ECX[7] + -4;
    }
  }
  else {
    if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
      cVar2 = FUN_006e6420();
      if (cVar2 != '\0') goto LAB_0068bfd9;
    }
    iVar3 = 0;
  }
  iVar1 = in_ECX[6];
  *param_1 = local_1c;
  param_1[1] = local_20;
  param_1[2] = (iVar1 - local_14) - local_1c;
  param_1[3] = iVar3;
  ExceptionList = local_10;
  return;
}

