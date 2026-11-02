// rea decompile_all
// name: FUN_00488a7f
// address: 0x488a7f
// body: available
// range: 0x488a7f-0x488adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488a7f(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_ESI + 4))();
  *(undefined4 **)(unaff_ESI + 0x194) = puVar1;
  puVar1[0x17] = 0;
  *puVar1 = FUN_00488a54;
  puVar1[1] = FUN_00488718;
  puVar1[2] = FUN_00488903;
  puVar1[6] = FUN_00488505;
  puVar2 = puVar1 + 0x18;
  iVar3 = 0x10;
  do {
    *puVar2 = 0;
    puVar2[-0x11] = FUN_00488505;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1[7] = FUN_004883b1;
  puVar1[0x15] = FUN_004883b1;
  FUN_00488a54();
  return;
}

