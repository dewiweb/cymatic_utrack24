// rea decompile_all
// name: FUN_004cd4d6
// address: 0x4cd4d6
// body: available
// range: 0x4cd4d6-0x4cd55d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004cd4d6(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  undefined4 uVar4;
  undefined4 unaff_EDI;
  
  cVar2 = FUN_004e3601(unaff_EDI);
  cVar3 = FUN_004e3601(unaff_EDI);
  if ((cVar3 == '\0') || (cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = FUN_004e3601(unaff_EDI);
  if ((cVar2 == '\0') || (!bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = FUN_004e35b9(in_EAX + 0x90);
  if ((cVar2 == '\0') || (!bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = FUN_004e35b9(in_EAX + 0x94);
  if ((cVar2 == '\0') || (!bVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

