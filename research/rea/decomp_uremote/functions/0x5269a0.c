// rea decompile_all
// name: FUN_005269a0
// address: 0x5269a0
// body: available
// range: 0x5269a0-0x526ab9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005269a0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_10;
  
  if ((uint)(param_1 - *(int *)(in_ECX + 0x40)) < 0x29) {
    uVar1 = 0;
  }
  else {
    *(int *)(in_ECX + 0x40) = param_1;
    uVar1 = *(undefined1 *)(in_ECX + 0x3c);
    if (*(char *)(in_ECX + 0x3c) != '\0') {
      *(undefined1 *)(in_ECX + 0x3c) = 0;
      local_10 = FUN_005270a0();
      if (local_10 != 0) {
        (*(code *)**(undefined4 **)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 8)))();
      }
      while (local_10 != 0) {
        if ((*(byte *)(local_10 + 0x154) >> 1 & 1) != 0) {
          FUN_00563e40();
        }
        iVar2 = FUN_005270f0(local_10);
        if (iVar2 != 0) {
          (*(code *)**(undefined4 **)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 8)))();
        }
        (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 8)) + 4))();
        local_10 = iVar2;
      }
    }
  }
  return uVar1;
}

