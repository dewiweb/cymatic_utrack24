// rea decompile_all
// name: FUN_00471e8b
// address: 0x471e8b
// body: available
// range: 0x471e8b-0x471ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471e8b(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(in_EAX + 0x20)) {
    piVar1 = *(int **)(in_EAX + 0x18);
    do {
      if (*(int *)(*piVar1 + 8) == *unaff_EBX) goto LAB_00471edc;
      local_8 = local_8 + 1;
      piVar1 = piVar1 + 1;
    } while (local_8 < *(int *)(in_EAX + 0x20));
  }
  iVar2 = FUN_005af82d(0x34);
  if (iVar2 != 0) {
    FUN_00471a25(unaff_EBX);
  }
  FUN_00471f36(0xffffffff);
LAB_00471edc:
  FUN_00472214();
  return;
}

