// rea decompile_all
// name: FUN_004720f1
// address: 0x4720f1
// body: available
// range: 0x4720f1-0x47217b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004720f1(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (((((*(byte *)(in_ECX + 0x30) & 3) == 0) &&
       (iVar2 = FUN_005cdbcf(param_1,0,&juce::UndoableAction::RTTI_Type_Descriptor,
                             &juce::ValueTree::SharedObject::SetPropertyAction::RTTI_Type_Descriptor
                             ,0), iVar2 != 0)) && (cVar1 = FUN_004733bd(), cVar1 != '\0')) &&
     (((*(int *)(iVar2 + 8) == *(int *)(in_ECX + 8) && ((*(byte *)(iVar2 + 0x30) & 3) == 0)) &&
      (iVar3 = FUN_005af82d(0x38), iVar3 != 0)))) {
    uVar4 = FUN_00472018(iVar3,*(undefined4 *)(in_ECX + 4),(int *)(in_ECX + 8),iVar2 + 0x10,
                         in_ECX + 0x20,0);
    return uVar4;
  }
  return 0;
}

