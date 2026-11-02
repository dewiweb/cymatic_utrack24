// rea decompile_all
// name: FUN_0048eebb
// address: 0x48eebb
// body: available
// range: 0x48eebb-0x48ef14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048eebb(void)

{
  int in_EAX;
  undefined4 uVar1;
  int unaff_ESI;
  int iVar2;
  
  if ((*(uint *)(unaff_ESI + 0xd0) & 0x20000000) == 0) {
    if ((*(uint *)(unaff_ESI + 0x2c) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(unaff_ESI + 0x2c) & 0x300) == 0x300) {
    return;
  }
  if (in_EAX != 0) {
    uVar1 = *(undefined4 *)(unaff_ESI + 0xf4);
    do {
      iVar2 = in_EAX;
      if (in_EAX == 0) {
        iVar2 = -1;
      }
      uVar1 = FUN_00468297(uVar1,iVar2);
      in_EAX = in_EAX - iVar2;
    } while (in_EAX != 0);
    *(undefined4 *)(unaff_ESI + 0xf4) = uVar1;
  }
  return;
}

