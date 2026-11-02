// rea decompile_all
// name: FUN_00480b73
// address: 0x480b73
// body: available
// range: 0x480b73-0x480cd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480b73(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  iVar2 = param_1[0x57];
  if (param_2 == '\0') {
    *(code **)(iVar2 + 4) = FUN_0048119f;
    *(code **)(iVar2 + 8) = FUN_004812a9;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_004813e9;
    *(code **)(iVar2 + 8) = FUN_00481674;
  }
  local_10 = 0;
  if (0 < param_1[0x39]) {
    local_c = (undefined4 *)(iVar2 + 0x14);
    local_8 = param_1 + 0x3a;
    do {
      iVar4 = *(int *)(*local_8 + 0x14);
      iVar3 = *(int *)(*local_8 + 0x18);
      if (param_2 == '\0') {
        FUN_00480cd6(1);
        FUN_00480cd6(0);
      }
      else {
        if ((iVar4 < 0) || (3 < iVar4)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(int *)(*param_1 + 0x18) = iVar4;
          (**(code **)*param_1)(param_1);
        }
        if ((iVar3 < 0) || (3 < iVar3)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(int *)(*param_1 + 0x18) = iVar3;
          (**(code **)*param_1)(param_1);
        }
        piVar1 = (int *)(iVar2 + 0x4c + iVar4 * 4);
        if (*piVar1 == 0) {
          iVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *piVar1 = iVar4;
        }
        _memset((void *)*piVar1,0,0x404);
        piVar1 = (int *)(iVar2 + 0x5c + iVar3 * 4);
        if (*piVar1 == 0) {
          iVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *piVar1 = iVar4;
        }
        _memset((void *)*piVar1,0,0x404);
      }
      *local_c = 0;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_10 < param_1[0x39]);
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(int *)(iVar2 + 0x24) = param_1[0x2f];
  *(undefined4 *)(iVar2 + 0x28) = 0;
  return;
}

