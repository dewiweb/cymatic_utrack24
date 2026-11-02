// rea decompile_all
// name: FUN_00697830
// address: 0x697830
// body: available
// range: 0x697830-0x6978e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697830(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(in_ECX + 0xb4);
  if (iVar1 == 0) {
    uVar4 = 0x1c;
    uVar6 = 100;
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0x10);
    uVar7 = *(undefined4 *)(iVar1 + 0x14);
    uVar6 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  }
  *(undefined4 *)(in_ECX + 0xb4) = param_1;
  FUN_006e9790(uVar5,uVar7,uVar6,uVar4);
  piVar2 = *(int **)(in_ECX + 0xb4);
  if (*(int **)(in_ECX + 0x80) != piVar2) {
    piVar3 = *(int **)(in_ECX + 0x80);
    if ((piVar3 != piVar2) && (*(int **)(in_ECX + 0x80) = piVar2, piVar3 != (int *)0x0)) {
      (**(code **)*piVar3)(1);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(1);
      FUN_006e5050(piVar2,0xffffffff);
    }
    FUN_006e75a0();
  }
  FUN_004097d0(in_ECX + 0xb0);
  return;
}

