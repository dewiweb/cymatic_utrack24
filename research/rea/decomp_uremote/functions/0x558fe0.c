// rea decompile_all
// name: FUN_00558fe0
// address: 0x558fe0
// body: available
// range: 0x558fe0-0x559073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00558fe0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint local_8;
  
  local_8 = 0;
  do {
    if (*(ushort *)(in_ECX + 0x10) <= local_8) {
      return 1;
    }
    iVar3 = FUN_0055bb40(*(undefined2 *)(*(int *)(in_ECX + 8) + local_8 * 8));
    if (iVar3 != 0) {
      if ((*(int *)(iVar3 + 0x10) == 1) || (*(int *)(iVar3 + 0x10) == 2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (cVar2 = FUN_00521f20(iVar3), cVar2 != '\0')) {
        return 0;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

