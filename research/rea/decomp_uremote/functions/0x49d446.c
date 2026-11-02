// rea decompile_all
// name: FUN_0049d446
// address: 0x49d446
// body: available
// range: 0x49d446-0x49d4d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0049d446(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int *param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __setjmp3(param_4,0);
  if (iVar1 == 0) {
    FUN_0049215f();
    FUN_004917d5(param_3);
    FUN_00491590(param_2,param_6,param_7,param_9);
    if (*param_7 == 0x10) {
      FUN_004921bc();
    }
    if (*param_8 == 3) {
      FUN_004921cf();
    }
    if (*param_7 < 8) {
      FUN_004921cf();
    }
    if ((*param_8 == 0) || (*param_8 == 4)) {
      FUN_004921f5();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

