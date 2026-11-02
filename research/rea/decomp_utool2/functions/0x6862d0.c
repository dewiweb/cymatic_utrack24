// rea decompile_all
// name: FUN_006862d0
// address: 0x6862d0
// body: available
// range: 0x6862d0-0x686448 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HCURSOR FUN_006862d0(void)

{
  LPCWSTR lpCursorName;
  HCURSOR pHVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720d2c;
  local_10 = ExceptionList;
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
    if (DAT_00c8ab10 != (HCURSOR)0x0) {
      return DAT_00c8ab10;
    }
    ExceptionList = &local_10;
    uVar2 = FUN_00671e00(0x77,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 2;
    FUN_004911e0(uVar2,1,3);
    local_8 = CONCAT31(local_8._1_3_,3);
    DAT_00c8ab10 = (HCURSOR)FUN_006864b0();
    FUN_004030d0();
    FUN_006838d0();
    ExceptionList = local_10;
    return DAT_00c8ab10;
  case 7:
    lpCursorName = (LPCWSTR)0x7f89;
    break;
  case 8:
    if (DAT_00c8ab7c != (HCURSOR)0x0) {
      return DAT_00c8ab7c;
    }
    ExceptionList = &local_10;
    uVar2 = FUN_00671e00(99,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    FUN_004911e0(uVar2,8,7);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_00c8ab7c = (HCURSOR)FUN_006864b0();
    FUN_004030d0();
    FUN_006838d0();
    ExceptionList = local_10;
    return DAT_00c8ab7c;
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
  ExceptionList = &local_10;
  pHVar1 = LoadCursorW((HINSTANCE)0x0,lpCursorName);
  if (pHVar1 == (HCURSOR)0x0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  ExceptionList = local_10;
  return pHVar1;
}

