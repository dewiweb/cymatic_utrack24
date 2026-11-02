// rea decompile_all
// name: FUN_00551590
// address: 0x551590
// body: available
// range: 0x551590-0x5517c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00551590(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined4 param_5
            ,int param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int local_34;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d33de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0xf8,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_005512d0(*(undefined4 *)(param_6 + 0x2c),1);
  }
  local_8 = 0xffffffff;
  if (local_2c == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  if (param_3 < 0x204) {
    if (param_3 != 0x203) {
      switch(param_3) {
      case 0x24:
      case 0x41:
        goto switchD_0055164b_caseD_24;
      default:
        goto switchD_0055164b_caseD_25;
      case 0x26:
      case 0x42:
        break;
      case 0x38:
switchD_0055164b_caseD_38:
        FUN_005560c0(param_5);
        goto switchD_0055164b_caseD_25;
      }
    }
switchD_0055164b_caseD_26:
    FUN_005560c0(param_5);
  }
  else {
    if (param_3 < 0x226) {
      if ((param_3 != 0x225) && (param_3 != 0x204)) goto switchD_0055164b_caseD_25;
    }
    else {
      if (0x22b < param_3) {
        if ((param_3 < 0x239) || ((0x23b < param_3 && (param_3 != 0x113e))))
        goto switchD_0055164b_caseD_25;
        goto switchD_0055164b_caseD_38;
      }
      if ((param_3 == 0x22b) || (param_3 == 0x227)) goto switchD_0055164b_caseD_26;
      if (param_3 != 0x22a) goto switchD_0055164b_caseD_25;
    }
switchD_0055164b_caseD_24:
    FUN_005560c0(param_5);
  }
switchD_0055164b_caseD_25:
  local_2c[0x3a] = param_3;
  *(undefined2 *)(local_2c + 0x3b) = param_4;
  if (local_2c == (undefined4 *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = (int)local_2c + *(int *)(local_2c[0x28] + 4) + 0xa0;
  }
  cVar1 = FUN_005981a0(*(undefined1 *)(local_2c[0x39] + 0xad),param_1,param_2,param_6,param_7,
                       param_8,param_3,0,param_4,0,0,&DAT_0095c898,&DAT_0095c8a8,local_34);
  if (cVar1 == '\0') {
    if (local_2c != (undefined4 *)0x0) {
      (**(code **)*local_2c)(1);
    }
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  ExceptionList = local_10;
  return local_2c;
}

