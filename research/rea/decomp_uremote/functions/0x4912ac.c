// rea decompile_all
// name: FUN_004912ac
// address: 0x4912ac
// body: available
// range: 0x4912ac-0x491370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004912ac(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  char *pcVar5;
  char *pcVar6;
  char local_c9;
  char local_c8 [192];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)(local_c8 + 0x54);
  pcVar5 = "keyword \"@1\": bad character \'0x@2\'";
  uVar4 = 0;
  do {
    cVar3 = *pcVar5;
    if (cVar3 == '\0') break;
    if (((param_2 == 0) || (cVar3 != '@')) || (pcVar6 = pcVar5 + 1, *pcVar6 == '\0')) {
LAB_00491340:
      local_c8[uVar4] = cVar3;
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar5;
    }
    else {
      cVar3 = *pcVar6;
      iVar1 = 0;
      if (cVar3 != '1') {
        local_c9 = '1';
        do {
          if (local_c9 == '\0') break;
          local_c9 = (&DAT_00919921)[iVar1];
          iVar1 = iVar1 + 1;
        } while (local_c9 != cVar3);
        pcVar5 = pcVar6;
        if (7 < iVar1) goto LAB_00491340;
      }
      pcVar2 = (char *)(iVar1 * 0x20 + param_2);
      pcVar5 = pcVar2 + 0x20;
      for (; ((uVar4 < 0xbf && (*pcVar2 != '\0')) && (pcVar2 < pcVar5)); pcVar2 = pcVar2 + 1) {
        local_c8[uVar4] = *pcVar2;
        uVar4 = uVar4 + 1;
      }
    }
    pcVar5 = pcVar6 + 1;
  } while (uVar4 < 0xbf);
  local_c8[uVar4] = '\0';
  FUN_00491216();
  __security_check_cookie(local_8 ^ (uint)(local_c8 + 0x54),extraout_EDX,param_1);
  return;
}

