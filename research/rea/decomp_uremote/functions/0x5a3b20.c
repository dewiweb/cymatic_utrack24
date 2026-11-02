// rea decompile_all
// name: FUN_005a3b20
// address: 0x5a3b20
// body: available
// range: 0x5a3b20-0x5a3be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a3b20(void)

{
  uint uVar1;
  int in_ECX;
  int local_8;
  
  if (*(int *)(in_ECX + 0x54) == 0) {
    *(byte *)(in_ECX + 0x6a) = *(byte *)(in_ECX + 0x6a) | 1;
    *(byte *)(in_ECX + 0x6a) = *(byte *)(in_ECX + 0x6a) | 2;
  }
  else {
    for (local_8 = 0;
        uVar1 = (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x54) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)))(),
        local_8 < (int)(uVar1 & 0xffff); local_8 = local_8 + 1) {
      *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) =
           *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) | 1;
      *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) =
           *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) | 2;
    }
  }
  FUN_00579180();
  return;
}

