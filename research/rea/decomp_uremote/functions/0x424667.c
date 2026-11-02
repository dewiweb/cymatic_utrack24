// rea decompile_all
// name: FUN_00424667
// address: 0x424667
// body: available
// range: 0x424667-0x4247c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424667(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x214);
    if (iVar1 != 0) {
      if (*(code **)(iVar1 + 0x74) != (code *)0x0) {
        (**(code **)(iVar1 + 0x74))(param_1);
      }
      if (*(code **)(iVar1 + 0x90) != (code *)0x0) {
        (**(code **)(iVar1 + 0x90))(param_1);
      }
    }
    FUN_00425fb2();
    FUN_004238ec();
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined2 *)(param_1 + 0x98) = 0;
    FUN_00411199();
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0xfc) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
    if (*(char *)(param_1 + 0x128) != '\0') {
      FUN_00411a5c(*(undefined4 *)(param_1 + 0x150));
      *(undefined4 *)(param_1 + 0x150) = 0;
      FUN_00411a5c(*(undefined4 *)(param_1 + 0x154));
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined1 *)(param_1 + 0x128) = 0;
    }
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x228));
    *(undefined2 *)(param_1 + 0x226) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x3c))(param_1);
    }
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_00411a5c(*(undefined4 *)(param_1 + 700));
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}

