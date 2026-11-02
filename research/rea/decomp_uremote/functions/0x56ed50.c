// rea decompile_all
// name: FUN_0056ed50
// address: 0x56ed50
// body: available
// range: 0x56ed50-0x56ee84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort * FUN_0056ed50(void *param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort *local_2c;
  ushort *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4adb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005af82d(0x10,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_2c = (ushort *)0x0;
  }
  else {
    local_2c = (ushort *)FUN_0056ebe0();
  }
  local_8 = 0xffffffff;
  local_14 = local_2c;
  if (local_2c != (ushort *)0x0) {
    local_2c[1] = param_2 - (short)param_1;
    *local_2c = local_2c[1];
    uVar2 = FUN_005b04d6(local_2c[1]);
    *(undefined4 *)(local_2c + 2) = uVar2;
    if (*(int *)(local_2c + 2) == 0) {
      if (local_2c != (ushort *)0x0) {
        FUN_0056ec30();
        FUN_005af7b6(local_2c);
      }
      local_14 = (ushort *)0x0;
    }
    else {
      _memcpy(*(void **)(local_2c + 2),param_1,(uint)*local_2c);
      *(uint *)(local_2c + 4) = (uint)*local_2c + *(int *)(local_2c + 2);
    }
  }
  ExceptionList = local_10;
  return local_14;
}

