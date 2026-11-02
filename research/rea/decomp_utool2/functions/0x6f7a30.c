// rea decompile_all
// name: FUN_006f7a30
// address: 0x6f7a30
// body: available
// range: 0x6f7a30-0x6f7d1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f7a30(void)

{
  ushort in_FPUControlWord;
  double in_XMM0_Qa;
  double dVar1;
  
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_006f9fff();
    return;
  }
  dVar1 = ABS(in_XMM0_Qa);
  if (!NAN(dVar1)) {
    if (dVar1 < 1.633123935319537e+16) {
      if (0.03125 <= dVar1) {
        if (dVar1 < 0.375) {
          return;
        }
        return;
      }
      if (7.450580596923828e-09 <= dVar1) {
        return;
      }
      if (dVar1 == 0.0) {
        return;
      }
      if (dVar1 < 2.2250738585072014e-308) {
        return;
      }
      return;
    }
    if (!NAN((double)((ulonglong)dVar1 & 0x7ff0000000000000))) {
      return;
    }
  }
  return;
}

