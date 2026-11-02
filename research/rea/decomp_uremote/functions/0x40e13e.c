// rea decompile_all
// name: FUN_0040e13e
// address: 0x40e13e
// body: available
// range: 0x40e13e-0x40e1e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040e13e(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if (*(code **)(param_2 + 0x78) != (code *)0x0) {
    (**(code **)(param_2 + 0x78))(*(undefined4 *)(param_2 + 0x74));
  }
  while (*(int *)(param_2 + 0x54) != 0) {
    FUN_0040dce0();
  }
  FUN_00411b62(FUN_0040e0c1,param_1,param_3);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(code **)(param_2 + 0x30) != (code *)0x0) {
    (**(code **)(param_2 + 0x30))(param_2);
  }
  FUN_0040e101(param_1);
  pcVar2 = *(code **)(iVar1 + 0x34);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_2);
  }
  FUN_0040da85(*(uint *)(param_2 + 8) >> 10 & 1);
  *(undefined4 *)(param_2 + 0x68) = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 != 0) {
    FUN_00411a5c(iVar1);
    *(int *)(param_2 + 0x80) = 0;
  }
  FUN_00411a5c(param_2);
  return;
}

