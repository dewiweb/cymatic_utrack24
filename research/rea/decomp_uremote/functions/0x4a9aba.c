// rea decompile_all
// name: FUN_004a9aba
// address: 0x4a9aba
// body: available
// range: 0x4a9aba-0x4a9be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9aba(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_10;
  undefined4 *local_c;
  
  iVar4 = param_2 - (int)param_1 >> 3;
  if (0x20 < iVar4) {
    do {
      if (param_3 < 1) break;
      FUN_004ab02c(&local_10,param_1,param_2);
      param_3 = param_3 / 2 + (param_3 / 2) / 2;
      if ((int)(local_10 - (int)param_1 & 0xfffffff8U) < (int)(param_2 - (int)local_c & 0xfffffff8U)
         ) {
        FUN_004a9aba(param_1,local_10,param_3);
        param_1 = local_c;
      }
      else {
        FUN_004a9aba(local_c,param_2,param_3);
        param_2 = local_10;
      }
      iVar4 = param_2 - (int)param_1 >> 3;
    } while (0x20 < iVar4);
    if (0x20 < iVar4) {
      local_10 = param_2 - (int)param_1;
      iVar5 = local_10 >> 3;
      iVar4 = local_10;
      if ((1 < iVar5) && (iVar7 = iVar5 - (local_10 >> 0x1f) >> 1, 0 < iVar7)) {
        puVar6 = param_1 + iVar7 * 2;
        do {
          puVar1 = puVar6 + -1;
          puVar6 = puVar6 + -2;
          iVar7 = iVar7 + -1;
          FUN_004bf166(*puVar6,*puVar1);
          iVar4 = local_10;
        } while (0 < iVar7);
      }
      while (1 < iVar5) {
        puVar6 = (undefined4 *)((int)param_1 + iVar4 + -8);
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *puVar6 = *param_1;
        puVar6[1] = param_1[1];
        FUN_004bf166(uVar2,uVar3);
        iVar5 = iVar4 + -8 >> 3;
        iVar4 = iVar4 + -8;
      }
      return;
    }
  }
  if (1 < iVar4) {
    FUN_004ab152(param_2);
  }
  return;
}

