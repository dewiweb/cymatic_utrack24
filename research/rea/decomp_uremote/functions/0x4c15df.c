// rea decompile_all
// name: FUN_004c15df
// address: 0x4c15df
// body: available
// range: 0x4c15df-0x4c1612 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c15df(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  float10 fVar3;
  
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    FUN_004c1613(in_ECX);
  }
  else {
    piVar2 = (int *)FUN_004c0453();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      fVar3 = (float10)FUN_004c1582();
      (**(code **)(iVar1 + 0x78))((float)fVar3);
      return;
    }
  }
  return;
}

