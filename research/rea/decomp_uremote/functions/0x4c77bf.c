// rea decompile_all
// name: FUN_004c77bf
// address: 0x4c77bf
// body: available
// range: 0x4c77bf-0x4c78a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c77bf(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = juce::Button::vftable;
  in_ECX[0x1c] = juce::Button::vftable;
  FUN_004c81d0();
  if (in_ECX[0x29] != 0) {
    if (in_ECX[0x26] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = in_ECX[0x26] + 0x14;
    }
    FUN_004f0025(iVar2);
  }
  if (in_ECX[0x26] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX[0x26] + 0x18;
  }
  FUN_004719b3(iVar2);
  puVar1 = (undefined4 *)in_ECX[0x26];
  if ((puVar1 != (undefined4 *)0x0) && (in_ECX[0x26] = 0, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_00471876();
  if ((undefined4 *)in_ECX[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x26])(1);
  }
  _free((void *)in_ECX[0x23]);
  FUN_004652d6();
  FUN_00474d0f();
  _free((void *)in_ECX[0x1e]);
  FUN_004bf31a();
  FUN_004bfe57();
  return;
}

