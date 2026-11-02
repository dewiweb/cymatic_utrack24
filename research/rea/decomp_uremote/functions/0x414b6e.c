// rea decompile_all
// name: FUN_00414b6e
// address: 0x414b6e
// body: available
// range: 0x414b6e-0x414bca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00414b6e(char *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  undefined4 *local_c;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 0x11c);
  iVar4 = 0;
  bVar2 = false;
  local_c = puVar1;
  if (0 < *(int *)(unaff_ESI + 0x118)) {
    do {
      if (bVar2) goto LAB_00414bbc;
      iVar3 = _strcmp((char *)*local_c,param_1);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      iVar4 = iVar4 + 1;
      local_c = local_c + 3;
    } while (iVar4 < *(int *)(unaff_ESI + 0x118));
    if (bVar2) {
LAB_00414bbc:
      return puVar1 + iVar4 * 3 + -3;
    }
  }
  return (undefined4 *)0x0;
}

