// rea decompile_all
// name: FUN_0046a02f
// address: 0x46a02f
// body: available
// range: 0x46a02f-0x46a106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046a02f(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  size_t _Size;
  int unaff_EDI;
  size_t local_8;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    iVar2 = (**(code **)(unaff_EDI + 0x20))
                      (*(undefined4 *)(unaff_EDI + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_EAX - *(int *)(unaff_EDI + 0x10);
  local_8 = *(uint *)(iVar1 + 0x28);
  if (uVar3 < local_8) {
    local_8 = local_8 - *(int *)(iVar1 + 0x30);
    if (uVar3 < local_8) {
      local_8 = uVar3;
    }
    _memcpy((void *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30)),
            (void *)(*(int *)(unaff_EDI + 0xc) - uVar3),local_8);
    _Size = uVar3 - local_8;
    if (_Size == 0) {
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + local_8;
      if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      if (*(uint *)(iVar1 + 0x28) <= *(uint *)(iVar1 + 0x2c)) {
        return 0;
      }
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + local_8;
      return 0;
    }
    _memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EDI + 0xc) - _Size),_Size);
    *(size_t *)(iVar1 + 0x30) = _Size;
  }
  else {
    _memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EDI + 0xc) - local_8),local_8);
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
  return 0;
}

