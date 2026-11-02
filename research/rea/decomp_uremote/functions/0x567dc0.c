// rea decompile_all
// name: FUN_00567dc0
// address: 0x567dc0
// body: available
// range: 0x567dc0-0x567eec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00567dc0(void)

{
  bool bVar1;
  char cVar2;
  int in_ECX;
  undefined1 uVar3;
  
  FUN_0054f6b0();
  if (*(int *)(in_ECX + 0x98) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(in_ECX + 0xa2) == 0) {
    *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) | 1;
    uVar3 = 0x15;
  }
  else {
    cVar2 = FUN_00558fe0();
    if ((cVar2 == '\0') || (cVar2 = FUN_00558fe0(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_00529f40(in_ECX + 0x90,0);
      FUN_0052f300();
      *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) | 1;
      uVar3 = cVar2 == '\0';
    }
    else {
      uVar3 = 0x1e;
      *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) & 0xfb;
    }
  }
  FUN_0054f6f0();
  return uVar3;
}

