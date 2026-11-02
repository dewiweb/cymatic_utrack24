// rea decompile_all
// name: FUN_00460a06
// address: 0x460a06
// body: available
// range: 0x460a06-0x460a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00460a06(void)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 *in_EDX;
  
  puVar2 = (ushort *)*in_EDX;
  uVar3 = (uint)*puVar2;
  *in_EDX = puVar2 + 1;
  if ((uVar3 - 0xd800 < 0x800) && (uVar1 = puVar2[1], 0xdbff < uVar1)) {
    uVar3 = (uVar1 - 0xdc00 | (uVar3 - 0xd800) * 0x400) + 0x10000;
    *in_EDX = puVar2 + 2;
  }
  return uVar3;
}

