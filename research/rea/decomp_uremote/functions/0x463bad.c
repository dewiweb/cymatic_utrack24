// rea decompile_all
// name: FUN_00463bad
// address: 0x463bad
// body: available
// range: 0x463bad-0x463c1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463bad(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  bool bVar3;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  cVar1 = FUN_004631a5(&DAT_00917188,0);
  if (cVar1 == '\0') {
    *unaff_EDI = 0;
    return;
  }
  FUN_0046338e(&local_8);
  if ((local_8 == (undefined4 *)0x0) || (cVar1 = FUN_004631a5(&DAT_0090f544,0), cVar1 == '\0')) {
    *unaff_EDI = 0;
  }
  else {
    *unaff_EDI = local_8;
    bVar3 = true;
    if (local_8 == (undefined4 *)0x0) goto LAB_00463c05;
    local_8[1] = local_8[1] + 1;
  }
  bVar3 = local_8 == (undefined4 *)0x0;
LAB_00463c05:
  if (!bVar3) {
    piVar2 = local_8 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*local_8)(1);
    }
  }
  return;
}

