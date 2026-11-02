// rea decompile_all
// name: FUN_00441082
// address: 0x441082
// body: available
// range: 0x441082-0x4410bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441082(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00467ec4();
  if (0x31 < (uint)(iVar1 - *(int *)(in_ECX + 0x30))) {
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x2c);
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x20);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x30) = iVar1;
  }
  return;
}

