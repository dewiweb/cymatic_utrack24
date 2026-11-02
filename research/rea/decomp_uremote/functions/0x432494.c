// rea decompile_all
// name: FUN_00432494
// address: 0x432494
// body: available
// range: 0x432494-0x432515 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00432494(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 == 0) {
    uVar5 = 6;
  }
  else {
    local_8 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      param_1 = 0;
      do {
        piVar3 = (int *)(*(int *)(iVar1 + 0x1c) + param_1);
        if (*piVar3 == param_3) {
          if (param_2 < piVar3[1]) {
            iVar4 = piVar3[2];
          }
          else if (piVar3[3] < param_2) {
            iVar4 = piVar3[4];
          }
          else {
            iVar2 = piVar3[2];
            iVar4 = FUN_0040d230(piVar3[4] - iVar2);
            iVar4 = iVar4 + iVar2;
          }
          *param_4 = iVar4;
        }
        local_8 = local_8 + 1;
        param_1 = param_1 + 0x14;
      } while (local_8 < *(int *)(iVar1 + 0x20));
    }
    uVar5 = 0;
  }
  return uVar5;
}

