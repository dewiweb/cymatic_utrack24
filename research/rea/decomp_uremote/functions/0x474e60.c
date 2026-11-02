// rea decompile_all
// name: FUN_00474e60
// address: 0x474e60
// body: available
// range: 0x474e60-0x474eca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00474e60(void)

{
  undefined1 uVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  if (*(char *)((int)unaff_ESI + 3) != -1) {
    uVar1 = 0;
    if (*(char *)((int)unaff_ESI + 3) == '\0') {
      *(undefined1 *)unaff_ESI = 0;
      *(undefined1 *)((int)unaff_ESI + 1) = 0;
    }
    else {
      uVar1 = FUN_004706a0(0xff);
      *(undefined1 *)unaff_ESI = uVar1;
      uVar1 = FUN_004706a0(0xff);
      *(undefined1 *)((int)unaff_ESI + 1) = uVar1;
      uVar1 = FUN_004706a0(0xff);
    }
    *(undefined1 *)((int)unaff_ESI + 2) = uVar1;
  }
  return;
}

