// rea decompile_all
// name: FUN_00404957
// address: 0x404957
// body: available
// range: 0x404957-0x404a08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00404957(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00401581(param_2);
  iVar2 = 0;
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 100) & 1) == 0) {
      iVar1 = FUN_004040cd(param_1,0);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_004040fa(param_1);
      iVar1 = 0;
    }
    if ((*(byte *)(param_1 + 100) & 2) == 0) {
      iVar1 = FUN_004040cd(param_1,1);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_004040fa(param_1);
      iVar1 = 0;
    }
    do {
      if (((iVar2 == 0) && ((*(byte *)(param_1 + 100) & 1) == 0)) ||
         ((iVar2 == 1 && ((*(byte *)(param_1 + 100) & 2) == 0)))) {
        FUN_00404548(param_1,iVar2);
        FUN_00404889(iVar2);
        FUN_00401976(iVar2);
        FUN_00401c4f(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    FUN_0040189a();
  }
  return iVar1;
}

