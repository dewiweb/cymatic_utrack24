// rea decompile_all
// name: FUN_004c7b1b
// address: 0x4c7b1b
// body: available
// range: 0x4c7b1b-0x4c7bb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c7b1b(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  puVar2 = &LAB_005d8bfd;
  if ((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 0xb4) != 0)) {
    FUN_004f5fb6();
    iVar3 = FUN_004c121d();
    do {
      do {
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) goto LAB_004c7ba3;
          iVar4 = FUN_004c1221();
        } while (iVar4 == in_ECX);
        iVar4 = FUN_005cdbcf(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::Button::RTTI_Type_Descriptor,0);
      } while ((iVar4 == 0) || (*(int *)(iVar4 + 0xb4) != *(int *)(in_ECX + 0xb4)));
      FUN_004c7a1e(0,param_1);
      cVar1 = FUN_004f5fce(0);
    } while (cVar1 == '\0');
LAB_004c7ba3:
    puVar2 = (undefined1 *)FUN_00474d0f();
  }
  return puVar2;
}

