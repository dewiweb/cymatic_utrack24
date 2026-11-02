// rea decompile_all
// name: __get_narrow_winmain_command_line
// address: 0x4d5acd
// body: available
// range: 0x4d5acd-0x4d5b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __get_narrow_winmain_command_line
   
   Library: Visual Studio 2015 Release */

char * __get_narrow_winmain_command_line(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  ___acrt_initialize_multibyte();
  pcVar4 = DAT_00c8a5a0;
  if (DAT_00c8a5a0 == (char *)0x0) {
    pcVar4 = &DAT_00c8a258;
  }
  bVar2 = false;
  do {
    cVar1 = *pcVar4;
    if (cVar1 < '!') {
      if (cVar1 == '\0') {
        return pcVar4;
      }
      if (!bVar2) {
        for (; (*pcVar4 != '\0' && (*pcVar4 < '!')); pcVar4 = pcVar4 + 1) {
        }
        return pcVar4;
      }
    }
    if (cVar1 == '\"') {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((int)cVar1);
    if (iVar3 != 0) {
      pcVar4 = pcVar4 + 1;
    }
    pcVar4 = pcVar4 + 1;
  } while( true );
}

