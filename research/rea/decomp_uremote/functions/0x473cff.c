// rea decompile_all
// name: FUN_00473cff
// address: 0x473cff
// body: available
// range: 0x473cff-0x473db0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00473cff(undefined4 param_1,code *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  undefined4 *puVar6;
  
  cVar3 = FUN_00473e0a(param_1);
  if (cVar3 == '\0') {
    puVar5 = (undefined4 *)FUN_005af82d(0x18);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = juce::ReferenceCountedObject::vftable;
      puVar5[1] = 0;
      *puVar5 = juce::AsyncFunctionCallback::vftable;
      FUN_0046d4ed();
      puVar5[3] = 0;
      puVar5[4] = param_2;
      puVar5[5] = unaff_EBX;
      puVar6 = puVar5;
    }
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      puVar6[1] = puVar6[1] + 1;
      UNLOCK();
    }
    cVar3 = FUN_00473c1d();
    if (cVar3 == '\0') {
      if (puVar6 != (undefined4 *)0x0) {
        piVar1 = puVar6 + 1;
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)(1);
        }
      }
      uVar4 = 0;
    }
    else {
      FUN_0046d510(0xffffffff);
      uVar4 = puVar6[3];
      piVar1 = puVar6 + 1;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  else {
    uVar4 = (*param_2)();
  }
  return uVar4;
}

