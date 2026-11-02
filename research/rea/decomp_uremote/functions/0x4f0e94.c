// rea decompile_all
// name: FUN_004f0e94
// address: 0x4f0e94
// body: available
// range: 0x4f0e94-0x4f0efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f0e94(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar1 = FUN_005af82d(0xb4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004f0ca1(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc),
                         *(undefined4 *)(in_ECX + 0x10),0);
  }
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      iVar2 = *(int *)(in_ECX + 0xac) * iVar3;
      _memcpy((void *)(*(int *)(iVar1 + 0xb0) + iVar2),(void *)(*(int *)(in_ECX + 0xb0) + iVar2),
              *(size_t *)(in_ECX + 0xac));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x10));
  }
  return iVar1;
}

