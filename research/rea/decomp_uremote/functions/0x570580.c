// rea decompile_all
// name: FUN_00570580
// address: 0x570580
// body: available
// range: 0x570580-0x570616 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00570580(undefined4 param_1,undefined1 param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int local_8;
  
  local_8 = FUN_005711b0(param_1,param_2);
  if (local_8 != 0) {
    uVar1 = FUN_00570de0();
    if (uVar1 < 0x7fff) {
      sVar2 = FUN_00570de0();
      *(short *)(local_8 + 0xf0) = -2 - sVar2;
      iVar3 = FUN_00574360(local_8);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
        local_8 = 0;
      }
    }
  }
  return local_8;
}

