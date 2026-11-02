// rea decompile_all
// name: FUN_004125f5
// address: 0x4125f5
// body: available
// range: 0x4125f5-0x412657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004125f5(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  int unaff_ESI;
  int local_8;
  
  uVar3 = FUN_00411912(0x20,&local_8);
  if (local_8 == 0) {
    uVar1 = *(undefined4 *)(in_EAX + 4);
    iVar2 = *(int *)(*(int *)(unaff_ESI + 0x3c) + 0x20);
    FUN_0041250a();
    local_8 = (**(code **)(iVar2 + 0x14))(uVar1,extraout_EDX);
    if (local_8 != 0) {
      thunk_FUN_004125b6(uVar3);
      uVar3 = 0;
    }
  }
  *param_1 = uVar3;
  return local_8;
}

