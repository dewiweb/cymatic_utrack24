// rea decompile_all
// name: FUN_00526d00
// address: 0x526d00
// body: available
// range: 0x526d00-0x526e45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526d00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,char param_7)

{
  char cVar1;
  undefined1 local_18 [15];
  char local_9;
  int local_8;
  
  local_9 = param_2 != param_5;
  local_8 = FUN_00527250(&param_1);
  if (local_8 != 0) {
    (*(code *)**(undefined4 **)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)))();
  }
  if (local_8 != 0) {
    if (local_9 != '\0') {
      FUN_00526c80(local_8,param_5);
    }
    FUN_0055e650(local_9);
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 0x98))
              (local_18);
    cVar1 = FUN_005039a0();
    if ((cVar1 != '\0') && ((local_9 != '\0' || (param_7 != '\0')))) {
      FUN_005661f0();
      FUN_00525860(local_8);
    }
    cVar1 = FUN_005263f0();
    if (cVar1 == '\0') {
      FUN_0050b280();
    }
    FUN_005033e0(&param_4);
    FUN_005033e0(&param_1);
    FUN_00566150();
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
  }
  return;
}

