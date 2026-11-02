// rea decompile_all
// name: FUN_00403920
// address: 0x403920
// body: available
// range: 0x403920-0x403a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_00403920(void)

{
  double dVar1;
  double dVar2;
  int in_ECX;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)(in_ECX + 0x60);
  dVar3 = *(double *)(in_ECX + 0x68);
  *(double *)(in_ECX + 0x68) = dVar1;
  *(double *)(in_ECX + 0x60) = *(double *)(in_ECX + 0x70) * dVar1 - dVar3;
  dVar3 = *(double *)(in_ECX + 0x78);
  dVar2 = *(double *)(in_ECX + 0x80);
  *(double *)(in_ECX + 0x80) = dVar3;
  *(double *)(in_ECX + 0x78) = *(double *)(in_ECX + 0x88) * dVar3 - dVar2;
  dVar2 = *(double *)(in_ECX + 0x90);
  dVar5 = dVar3 * 0.5 + 0.5;
  dVar3 = *(double *)(in_ECX + 0x98);
  *(double *)(in_ECX + 0x98) = dVar2;
  *(double *)(in_ECX + 0x90) = *(double *)(in_ECX + 0xa0) * dVar2 - dVar3;
  dVar3 = *(double *)(in_ECX + 0xa8);
  dVar4 = dVar2 * 0.5 + 0.5;
  dVar4 = dVar4 * dVar4;
  dVar2 = *(double *)(in_ECX + 0xb0);
  *(double *)(in_ECX + 0xb0) = dVar3;
  *(double *)(in_ECX + 0xa8) = *(double *)(in_ECX + 0xb8) * dVar3 - dVar2;
  dVar3 = dVar3 * 0.5 + 0.5;
  dVar3 = dVar3 * dVar3;
  dVar3 = dVar3 * dVar3;
  return (float10)(dVar5 * dVar5 * (dVar1 * 0.5 + 0.5) * dVar4 * dVar4 * dVar3 * dVar3);
}

