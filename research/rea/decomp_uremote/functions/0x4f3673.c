// rea decompile_all
// name: FUN_004f3673
// address: 0x4f3673
// body: available
// range: 0x4f3673-0x4f36c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f3673(void)

{
  uint in_EAX;
  uint uVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  uVar1 = in_EAX >> 0x10 & 0xfff;
  if (uVar1 == 0xb) {
    uVar3 = 0x30002;
  }
  else if (uVar1 == 0xc) {
    uVar3 = 0x30003;
  }
  else if (uVar1 == 0xd) {
    uVar3 = 0x30001;
  }
  else {
    if (uVar1 != 0xe) {
      return 0;
    }
    uVar3 = 0x30000;
  }
  FUN_004f1b01();
  pHVar2 = GetActiveWindow();
  if (*(HWND *)(unaff_EDI + 0x38) != pHVar2) {
    return 0;
  }
  FUN_004ed781(unaff_EDI,uVar3,0);
  return 1;
}

