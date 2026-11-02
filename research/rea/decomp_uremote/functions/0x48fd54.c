// rea decompile_all
// name: FUN_0048fd54
// address: 0x48fd54
// body: available
// range: 0x48fd54-0x48fd8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048fd54(void)

{
  undefined1 uVar1;
  undefined1 *in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  
  *in_EDX = 0x27;
  uVar1 = FUN_0048fd44();
  *(undefined1 *)(extraout_EDX + 1) = uVar1;
  uVar1 = FUN_0048fd44();
  *(undefined1 *)(extraout_EDX_00 + 2) = uVar1;
  uVar1 = FUN_0048fd44();
  *(undefined1 *)(extraout_EDX_01 + 3) = uVar1;
  uVar1 = FUN_0048fd44();
  *(undefined1 *)(extraout_EDX_02 + 4) = uVar1;
  *(undefined1 *)(extraout_EDX_02 + 5) = 0x27;
  return;
}

