// rea decompile_all
// name: FUN_00408ef1
// address: 0x408ef1
// body: available
// range: 0x408ef1-0x409026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408ef1(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *in_EAX;
  uint uVar2;
  uint *puVar3;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if ((in_EAX == (int *)0x0) || ((uint)in_EAX[2] <= param_1)) {
    local_8 = 6;
  }
  else {
    iVar1 = *in_EAX;
    local_c = 0;
    if (in_EAX[6] == 0) {
      local_8 = FUN_0041106d();
      if (local_8 != 0) {
        return local_8;
      }
      uVar2 = FUN_00408aef(&local_8);
      if (local_8 != 0) {
        return local_8;
      }
      if (uVar2 != 0) {
        do {
          param_1 = param_1 + 1;
          local_c = FUN_00408aef(&local_8);
          if (local_c != 0) break;
        } while (param_1 < (uint)in_EAX[2]);
      }
    }
    else {
      puVar3 = (uint *)(in_EAX[6] + param_1 * 4);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        do {
          puVar3 = puVar3 + 1;
          local_c = *puVar3;
          param_1 = param_1 + 1;
          if (local_c != 0) break;
        } while (param_1 < (uint)in_EAX[2]);
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
    if ((iVar1 + 1U < local_c) || ((iVar1 - local_c) + 1 < (uint)in_EAX[4])) {
      local_c = (iVar1 - in_EAX[4]) + 1;
    }
    if ((uVar2 == 0) || (local_c <= uVar2)) {
      *param_2 = 0;
      *param_3 = 0;
    }
    else {
      iVar1 = in_EAX[7];
      *param_3 = local_c - uVar2;
      if (iVar1 == 0) {
        local_8 = FUN_0041106d();
        if (local_8 == 0) {
          local_8 = FUN_0041117c(param_2);
        }
      }
      else {
        *param_2 = iVar1 + -1 + uVar2;
      }
    }
  }
  return local_8;
}

