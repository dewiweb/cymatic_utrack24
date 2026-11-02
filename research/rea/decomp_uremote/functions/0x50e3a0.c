// rea decompile_all
// name: FUN_0050e3a0
// address: 0x50e3a0
// body: available
// range: 0x50e3a0-0x50e489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0050e3a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 local_14;
  undefined4 local_8;
  
  if (param_2 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
    if (*(int *)(in_ECX + -0xa44) == 3) {
      iVar1 = FUN_005466c0(param_1,param_2,in_ECX + -0xb5c,param_3);
      if (iVar1 == 0) {
        local_14 = 0;
      }
      else {
        FUN_00544360();
        local_14 = iVar1 + 0x60 + *(int *)(*(int *)(iVar1 + 0x60) + 4);
      }
      local_8 = local_14;
    }
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  }
  return local_8;
}

