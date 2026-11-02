// rea decompile_all
// name: FUN_00696590
// address: 0x696590
// body: available
// range: 0x696590-0x696613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696590(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_28 [12];
  undefined1 auStack_1c [24];
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else {
    iVar2 = FUN_00693140();
    if (iVar2 < param_1) {
      param_1 = iVar2;
    }
  }
  if (param_1 != *(int *)(in_ECX + 0x110)) {
    *(int *)(in_ECX + 0x110) = param_1;
    FUN_004a2370();
    FUN_00696170();
    piVar1 = *(int **)(in_ECX + 0xf0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))(local_28);
      uVar3 = FUN_0046fc10(auStack_1c,*(undefined4 *)(in_ECX + 0xfc),*(undefined4 *)(in_ECX + 0x100)
                          );
      (**(code **)(*piVar1 + 0xb0))(uVar3);
    }
  }
  return;
}

