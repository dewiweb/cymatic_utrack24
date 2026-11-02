// rea decompile_all
// name: FUN_00565a40
// address: 0x565a40
// body: available
// range: 0x565a40-0x565b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00565a40(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 local_1c [20];
  int local_8;
  
  for (local_8 = FUN_0056a060(); local_8 != 0; local_8 = FUN_0056a0a0(local_8)) {
    if ((*(uint *)(local_8 + 0x70) & 0x1000000) == 0) {
      piVar2 = (int *)(**(code **)(*(int *)(local_8 + 0x28 +
                                           *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x18))
                                (local_1c);
      if (((*piVar2 == *param_1) && (piVar2[1] == param_1[1])) &&
         ((short)piVar2[2] == (short)param_1[2])) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0x10)) + 0x54))
                  (param_2);
      }
    }
  }
  return;
}

