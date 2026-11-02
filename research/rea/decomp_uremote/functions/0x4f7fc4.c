// rea decompile_all
// name: FUN_004f7fc4
// address: 0x4f7fc4
// body: available
// range: 0x4f7fc4-0x4f8027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f7fc4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    puVar4 = (undefined4 *)FUN_005af82d(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = juce::ReferenceCountedObject::vftable;
      puVar4[1] = 0;
      *puVar4 = juce::WeakReference<juce::ApplicationCommandTarget,juce::ReferenceCountedObject>::
                SharedPointer::vftable;
      puVar4[2] = param_1;
    }
    if ((undefined4 *)*unaff_ESI != puVar4) {
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        puVar4[1] = puVar4[1] + 1;
        UNLOCK();
      }
      puVar3 = (undefined4 *)*unaff_ESI;
      *unaff_ESI = (int)puVar4;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 1;
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar3)(1);
        }
      }
    }
  }
  return *unaff_ESI;
}

