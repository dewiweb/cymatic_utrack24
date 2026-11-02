// rea decompile_all
// name: FUN_004f5450
// address: 0x4f5450
// body: available
// range: 0x4f5450-0x4f55d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HCURSOR FUN_004f5450(void)

{
  LPCWSTR lpCursorName;
  HCURSOR pHVar1;
  undefined4 in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd16a;
  local_14 = ExceptionList;
  lpCursorName = (LPCWSTR)0x7f00;
  switch(in_ECX) {
  case 1:
    return (HCURSOR)0x7ef4;
  case 3:
    lpCursorName = (LPCWSTR)0x7f02;
    break;
  case 4:
    lpCursorName = (LPCWSTR)0x7f01;
    break;
  case 5:
    lpCursorName = (LPCWSTR)0x7f03;
    break;
  case 6:
    if (DAT_0095dbf0 != (HCURSOR)0x0) {
      return DAT_0095dbf0;
    }
    ExceptionList = &local_14;
    FUN_0047ee4b(0x77,DAT_00955fd4 ^ (uint)&stack0xffffffc8);
    local_c = 2;
    FUN_0049f50b();
    local_c = CONCAT31(local_c._1_3_,3);
    DAT_0095dbf0 = (HCURSOR)FUN_004f537f();
    FUN_004c4d7a();
    FUN_004c4d7a();
    ExceptionList = local_14;
    return DAT_0095dbf0;
  case 7:
    lpCursorName = (LPCWSTR)0x7f89;
    break;
  case 8:
    if (DAT_0095dbec != (HCURSOR)0x0) {
      return DAT_0095dbec;
    }
    ExceptionList = &local_14;
    FUN_0047ee4b(99,DAT_00955fd4 ^ (uint)&stack0xffffffc8);
    local_c = 0;
    FUN_0049f50b();
    local_c = CONCAT31(local_c._1_3_,1);
    DAT_0095dbec = (HCURSOR)FUN_004f537f();
    FUN_004c4d7a();
    FUN_004c4d7a();
    ExceptionList = local_14;
    return DAT_0095dbec;
  case 9:
  case 0xe:
  case 0xf:
    lpCursorName = (LPCWSTR)0x7f84;
    break;
  case 10:
  case 0xc:
  case 0xd:
    lpCursorName = (LPCWSTR)0x7f85;
    break;
  case 0xb:
    lpCursorName = (LPCWSTR)0x7f86;
    break;
  case 0x10:
  case 0x13:
    lpCursorName = (LPCWSTR)0x7f82;
    break;
  case 0x11:
  case 0x12:
    lpCursorName = (LPCWSTR)0x7f83;
  }
  ExceptionList = &local_14;
  pHVar1 = LoadCursorW((HINSTANCE)0x0,lpCursorName);
  if (pHVar1 == (HCURSOR)0x0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  ExceptionList = local_14;
  return pHVar1;
}

