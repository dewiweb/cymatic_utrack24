// rea decompile_all
// name: FUN_004c425c
// address: 0x4c425c
// body: available
// range: 0x4c425c-0x4c42c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c425c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  iVar5 = 1;
  local_14 = 1;
  cVar1 = FUN_004c42c8();
  if ((cVar1 == '\0') && (iVar2 = FUN_004d9312(), 1 < iVar2)) {
    iVar3 = FUN_004c6e10();
    do {
      iVar4 = FUN_00440367(iVar5);
      cVar1 = FUN_004c4700(iVar4 * iVar3);
      if (cVar1 == '\0') {
        return local_14;
      }
      local_14 = local_14 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return local_14;
}

