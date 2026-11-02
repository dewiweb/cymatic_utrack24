// rea decompile_all
// name: FUN_00456b40
// address: 0x456b40
// body: available
// range: 0x456b40-0x456c96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00456b40(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  
  piVar4 = param_1;
  iVar1 = *param_1;
  pcVar2 = *(code **)(iVar1 + 0x24);
  if (pcVar2 == FUN_0062a8d0) {
    param_1 = (int *)0x2014b50;
    (**(code **)(iVar1 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar2)(0x2014b50);
  }
  pcVar2 = *(code **)(*piVar4 + 0x1c);
  if (pcVar2 == FUN_00620620) {
    param_1 = (int *)0x14;
    (**(code **)(*piVar4 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar2)(0x14);
  }
  FUN_00456e80(piVar4);
  pcVar2 = *(code **)(*piVar4 + 0x1c);
  if (pcVar2 == FUN_00620620) {
    param_1 = (int *)0x0;
    (**(code **)(*piVar4 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar2)(0);
  }
  pcVar2 = *(code **)(*piVar4 + 0x1c);
  if (pcVar2 == FUN_00620620) {
    param_1 = (int *)0x0;
    (**(code **)(*piVar4 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar2)(0);
  }
  pcVar2 = *(code **)(*piVar4 + 0x1c);
  if (pcVar2 == FUN_00620620) {
    param_1 = (int *)0x0;
    (**(code **)(*piVar4 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar2)(0);
  }
  pcVar2 = *(code **)(*piVar4 + 0x24);
  if (pcVar2 == FUN_0062a8d0) {
    param_1 = (int *)0x0;
    (**(code **)(*piVar4 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar2)(0);
  }
  pcVar2 = *(code **)(*piVar4 + 0x24);
  if (pcVar2 == FUN_0062a8d0) {
    param_1 = *(int **)(in_ECX + 0x28);
    (**(code **)(*piVar4 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar2)(*(int **)(in_ECX + 0x28));
  }
  uVar3 = *(undefined4 *)(in_ECX + 8);
  uVar5 = FUN_0045d1e0(uVar3);
  (**(code **)(*piVar4 + 0x10))(uVar3,uVar5);
  return 1;
}

