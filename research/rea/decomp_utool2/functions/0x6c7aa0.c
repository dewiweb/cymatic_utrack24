// rea decompile_all
// name: FUN_006c7aa0
// address: 0x6c7aa0
// body: available
// range: 0x6c7aa0-0x6c7bb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7aa0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  if (param_1 == (int *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xb0))();
  }
  puVar1 = (undefined4 *)in_ECX[0x39];
  if ((puVar1 != puVar2) && (in_ECX[0x39] = (int)puVar2, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  if (param_2 == (int *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xb0))();
  }
  puVar1 = (undefined4 *)in_ECX[0x3a];
  if ((puVar1 != puVar2) && (in_ECX[0x3a] = (int)puVar2, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x3b];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x3b] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x3c];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x3c] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x3d];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x3d] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x3e];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x3e] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x3f];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x3f] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x40];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x40] = 0;
    (**(code **)*puVar2)(1);
  }
  in_ECX[0x41] = 0;
  (**(code **)(*in_ECX + 0xc0))();
  return;
}

