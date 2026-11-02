// rea decompile_all
// name: FUN_00469038
// address: 0x469038
// body: available
// range: 0x469038-0x4690b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469038(void)

{
  int iVar1;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x3c) = *(int *)(unaff_ESI + 0x2c) * 2;
  *(undefined2 *)(*(int *)(unaff_ESI + 0x44) + -2 + *(int *)(unaff_ESI + 0x4c) * 2) = 0;
  _memset(*(void **)(unaff_ESI + 0x44),0,*(int *)(unaff_ESI + 0x4c) * 2 - 2);
  iVar1 = *(int *)(unaff_ESI + 0x84) * 0xc;
  *(uint *)(unaff_ESI + 0x80) = (uint)*(ushort *)(&DAT_00601c6a + iVar1);
  *(uint *)(unaff_ESI + 0x8c) = (uint)*(ushort *)(&DAT_00601c68 + iVar1);
  *(uint *)(unaff_ESI + 0x90) = (uint)*(ushort *)(&DAT_00601c6c + iVar1);
  *(uint *)(unaff_ESI + 0x7c) = (uint)*(ushort *)(&DAT_00601c6e + iVar1);
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 2;
  *(undefined4 *)(unaff_ESI + 0x60) = 2;
  return;
}

