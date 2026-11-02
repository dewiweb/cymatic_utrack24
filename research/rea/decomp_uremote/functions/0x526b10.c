// rea decompile_all
// name: FUN_00526b10
// address: 0x526b10
// body: available
// range: 0x526b10-0x526c7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526b10(void)

{
  bool bVar1;
  int iVar2;
  int *in_ECX;
  int local_18;
  int local_8;
  
  if ((char)in_ECX[0xd] != '\0') {
    *(undefined1 *)(in_ECX + 0xd) = 0;
    local_8 = FUN_005270a0();
    while (local_8 != 0) {
      (*(code *)**(undefined4 **)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)))();
      iVar2 = FUN_00569bc0();
      if (iVar2 != 0) {
        FUN_0055f9c0((iVar2 != 1) + '\t');
      }
      FUN_00569bc0();
      iVar2 = FUN_005270f0(local_8);
      (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
      local_8 = iVar2;
    }
  }
  if ((*(char *)((int)in_ECX + 0x35) != '\0') && (*(int *)(*in_ECX + 0x170) != 0)) {
    local_18 = FUN_005270a0();
    bVar1 = false;
    for (; local_18 != 0; local_18 = FUN_005270f0(local_18)) {
      if (*(int *)(local_18 + 0x58) == 1) {
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      local_18 = in_ECX[3];
      while (local_18 != 0) {
        FUN_00560a00();
        local_18 = *(int *)(local_18 + 0x120);
        Sleep(3);
      }
      *(undefined1 *)((int)in_ECX + 0x35) = 0;
    }
  }
  return;
}

