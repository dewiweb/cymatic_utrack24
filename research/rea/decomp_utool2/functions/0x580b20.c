// rea decompile_all
// name: FUN_00580b20
// address: 0x580b20
// body: available
// range: 0x580b20-0x580d28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580b20(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  FUN_006e9790(*(int *)(in_ECX + 0x18) + -0x1cc,0,0x28,0x28);
  FUN_006e9790(0,0,0x50,0x20);
  if (*(int *)(in_ECX + 0x460) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)**(undefined4 **)(in_ECX + 0x458);
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e9790(0x50,0,0x50,0x20);
  if (*(uint *)(in_ECX + 0x460) < 2) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x458) + 4);
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e9790(0xa0,0,0x50,0x20);
  if (*(uint *)(in_ECX + 0x460) < 3) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x458) + 8);
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e9790(0xf0,0,0x50,0x20);
  if (*(uint *)(in_ECX + 0x460) < 4) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x458) + 0xc);
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e9790(0x140,0,0x50,0x20);
  if (*(uint *)(in_ECX + 0x460) < 5) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x458) + 0x10);
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e9790(400,0,0x50,0x20);
  if (*(uint *)(in_ECX + 0x460) < 6) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x458) + 0x14);
  }
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e9790(500,6,0x32,0x14);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x46c)) {
    do {
      FUN_006e9790(10,0x2a,*(int *)(in_ECX + 0x18) + -0x14,*(int *)(in_ECX + 0x1c) + -0x34);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x46c));
  }
  return;
}

