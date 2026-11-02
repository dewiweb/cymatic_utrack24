// rea decompile_all
// name: FUN_0045072f
// address: 0x45072f
// body: available
// range: 0x45072f-0x450800 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0045072f(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  bool bVar3;
  
  if (5 < unaff_EDI) {
    return 0;
  }
  cVar1 = FUN_00448866();
  if (((cVar1 != '\0') && (unaff_EDI == 1)) ||
     ((cVar1 = FUN_00448866(), cVar1 != '\0' && (unaff_EDI == 2)))) {
    return 0;
  }
  if (unaff_EDI == 3) {
    cVar1 = FUN_00448866();
    if ((cVar1 != '\0') && (cVar1 = FUN_0045f738(), cVar1 != '\0')) {
      return 0;
    }
    cVar1 = FUN_0045f724();
    if (cVar1 != '\0') {
      return 0;
    }
    iVar2 = *(int *)(in_EAX + 0x615c);
    if (iVar2 == 7) {
      return 0;
    }
    if (iVar2 == 8) {
      return 0;
    }
  }
  else {
    if (unaff_EDI == 5) {
      cVar1 = FUN_0045f710();
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_0045f6db();
      bVar3 = cVar1 == '\0';
      goto LAB_004507aa;
    }
    if (unaff_EDI != 4) {
      return 1;
    }
    iVar2 = *(int *)(in_EAX + 0x615c);
    if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 8)) && (iVar2 != 7)) {
      return 0;
    }
  }
  bVar3 = iVar2 == 10;
LAB_004507aa:
  if (bVar3) {
    return 0;
  }
  return 1;
}

