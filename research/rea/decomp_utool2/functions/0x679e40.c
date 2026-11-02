// rea decompile_all
// name: FUN_00679e40
// address: 0x679e40
// body: available
// range: 0x679e40-0x679f35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00679e40(undefined4 *param_1,float *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int in_ECX;
  float in_XMM3_Da;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
  *(undefined4 **)(in_ECX + 0x18) = param_1;
  *(float *)(in_ECX + 0x1c) = *param_2;
  *(float *)(in_ECX + 0x20) = param_2[1];
  *(float *)(in_ECX + 0x24) = param_2[2];
  *(float *)(in_ECX + 0x28) = param_2[3];
  *(float *)(in_ECX + 0x2c) = param_2[4];
  *(float *)(in_ECX + 0x30) = param_2[5];
  *(undefined4 *)(in_ECX + 0x34) = *param_1;
  *(float *)(in_ECX + 0x38) = in_XMM3_Da * in_XMM3_Da;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  if ((((param_2[1] == 0.0) && (param_2[2] == 0.0)) && (param_2[3] == 0.0)) &&
     (((param_2[5] == 0.0 && (*param_2 == 1.0)) && (param_2[4] == 1.0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(in_ECX + 0x44) = uVar1;
  uVar2 = FUN_004c554b(0x80);
  *(undefined4 *)(in_ECX + 0x48) = uVar2;
  *(undefined4 *)(in_ECX + 0x4c) = uVar2;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0x20;
  return;
}

