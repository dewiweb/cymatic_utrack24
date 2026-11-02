// rea decompile_all
// name: FUN_004873f5
// address: 0x4873f5
// body: available
// range: 0x4873f5-0x4874b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004873f5(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_c;
  
  puVar1 = (undefined4 *)(**(code **)in_EAX[1])();
  in_EAX[0x61] = (int)puVar1;
  *puVar1 = &LAB_004871fa;
  if (*(char *)(in_EAX[0x68] + 8) != '\0') {
    if (in_EAX[0x46] < 2) {
      *(undefined4 *)(*in_EAX + 0x14) = 0x2f;
      (**(code **)*in_EAX)();
    }
    FUN_00486eb9();
  }
  local_c = 0;
  if (0 < in_EAX[9]) {
    puVar1 = puVar1 + 2;
    do {
      uVar2 = (**(code **)(in_EAX[1] + 8))();
      local_c = local_c + 1;
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
    } while (local_c < in_EAX[9]);
  }
  return;
}

