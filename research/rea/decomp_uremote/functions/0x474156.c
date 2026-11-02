// rea decompile_all
// name: FUN_00474156
// address: 0x474156
// body: available
// range: 0x474156-0x474255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00474156(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + 0x14));
  iVar3 = *(int *)(unaff_EDI + 0x10);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar6 = (undefined4 *)FUN_005af82d(0x14);
    if (puVar6 != (undefined4 *)0x0) {
      uVar4 = *(undefined4 *)(*(int *)(unaff_EDI + 8) + iVar3 * 4);
      *puVar6 = juce::ReferenceCountedObject::vftable;
      puVar6[1] = 0;
      *puVar6 = juce::ActionBroadcaster::ActionMessage::vftable;
      if (*(int *)(unaff_EDI + 4) == 0) {
        puVar7 = (undefined4 *)FUN_005af82d(0xc);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = juce::ReferenceCountedObject::vftable;
          puVar7[1] = 0;
          *puVar7 = juce::WeakReference<juce::ActionBroadcaster,juce::ReferenceCountedObject>::
                    SharedPointer::vftable;
          puVar7[2] = unaff_EDI;
        }
        if (*(undefined4 **)(unaff_EDI + 4) != puVar7) {
          if (puVar7 != (undefined4 *)0x0) {
            LOCK();
            puVar7[1] = puVar7[1] + 1;
            UNLOCK();
          }
          puVar5 = *(undefined4 **)(unaff_EDI + 4);
          *(undefined4 **)(unaff_EDI + 4) = puVar7;
          if (puVar5 != (undefined4 *)0x0) {
            piVar1 = puVar5 + 1;
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*puVar5)(1);
            }
          }
        }
      }
      iVar2 = *(int *)(unaff_EDI + 4);
      puVar6[2] = iVar2;
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      FUN_004652e4(param_1);
      puVar6[4] = uVar4;
    }
    FUN_00473c1d();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + 0x14));
  return;
}

