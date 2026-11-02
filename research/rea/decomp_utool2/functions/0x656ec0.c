// rea decompile_all
// name: FUN_00656ec0
// address: 0x656ec0
// body: available
// range: 0x656ec0-0x656f52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00656ec0(void)

{
  uint uVar1;
  int in_ECX;
  uint in_EDX;
  float10 fVar2;
  double dVar3;
  
  if (*(char *)(in_ECX + 0x10c) == '\b') {
    if (in_EDX - 1 < 0xfe) {
      dVar3 = ((double)(int)in_EDX + (double)(&DAT_00c24bb0)[-((int)in_EDX >> 0x1f)]) / 255.0;
      FUN_006f8700();
      fVar2 = (float10)FUN_006f9790(dVar3 * 255.0 + 0.5);
      in_EDX = (uint)fVar2;
    }
    return in_EDX & 0xff;
  }
  uVar1 = FUN_00656f60();
  return uVar1;
}

