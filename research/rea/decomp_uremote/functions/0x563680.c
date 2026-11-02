// rea decompile_all
// name: FUN_00563680
// address: 0x563680
// body: available
// range: 0x563680-0x5637f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00563680(undefined4 param_1,int param_2,undefined4 param_3,short param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (param_4 == -1) {
    switch(param_2 + -1) {
    case 0:
      local_8 = FUN_00579bf0(param_3);
      break;
    case 1:
    case 2:
    case 4:
      local_8 = FUN_00579ad0(*(undefined2 *)(param_5 + 2));
      break;
    case 3:
      local_8 = FUN_00579c70(param_3);
    }
    local_c = param_2;
    while (local_8 != 0) {
      uVar3 = param_1;
      iVar2 = local_c;
      iVar4 = param_5;
      FUN_00579020(param_1,local_c,param_5);
      cVar1 = FUN_005a2370(uVar3,iVar2,iVar4);
      if (cVar1 != '\0') {
        return 1;
      }
      switch(local_c) {
      case 1:
      case 2:
        local_8 = FUN_00579cf0(param_3,local_8);
        local_c = 1;
        break;
      case 3:
      case 4:
        local_8 = FUN_00579d60(param_3,local_8);
        local_c = 4;
        break;
      case 5:
        local_8 = 0;
      }
    }
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00579ad0(param_4);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00579020(param_1,param_2,param_5);
      uVar3 = FUN_005a2370(param_1,param_2,param_5);
    }
  }
  return uVar3;
}

