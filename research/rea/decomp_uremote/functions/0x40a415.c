// rea decompile_all
// name: FUN_0040a415
// address: 0x40a415
// body: available
// range: 0x40a415-0x40a483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a415(void)

{
  char cVar1;
  char *in_EAX;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  char *unaff_EBX;
  int iVar5;
  char *pcVar6;
  int local_8;
  
  sVar2 = _strlen(unaff_EBX);
  sVar3 = _strlen(in_EAX);
  if ((int)sVar3 < (int)sVar2) {
    local_8 = 1;
    if (0 < (int)sVar3) {
      pcVar6 = in_EAX + (sVar3 - 1);
      pcVar4 = unaff_EBX + (sVar2 - 1);
      do {
        if (*pcVar4 != *pcVar6) break;
        local_8 = local_8 + 1;
        pcVar4 = pcVar4 + -1;
        pcVar6 = pcVar6 + -1;
      } while (local_8 <= (int)sVar3);
      if (local_8 <= (int)sVar3) {
        return;
      }
    }
    iVar5 = (sVar2 - sVar3) + -1;
    if (0 < iVar5) {
      do {
        cVar1 = unaff_EBX[iVar5];
        if ((((cVar1 != '-') && (cVar1 != ' ')) && (cVar1 != '_')) && (cVar1 != '+')) break;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      if (0 < iVar5) {
        unaff_EBX[iVar5 + 1] = '\0';
      }
    }
  }
  return;
}

