// rea decompile_all
// name: FUN_00473c1d
// address: 0x473c1d
// body: available
// range: 0x473c1d-0x473c61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00473c1d(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  
  if ((DAT_0095d67c != 0) && (*(char *)(DAT_0095d67c + 4) == '\0')) {
    cVar3 = FUN_00474b4b();
    if (cVar3 != '\0') {
      return 1;
    }
  }
  if (unaff_ESI != (undefined4 *)0x0) {
    piVar1 = unaff_ESI + 1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*unaff_ESI)(1);
    }
  }
  return 0;
}

