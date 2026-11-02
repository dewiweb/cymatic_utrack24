// rea decompile_all
// name: FUN_0054cd70
// address: 0x54cd70
// body: available
// range: 0x54cd70-0x54cef4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0054cd70(int param_1,undefined2 *param_2,int param_3,undefined1 param_4,char param_5)

{
  ushort uVar1;
  int iVar2;
  undefined2 *_Src;
  undefined4 *local_34;
  char local_15;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2db8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x4ac,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = (undefined4 *)FUN_0054c840(param_1,param_4,1);
  }
  local_8 = 0xffffffff;
  local_14 = local_34;
  if (local_34 != (undefined4 *)0x0) {
    local_15 = '\0';
    if (3 < param_3 - (int)param_2) {
      *(undefined2 *)(local_34 + 0x1e) = *param_2;
      *(undefined2 *)((int)local_34 + 0x7a) = param_2[1];
      _Src = param_2 + 2;
      if (((int)(uint)*(ushort *)((int)local_34 + 0x7a) <= param_3 - (int)_Src) &&
         (*(ushort *)((int)local_34 + 0x7a) < 0x401)) {
        uVar1 = *(ushort *)((int)local_34 + 0x7a);
        _memcpy(local_34 + 0x1f,_Src,(uint)uVar1);
        if (param_5 != '\0') {
          *(ushort *)((int)local_34 + 0x72) = ((short)_Src + uVar1) - (short)param_2;
        }
        local_15 = FUN_005289f0(0x3c,param_1 + 0x4c0);
      }
    }
    if (local_15 == '\0') {
      if (local_34 != (undefined4 *)0x0) {
        (**(code **)*local_34)(1);
      }
      local_14 = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_14;
}

