// rea decompile_all
// name: FUN_004327f0
// address: 0x4327f0
// body: available
// range: 0x4327f0-0x432888 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004327f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EDX;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EDX + 8);
  if (iVar1 == 10) {
    (**(code **)(in_EDX + 0xc))();
    uVar3 = *(undefined4 *)(unaff_ESI + 0xc);
  }
  else {
    iVar2 = *(int *)(in_EDX + 4);
    if (((((iVar2 == 0) || (iVar2 == 2)) || (iVar2 == 3)) || (iVar2 == 5)) ||
       ((-1 < *(int *)(unaff_ESI + 0x60) && (*(int *)(unaff_ESI + 0x60) < *(int *)(unaff_EDI + 300))
        ))) {
      if ((iVar1 == 8) || (iVar1 == 9)) {
        uVar3 = (**(code **)(unaff_ESI + 0x44))();
      }
      else {
        uVar3 = (**(code **)(unaff_ESI + 0x40))();
      }
    }
    else {
      uVar3 = 0xa0;
    }
  }
  return uVar3;
}

