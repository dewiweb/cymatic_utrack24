// rea decompile_all
// name: FUN_0048dcaf
// address: 0x48dcaf
// body: available
// range: 0x48dcaf-0x48dd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dcaf(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int iStack00000004;
  
  puVar1 = (undefined4 *)(**(code **)in_EAX[1])();
  puVar1[1] = 0x1f;
  puVar1[5] = 0x1f;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x3f;
  puVar1[4] = 0;
  FUN_0048d726();
  iVar2 = FUN_0048da5f();
  iStack00000004 = 0;
  if (0 < iVar2) {
    do {
      FUN_0048db77(iStack00000004);
      iStack00000004 = iStack00000004 + 1;
    } while (iStack00000004 < iVar2);
  }
  in_EAX[0x1c] = iVar2;
  *(undefined4 *)(*in_EAX + 0x14) = 0x60;
  *(int *)(*in_EAX + 0x18) = iVar2;
  (**(code **)(*in_EAX + 4))();
  return;
}

