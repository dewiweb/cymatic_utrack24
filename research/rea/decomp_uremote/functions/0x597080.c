// rea decompile_all
// name: FUN_00597080
// address: 0x597080
// body: available
// range: 0x597080-0x59719e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597080(void *param_1,size_t param_2)

{
  int in_ECX;
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = *(int *)(in_ECX + 0xc3c) + 0x594;
  local_10 = param_2;
  if ((*(char *)(in_ECX + 0xc5e) == '\0') && (*(char *)(in_ECX + 0xc5d) != '\0')) {
    local_14 = *(void **)(in_ECX + 0xc50);
  }
  else {
    local_14 = param_1;
  }
  while (local_10 != 0) {
    if (*(int *)(in_ECX + 4) + local_10 < uVar1) {
      local_c = local_10;
    }
    else {
      local_c = uVar1 - *(int *)(in_ECX + 4);
    }
    if (local_c == 0) {
      **(undefined1 **)(in_ECX + 0xc3c) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    else {
      _memcpy(*(void **)(in_ECX + 4),local_14,local_c);
      *(size_t *)(in_ECX + 4) = *(int *)(in_ECX + 4) + local_c;
      local_14 = (void *)((int)local_14 + local_c);
      local_10 = local_10 - local_c;
      while (local_c != 0) {
        FUN_00597440();
        if (*(int *)(in_ECX + 0xc) == 4) {
          FUN_00597760();
          FUN_00597e60();
          local_c = local_c - *(ushort *)(in_ECX + 10);
        }
        else {
          local_c = 0;
        }
      }
    }
  }
  return;
}

