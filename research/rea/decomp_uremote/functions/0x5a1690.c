// rea decompile_all
// name: FUN_005a1690
// address: 0x5a1690
// body: available
// range: 0x5a1690-0x5a1757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a16dd) */

undefined4 * FUN_005a1690(int param_1)

{
  undefined4 *in_ECX;
  
  if (param_1 != 0) {
    in_ECX[1] = &DAT_005ecda8;
    in_ECX[4] = &DAT_005ece88;
    in_ECX[2] = CPNS::IObject::vftable;
    in_ECX[3] = CPNS::IBaseOutput::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[4] + 4) + 0x10) = CPNS::IBaseOutput::vftable;
  }
  *in_ECX = CPNS::IController::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[1] + 4) + 4) = CPNS::IController::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[1] + 8) + 4) = CPNS::IController::vftable;
  return in_ECX;
}

