// rea decompile_all
// name: FUN_004c8283
// address: 0x4c8283
// body: available
// range: 0x4c8283-0x4c831c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004c8283(void)

{
  char cVar1;
  char cVar2;
  int unaff_EBX;
  undefined8 uVar3;
  
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = *(char *)(unaff_EBX + 0xd8);
  cVar2 = FUN_004c81f5(unaff_EBX);
  *(char *)(unaff_EBX + 0xd8) = cVar2;
  if (((-1 < *(int *)(unaff_EBX + 0xa8)) && (cVar2 != '\0')) && (cVar1 == '\0')) {
    FUN_0047479c();
  }
  FUN_004c7bc3();
  cVar2 = FUN_004c3153();
  if (cVar2 != '\0') {
    if (cVar1 == '\0') goto LAB_004c830b;
    if (*(char *)(unaff_EBX + 0xd8) == '\0') {
      uVar3 = FUN_004c751d();
      (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0xc4))((int)uVar3);
      return 1;
    }
  }
  if (cVar1 != '\0') {
    return 1;
  }
LAB_004c830b:
  if (*(char *)(unaff_EBX + 0xd8) != '\0') {
    return 1;
  }
  return 0;
}

