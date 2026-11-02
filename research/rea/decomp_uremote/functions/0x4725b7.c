// rea decompile_all
// name: FUN_004725b7
// address: 0x4725b7
// body: available
// range: 0x4725b7-0x472736 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004725b7(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_48;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  int local_28 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x4725c3;
  local_38 = 0;
  local_30 = param_1;
  (**(code **)(*param_2 + 0x48))(&local_34);
  local_8 = 0;
  if (*local_34 == '\0') {
    FUN_004e22ca();
    FUN_004652d6();
  }
  else {
    FUN_0046505e(&local_2c);
    local_8._0_1_ = 1;
    FUN_004721d6(&local_2c);
    local_8 = CONCAT31(local_8._1_3_,3);
    thunk_FUN_004652d6();
    iVar1 = (**(code **)(*param_2 + 0x40))();
    if (-1 < iVar1) {
      if (0 < iVar1) {
        do {
          (**(code **)(*param_2 + 0x48))(&local_2c);
          local_8._0_1_ = 4;
          if (*local_2c != '\0') {
            FUN_00461928(local_28,param_2);
            local_8._0_1_ = 5;
            FUN_0046505e(&local_38);
            local_8._0_1_ = 6;
            FUN_00460bc4(local_48 + 0xc,&local_38,local_28);
            thunk_FUN_004652d6();
            FUN_004615f7();
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004652d6();
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar1 = (**(code **)(*param_2 + 0x40))();
      FUN_0046ea7f();
      local_2c = (char *)0x0;
      if (0 < iVar1) {
        do {
          FUN_004725b7(local_28,param_2);
          if (local_28[0] == 0) {
            FUN_00472232();
            FUN_004722b6();
            goto LAB_004726cd;
          }
          FUN_00472db0();
          *(int *)(local_28[0] + 0x30) = local_48;
          FUN_004722b6();
          local_2c = local_2c + 1;
        } while ((int)local_2c < iVar1);
      }
    }
    FUN_00472232();
LAB_004726cd:
    FUN_004722b6();
    FUN_004652d6();
  }
  FUN_005b9f18();
  return;
}

