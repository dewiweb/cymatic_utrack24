// rea decompile_all
// name: FUN_004cacad
// address: 0x4cacad
// body: available
// range: 0x4cacad-0x4cad1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004cacad(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_10;
  int local_c;
  char local_5;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x2c) + 0x144);
  iVar4 = 0;
  local_5 = '\x01';
  if (0 < piVar1[2]) {
    do {
      iVar3 = (**(code **)(**(int **)(*piVar1 + iVar4 * 4) + 0xc))(&local_10);
      iVar5 = local_10 + -1;
      if (-1 < iVar5) {
        local_c = iVar3 + iVar5 * 8;
        do {
          cVar2 = FUN_004e3601(in_ECX);
          if ((cVar2 == '\0') || (bVar6 = local_5 == '\0', local_5 = '\x01', bVar6)) {
            local_5 = '\0';
          }
          local_c = local_c + -8;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[2]);
  }
  return local_5;
}

