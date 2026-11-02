// rea decompile_all
// name: FUN_0040ac5f
// address: 0x40ac5f
// body: available
// range: 0x40ac5f-0x40accb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ac5f(char param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 *in_EDX;
  undefined4 *extraout_EDX;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(in_EDX + 0x10) = 0;
  *(undefined1 *)((int)in_EDX + 0x41) = 1;
  in_EDX[1] = in_EAX;
  in_EDX[2] = unaff_ESI;
  *in_EDX = *(undefined4 *)(in_EAX + 100);
  if (unaff_ESI != 0) {
    iVar1 = **(int **)(unaff_ESI + 0x9c);
    in_EDX[4] = iVar1 + 0x14;
    in_EDX[3] = iVar1;
    in_EDX[5] = iVar1 + 0x38;
    FUN_0040d5dd();
    extraout_EDX[0x12] = 0;
    extraout_EDX[0x11] = 0;
    in_EDX = extraout_EDX;
    if ((param_1 != '\0') && (unaff_EDI != 0)) {
      extraout_EDX[0x12] = **(undefined4 **)(unaff_EDI + 0x28);
      extraout_EDX[0x11] = *(undefined4 *)(*(int *)(unaff_ESI + 0x9c) + 0x24);
    }
  }
  in_EDX[6] = 0;
  in_EDX[7] = 0;
  in_EDX[8] = 0;
  in_EDX[9] = 0;
  in_EDX[10] = 0;
  in_EDX[0xb] = 0;
  return;
}

