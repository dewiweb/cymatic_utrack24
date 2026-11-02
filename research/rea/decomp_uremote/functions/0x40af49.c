// rea decompile_all
// name: FUN_0040af49
// address: 0x40af49
// body: available
// range: 0x40af49-0x40afd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040af49(void)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int in_EAX;
  int iVar6;
  
  psVar5 = *(short **)(in_EAX + 0x14);
  if (psVar5 != (short *)0x0) {
    if (*psVar5 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(short *)(*(int *)(psVar5 + 6) + -4 + *psVar5 * 2) + 1;
    }
    sVar3 = psVar5[1];
    if (1 < sVar3) {
      piVar1 = (int *)(*(int *)(psVar5 + 2) + iVar6 * 8);
      piVar2 = (int *)(*(int *)(psVar5 + 2) + -8 + sVar3 * 8);
      if (((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) &&
         (*(char *)(*(int *)(psVar5 + 4) + -1 + (int)sVar3) == '\x01')) {
        psVar5[1] = psVar5[1] + -1;
      }
    }
    sVar3 = *psVar5;
    if (0 < sVar3) {
      sVar4 = psVar5[1];
      if (iVar6 == sVar4 + -1) {
        *psVar5 = sVar3 + -1;
        psVar5[1] = sVar4 + -1;
      }
      else {
        *(short *)(*(int *)(psVar5 + 6) + -2 + sVar3 * 2) = sVar4 + -1;
      }
    }
  }
  return;
}

