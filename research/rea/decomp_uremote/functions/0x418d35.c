// rea decompile_all
// name: FUN_00418d35
// address: 0x418d35
// body: available
// range: 0x418d35-0x418e51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418d35(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *local_8;
  
  puVar3 = param_2;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00418d25(param_1);
  local_8 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  if (local_8 < pcVar2) {
    cVar1 = *local_8;
    *param_2 = local_8;
    if (cVar1 == '(') {
      param_2[2] = 2;
      iVar4 = FUN_00418a80();
      pcVar5 = local_8;
      if (iVar4 == 0) {
        param_2[1] = local_8;
      }
    }
    else if (cVar1 == '[') {
      param_2[2] = 3;
      param_2 = (undefined4 *)0x1;
      *param_1 = local_8 + 1;
      FUN_00418d25(param_1);
      while ((pcVar5 = (char *)*param_1, pcVar5 < pcVar2 && (param_1[3] == 0))) {
        if (*pcVar5 == '[') {
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        else if ((*pcVar5 == ']') && (param_2 = (undefined4 *)((int)param_2 + -1), (int)param_2 < 1)
                ) {
          pcVar5 = pcVar5 + 1;
          goto LAB_00418d9d;
        }
        FUN_00418bfa(param_1);
        FUN_00418d25(param_1);
      }
    }
    else if (cVar1 == '{') {
      param_2[2] = 3;
      iVar4 = FUN_00418b71(&local_8);
      pcVar5 = local_8;
      if (iVar4 == 0) {
        param_2[1] = local_8;
      }
    }
    else {
      param_2[2] = ((*local_8 != '/') - 1 & 3) + 1;
      FUN_00418bfa(param_1);
      pcVar5 = (char *)*param_1;
      if (param_1[3] == 0) {
LAB_00418d9d:
        puVar3[1] = pcVar5;
      }
    }
    if (puVar3[1] == 0) {
      *puVar3 = 0;
      puVar3[2] = 0;
    }
    *param_1 = pcVar5;
  }
  return;
}

