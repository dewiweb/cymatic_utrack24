// rea decompile_all
// name: FUN_0046e764
// address: 0x46e764
// body: available
// range: 0x46e764-0x46e7a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e764(void)

{
  int iVar1;
  int *in_EAX;
  uint in_ECX;
  undefined1 unaff_BL;
  undefined1 *puVar2;
  
  if (in_ECX < (uint)in_EAX[2]) {
    *(undefined1 *)(in_ECX + *in_EAX) = unaff_BL;
    return;
  }
  if (-1 < (int)in_ECX) {
    if (in_EAX[1] < (int)(in_EAX[2] + 1U)) {
      FUN_0046f4a7();
    }
    iVar1 = in_EAX[2];
    in_EAX[2] = iVar1 + 1;
    puVar2 = (undefined1 *)(*in_EAX + iVar1);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = unaff_BL;
    }
  }
  return;
}

