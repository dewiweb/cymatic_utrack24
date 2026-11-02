// rea decompile_all
// name: FUN_004c47ba
// address: 0x4c47ba
// body: available
// range: 0x4c47ba-0x4c486a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c47ba(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  iVar1 = FUN_004d9312();
  iVar1 = iVar1 + -1;
  if (0 < iVar1) {
    puVar2 = (undefined4 *)(iVar1 * 0x18 + 0x44 + unaff_EDI);
    do {
      puVar2[-1] = puVar2[-7];
      *puVar2 = puVar2[-6];
      FUN_00467e6f();
      FUN_004d076d();
      FUN_00476147();
      puVar2[4] = puVar2[-2];
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -6;
    } while (0 < iVar1);
  }
  *(undefined4 *)(unaff_EDI + 0x40) = param_1;
  *(undefined4 *)(unaff_EDI + 0x44) = param_2;
  FUN_00467e6f();
  FUN_004c751a();
  FUN_00476147();
  iVar1 = FUN_004c0453();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EDI + 0x54) = 0;
  }
  else {
    *(undefined4 *)(unaff_EDI + 0x54) = *(undefined4 *)(iVar1 + 0x2c);
  }
  *(undefined1 *)(unaff_EDI + 0xa8) = 0;
  FUN_004a4d78();
  return;
}

