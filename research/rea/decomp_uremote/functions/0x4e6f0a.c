// rea decompile_all
// name: FUN_004e6f0a
// address: 0x4e6f0a
// body: available
// range: 0x4e6f0a-0x4e6f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004e6f0a(uint param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  cVar1 = FUN_004d2c5c();
  uVar3 = extraout_EDX;
  if (cVar1 != '\0') {
    FUN_004d076d();
    uVar3 = extraout_EDX_00;
    if ((param_1 & ~(uint)(*(char *)(*(uint *)(in_ECX + 0x310) + 0x9c) != '\0')) == 0) {
      return *(uint *)(in_ECX + 0x310) & 0xffffff00;
    }
  }
  uVar2 = FUN_004d2c0f(uVar3);
  return uVar2;
}

