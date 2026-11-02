// rea decompile_all
// name: FUN_0048f5e4
// address: 0x48f5e4
// body: available
// range: 0x48f5e4-0x48f658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0048f5e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *unaff_EDI;
  bool bVar2;
  
  if (((*(byte *)((int)unaff_EDI + 0x4a) & 1) == 0) ||
     ((iVar1 = FUN_00490972(*unaff_EDI,100000,param_2), iVar1 != 0 &&
      (iVar1 = FUN_00490a15(), iVar1 == 0)))) {
    bVar2 = true;
  }
  else if (((*(byte *)((int)unaff_EDI + 0x4a) & 0x20) == 0) && (param_3 != 2)) {
    FUN_004914c8(0);
    bVar2 = param_3 == 1;
  }
  else {
    FUN_004914c8(2);
    bVar2 = param_3 == 2;
  }
  return bVar2;
}

