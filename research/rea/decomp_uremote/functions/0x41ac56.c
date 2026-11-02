// rea decompile_all
// name: FUN_0041ac56
// address: 0x41ac56
// body: available
// range: 0x41ac56-0x41ad73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041ac56(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar2 = *(int *)(param_1 + 8);
  piVar1 = (int *)(iVar2 + 0x20);
  iVar3 = FUN_0041ac23(param_1,piVar1);
  if (iVar3 == 0) {
    if (*piVar1 != 0) {
      uVar4 = FUN_00411976(0x14,0,&local_14);
      *(undefined4 *)(iVar2 + 0x1c) = uVar4;
      if (local_14 != 0) {
        return local_14;
      }
    }
    iVar3 = FUN_0041ab40();
    if (iVar3 != 0) {
      local_10 = -0x14;
      do {
        iVar3 = FUN_0041ab7c(local_14);
        if (iVar3 < 0x14) {
          return 0xa0;
        }
        if ((iVar3 < 0x16) || (iVar3 == 0x17)) {
          *piVar1 = local_c + 1;
          return 0;
        }
        if (iVar3 == 0x38) {
          local_c = local_c + 1;
          local_10 = local_10 + 0x14;
          if (*piVar1 <= local_c) {
            return 0xa0;
          }
          puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x1c) + local_10);
          iVar3 = FUN_0041aa27(param_1,5);
          if (iVar3 != 5) {
            return 0xa0;
          }
          *puVar5 = local_40;
          puVar5[1] = local_38;
          puVar5[2] = local_30;
          puVar5[3] = local_28;
          puVar5[4] = local_20;
        }
        else if (iVar3 != 0x4b) {
          return 0xa0;
        }
        iVar3 = FUN_0041ab40();
      } while (iVar3 != 0);
    }
  }
  return 0xa0;
}

