// rea decompile_all
// name: FUN_00459001
// address: 0x459001
// body: available
// range: 0x459001-0x4590c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459001(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  float local_8;
  
  local_8 = *(float *)(unaff_ESI + 0xd4);
  if ((local_8 == 0.0) || (*(int *)(unaff_ESI + 0x410) == 0)) {
    *(undefined4 *)(unaff_ESI + 0xc0) = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0xc4) = 0xffffffff;
  }
  else {
    local_8 = (float)(int)local_8;
    uVar1 = FUN_005b3fb0();
    *(undefined4 *)(unaff_ESI + 0xc0) = uVar1;
    uVar1 = FUN_005b3fb0();
    *(undefined4 *)(unaff_ESI + 0xc4) = uVar1;
  }
  FUN_0044a500(&local_8,*(undefined4 *)(unaff_ESI + 0x420));
  FUN_00465317(unaff_ESI + 200);
  FUN_004652d6();
  FUN_0044a500(&local_8,*(undefined4 *)(unaff_ESI + 0x424));
  FUN_00465317(unaff_ESI + 0xcc);
  FUN_004652d6();
  FUN_004c1613(unaff_ESI);
  return;
}

