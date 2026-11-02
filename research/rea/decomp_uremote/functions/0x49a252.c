// rea decompile_all
// name: FUN_0049a252
// address: 0x49a252
// body: available
// range: 0x49a252-0x49a2b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0049a252(void)

{
  int iVar1;
  
  iVar1 = FUN_0048efc8();
  *(undefined4 *)(iVar1 + 0x78) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0xffffffff;
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x200000;
  *(undefined4 *)(iVar1 + 0x84) = 8;
  *(undefined4 *)(iVar1 + 0x80) = 0xf;
  *(undefined4 *)(iVar1 + 0x7c) = 8;
  *(undefined4 *)(iVar1 + 0x98) = 8;
  *(undefined4 *)(iVar1 + 0x94) = 0xf;
  *(undefined4 *)(iVar1 + 0x90) = 8;
  *(undefined4 *)(iVar1 + 0x74) = 0x2000;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  FUN_00499ced();
  return iVar1;
}

