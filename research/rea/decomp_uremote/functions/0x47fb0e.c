// rea decompile_all
// name: FUN_0047fb0e
// address: 0x47fb0e
// body: available
// range: 0x47fb0e-0x47fb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fb0e(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x52];
  *(undefined4 *)(iVar1 + 8) = 0;
  FUN_0047fad2();
  if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x40) != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
    *(code **)(iVar1 + 4) = FUN_0047fba0;
  }
  else if (param_2 == 2) {
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
    *(code **)(iVar1 + 4) = FUN_0047ff5e;
  }
  else if (param_2 == 3) {
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)(param_1);
    }
    *(code **)(iVar1 + 4) = FUN_0047fd89;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  return;
}

