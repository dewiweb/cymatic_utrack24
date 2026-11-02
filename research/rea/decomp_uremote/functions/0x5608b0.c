// rea decompile_all
// name: FUN_005608b0
// address: 0x5608b0
// body: available
// range: 0x5608b0-0x560950 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005608b0(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined1 param_5,undefined4 param_6)

{
  short sVar1;
  int iVar2;
  undefined4 local_8;
  
  FUN_0054f6b0();
  iVar2 = FUN_0052c9b0(param_1);
  local_8 = 9;
  if (iVar2 != 0) {
    sVar1 = FUN_005446e0();
    if (sVar1 == 0x3102) {
      local_8 = FUN_0059c050(param_2,param_3,param_4,param_5,param_6);
    }
    FUN_00544620();
  }
  FUN_0054f6f0();
  return local_8;
}

