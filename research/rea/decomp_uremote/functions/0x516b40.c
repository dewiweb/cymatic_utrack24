// rea decompile_all
// name: FUN_00516b40
// address: 0x516b40
// body: available
// range: 0x516b40-0x516c52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00516b40(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(in_ECX + 0x65) != '\0') {
    if (-1 < *(int *)(*(int *)(in_ECX + 0x54) + 0x14) - *(int *)(in_ECX + 0x60)) {
      if (*(char *)(in_ECX + 100) != '\0') {
        *(undefined1 *)(in_ECX + 0x65) = 0;
      }
      if (*(int *)(in_ECX + 0x58) != 0) {
        FUN_00515830();
        if (in_ECX == 0) {
          local_1c = 0;
        }
        else {
          local_1c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        iVar1 = *(int *)(in_ECX + 0x2c);
        if (iVar1 == 0) {
          local_20 = 0;
        }
        else {
          local_20 = iVar1 + 0xc + *(int *)(*(int *)(iVar1 + 0xc) + 4);
        }
        (**(code **)**(undefined4 **)(in_ECX + 0x58))
                  (local_20,local_1c,*(undefined4 *)(*(int *)(in_ECX + 0x54) + 0x18),
                   *(undefined4 *)(*(int *)(in_ECX + 0x54) + 0x1c));
        FUN_00515860();
      }
      *(int *)(in_ECX + 0x60) = *(int *)(*(int *)(in_ECX + 0x54) + 0x14) + *(int *)(in_ECX + 0x5c);
    }
  }
  return *(undefined1 *)(in_ECX + 0x65);
}

