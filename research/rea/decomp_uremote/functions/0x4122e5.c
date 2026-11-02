// rea decompile_all
// name: FUN_004122e5
// address: 0x4122e5
// body: available
// range: 0x4122e5-0x412329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004122e5(void)

{
  uint *in_EAX;
  uint uVar1;
  int *piVar2;
  int in_EDX;
  
  uVar1 = in_EAX[1] & *(uint *)(in_EDX + 0xc);
  if (uVar1 < *in_EAX) {
    uVar1 = in_EAX[1] * 2 + 1 & *(uint *)(in_EDX + 0xc);
  }
  piVar2 = (int *)(in_EAX[3] + uVar1 * 4);
  while( true ) {
    if (*piVar2 == 0) {
      return;
    }
    if (*piVar2 == in_EDX) break;
    piVar2 = (int *)(*piVar2 + 8);
  }
  *piVar2 = *(int *)(in_EDX + 8);
  *(undefined4 *)(in_EDX + 8) = 0;
  in_EAX[2] = in_EAX[2] + 1;
  FUN_004121c1();
  return;
}

