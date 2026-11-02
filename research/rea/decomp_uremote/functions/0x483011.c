// rea decompile_all
// name: FUN_00483011
// address: 0x483011
// body: available
// range: 0x483011-0x483172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483011(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  iVar2 = param_1[0x57];
  *(int **)(iVar2 + 0x20) = param_1;
  *(char *)(iVar2 + 0xc) = param_2;
  bVar5 = param_1[0x4b] == 0;
  if (param_1[0x4d] == 0) {
    if (bVar5) {
      *(code **)(iVar2 + 4) = FUN_00483394;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_004834bc;
    }
  }
  else if (bVar5) {
    *(code **)(iVar2 + 4) = FUN_00483645;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_004836f0;
    if (*(int *)(iVar2 + 0x40) == 0) {
      uVar3 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined4 *)(iVar2 + 0x40) = uVar3;
    }
  }
  if (param_2 == '\0') {
    *(undefined1 **)(iVar2 + 8) = &LAB_004838cf;
  }
  else {
    *(code **)(iVar2 + 8) = FUN_0048390c;
  }
  local_10 = 0;
  if (0 < param_1[0x39]) {
    local_c = (undefined4 *)(iVar2 + 0x24);
    local_8 = param_1 + 0x3a;
    do {
      iVar4 = *local_8;
      *local_c = 0;
      if (bVar5) {
        if (param_1[0x4d] == 0) {
          iVar4 = *(int *)(iVar4 + 0x14);
          goto LAB_004830da;
        }
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x18);
        *(int *)(iVar2 + 0x34) = iVar4;
LAB_004830da:
        if (param_2 == '\0') {
          FUN_00480cd6(bVar5);
        }
        else {
          if ((iVar4 < 0) || (3 < iVar4)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x32;
            *(int *)(*param_1 + 0x18) = iVar4;
            (**(code **)*param_1)(param_1);
          }
          piVar1 = (int *)(iVar2 + 0x5c + iVar4 * 4);
          if (*piVar1 == 0) {
            iVar4 = (**(code **)param_1[1])(param_1,1,0x404);
            *piVar1 = iVar4;
          }
          _memset((void *)*piVar1,0,0x404);
        }
      }
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_10 < param_1[0x39]);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  iVar4 = param_1[0x2f];
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(int *)(iVar2 + 0x44) = iVar4;
  return;
}

