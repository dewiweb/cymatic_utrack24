// rea decompile_all
// name: FUN_0054b4b0
// address: 0x54b4b0
// body: available
// range: 0x54b4b0-0x54b6cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0054b4b0(int param_1,undefined2 *param_2,int param_3,undefined1 param_4,char param_5)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *local_30;
  char local_15;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2bb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_005af82d(0xc4,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar3 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = (undefined4 *)FUN_0054af90(param_1,param_4,1);
  }
  puVar1 = param_2;
  local_8 = 0xffffffff;
  local_14 = local_30;
  if (local_30 != (undefined4 *)0x0) {
    local_15 = '\0';
    if (0x13 < param_3 - (int)param_2) {
      *(undefined2 *)(local_30 + 0x1e) = *param_2;
      *(undefined2 *)((int)local_30 + 0x7a) = param_2[1];
      *(undefined2 *)(local_30 + 0x1f) = param_2[2];
      *(undefined2 *)((int)local_30 + 0x7e) = param_2[3];
      *(undefined2 *)(local_30 + 0x20) = param_2[4];
      *(undefined2 *)((int)local_30 + 0x82) = param_2[5];
      *(undefined2 *)(local_30 + 0x21) = param_2[6];
      *(undefined2 *)((int)local_30 + 0x86) = param_2[7];
      *(undefined2 *)(local_30 + 0x22) = param_2[8];
      *(undefined2 *)((int)local_30 + 0x8a) = param_2[9];
      param_2 = param_2 + 10;
      cVar2 = FUN_00596500(local_30 + 0x23,&param_2,param_3);
      if (cVar2 != '\0') {
        if (param_5 != '\0') {
          *(short *)((int)local_30 + 0x72) = (short)param_2 - (short)puVar1;
        }
        local_15 = FUN_005289f0(0x3c,param_1 + 0x4c0);
      }
    }
    if (local_15 == '\0') {
      if (local_30 != (undefined4 *)0x0) {
        (**(code **)*local_30)(1);
      }
      local_14 = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_14;
}

