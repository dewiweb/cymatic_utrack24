// rea decompile_all
// name: FUN_004db985
// address: 0x4db985
// body: available
// range: 0x4db985-0x4dbbd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004db985(int param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 *in_ECX;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int iVar4;
  undefined4 uStack_d4;
  int *piStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  int *piStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  float fStack_b4;
  int iStack_b0;
  int *piStack_ac;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined1 *local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x4db994;
  local_38 = 0;
  local_34 = 0;
  local_30 = param_1;
  local_2c = param_2;
  piStack_ac = &local_38;
  iStack_b0 = 0x4db9b8;
  cVar3 = FUN_00461733();
  if (cVar3 != '\0') {
    piVar1 = (int *)*in_ECX;
    iStack_b0 = 0x4db9c9;
    (**(code **)(*piVar1 + 0x34))();
    iVar4 = param_3 + -1;
    if (-1 < iVar4) {
      local_40 = (float)param_3;
      local_20 = param_3;
      local_28 = param_3 - iVar4;
      local_24 = (param_1 - iVar4) + -1;
      iStack_b0 = iVar4 * 2;
      local_18 = param_1 + iVar4 * -2;
      local_1c = param_2 + iVar4 * -2 + -2;
      local_3c = param_2 - param_1;
      do {
        piStack_b8 = &iStack_b0;
        fVar2 = (float)local_28 / local_40;
        uStack_bc = 0x4dba2b;
        fStack_b4 = fVar2;
        FUN_00476237();
        fStack_b4 = 7.138129e-39;
        FUN_00476c68();
        local_8 = 0;
        fStack_b4 = 7.138149e-39;
        iStack_b0 = extraout_EDX;
        (**(code **)(*piVar1 + 0x44))();
        local_8 = 0xffffffff;
        fStack_b4 = 7.138165e-39;
        FUN_00476da0();
        fStack_b4 = 0.0;
        piStack_b8 = &local_38;
        local_30 = local_18;
        local_2c = 1;
        uStack_bc = 0x4dba6c;
        local_38 = iVar4;
        local_34 = iVar4;
        (**(code **)(*piVar1 + 0x54))();
        local_44 = (undefined1 *)&uStack_bc;
        piStack_c4 = &uStack_bc;
        uStack_c8 = 0x4dba8e;
        fStack_c0 = fVar2 * 0.75;
        FUN_00476237();
        fStack_c0 = 7.138268e-39;
        FUN_00476c68();
        local_8 = 1;
        fStack_c0 = 7.138286e-39;
        uStack_bc = extraout_EDX_00;
        (**(code **)(*piVar1 + 0x44))();
        local_8 = 0xffffffff;
        fStack_c0 = 7.138303e-39;
        FUN_00476da0();
        local_74 = local_20;
        fStack_c0 = 0.0;
        piStack_c4 = &local_78;
        local_6c = local_1c;
        local_70 = 1;
        uStack_c8 = 0x4dbad2;
        local_78 = iVar4;
        (**(code **)(*piVar1 + 0x54))();
        local_44 = (undefined1 *)&uStack_c8;
        piStack_d0 = &uStack_c8;
        uStack_d4 = 0x4dbae8;
        fStack_cc = fVar2;
        FUN_00476237();
        fStack_cc = 7.138394e-39;
        FUN_00476c68();
        local_8 = 2;
        fStack_cc = 7.138418e-39;
        uStack_c8 = extraout_EDX_01;
        (**(code **)(*piVar1 + 0x44))();
        local_8 = 0xffffffff;
        fStack_cc = 7.138434e-39;
        FUN_00476da0();
        local_94 = local_3c + local_24;
        fStack_cc = 0.0;
        piStack_d0 = &local_98;
        local_90 = local_18;
        local_8c = 1;
        uStack_d4 = 0x4dbb44;
        local_98 = iVar4;
        (**(code **)(*piVar1 + 0x54))();
        FUN_00476237(&uStack_d4,fVar2 * 0.75);
        FUN_00476c68();
        local_8 = 3;
        uStack_d4 = extraout_EDX_02;
        (**(code **)(*piVar1 + 0x44))();
        local_8 = 0xffffffff;
        FUN_00476da0();
        local_88 = local_24;
        local_84 = local_20;
        local_7c = local_1c;
        local_80 = 1;
        (**(code **)(*piVar1 + 0x54))(&local_88,0);
        local_18 = local_18 + 2;
        local_1c = local_1c + 2;
        iVar4 = iVar4 + -1;
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        local_20 = local_20 + -1;
        iStack_b0 = extraout_ECX;
      } while (-1 < iVar4);
    }
    iStack_b0 = 0x4dbbcc;
    (**(code **)(*piVar1 + 0x38))();
  }
  return;
}

