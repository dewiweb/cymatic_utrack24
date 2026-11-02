// rea decompile_all
// name: FUN_0047479c
// address: 0x47479c
// body: available
// range: 0x47479c-0x47482d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047479c(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
  iVar2 = DAT_0095d684;
  if (*(int *)(unaff_ESI + 8) == 0) {
    *(int *)(unaff_ESI + 4) = unaff_EDI;
    uVar1 = FUN_00439b5a(1);
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
    if (DAT_0095d684 == 0) {
      iVar2 = FUN_005af82d(0x50);
      if (iVar2 == 0) {
        DAT_0095d684 = 0;
      }
      else {
        DAT_0095d684 = FUN_0047443a(iVar2);
      }
    }
    FUN_0047468b();
  }
  else if (DAT_0095d684 != 0) {
    *(int *)(unaff_ESI + 4) = unaff_EDI;
    *(int *)(unaff_ESI + 8) = unaff_EDI;
    if (((*(int *)(unaff_ESI + 0x10) != 0) && (*(int *)(*(int *)(unaff_ESI + 0x10) + 4) < unaff_EDI)
        ) || ((*(int *)(unaff_ESI + 0xc) != 0 &&
              (unaff_EDI < *(int *)(*(int *)(unaff_ESI + 0xc) + 4))))) {
      FUN_004746da(iVar2);
      FUN_0047468b();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
  return;
}

