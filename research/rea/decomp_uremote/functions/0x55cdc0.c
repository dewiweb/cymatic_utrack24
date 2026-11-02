// rea decompile_all
// name: FUN_0055cdc0
// address: 0x55cdc0
// body: available
// range: 0x55cdc0-0x55ce52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055cdc0(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00508110(param_1);
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      FUN_00570d40(param_1,param_2);
      goto LAB_0055ce20;
    }
    if (iVar1 != 0x7f02) goto LAB_0055ce20;
  }
  FUN_005799f0(param_1,param_2);
LAB_0055ce20:
  FUN_00522020(param_2,in_ECX + 0x48);
  return;
}

