// rea decompile_all
// name: FUN_004ab02c
// address: 0x4ab02c
// body: available
// range: 0x4ab02c-0x4ab151 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab02c(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_c;
  int *local_8;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_004be439(piVar4,param_3 + -2);
  piVar2 = piVar4 + 2;
  while (piVar3 = piVar4, param_2 < piVar3) {
    iVar1 = piVar3[-2];
    if ((iVar1 < *piVar3) || (piVar4 = piVar3 + -2, *piVar3 < iVar1)) break;
  }
  local_c = piVar3;
  local_8 = piVar2;
  if (piVar2 < param_3) {
    do {
      piVar2 = local_8;
      if ((*local_8 < *piVar3) || (*piVar3 < *local_8)) break;
      piVar2 = local_8 + 2;
      local_8 = piVar2;
    } while (piVar2 < param_3);
  }
LAB_004ab0b1:
  do {
    piVar4 = local_c;
    if (param_3 <= piVar2) {
joined_r0x004ab0bb:
      while (local_c = piVar4, param_2 < local_c) {
        piVar4 = local_c + -2;
        if (*piVar3 <= *piVar4) {
          if (*piVar3 < *piVar4) break;
          piVar3 = piVar3 + -2;
          FUN_004be4af();
        }
      }
      if (local_c == param_2) {
        if (piVar2 == param_3) {
          *param_1 = piVar3;
          param_1[1] = local_8;
          return;
        }
        if (local_8 != piVar2) {
          FUN_004be4af();
        }
        local_8 = local_8 + 2;
        piVar3 = piVar3 + 2;
        piVar2 = piVar2 + 2;
      }
      else {
        local_c = local_c + -2;
        if (piVar2 != param_3) goto LAB_004ab0a9;
        piVar3 = piVar3 + -2;
        if (local_c != piVar3) {
          FUN_004be4af();
        }
        local_8 = local_8 + -2;
      }
      FUN_004be4af();
      goto LAB_004ab0b1;
    }
    if (*piVar2 <= *piVar3) {
      if (*piVar2 < *piVar3) goto joined_r0x004ab0bb;
      local_8 = local_8 + 2;
LAB_004ab0a9:
      FUN_004be4af();
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

