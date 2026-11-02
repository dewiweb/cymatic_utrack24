// rea decompile_all
// name: FUN_00437f31
// address: 0x437f31
// body: available
// range: 0x437f31-0x437fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437f31(int param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  int local_8;
  
  local_8 = 0;
  uVar2 = *(uint *)(in_ECX + 0x10b8);
  if (in_EAX < uVar2) {
    if ((*(int *)(in_ECX + 0x10bc) - in_ECX) - 0xb8U < uVar2 - in_EAX) {
      iVar1 = FUN_00437e5b();
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      *(uint *)(in_ECX + 0x10bc) = (*(int *)(in_ECX + 0x10bc) - uVar2) + in_EAX;
      *(uint *)(in_ECX + 0x10b8) = in_EAX;
    }
  }
  if ((*(uint *)(in_ECX + 0x10b8) < in_EAX) &&
     (iVar1 = FUN_00437ec7(in_EAX - *(uint *)(in_ECX + 0x10b8)), iVar1 != 0)) {
    return 0;
  }
  if (param_2 != 0) {
    do {
      uVar2 = *(int *)(in_ECX + 0x10c0) - (int)*(void **)(in_ECX + 0x10bc);
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      _memcpy((void *)(local_8 + param_1),*(void **)(in_ECX + 0x10bc),uVar2);
      local_8 = local_8 + uVar2;
      *(int *)(in_ECX + 0x10bc) = *(int *)(in_ECX + 0x10bc) + uVar2;
      *(int *)(in_ECX + 0x10b8) = *(int *)(in_ECX + 0x10b8) + uVar2;
      param_2 = param_2 - uVar2;
      if (param_2 == 0) {
        return local_8;
      }
      iVar1 = FUN_00437e8d();
    } while (iVar1 == 0);
  }
  return local_8;
}

