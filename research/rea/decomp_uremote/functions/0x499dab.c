// rea decompile_all
// name: FUN_00499dab
// address: 0x499dab
// body: available
// range: 0x499dab-0x499eda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499dab(int param_1)

{
  ushort uVar1;
  undefined4 *unaff_EDI;
  
  if (((param_1 != 0) && (unaff_EDI != (undefined4 *)0x0)) &&
     ((*(uint *)(param_1 + 0x28) & 0x400) == 0)) {
    FUN_0049acae();
    if (((*(uint *)(param_1 + 0x28) & 0x1000) != 0) && (*(int *)(param_1 + 0x21c) != 0)) {
      FUN_00491216();
      *(int *)(param_1 + 0x21c) = 0;
    }
    FUN_0049b472(*unaff_EDI,unaff_EDI[1],*(undefined1 *)((int)unaff_EDI + 0x19),
                 *(undefined1 *)((int)unaff_EDI + 0x1a),*(undefined1 *)((int)unaff_EDI + 0x1b),
                 *(undefined1 *)(unaff_EDI + 7));
    if ((((*(ushort *)((int)unaff_EDI + 0x72) & 0x8000) == 0) &&
        ((*(ushort *)((int)unaff_EDI + 0x72) & 8) != 0)) && ((*(byte *)(unaff_EDI + 2) & 1) != 0)) {
      FUN_0049b8a4(param_1);
    }
    uVar1 = *(ushort *)((int)unaff_EDI + 0x72) & 0x8000;
    if ((uVar1 == 0) && ((unaff_EDI[2] & 0x1000) != 0)) {
      if ((unaff_EDI[2] & 0x800) != 0) {
        FUN_004913a9();
      }
      FUN_0049b8f8(param_1);
    }
    else if ((uVar1 == 0) && ((unaff_EDI[2] & 0x800) != 0)) {
      FUN_0049b8c6();
    }
    if ((*(byte *)(unaff_EDI + 2) & 2) != 0) {
      FUN_0049bae9(*(undefined1 *)((int)unaff_EDI + 0x19));
    }
    if ((((*(ushort *)((int)unaff_EDI + 0x72) & 0x8000) == 0) &&
        ((*(ushort *)((int)unaff_EDI + 0x72) & 0x10) != 0)) && ((*(byte *)(unaff_EDI + 2) & 4) != 0)
       ) {
      FUN_0049bb89();
    }
    FUN_00499d27(1);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x400;
  }
  return;
}

