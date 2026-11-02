// rea decompile_all
// name: FUN_005bfba0
// address: 0x5bfba0
// body: available
// range: 0x5bfba0-0x5bfc8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bfba0(void)

{
  int in_ECX;
  double dVar1;
  double dVar2;
  double dVar3;
  double in_XMM1_Qa;
  double dVar4;
  
  if (in_XMM1_Qa <= 1.0) {
    dVar1 = in_XMM1_Qa * 0.5;
  }
  else {
    dVar1 = 0.5 / in_XMM1_Qa;
  }
  if (dVar1 <= 0.001) {
    dVar1 = 0.001;
  }
  dVar1 = dVar1 * 3.141592653589793;
  FUN_006f9520();
  dVar1 = 1.0 / dVar1;
  dVar2 = dVar1 * dVar1;
  dVar3 = 2.0;
  __libm_sse2_sqrt_precise();
  *(undefined8 *)(in_ECX + 0xe0) = 0x3ff0000000000000;
  dVar4 = 1.0 / (dVar3 * dVar1 + 1.0 + dVar2);
  *(double *)(in_ECX + 200) = dVar4;
  *(double *)(in_ECX + 0xd8) = dVar4;
  *(double *)(in_ECX + 0xf0) = ((1.0 - dVar3 * dVar1) + dVar2) * dVar4;
  *(double *)(in_ECX + 0xd0) = dVar4 + dVar4;
  *(double *)(in_ECX + 0xe8) = (1.0 - dVar2) * (dVar4 + dVar4);
  return;
}

