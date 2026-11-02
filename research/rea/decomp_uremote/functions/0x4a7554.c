// rea decompile_all
// name: FUN_004a7554
// address: 0x4a7554
// body: available
// range: 0x4a7554-0x4a75b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a7554(void)

{
  int *in_EAX;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((int *)*in_EAX == (int *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    puVar2 = &local_28;
  }
  else {
    uVar1 = (**(code **)(*(int *)*in_EAX + 0x2c))(&local_28);
    puVar2 = (undefined4 *)FUN_004a96a6(uVar1);
  }
  *unaff_EDI = *puVar2;
  unaff_EDI[1] = puVar2[1];
  uVar1 = puVar2[2];
  unaff_EDI[3] = puVar2[3];
  unaff_EDI[2] = uVar1;
  return;
}

