// rea decompile_all
// name: FUN_004677a3
// address: 0x4677a3
// body: available
// range: 0x4677a3-0x467839 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004677a3(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *unaff_EBX;
  
  if ((_DAT_0095dc48 & 1) == 0) {
    _DAT_0095dc48 = _DAT_0095dc48 | 1;
    DAT_0095dc04 = 0;
    _atexit((_func_4879 *)&LAB_005e6c68);
  }
  puVar2 = (undefined4 *)FUN_0046779d();
  FUN_00467a53();
  if (DAT_0095dc04 == 0) {
    puVar3 = (undefined4 *)FUN_005af82d(0xc);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = juce::ReferenceCountedObject::vftable;
      puVar3[1] = 0;
      *puVar3 = juce::CurrentThreadHolder::vftable;
    }
    FUN_0046e6b9();
  }
  iVar1 = DAT_0095dc04;
  *unaff_EBX = DAT_0095dc04;
  if (iVar1 != 0) {
    piVar4 = (int *)(iVar1 + 4);
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  *puVar2 = 0;
  UNLOCK();
  return;
}

