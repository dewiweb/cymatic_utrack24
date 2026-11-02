// rea decompile_all
// name: FUN_004fccbc
// address: 0x4fccbc
// body: available
// range: 0x4fccbc-0x4fcd5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004fccbc(void)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined1 local_4014 [4];
  undefined4 local_4010;
  int local_400c;
  undefined1 local_4008 [116];
  undefined1 local_3f94 [16268];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_3f94;
  uVar1 = FUN_004fcb4e();
  (**(code **)(*in_ECX + 0x6c))(uVar1);
  local_400c = 0;
  (**(code **)(*in_ECX + 0x80))(uVar1,0x8b82,&local_400c);
  if (local_400c == 0) {
    local_4010 = 0;
    (**(code **)(*in_ECX + 0x7c))(uVar1,0x4000,&local_4010,local_4008);
    FUN_00465395(local_4014,local_4010);
    FUN_00465317(in_ECX + 2);
    FUN_004652d6();
  }
  __security_check_cookie(local_8 ^ (uint)local_3f94);
  return;
}

