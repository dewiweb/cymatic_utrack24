// rea decompile_all
// name: FUN_0041ad97
// address: 0x41ad97
// body: available
// range: 0x41ad97-0x41aee1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041ad97(int param_1)

{
  size_t *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = -1;
  iVar2 = *(int *)(param_1 + 8);
  psVar1 = (size_t *)(iVar2 + 0x28);
  iVar3 = FUN_0041ac23(param_1,psVar1);
  if (iVar3 == 0) {
    if (*psVar1 != 0) {
      uVar4 = FUN_00411976(0x10,0,&local_14);
      *(undefined4 *)(iVar2 + 0x24) = uVar4;
      if (local_14 != 0) {
        return local_14;
      }
    }
    iVar3 = FUN_0041ab40();
    if (iVar3 != 0) {
      local_10 = -0x10;
      do {
        iVar3 = FUN_0041ab7c(local_14);
        if (iVar3 < 0x14) {
          return 0xa0;
        }
        if (iVar3 < 0x17) {
          *psVar1 = local_c + 1U;
          _qsort(*(void **)(iVar2 + 0x24),local_c + 1U,0x10,(_PtFuncCompare *)&LAB_0041ad74);
          return 0;
        }
        if (iVar3 == 0x22) {
LAB_0041ae35:
          local_c = local_c + 1;
          local_10 = local_10 + 0x10;
          if ((int)*psVar1 <= local_c) {
            return 0xa0;
          }
          puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x24) + local_10);
          iVar5 = FUN_0041aa27(param_1,4);
          if (iVar5 < 3) {
            return 0xa0;
          }
          *puVar6 = local_38;
          puVar6[1] = local_30;
          if (iVar3 == 0x25) {
            puVar6[2] = 0;
            uVar4 = local_28;
          }
          else {
            puVar6[2] = local_28;
            if ((iVar3 != 0x22) || (uVar4 = local_20, iVar5 != 4)) {
              uVar4 = 0;
            }
          }
          puVar6[3] = uVar4;
        }
        else {
          if (iVar3 < 0x24) {
            return 0xa0;
          }
          if (iVar3 < 0x26) goto LAB_0041ae35;
          if (iVar3 != 0x4b) {
            return 0xa0;
          }
        }
        iVar3 = FUN_0041ab40();
      } while (iVar3 != 0);
    }
  }
  return 0xa0;
}

