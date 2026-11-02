// rea decompile_all
// name: FUN_004fcbd3
// address: 0x4fcbd3
// body: available
// range: 0x4fcbd3-0x4fcca5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004fcbd3(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 local_4018 [4];
  undefined4 local_4014;
  int local_4010;
  undefined4 local_400c;
  undefined1 local_4008 [112];
  undefined1 local_3f98 [16272];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_3f98;
  uVar2 = (**(code **)(*in_ECX + 0x58))(param_1);
  local_4014 = FUN_00466b7c();
  (**(code **)(*in_ECX + 0x60))(uVar2,1,&local_4014,0);
  (**(code **)(*in_ECX + 100))(uVar2);
  local_4010 = 0;
  (**(code **)(*in_ECX + 0x74))(uVar2,0x8b81,&local_4010);
  if (local_4010 == 0) {
    local_400c = 0;
    (**(code **)(*in_ECX + 0x78))(uVar2,0x4000,&local_400c,local_4008);
    FUN_00465395(local_4018,local_400c);
    FUN_00465317(in_ECX + 2);
    FUN_004652d6();
  }
  else {
    iVar1 = *in_ECX;
    uVar3 = FUN_004fcb4e(uVar2);
    (**(code **)(iVar1 + 0x68))(uVar3);
    (**(code **)(*in_ECX + 0x5c))(uVar2);
  }
  __security_check_cookie(local_8 ^ (uint)local_3f98);
  return;
}

