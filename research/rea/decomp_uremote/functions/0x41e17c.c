// rea decompile_all
// name: FUN_0041e17c
// address: 0x41e17c
// body: available
// range: 0x41e17c-0x41e1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041e17c(void)

{
  int in_EAX;
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_ECX + 0x30) + -1;
  uVar1 = *(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x30) * -4;
  if (-1 < iVar2) {
    do {
      if (*(int *)(uVar1 + iVar2 * 4) <= in_EAX) break;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    if (-1 < iVar2) {
      iVar3 = in_EAX;
      if (*(int *)(uVar1 + iVar2 * 4) < in_EAX) {
        do {
          in_EAX = *(int *)(uVar1 + iVar2 * 4);
          *(int *)(uVar1 + iVar2 * 4) = iVar3;
          iVar2 = iVar2 + -1;
          iVar3 = in_EAX;
        } while (-1 < iVar2);
      }
      if (-1 < iVar2) goto LAB_0041e1db;
    }
  }
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + -4;
  if (*(uint *)(in_ECX + 0x24) <= *(uint *)(in_ECX + 0x28)) {
    *(undefined4 *)(in_ECX + 0x2c) = 0x62;
    return CONCAT31((int3)(*(uint *)(in_ECX + 0x24) >> 8),1);
  }
  *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
  uVar1 = *(int *)(in_ECX + 0x30) * 4;
  *(int *)(*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x30) * -4) = in_EAX;
LAB_0041e1db:
  return uVar1 & 0xffffff00;
}

