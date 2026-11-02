// rea decompile_all
// name: FUN_0046207d
// address: 0x46207d
// body: available
// range: 0x46207d-0x4620ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046207d(undefined4 param_1,undefined8 param_2)

{
  int in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((in_EAX == *(int *)(unaff_ESI + 8)) || (in_EAX == *(int *)(unaff_ESI + 0xc))) {
    piVar1 = (int *)FUN_00463004();
    if (piVar1 == (int *)0x0) {
      puVar2 = (undefined4 *)FUN_005af82d(0x18,uVar3);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *(undefined8 *)(puVar2 + 2) = param_2;
        *puVar2 = juce::Expression::Helpers::Constant::vftable;
        *(undefined1 *)(puVar2 + 4) = 0;
      }
      *unaff_EDI = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = puVar2[1] + 1;
      }
    }
    else {
      (**(code **)(*piVar1 + 0x2c))();
    }
  }
  else {
    *unaff_EDI = 0;
  }
  return;
}

