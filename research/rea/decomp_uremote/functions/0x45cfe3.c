// rea decompile_all
// name: FUN_0045cfe3
// address: 0x45cfe3
// body: available
// range: 0x45cfe3-0x45d1f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045cfe3(void)

{
  char cVar1;
  int in_ECX;
  char *pcVar2;
  int iVar3;
  
  if (*(char *)(in_ECX + 0x90) != '\0') {
    *(char *)(in_ECX + 0x90) = '\0';
    FUN_0045f926(FUN_004f9b3e);
  }
  if (*(char *)(in_ECX + 0x91) != '\0') {
    *(char *)(in_ECX + 0x91) = '\0';
    FUN_0045f926(FUN_004f9c53);
  }
  if (*(char *)(in_ECX + 0x92) != '\0') {
    *(char *)(in_ECX + 0x92) = '\0';
    cVar1 = FUN_004f9088();
    if (cVar1 != '\0') {
      do {
        FUN_004f9d5b(in_ECX + 600);
        cVar1 = FUN_004f9088();
      } while (cVar1 != '\0');
    }
  }
  if (*(char *)(in_ECX + 0x93) != '\0') {
    *(char *)(in_ECX + 0x93) = '\0';
    FUN_0045f926(&LAB_0045f989);
  }
  if (*(char *)(in_ECX + 0x94) != '\0') {
    *(char *)(in_ECX + 0x94) = '\0';
    FUN_0045f926(&LAB_004f9b63);
  }
  if (*(char *)(in_ECX + 0x95) != '\0') {
    *(char *)(in_ECX + 0x95) = '\0';
    FUN_0045f926(FUN_004f9d8b);
  }
  if (*(char *)(in_ECX + 0x96) != '\0') {
    *(char *)(in_ECX + 0x96) = '\0';
    FUN_0045f926(&LAB_004734ba);
  }
  if (*(char *)(in_ECX + 0xf7) != '\0') {
    *(char *)(in_ECX + 0xf7) = '\0';
    iVar3 = *(int *)(in_ECX + 0x80);
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      if ((*(int *)(in_ECX + 0x80) <= iVar3) && (iVar3 = *(int *)(in_ECX + 0x80) + -1, iVar3 < 0))
      break;
      FUN_004f9b3e();
    }
  }
  iVar3 = -199 - in_ECX;
  pcVar2 = (char *)(in_ECX + 199);
  do {
    if (pcVar2[0x18] != '\0') {
      pcVar2[0x18] = '\0';
      FUN_004f8c45(FUN_004f9b3e,pcVar2 + iVar3);
    }
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      FUN_004f8c45(FUN_004f9c53,pcVar2 + iVar3);
    }
    if (pcVar2[-0x30] != '\0') {
      pcVar2[-0x30] = '\0';
      FUN_004f8c45(FUN_004f9d5b,pcVar2 + iVar3);
    }
    if (pcVar2[-0x18] != '\0') {
      pcVar2[-0x18] = '\0';
      FUN_004f8c45(&LAB_0045f989,pcVar2 + iVar3);
    }
    pcVar2 = pcVar2 + 1;
  } while ((int)(pcVar2 + iVar3) < 0x18);
  if (*(char *)(in_ECX + 0xf8) != '\0') {
    *(char *)(in_ECX + 0xf8) = '\0';
    iVar3 = *(int *)(in_ECX + 0x8c);
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      if ((*(int *)(in_ECX + 0x8c) <= iVar3) && (iVar3 = *(int *)(in_ECX + 0x8c) + -1, iVar3 < 0)) {
        return;
      }
      FUN_004f9b3e();
    }
  }
  return;
}

