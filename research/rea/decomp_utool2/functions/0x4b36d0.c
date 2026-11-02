// rea decompile_all
// name: FUN_004b36d0
// address: 0x4b36d0
// body: available
// range: 0x4b36d0-0x4b3726 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b36d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  float *in_ECX;
  undefined4 *puVar2;
  float in_XMM2_Da;
  undefined8 uVar3;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = *in_ECX * in_XMM2_Da;
  fStack_14 = in_ECX[1] * in_XMM2_Da;
  fStack_10 = in_ECX[2] * in_XMM2_Da;
  fStack_c = in_ECX[3] * in_XMM2_Da;
  uVar3 = FUN_00412df0(local_28);
  puVar2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
  puVar1 = (undefined4 *)uVar3;
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  return;
}

