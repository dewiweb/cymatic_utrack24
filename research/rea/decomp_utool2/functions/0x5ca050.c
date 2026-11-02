// rea decompile_all
// name: FUN_005ca050
// address: 0x5ca050
// body: available
// range: 0x5ca050-0x5ca0a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca050(int *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  float10 fVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x34))();
  fVar2 = (float10)(**(code **)(*param_1 + 0x38))();
  *(undefined4 *)(in_ECX + 0x28) = uVar1;
  *(double *)(in_ECX + 0x20) = (double)fVar2;
  _memset((void *)(in_ECX + 0x2c),0,0x200);
  if (*(int **)(in_ECX + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 4))
              (*(undefined4 *)(in_ECX + 0x28),*(undefined8 *)(in_ECX + 0x20));
  }
  return;
}

