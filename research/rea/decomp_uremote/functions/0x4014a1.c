// rea decompile_all
// name: FUN_004014a1
// address: 0x4014a1
// body: available
// range: 0x4014a1-0x4014e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004014a1(void)

{
  int in_ECX;
  int iVar1;
  int unaff_ESI;
  undefined4 uStack_4;
  int iVar2;
  
  iVar2 = unaff_ESI;
  if (in_ECX < unaff_ESI) {
    if (in_ECX < -unaff_ESI) {
      uStack_4 = 0xfffffffe;
    }
    else {
      uStack_4 = 1;
      iVar2 = in_ECX;
      in_ECX = unaff_ESI;
    }
  }
  else if (in_ECX < -unaff_ESI) {
    uStack_4 = 0xffffffff;
    iVar2 = in_ECX;
    in_ECX = -unaff_ESI;
  }
  else {
    uStack_4 = 2;
  }
  iVar1 = iVar2 * 0xe;
  if (in_ECX < 0) {
    in_ECX = -in_ECX;
  }
  if (iVar1 < 0) {
    iVar1 = iVar2 * -0xe;
  }
  if (in_ECX <= iVar1) {
    uStack_4 = 4;
  }
  return uStack_4;
}

