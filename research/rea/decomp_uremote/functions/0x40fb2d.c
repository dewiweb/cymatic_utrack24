// rea decompile_all
// name: FUN_0040fb2d
// address: 0x40fb2d
// body: available
// range: 0x40fb2d-0x40fb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040fb2d(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_ESI;
  
  iVar1 = 0;
  iVar2 = iVar1;
  if (in_ECX != 0) {
    iVar3 = *(int *)(in_ECX + 0x94);
    if (unaff_ESI != (int *)0x0) {
      if (*unaff_ESI != 0) {
        iVar3 = *(int *)(*unaff_ESI + 4);
      }
      *unaff_ESI = 0;
    }
    if (iVar3 != 0) {
      while (iVar2 = *(int *)(iVar3 + 8), *(int *)(iVar2 + 0x10) != param_1) {
        iVar3 = *(int *)(iVar3 + 4);
        if (iVar3 == 0) {
          return iVar1;
        }
      }
      if (unaff_ESI != (int *)0x0) {
        *unaff_ESI = iVar3;
      }
    }
  }
  return iVar2;
}

