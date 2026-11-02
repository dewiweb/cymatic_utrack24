// rea decompile_all
// name: FUN_0047e4fd
// address: 0x47e4fd
// body: available
// range: 0x47e4fd-0x47e74e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0047e4fd(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined1 *puVar6;
  undefined4 extraout_ECX_00;
  int iVar7;
  int iVar8;
  int local_60 [2];
  int local_58;
  int local_44 [2];
  int local_3c;
  undefined1 local_34 [12];
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_18 [16];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x47e509;
  local_24 = 0;
  piVar2 = (int *)*param_1;
  if ((piVar2 == (int *)0x0) || (param_3 == piVar2[2])) {
    uVar5 = FUN_0049f50b();
    return uVar5;
  }
  iVar8 = piVar2[4];
  iVar3 = piVar2[3];
  local_20 = iVar8;
  local_28 = (int *)(**(code **)(*piVar2 + 0xc))();
  local_8 = 1;
  (**(code **)(*local_28 + 4))();
  FUN_0047e2f2();
  local_8._0_1_ = 2;
  FUN_00474d0f();
  if (param_3 == 3) {
    cVar4 = FUN_0047e3d7();
    if (cVar4 == '\0') {
      FUN_004d076d();
      uVar5 = FUN_0047e37c(extraout_ECX);
      FUN_0047e88a(local_18,uVar5);
      goto LAB_0047e714;
    }
    FUN_0047e75a(local_60,local_18,0,0,iVar3,iVar8);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0047e79b(local_44,0,0,iVar3);
    param_1 = (int *)0x0;
    if (0 < iVar8) {
      do {
        iVar7 = 0;
        if (0 < iVar3) {
          puVar6 = (undefined1 *)(local_3c * (int)param_1 + local_44[0] + 3);
          do {
            *(undefined1 *)(iVar7 + local_58 * (int)param_1 + local_60[0]) = *puVar6;
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 4;
          } while (iVar7 < iVar3);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < iVar8);
    }
    FUN_0047e819();
  }
  else {
    if ((*(int *)(*param_1 + 8) != 3) || (param_3 != 2)) {
      cVar4 = FUN_0047e3d7();
      if (cVar4 != '\0') {
        FUN_0047604f();
        uVar5 = FUN_0047e37c(extraout_ECX_00);
        FUN_0047e88a(local_18,uVar5);
      }
      FUN_0047cc87();
      local_8._0_1_ = 5;
      FUN_0047d915(local_34,0,0);
      local_8._0_1_ = 2;
      FUN_0047cca3();
      goto LAB_0047e714;
    }
    FUN_0047e75a(local_44,local_18,0,0,iVar3,iVar8);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_0047e79b(local_60,0,0,iVar3);
    param_1 = (int *)0x0;
    if (0 < iVar8) {
      do {
        iVar7 = 0;
        if (0 < iVar3) {
          do {
            uVar1 = *(undefined1 *)(iVar7 + local_58 * (int)param_1 + local_60[0]);
            *(uint *)(local_3c * (int)param_1 + local_44[0] + iVar7 * 4) =
                 CONCAT31(CONCAT21(CONCAT11(uVar1,uVar1),uVar1),uVar1);
            iVar7 = iVar7 + 1;
            iVar8 = local_20;
          } while (iVar7 < iVar3);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < iVar8);
    }
    FUN_0047e819();
  }
  local_8._0_1_ = 2;
  FUN_0047e819();
LAB_0047e714:
  FUN_0049f50b();
  local_24 = 1;
  FUN_004c4d7a();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)*local_28)();
  return param_2;
}

