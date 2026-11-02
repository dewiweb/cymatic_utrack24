// rea decompile_all
// name: FUN_00574e60
// address: 0x574e60
// body: available
// range: 0x574e60-0x574f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00574e60(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4e79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x138,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = (undefined4 *)FUN_00574aa0(param_1,1);
  }
  local_8 = 0xffffffff;
  if (local_34 != (undefined4 *)0x0) {
    FUN_00501f30(param_2);
    local_34[0x1c] = param_3;
    *(undefined2 *)(local_34 + 0x26) = param_4;
    local_34[0x20] = *param_5;
    local_34[0x21] = param_5[1];
    *(undefined2 *)(local_34 + 0x22) = *(undefined2 *)(param_5 + 2);
    cVar1 = FUN_005289f0(0x1e,**(int **)(param_1 + 0x88) + 0x4c0);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_34;
    }
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

