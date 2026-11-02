// rea decompile_all
// name: FUN_00514fd0
// address: 0x514fd0
// body: available
// range: 0x514fd0-0x515087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514fd0(void)

{
  RPC_STATUS RVar1;
  uint local_30;
  UUID *local_28;
  UUID local_20;
  uint local_10;
  char local_9;
  undefined4 local_8;
  
  local_10 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  local_9 = FUN_005155a0(L"Software\\CopperLan\\CPVNM",L"MachineID",&local_8);
  if (local_9 == '\0') {
    RVar1 = UuidCreate(&local_20);
    if (RVar1 == 0) {
      local_28 = &local_20;
      for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
        *(char *)((int)&local_8 + (local_30 & 3)) =
             *(char *)((int)&local_8 + (local_30 & 3)) + (char)local_28->Data1;
        local_28 = (UUID *)((int)&local_28->Data1 + 1);
      }
      FUN_00515090(local_8);
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

