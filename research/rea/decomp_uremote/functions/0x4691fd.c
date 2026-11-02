// rea decompile_all
// name: FUN_004691fd
// address: 0x4691fd
// body: available
// range: 0x4691fd-0x469286 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_004691fd(void)

{
  int in_EAX;
  char *pcVar1;
  char *pcVar2;
  char *pcVar4;
  int unaff_EDI;
  char *pcVar3;
  
  pcVar1 = (char *)(*(int *)(in_EAX + 0x6c) + *(int *)(in_EAX + 0x38));
  pcVar4 = (char *)(*(int *)(in_EAX + 0x38) + unaff_EDI);
  if ((*pcVar4 == *pcVar1) && (pcVar4[1] == pcVar1[1])) {
    pcVar4 = pcVar4 + 2;
    pcVar3 = pcVar1 + 2;
    while (((((pcVar2 = pcVar3 + 1, *pcVar2 == pcVar4[1] &&
              (pcVar2 = pcVar3 + 2, *pcVar2 == pcVar4[2])) &&
             (pcVar2 = pcVar3 + 3, *pcVar2 == pcVar4[3])) &&
            ((pcVar2 = pcVar3 + 4, *pcVar2 == pcVar4[4] &&
             (pcVar2 = pcVar3 + 5, *pcVar2 == pcVar4[5])))) &&
           ((pcVar2 = pcVar3 + 6, *pcVar2 == pcVar4[6] &&
            (pcVar2 = pcVar3 + 7, *pcVar2 == pcVar4[7]))))) {
      pcVar2 = pcVar3 + 8;
      pcVar4 = pcVar4 + 8;
      if ((*pcVar2 != *pcVar4) || (pcVar3 = pcVar2, pcVar1 + 0x102 <= pcVar2)) break;
    }
    pcVar2 = pcVar2 + (0x102 - (int)(pcVar1 + 0x102));
    if (2 < (int)pcVar2) {
      *(int *)(in_EAX + 0x70) = unaff_EDI;
      if (pcVar2 <= *(char **)(in_EAX + 0x74)) {
        return pcVar2;
      }
      return *(char **)(in_EAX + 0x74);
    }
  }
  return (char *)0x2;
}

