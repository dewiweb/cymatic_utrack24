// rea decompile_all
// name: FUN_00418bfa
// address: 0x418bfa
// body: available
// range: 0x418bfa-0x418d24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418bfa(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_c;
  char *local_8;
  
  local_c = 0;
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[2];
  local_8 = pcVar2;
  FUN_00418a36(pcVar3);
  if (pcVar3 <= local_8) goto LAB_00418d18;
  cVar1 = *local_8;
  if ((cVar1 == '[') || (cVar1 == ']')) {
LAB_00418d07:
    local_8 = local_8 + 1;
  }
  else if (cVar1 == '{') {
    local_c = FUN_00418b71(&local_8);
  }
  else if (cVar1 == '(') {
    local_c = FUN_00418a80();
  }
  else if (cVar1 == '<') {
    if ((local_8 + 1 < pcVar3) && (local_8[1] == '<')) {
      local_8 = local_8 + 2;
    }
    else {
      local_c = FUN_00418b09();
    }
  }
  else if (cVar1 == '>') {
    local_8 = local_8 + 1;
    if ((local_8 < pcVar3) && (*local_8 == '>')) goto LAB_00418d07;
    local_c = 3;
  }
  else {
    if (cVar1 == '/') {
      local_8 = local_8 + 1;
    }
    if (pcVar3 <= local_8) goto LAB_00418d18;
    while (((((cVar1 = *local_8, cVar1 != ' ' && (cVar1 != '\r')) && (cVar1 != '\n')) &&
            ((cVar1 != '\t' && (cVar1 != '\f')))) &&
           (((cVar1 != '\0' && ((cVar1 != '/' && (cVar1 != '(')))) && (cVar1 != ')'))))) {
      if ((((cVar1 == '<') || (cVar1 == '>')) || (cVar1 == '[')) ||
         (((cVar1 == ']' || (cVar1 == '{')) ||
          ((cVar1 == '}' || ((cVar1 == '%' || (local_8 = local_8 + 1, pcVar3 <= local_8))))))))
      break;
    }
  }
  if ((local_8 < pcVar3) && (local_8 == pcVar2)) {
    local_c = 3;
  }
LAB_00418d18:
  param_1[3] = local_c;
  *param_1 = local_8;
  return;
}

