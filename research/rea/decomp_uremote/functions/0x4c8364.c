// rea decompile_all
// name: FUN_004c8364
// address: 0x4c8364
// body: available
// range: 0x4c8364-0x4c848e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8364(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int unaff_EBX;
  
  if (*(char *)(unaff_EBX + 0xd7) == '\0') {
    if ((*(int *)(unaff_EBX + 0xac) < 1) ||
       ((*(char *)(unaff_EBX + 0xd8) == '\0' && (iVar2 = FUN_004c7bc3(), iVar2 != 2)))) {
      if (*(char *)(unaff_EBX + 0xd6) == '\0') {
        FUN_00474839();
      }
    }
    else {
      if (-1 < *(int *)(unaff_EBX + 0xb0)) {
        iVar2 = FUN_004c7c95();
        dVar1 = (double)iVar2;
        if (iVar2 < 0) {
          dVar1 = dVar1 + 4294967296.0;
        }
        FUN_00470687(0x3ff0000000000000,dVar1 / 4000.0);
        FUN_005b3fb0();
      }
      iVar2 = FUN_00439b5a();
      iVar3 = FUN_00467ec4();
      if ((*(int *)(unaff_EBX + 0xa0) != 0) && (iVar2 * 2 < iVar3 - *(int *)(unaff_EBX + 0xa0))) {
        FUN_00439b5a();
      }
      *(int *)(unaff_EBX + 0xa0) = iVar3;
      FUN_0047479c();
      FUN_004c751d();
      (**(code **)(extraout_EDX + 0xc4))();
    }
    return;
  }
  FUN_00474839();
  FUN_004c7bc3();
  *(char *)(unaff_EBX + 0xd7) = '\0';
  return;
}

