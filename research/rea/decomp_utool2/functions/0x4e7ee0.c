// rea decompile_all
// name: FUN_004e7ee0
// address: 0x4e7ee0
// body: available
// range: 0x4e7ee0-0x4e80b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7ee0(void)

{
  undefined4 *in_ECX;
  
  FUN_005c76f0();
  *in_ECX = MyMixerAudioSource::vftable;
  *(undefined1 *)(in_ECX + 0x3d) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)in_ECX + 0xf5));
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = in_ECX + 0x49;
  in_ECX[0x48] = 0;
  *(undefined1 *)(in_ECX + 0x69) = 0;
  *(undefined8 *)(in_ECX + 0x6a) = 0;
  in_ECX[0x6c] = 0;
  *(undefined1 *)(in_ECX + 0x6d) = 1;
  in_ECX[0x6e] = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x71] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  FUN_004099e0();
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  FUN_004099e0();
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x84] = 0;
  in_ECX[0x85] = 0;
  FUN_004099e0();
  in_ECX[0x88] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = 0;
  in_ECX[0x8b] = 0;
  FUN_004099e0();
  in_ECX[0x8e] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x90] = 0;
  in_ECX[0x91] = 0;
  FUN_004099e0();
  in_ECX[0x94] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  FUN_004099e0();
  return;
}

