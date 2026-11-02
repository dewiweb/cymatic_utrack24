// rea decompile_all
// name: FUN_00478907
// address: 0x478907
// body: available
// range: 0x478907-0x478952 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478907(undefined4 *param_1)

{
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != param_1) {
    FUN_004a49d6();
    unaff_EBX[2] = param_1[2];
    unaff_EBX[3] = param_1[3];
    unaff_EBX[4] = param_1[4];
    unaff_EBX[5] = param_1[5];
    unaff_EBX[6] = param_1[6];
    *(undefined1 *)(unaff_EBX + 7) = *(undefined1 *)(param_1 + 7);
    if (unaff_EBX[2] != 0) {
      _memcpy((void *)*unaff_EBX,(void *)*param_1,unaff_EBX[2] << 2);
    }
  }
  return;
}

