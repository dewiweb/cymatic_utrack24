// rea decompile_all
// name: FUN_00428bd5
// address: 0x428bd5
// body: available
// range: 0x428bd5-0x428c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428bd5(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    iVar2 = *(int *)(param_1 + 0x214);
    if (*(code **)(param_1 + 0x2b8) != (code *)0x0) {
      (**(code **)(param_1 + 0x2b8))(*(undefined4 *)(param_1 + 0x2b4));
    }
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(param_1);
    }
    FUN_004266ef();
    FUN_004269d2();
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x2a0));
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    FUN_00411199();
    FUN_00411199();
    *(undefined4 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    FUN_0042e447(uVar1);
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  return;
}

