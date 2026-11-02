// rea decompile_all
// name: FUN_0040f18e
// address: 0x40f18e
// body: available
// range: 0x40f18e-0x40f21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040f18e(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_c;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      local_c = 0x23;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x60);
      if (iVar2 == 0) {
        local_c = 0x22;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + 8);
        local_c = 0;
        iVar4 = FUN_00411af4(param_1);
        if (iVar4 == 0) {
          local_c = 0x24;
        }
        else {
          FUN_00411b21();
          FUN_00411a5c(iVar4);
          if (*(int **)(iVar1 + 0x58) == param_1) {
            *(undefined4 *)(iVar1 + 0x58) = 0;
            if (*(int *)(iVar1 + 0x6c) != 0) {
              *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 8);
            }
          }
          FUN_0040e0c1(uVar3,param_1,iVar2);
        }
      }
    }
    return local_c;
  }
  return 0x24;
}

