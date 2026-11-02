// rea decompile_all
// name: FUN_004fabc0
// address: 0x4fabc0
// body: available
// range: 0x4fabc0-0x4fac4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fabc0(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (0 < *(int *)(unaff_ESI + 0x18)) {
    do {
      iVar2 = *(int *)(*(int *)(unaff_ESI + 0x10) + local_8 * 4);
      if (iVar3 == 0) {
LAB_004fac11:
        iVar3 = iVar2;
      }
      else {
        FUN_00467e6f();
        FUN_00467e6f();
        cVar1 = FUN_00468045();
        if (cVar1 != '\0') goto LAB_004fac11;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(unaff_ESI + 0x18));
    if (iVar3 != 0) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) - *(int *)(iVar3 + 0x20);
      iVar2 = 0;
      if (0 < *(int *)(unaff_ESI + 0x18)) {
        do {
          if (iVar3 == *(int *)(*(int *)(unaff_ESI + 0x10) + iVar2 * 4)) {
            FUN_004fe8af();
            return;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(unaff_ESI + 0x18));
      }
    }
  }
  return;
}

