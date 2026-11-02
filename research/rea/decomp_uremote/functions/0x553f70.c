// rea decompile_all
// name: FUN_00553f70
// address: 0x553f70
// body: available
// range: 0x553f70-0x554267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00553f70(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5
            ,undefined2 param_6,undefined2 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  char cVar1;
  int iVar2;
  int local_34;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3754;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x150,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_00553b80(*(undefined4 *)(param_11 + 0x2c),1);
  }
  local_8 = 0xffffffff;
  if (local_2c == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  if (param_3 < 0x113e) {
    if (param_3 != 0x113d) {
      if (param_3 < 0x938) {
        if (param_3 == 0x937) {
          FUN_005560c0(param_10);
        }
        else if (param_3 == 0x33c) {
          FUN_005560c0(param_10);
        }
        else if (param_3 == 0x33f) {
          FUN_005560c0(param_10);
        }
        goto LAB_0055412c;
      }
      if (param_3 == 0x940) {
        FUN_005560c0(param_10);
        goto LAB_0055412c;
      }
      if (param_3 != 0x1131) goto LAB_0055412c;
    }
  }
  else if (param_3 < 0x2337) {
    if (param_3 == 0x2336) {
      FUN_005560c0(param_10);
      goto LAB_0055412c;
    }
    if (param_3 != 0x2034) {
      if (param_3 == 0x2043) {
        FUN_005560c0(param_10);
      }
      goto LAB_0055412c;
    }
  }
  else if ((param_3 < 0x3132) || (0x3133 < param_3)) goto LAB_0055412c;
  FUN_005560c0(param_10);
LAB_0055412c:
  local_2c[0x44] = param_3;
  *(undefined2 *)(local_2c + 0x45) = param_4;
  *(undefined2 *)((int)local_2c + 0x116) = param_5;
  *(undefined2 *)(local_2c + 0x46) = param_6;
  *(undefined2 *)((int)local_2c + 0x11a) = param_7;
  FUN_00555f90(param_8);
  FUN_00555fc0(param_9);
  FUN_00503650(param_1);
  if (local_2c == (undefined4 *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = (int)local_2c + *(int *)(local_2c[0x28] + 4) + 0xa0;
  }
  cVar1 = FUN_005981a0(*(undefined1 *)(local_2c[0x43] + 0xad),param_1,param_2,param_11,param_12,
                       param_13,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_34);
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

