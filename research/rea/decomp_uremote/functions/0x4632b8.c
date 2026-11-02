// rea decompile_all
// name: FUN_004632b8
// address: 0x4632b8
// body: available
// range: 0x4632b8-0x46338d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004632b8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  float10 fVar4;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00460973();
  **(undefined4 **)(unaff_EDI + 4) = local_c;
  iVar1 = FUN_00460791();
  if (iVar1 == 0x40) {
    FUN_004607e3();
    FUN_00460973();
    **(undefined4 **)(unaff_EDI + 4) = local_10;
  }
  iVar2 = FUN_00460791();
  if (iVar2 == 0x2d) {
    FUN_004607e3();
    FUN_00460973();
  }
  iVar2 = FUN_00460791();
  if (((iVar2 - 0x30U < 10) || ((iVar2 == 0x2e && (iVar2 = FUN_0046085c(1), iVar2 - 0x30U < 10))))
     && (puVar3 = (undefined4 *)FUN_005af82d(0x18), puVar3 != (undefined4 *)0x0)) {
    fVar4 = (float10)FUN_004702f2();
    *(double *)(puVar3 + 2) = (double)fVar4;
    puVar3[1] = 0;
    *(bool *)(puVar3 + 4) = iVar1 == 0x40;
    *puVar3 = juce::Expression::Helpers::Constant::vftable;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

