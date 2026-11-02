// rea decompile_all
// name: FUN_0045124a
// address: 0x45124a
// body: available
// range: 0x45124a-0x45143f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045124a(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34 [5];
  int *local_20;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x451256;
  local_34[0] = (undefined1 *)0x451264;
  FUN_00467142();
  local_34[0] = (undefined1 *)0x45126f;
  FUN_004c11fc();
  iVar1 = *(int *)(param_1[0x1d] + 0x7c);
  local_34[0] = (undefined1 *)0x45127c;
  FUN_0045ef8e();
  local_14 = 0;
  if (0 < *(int *)(iVar1 + 0x240)) {
    do {
      if (local_14 < *(uint *)(iVar1 + 0x240)) {
        local_34[0] = *(undefined1 **)(*(int *)(iVar1 + 0x238) + local_14 * 4);
      }
      else {
        local_34[0] = (undefined1 *)0x0;
      }
      puStack_38 = local_1c;
      uStack_3c = 0x4512b1;
      FUN_0044a500();
      local_8 = 0;
      local_34[0] = local_1c;
      puStack_38 = (undefined1 *)0x4512c6;
      thunk_FUN_0046e2c4();
      local_34[0] = (undefined1 *)0x178;
      puStack_38 = (undefined1 *)0x4512d0;
      local_34[0] = (undefined1 *)FUN_005af82d();
      local_8._0_1_ = 1;
      if (local_34[0] == (undefined1 *)0x0) {
        local_18 = 0;
      }
      else {
        puStack_38 = (undefined1 *)0x4512e2;
        local_20 = (int *)local_34[0];
        local_18 = FUN_0043f5eb();
      }
      iVar2 = local_18;
      local_20 = (int *)local_34;
      local_8._0_1_ = 0;
      local_34[0] = (undefined1 *)0x24;
      puStack_38 = (undefined1 *)0x451306;
      FUN_0043f850();
      *(uint *)(iVar2 + 0x10c) = local_14;
      local_34[0] = (undefined1 *)0x451314;
      iVar3 = FUN_0044bfc5();
      local_34[0] = (undefined1 *)(iVar3 + 0xa0);
      local_20 = (int *)local_34;
      puStack_38 = (undefined1 *)0x451327;
      FUN_004d076d();
      local_8._0_1_ = 2;
      puStack_38 = (undefined1 *)0x451330;
      iVar3 = FUN_0044bfc5();
      puStack_38 = (undefined1 *)(iVar3 + 0xa4);
      local_20 = (int *)&puStack_38;
      uStack_3c = 0x451343;
      FUN_004d076d();
      local_20 = &uStack_3c;
      uStack_40 = 0x451353;
      FUN_004d076d();
      local_20 = &uStack_40;
      puStack_48 = (undefined1 *)&uStack_40;
      local_44 = 0x3f666666;
      FUN_00476599();
      local_20 = &local_44;
      puStack_48 = (undefined1 *)0x451379;
      FUN_004d076d();
      local_20 = (int *)&puStack_48;
      FUN_004d076d();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0043f8fb();
      if (param_1 != (int *)0xffffff90) {
        piVar4 = *(int **)(iVar2 + 0x84);
        local_20 = piVar4 + *(int *)(iVar2 + 0x8c);
        for (; piVar4 != local_20; piVar4 = piVar4 + 1) {
          if (param_1 + 0x1c == (int *)*piVar4) goto LAB_004513f2;
        }
        if (*(int *)(iVar2 + 0x88) < *(int *)(iVar2 + 0x8c) + 1) {
          local_34[0] = (undefined1 *)0x4513d8;
          FUN_004f8197();
        }
        iVar3 = *(int *)(iVar2 + 0x8c);
        *(int *)(iVar2 + 0x8c) = iVar3 + 1;
        piVar4 = (int *)(*(int *)(iVar2 + 0x84) + iVar3 * 4);
        if (piVar4 != (int *)0x0) {
          *piVar4 = (int)(param_1 + 0x1c);
        }
      }
LAB_004513f2:
      local_34[0] = (undefined1 *)0xffffffff;
      puStack_38 = (undefined1 *)0x451402;
      FUN_004c1064();
      local_8 = 0xffffffff;
      local_34[0] = (undefined1 *)0x45140e;
      FUN_004652d6();
      local_14 = local_14 + 1;
    } while ((int)local_14 < *(int *)(iVar1 + 0x240));
  }
  local_34[0] = (undefined1 *)0x45142e;
  FUN_0045efa9();
  local_34[0] = (undefined1 *)0x451438;
  (**(code **)(*param_1 + 0x84))();
  return;
}

