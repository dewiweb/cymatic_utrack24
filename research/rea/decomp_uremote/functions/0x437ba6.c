// rea decompile_all
// name: FUN_00437ba6
// address: 0x437ba6
// body: available
// range: 0x437ba6-0x437c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437ba6(void *param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint _Size;
  int local_8;
  
  local_8 = 0;
  if ((in_EAX < *(uint *)(in_ECX + 0x2048)) && (iVar1 = FUN_00437a56(), iVar1 != 0)) {
    return 0;
  }
  if ((*(uint *)(in_ECX + 0x2048) < in_EAX) &&
     (iVar1 = FUN_00437b6c(in_EAX - *(uint *)(in_ECX + 0x2048)), iVar1 != 0)) {
    return 0;
  }
  if (param_2 != 0) {
    do {
      _Size = *(int *)(in_ECX + 0x2050) - (int)*(void **)(in_ECX + 0x204c);
      if (param_2 <= _Size) {
        _Size = param_2;
      }
      _memcpy(param_1,*(void **)(in_ECX + 0x204c),_Size);
      param_1 = (void *)((int)param_1 + _Size);
      local_8 = local_8 + _Size;
      *(int *)(in_ECX + 0x204c) = *(int *)(in_ECX + 0x204c) + _Size;
      *(int *)(in_ECX + 0x2048) = *(int *)(in_ECX + 0x2048) + _Size;
      param_2 = param_2 - _Size;
      if (param_2 == 0) {
        return local_8;
      }
      iVar1 = FUN_00437b00();
    } while (iVar1 == 0);
  }
  return local_8;
}

