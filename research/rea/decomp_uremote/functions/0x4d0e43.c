// rea decompile_all
// name: FUN_004d0e43
// address: 0x4d0e43
// body: available
// range: 0x4d0e43-0x4d0e7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004d0e43(int param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) < 1) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x1c);
    iVar2 = (-((iVar2 * param_1) / *(int *)(in_ECX + 0x18)) -
            ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) + iVar2;
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 <= param_2);
  }
  return uVar1;
}

