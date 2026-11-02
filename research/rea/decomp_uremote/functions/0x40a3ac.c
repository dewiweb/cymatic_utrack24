// rea decompile_all
// name: FUN_0040a3ac
// address: 0x40a3ac
// body: available
// range: 0x40a3ac-0x40a414 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a3ac(void)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  char *unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  int local_c;
  
  sVar2 = _strlen(unaff_EBX);
  iVar3 = sVar2 + 1;
  local_c = sVar2 - 6;
  bVar1 = true;
  do {
    if ((iVar3 < 7) || (unaff_EBX[6] != '+')) {
      bVar1 = false;
    }
    else {
      iVar4 = 0;
      do {
        if ((unaff_EBX[iVar4] < 'A') || ('Z' < unaff_EBX[iVar4])) {
          bVar1 = false;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 6);
      if (!bVar1) {
        return;
      }
      if (7 < iVar3) {
        pcVar5 = unaff_EBX + 7;
        pcVar6 = unaff_EBX;
        for (iVar4 = local_c; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
      }
      iVar3 = iVar3 + -7;
      local_c = local_c + -7;
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}

