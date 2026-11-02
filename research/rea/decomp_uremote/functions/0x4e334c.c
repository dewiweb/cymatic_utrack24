// rea decompile_all
// name: FUN_004e334c
// address: 0x4e334c
// body: available
// range: 0x4e334c-0x4e33eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e334c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  uVar2 = FUN_004e2e22();
  if (uVar2 < 8) {
    FUN_004e3632();
  }
  else {
    piVar1 = *(int **)(*(int *)(in_ECX + 4) + 0xc);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_004e3109(param_2);
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 0xa8))(1);
        FUN_004e3667();
        (**(code **)(*piVar1 + 0xa8))(0);
        FUN_004e3667();
        **(undefined1 **)(in_ECX + 0xc) = 0;
      }
      else {
        FUN_004e3667();
      }
    }
  }
  FUN_004e317d(param_1,param_2);
  return param_1;
}

