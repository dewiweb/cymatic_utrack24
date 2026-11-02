// rea decompile_all
// name: FUN_0043f235
// address: 0x43f235
// body: available
// range: 0x43f235-0x43f359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f235(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  float local_10;
  
  uVar2 = 0;
  if (*(int *)(in_ECX + 0x18c) != 0) {
    FUN_0044bfc5();
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047d84f(param_1,*(int *)(in_ECX + 0x1c) / 2);
    for (; (int)uVar2 < *(int *)(in_ECX + 0x18c); uVar2 = uVar2 + 1) {
      if (uVar2 < *(uint *)(in_ECX + 0x18c)) {
        uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x184) + uVar2 * 4);
      }
      else {
        uVar1 = 0;
      }
      FUN_004c0902(uVar1);
      FUN_0047d49c((local_10 + 1.0) - *(float *)(in_ECX + 0x180),
                   (float)(*(int *)(in_ECX + 0x1c) / 2) - *(float *)(in_ECX + 0x180));
    }
  }
  return;
}

