// rea decompile_all
// name: FUN_00549610
// address: 0x549610
// body: available
// range: 0x549610-0x54970a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0054966b) */

undefined4 * FUN_00549610(int param_1)

{
  undefined4 *in_ECX;
  
  if (param_1 != 0) {
    in_ECX[1] = &DAT_005ebaec;
    in_ECX[4] = &DAT_005ece88;
    in_ECX[6] = &DAT_005ebae0;
    in_ECX[2] = CPNS::IObject::vftable;
    in_ECX[3] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[4] + 4) + 0x10) = CPNS::IHookedObject::vftable;
    FUN_005482a0(0);
  }
  *in_ECX = CPNS::IModifierMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[1] + 4) + 4) = CPNS::IModifierMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[1] + 8) + 4) = CPNS::IModifierMessage::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[1] + 0xc) + 4) = CPNS::IModifierMessage::vftable;
  return in_ECX;
}

