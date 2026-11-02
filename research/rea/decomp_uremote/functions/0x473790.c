// rea decompile_all
// name: FUN_00473790
// address: 0x473790
// body: available
// range: 0x473790-0x473855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00473790(undefined4 param_1)

{
  WCHAR WVar1;
  int iVar2;
  char cVar3;
  LPWSTR pWVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  pWVar4 = GetCommandLineW();
  WVar1 = *pWVar4;
  iVar2 = 0;
  while ((WVar1 != L'\0' &&
         ((iVar5 = FUN_00460a06(), iVar2 != 0 || (iVar6 = FUN_004734bf(iVar5), iVar6 < 0))))) {
    iVar7 = FUN_004734bf(iVar5);
    iVar6 = iVar2;
    if (((-1 < iVar7) && (iVar6 = iVar5, iVar2 != 0)) && (iVar6 = iVar2, iVar2 == iVar5)) {
      iVar6 = 0;
    }
    WVar1 = *pWVar4;
    iVar2 = iVar6;
  }
  while( true ) {
    uVar8 = FUN_0046099b();
    cVar3 = FUN_00464f6b(uVar8);
    if (cVar3 == '\0') break;
    FUN_004609d8();
  }
  FUN_0046540e();
  return param_1;
}

