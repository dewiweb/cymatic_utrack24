// rea decompile_all
// name: FUN_004410bd
// address: 0x4410bd
// body: available
// range: 0x4410bd-0x441196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004410bd(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_3c [4];
  undefined1 local_38 [4];
  int local_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dacaa;
  local_14 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)auStack_3c;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  FUN_00465075(local_38);
  local_c = 0;
  FUN_00460b70(uVar3);
  FUN_00461605();
  local_c = CONCAT31(local_c._1_3_,2);
  thunk_FUN_004652d6();
  cVar2 = FUN_00461733();
  if (cVar2 == '\0') {
    FUN_004615f7();
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((iVar1 == 0) || (iVar1 == local_34)) {
      FUN_004615f7();
    }
    else {
      FUN_004410bd(iVar1);
      FUN_004615f7();
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_3c);
  return;
}

