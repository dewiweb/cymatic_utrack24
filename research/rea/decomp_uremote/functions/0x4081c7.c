// rea decompile_all
// name: FUN_004081c7
// address: 0x4081c7
// body: available
// range: 0x4081c7-0x408250 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004081c7(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x2b4);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x5b0) == 0xffff) {
      local_8 = 6;
    }
    else {
      if (param_2 != (int *)0x0) {
        piVar1 = (int *)(iVar2 + 0xb94);
        if (*piVar1 == 0) {
          iVar3 = FUN_004090bf();
          *piVar1 = iVar3;
        }
        *param_2 = *piVar1;
      }
      if (param_3 != (int *)0x0) {
        piVar1 = (int *)(iVar2 + 0xb98);
        if (*piVar1 == 0) {
          iVar3 = FUN_004090bf();
          *piVar1 = iVar3;
        }
        *param_3 = *piVar1;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar2 + 0x5b8);
      }
    }
  }
  return local_8;
}

