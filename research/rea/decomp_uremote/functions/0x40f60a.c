// rea decompile_all
// name: FUN_0040f60a
// address: 0x40f60a
// body: available
// range: 0x40f60a-0x40f67c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040f60a(void)

{
  code *pcVar1;
  int *in_ECX;
  int unaff_ESI;
  int iVar2;
  
  if (unaff_ESI == 0) {
    iVar2 = 0x23;
  }
  else if ((((in_ECX == (int *)0x0) || (in_ECX[1] < 0)) || (in_ECX[2] < 0)) || (4 < *in_ECX)) {
    iVar2 = 6;
  }
  else {
    pcVar1 = *(code **)(*(int *)(*(int *)(unaff_ESI + 0x60) + 0xc) + 0x60);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(*(undefined4 *)(unaff_ESI + 0x58));
      return iVar2;
    }
    if (((*(uint *)(unaff_ESI + 8) & 1) != 0) || ((*(uint *)(unaff_ESI + 8) & 2) == 0)) {
      FUN_0040f40c();
      return 0;
    }
    iVar2 = FUN_0040f220();
    if (iVar2 == 0) {
      iVar2 = FUN_0040f5d1();
      return iVar2;
    }
  }
  return iVar2;
}

