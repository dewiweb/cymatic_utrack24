// rea decompile_all
// name: FUN_004cad78
// address: 0x4cad78
// body: available
// range: 0x4cad78-0x4cae62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004cad78(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_ECX;
  int in_EDX;
  
  cVar2 = FUN_004e3fa6();
  if (cVar2 == '\0') {
    iVar3 = *(int *)(in_EDX + 0x144);
    if ((iVar3 != 0) && (*(int *)(in_EDX + 0x144) = 0, iVar3 != 0)) {
      thunk_FUN_004f69da(iVar3);
      FUN_005af7b6(iVar3);
    }
    FUN_004cac25(0);
  }
  else if ((*(int *)(in_EDX + 0x144) == 0) ||
          (cVar2 = FUN_004e3f69(in_ECX,*(int *)(in_EDX + 0x144)), cVar2 != '\0')) {
    iVar3 = FUN_005af82d(0x10);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004e3b7e(iVar3);
    }
    iVar1 = *(int *)(in_EDX + 0x144);
    if ((iVar1 != iVar3) && (*(int *)(in_EDX + 0x144) = iVar3, iVar1 != 0)) {
      thunk_FUN_004f69da(iVar1);
      FUN_005af7b6(iVar1);
    }
    iVar3 = FUN_005af82d(0x30);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)FUN_004e347b();
      *puVar4 = juce::DrawablePath::RelativePositioner::vftable;
      puVar4[2] = juce::DrawablePath::RelativePositioner::vftable;
      puVar4[3] = juce::DrawablePath::RelativePositioner::vftable;
      puVar4[0xb] = in_EDX;
    }
    FUN_004c2032();
    FUN_004e3599();
  }
  return;
}

