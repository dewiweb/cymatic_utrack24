// rea decompile_all
// name: FUN_00405e5a
// address: 0x405e5a
// body: available
// range: 0x405e5a-0x405f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00405e5a(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_EDI;
  
  cVar2 = *unaff_EDI;
  *in_EAX = unaff_EDI;
  pcVar7 = unaff_EDI;
  while (((cVar2 != '\0' && (*pcVar7 != ' ')) && (*pcVar7 != '\t'))) {
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar7;
  }
  cVar2 = *pcVar7;
  cVar3 = -1;
  if (cVar2 != '\0') {
    *pcVar7 = '\0';
    cVar3 = cVar2;
  }
  iVar4 = FUN_00405cd7();
  if (cVar3 != -1) {
    *pcVar7 = cVar3;
  }
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == 1)) {
    if (*pcVar7 == '\0') goto LAB_00405eca;
    *pcVar7 = '\0';
    do {
      pcVar7 = pcVar7 + 1;
LAB_00405eca:
      cVar2 = *pcVar7;
    } while ((cVar2 != '\0') && ((cVar2 == ' ' || (cVar2 == '\t'))));
    if (*pcVar7 == '\"') {
      pcVar7 = pcVar7 + 1;
    }
    *param_2 = pcVar7;
    pcVar6 = unaff_EDI + param_1;
    if (pcVar7 < unaff_EDI + param_1) {
      do {
        pcVar1 = pcVar6 + -1;
        if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) break;
        *pcVar1 = '\0';
        pcVar6 = pcVar1;
      } while (pcVar7 < pcVar1);
      if ((pcVar7 < pcVar6) && (pcVar6[-1] == '\"')) {
        pcVar6[-1] = '\0';
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

