// rea decompile_all
// name: FUN_004ea08f
// address: 0x4ea08f
// body: available
// range: 0x4ea08f-0x4ea236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea08f(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  int local_18;
  
  FUN_004e99ba();
  if ((*(byte *)(unaff_ESI + 0x95) & 1) != 0) {
    iVar3 = *(int *)(*(int *)(unaff_ESI + 0x7c) + 0x7c);
    iVar4 = *(int *)(*(int *)(unaff_ESI + 0x7c) + 0x80);
    (**(code **)(*(int *)(unaff_ESI + 0x70) + 0x1c))();
    iVar4 = iVar4 - iVar3;
    iVar3 = local_18 - iVar3;
    FUN_004c07a1();
    iVar2 = FUN_00439b5a();
    if (iVar4 < iVar2) {
      FUN_004c07a1();
    }
    else {
      FUN_004d2276();
      iVar2 = FUN_00439b5a();
      if (iVar2 < iVar4) {
        cVar1 = FUN_004e97e8();
        if (cVar1 != '\0') {
          FUN_004c07a1();
        }
        FUN_004d2276();
      }
    }
    FUN_004d2276();
    FUN_00439b5a();
    FUN_00470645();
    cVar1 = FUN_004e97e8();
    if (cVar1 != '\0') {
      if (iVar3 < 0) {
        FUN_00439b5a();
      }
      else {
        FUN_004d227d();
        iVar4 = FUN_00439b5a();
        if (iVar4 < iVar3) {
          FUN_004d227d();
        }
      }
    }
    FUN_004d2329();
  }
  return;
}

