// rea decompile_all
// name: FUN_00448304
// address: 0x448304
// body: available
// range: 0x448304-0x448420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448304(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  undefined4 *local_c;
  
  iVar3 = param_2 - (int)param_1 >> 2;
  if (0x20 < iVar3) {
    do {
      if (param_3 < 1) break;
      FUN_00448421(&local_10,param_1,param_2,param_4);
      param_3 = param_3 / 2 + (param_3 / 2) / 2;
      if ((int)(local_10 - (int)param_1 & 0xfffffffcU) < (int)(param_2 - (int)local_c & 0xfffffffcU)
         ) {
        FUN_00448304(param_1,local_10,param_3,param_4);
        param_1 = local_c;
      }
      else {
        FUN_00448304(local_c,param_2,param_3,param_4);
        param_2 = local_10;
      }
      iVar3 = param_2 - (int)param_1 >> 2;
    } while (0x20 < iVar3);
    if (0x20 < iVar3) {
      local_10 = param_2 - (int)param_1;
      iVar3 = local_10 >> 2;
      if (iVar3 < 2) {
        return;
      }
      iVar4 = iVar3 - (local_10 >> 0x1f) >> 1;
      while (iVar2 = local_10, 0 < iVar4) {
        iVar4 = iVar4 + -1;
        FUN_0044875b(iVar3,param_1[iVar4],param_4);
      }
      while (1 < iVar3) {
        if (1 < iVar3) {
          uVar1 = *(undefined4 *)((int)param_1 + iVar2 + -4);
          *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
          FUN_0044875b(iVar2 + -4 >> 2,uVar1,param_4);
        }
        iVar3 = iVar2 + -4 >> 2;
        iVar2 = iVar2 + -4;
      }
      return;
    }
  }
  if (1 < iVar3) {
    FUN_004485d7(param_1,param_2,param_4);
  }
  return;
}

