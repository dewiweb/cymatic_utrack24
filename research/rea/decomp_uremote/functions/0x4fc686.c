// rea decompile_all
// name: FUN_004fc686
// address: 0x4fc686
// body: available
// range: 0x4fc686-0x4fc6c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004fc686(void)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  
  pcVar1 = (char *)glGetString(0x1f03);
  do {
    iVar3 = FUN_005ae720(pcVar1,"GL_ARB_multisample");
    if (iVar3 == 0) {
      return 0;
    }
    sVar2 = _strlen("GL_ARB_multisample");
    pcVar1 = (char *)(sVar2 + iVar3);
  } while ((*pcVar1 != ' ') && (*pcVar1 != '\0'));
  return CONCAT31((int3)((uint)pcVar1 >> 8),1);
}

