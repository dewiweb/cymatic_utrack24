// rea decompile_all
// name: FUN_004a03f9
// address: 0x4a03f9
// body: available
// range: 0x4a03f9-0x4a05fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a03f9(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 **param_9)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *in_ECX;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 *puStack_58;
  int iStack_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34 [6];
  undefined1 *local_1c;
  undefined4 *local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4a0405;
  if ((float)param_9 == 0.0) {
    local_34[0] = (undefined4 *)0x4a0418;
    fVar5 = (float10)FUN_0049edca();
    param_9 = (undefined4 **)(float)fVar5;
  }
  local_1c = (undefined1 *)local_34;
  local_38 = (undefined4 *)0x4a042b;
  FUN_004c751a();
  local_38 = (undefined4 *)0x4a0433;
  cVar3 = FUN_00466847();
  if (cVar3 == '\0') {
    iVar2 = in_ECX[2];
    local_34[0] = &param_2;
    local_38 = param_2;
    local_3c = (undefined4 *)0x4a0483;
    local_1c = (undefined1 *)iVar2;
    FUN_00466678();
    local_8 = 0;
    local_34[0] = param_4;
    local_38 = param_3;
    local_3c = param_1;
    local_40 = (undefined4 *)0x4a04a1;
    FUN_0049fec9();
    puVar4 = (undefined4 *)(in_ECX[2] - iVar2);
    if (0 < (int)puVar4) {
      iVar1 = in_ECX[2] * 0x1c + -0x1c + *in_ECX;
      local_14 = *(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0xc);
      local_18 = (undefined4 *)(local_14 - *(float *)(iVar2 * 0x1c + 0xc + *in_ECX));
      if (0.0 < (float)local_18) {
        if ((float)param_5 <= (float)local_18 * (float)param_9) {
          local_38 = param_7;
          iStack_54 = iVar2;
          if ((int)param_8 < 2) {
            local_34[0] = param_9;
            local_3c = param_1;
            local_40 = param_6;
            local_44 = param_5;
            local_48 = param_4;
            local_4c = param_3;
            puStack_58 = (undefined4 *)0x4a059d;
            param_9 = &local_38;
            local_50 = puVar4;
            FUN_004a0753();
          }
          else {
            local_34[0] = param_9;
            local_40 = param_8;
            local_44 = param_6;
            local_48 = param_5;
            local_4c = param_4;
            local_50 = param_3;
            param_9 = &puStack_58;
            puStack_58 = param_7;
            local_3c = local_18;
            FUN_0049f50b();
            FUN_004a0bbe(&param_2);
          }
        }
        else {
          if ((float)param_5 < (float)local_18) {
            param_9 = (undefined4 **)((float)param_5 / (float)local_18);
            local_38 = (undefined4 *)0x4a051e;
            local_34[0] = param_9;
            FUN_004a086b();
          }
          local_38 = param_6;
          local_34[0] = param_7;
          local_3c = param_5;
          local_40 = param_4;
          local_44 = param_3;
          local_4c = (undefined4 *)0x4a0556;
          param_9 = local_34;
          local_48 = puVar4;
          FUN_004a0970();
        }
      }
    }
    local_34[0] = (undefined4 *)0x4a05f3;
    FUN_004652d6();
  }
  else {
    local_38 = param_6;
    local_34[0] = param_7;
    local_3c = param_5;
    local_40 = param_4;
    local_44 = param_3;
    local_48 = param_1;
    local_4c = param_2;
    iStack_54 = 0x4a046c;
    param_9 = local_34;
    FUN_004a0655();
  }
  return;
}

