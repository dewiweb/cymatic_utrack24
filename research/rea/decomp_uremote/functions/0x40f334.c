// rea decompile_all
// name: FUN_0040f334
// address: 0x40f334
// body: available
// range: 0x40f334-0x40f38c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f334(void)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = thunk_FUN_00401000((int)*(short *)(unaff_EDI + 0x46),*(undefined4 *)(unaff_ESI + 8));
  *(uint *)(unaff_ESI + 0xc) = iVar1 + 0x3fU & 0xffffffc0;
  uVar2 = thunk_FUN_00401000((int)*(short *)(unaff_EDI + 0x48),*(undefined4 *)(unaff_ESI + 8));
  *(uint *)(unaff_ESI + 0x10) = uVar2 & 0xffffffc0;
  iVar1 = thunk_FUN_00401000((int)*(short *)(unaff_EDI + 0x4a),*(undefined4 *)(unaff_ESI + 8));
  *(uint *)(unaff_ESI + 0x14) = iVar1 + 0x20U & 0xffffffc0;
  iVar1 = thunk_FUN_00401000((int)*(short *)(unaff_EDI + 0x4c),*(undefined4 *)(unaff_ESI + 4));
  *(uint *)(unaff_ESI + 0x18) = iVar1 + 0x20U & 0xffffffc0;
  return;
}

