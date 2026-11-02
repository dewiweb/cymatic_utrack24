// rea decompile_all
// name: FUN_00456e80
// address: 0x456e80
// body: available
// range: 0x456e80-0x45701b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00456e80(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int in_ECX;
  
  piVar5 = param_1;
  iVar3 = *param_1;
  pcVar4 = *(code **)(iVar3 + 0x1c);
  if (pcVar4 == FUN_00620620) {
    param_1 = (int *)0xa;
    (**(code **)(iVar3 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar4)(10);
  }
  pcVar4 = *(code **)(*piVar5 + 0x1c);
  if (pcVar4 == FUN_00620620) {
    param_1 = (int *)0x800;
    (**(code **)(*piVar5 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar4)(0x800);
  }
  piVar6 = (int *)0x0;
  if (0 < *(int *)(in_ECX + 0x30)) {
    piVar6 = (int *)0x8;
  }
  pcVar4 = *(code **)(*piVar5 + 0x1c);
  if (pcVar4 == FUN_00620620) {
    param_1 = piVar6;
    (**(code **)(*piVar5 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar4)(piVar6);
  }
  FUN_00456ca0(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
  pcVar4 = *(code **)(*piVar5 + 0x24);
  if (pcVar4 == FUN_0062a8d0) {
    param_1 = *(int **)(in_ECX + 0x34);
    (**(code **)(*piVar5 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar4)(*(int **)(in_ECX + 0x34));
  }
  pcVar4 = *(code **)(*piVar5 + 0x24);
  if (pcVar4 == FUN_0062a8d0) {
    param_1 = *(int **)(in_ECX + 0x18);
    (**(code **)(*piVar5 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar4)(*(int **)(in_ECX + 0x18));
  }
  pcVar4 = *(code **)(*piVar5 + 0x24);
  if (pcVar4 == FUN_0062a8d0) {
    param_1 = *(int **)(in_ECX + 0x20);
    (**(code **)(*piVar5 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar4)(*(int **)(in_ECX + 0x20));
  }
  pcVar7 = *(char **)(in_ECX + 8);
  pcVar1 = pcVar7 + 1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  pcVar4 = *(code **)(*piVar5 + 0x1c);
  if (pcVar4 == FUN_00620620) {
    param_1 = (int *)((int)pcVar7 - (int)pcVar1 & 0xffff);
    (**(code **)(*piVar5 + 0x10))(&param_1,2);
  }
  else {
    (*pcVar4)((int)pcVar7 - (int)pcVar1);
  }
  pcVar4 = *(code **)(*piVar5 + 0x1c);
  if (pcVar4 == FUN_00620620) {
    param_1 = (int *)0x0;
    (**(code **)(*piVar5 + 0x10))(&param_1,2);
    return;
  }
  (*pcVar4)(0);
  return;
}

