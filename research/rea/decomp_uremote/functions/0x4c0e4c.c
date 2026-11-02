// rea decompile_all
// name: FUN_004c0e4c
// address: 0x4c0e4c
// body: available
// range: 0x4c0e4c-0x4c0ee1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004c0e4c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_18 = param_2;
  local_20 = 0x4c0e6b;
  uVar1 = FUN_004bfc26();
  if ((char)uVar1 != '\0') {
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_1c = local_18;
      local_20 = param_2;
      FUN_004f8542(param_1);
      local_20 = 0x4c0e9b;
      uVar1 = FUN_004c0e4c();
      return uVar1;
    }
    if ((*(byte *)(in_ECX + 0x68) & 1) != 0) {
      local_18 = 0x4c0eaa;
      piVar2 = (int *)FUN_004c0453();
      uVar1 = 0;
      if (piVar2 != (int *)0x0) {
        local_18 = 1;
        FUN_004f8605(&local_20);
        uVar1 = (**(code **)(*piVar2 + 0x48))();
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffff00;
}

