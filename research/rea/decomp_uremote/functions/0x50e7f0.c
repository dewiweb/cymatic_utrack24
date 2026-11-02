// rea decompile_all
// name: FUN_0050e7f0
// address: 0x50e7f0
// body: available
// range: 0x50e7f0-0x50ea2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050e7f0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  undefined4 local_24;
  undefined4 local_1c;
  
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0x28))();
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0xe4))();
  FUN_0052d160(0);
  FUN_00524910();
  while (*(int *)(in_ECX + 0xf4) != 0) {
    if (*(int *)(in_ECX + 0xf4) == 0) {
      local_1c = 0;
    }
    else {
      local_1c = *(int *)(in_ECX + 0xf4) + 0x28 +
                 *(int *)(*(int *)(*(int *)(in_ECX + 0xf4) + 0x28) + 0xc);
    }
    (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0xa0))(local_1c);
  }
  while (*(int *)(in_ECX + 0xf8) != 0) {
    if (*(int *)(in_ECX + 0xf8) == 0) {
      local_24 = 0;
    }
    else {
      local_24 = *(int *)(in_ECX + 0xf8) + 0x28 +
                 *(int *)(*(int *)(*(int *)(in_ECX + 0xf8) + 0x28) + 0xc);
    }
    (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0xac))(local_24);
  }
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  piVar2 = (int *)(in_ECX + 0xdc);
  *(undefined2 *)(in_ECX + 0xe0) = 0;
  if (*piVar2 != 0) {
    FUN_005b13e8(*piVar2);
  }
  *piVar2 = 0;
  *(undefined2 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  FUN_00517510();
  FUN_00508340();
  if (param_1 == '\0') {
    FUN_005291b0();
  }
  else {
    uVar1 = FUN_00524010();
    FUN_0052d160(uVar1);
  }
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0x2c))();
  return;
}

