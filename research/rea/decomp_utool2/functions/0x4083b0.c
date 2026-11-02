// rea decompile_all
// name: FUN_004083b0
// address: 0x4083b0
// body: available
// range: 0x4083b0-0x40842f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004083b0(void)

{
  undefined4 *in_ECX;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  
  *in_ECX = r8b::CDSPFracInterpolator<24,673>::vftable;
  *(ulonglong *)(in_ECX + 0x402) = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  *(undefined8 *)(in_ECX + 0x404) = in_XMM2_Qa;
  *(undefined8 *)(in_ECX + 0x406) = in_XMM3_Qa;
  in_ECX[0x408] = 0;
  in_ECX[0x409] = 0;
  in_ECX[0x40a] = 0xf5;
  _memset(in_ECX + 0x1ec,0,0x58);
  in_ECX[0x40b] = 0;
  in_ECX[0x40c] = 0;
  in_ECX[0x40e] = in_ECX[0x406];
  in_ECX[0x40f] = in_ECX[0x407];
  in_ECX[0x410] = in_ECX[0x406];
  in_ECX[0x411] = in_ECX[0x407];
  return;
}

