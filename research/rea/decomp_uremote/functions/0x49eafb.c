// rea decompile_all
// name: FUN_0049eafb
// address: 0x49eafb
// body: available
// range: 0x49eafb-0x49ec3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049eafb(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  void *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  int *local_24;
  int *local_20;
  char *local_1c;
  float local_18;
  undefined4 local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x49eb07;
  local_24 = (int *)0x0;
  FUN_004a674c(&local_24);
  local_18 = 0.0;
  local_1c = (char *)*param_1;
  while (*local_1c != '\0') {
    param_1 = (undefined4 *)0x0;
    local_14[0] = 0;
    FUN_0044eba8();
    puVar2 = (undefined4 *)FUN_0049e9d0(1);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0049e080();
      piVar1 = local_24;
      if ((local_24 != (int *)0x0) && (local_24 != local_20)) {
        local_34 = (undefined4 *)0x0;
        local_30 = 0;
        local_2c = 0;
        local_40 = (void *)0x0;
        local_3c = 0;
        local_38 = 0;
        local_8._0_1_ = 2;
        local_8._1_3_ = 0;
        uVar3 = FUN_00465544();
        local_8._0_1_ = 3;
        (**(code **)(*piVar1 + 0x18))(uVar3,&local_34,&local_40);
        FUN_004652d6();
        if (0 < local_2c) {
          local_14[0] = *local_34;
          if (local_38 < 2) {
            param_1 = (undefined4 *)0x0;
          }
          else {
            param_1 = *(undefined4 **)((int)local_40 + 4);
          }
        }
        local_8._0_1_ = 1;
        _free(local_40);
        local_8 = (uint)local_8._1_3_ << 8;
        _free(local_34);
      }
      local_8 = 0xffffffff;
      FUN_00474d0f();
    }
    else {
      FUN_00460791();
      fVar4 = (float10)FUN_0049e78c();
      param_1 = (undefined4 *)(float)fVar4;
      local_14[0] = *puVar2;
    }
    local_18 = (float)param_1 + local_18;
    FUN_0043e86a(local_14);
    FUN_004a674c(&local_18);
  }
  return;
}

