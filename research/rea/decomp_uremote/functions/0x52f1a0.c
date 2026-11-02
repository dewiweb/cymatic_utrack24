// rea decompile_all
// name: FUN_0052f1a0
// address: 0x52f1a0
// body: available
// range: 0x52f1a0-0x52f1e8 inclusive
// range: 0x52f1eb-0x52f1f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052f1a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  piVar2 = in_ECX + 3;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    if (in_ECX != (undefined4 *)0x0) {
      (**(code **)*in_ECX)(1);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = in_ECX[3];
  }
  return uVar3;
}

