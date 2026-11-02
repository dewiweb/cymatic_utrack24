// rea decompile_all
// name: FUN_004ff5d5
// address: 0x4ff5d5
// body: available
// range: 0x4ff5d5-0x4ff637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff5d5(void)

{
  int iVar1;
  int *in_EAX;
  int in_ECX;
  int unaff_EBX;
  
  if (-1 < in_ECX) {
    if (unaff_EBX != 0) {
      LOCK();
      *(int *)(unaff_EBX + 4) = *(int *)(unaff_EBX + 4) + 1;
      UNLOCK();
    }
    if (in_ECX < in_EAX[2]) {
      if (*(int *)(in_ECX * 4 + *in_EAX) != 0) {
        FUN_0050045b();
      }
      *(int *)(in_ECX * 4 + *in_EAX) = unaff_EBX;
    }
    else {
      if (in_EAX[1] < in_EAX[2] + 1) {
        FUN_004f8197();
      }
      iVar1 = in_EAX[2];
      in_EAX[2] = iVar1 + 1;
      *(int *)(*in_EAX + iVar1 * 4) = unaff_EBX;
    }
  }
  return;
}

