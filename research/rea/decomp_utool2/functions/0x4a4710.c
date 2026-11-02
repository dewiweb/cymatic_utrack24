// rea decompile_all
// name: FUN_004a4710
// address: 0x4a4710
// body: available
// range: 0x4a4710-0x4a47da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4710(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007036f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *param_1;
  *in_ECX = iVar2;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar2 = *param_2;
  in_ECX[1] = iVar2;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  in_ECX[2] = (int)&DAT_00bfe12c;
  in_ECX[3] = (int)&DAT_00bfe12c;
  in_ECX[4] = (int)&DAT_00bfe12c;
  local_8 = 4;
  in_ECX[5] = param_4;
  in_ECX[6] = param_5;
  in_ECX[7] = 0;
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0040de70(param_3);
  }
  in_ECX[8] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  in_ECX[9] = param_6;
  *(undefined1 *)(in_ECX + 10) = param_7;
  ExceptionList = local_10;
  return;
}

