// rea decompile_all
// name: FUN_004a2b0f
// address: 0x4a2b0f
// body: available
// range: 0x4a2b0f-0x4a2dd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004a2b0f(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  HDC hdc;
  int iVar9;
  float10 fVar10;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  undefined8 local_3c;
  int local_30;
  undefined8 local_2c;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x4a2b1b;
  uVar6 = FUN_0049f74a();
  uVar7 = FUN_0049f744(uVar6);
  FUN_0049dff4(uVar7,uVar6);
  local_8 = 0;
  *param_1 = juce::WindowsDirectWriteTypeface::vftable;
  FUN_004a8158(param_1 + 0xb);
  param_1[0xc] = 0;
  local_8._0_1_ = 2;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  FUN_00476f80();
  iVar8 = *param_3;
  local_30 = 0;
  local_20 = 0;
  uVar6 = FUN_0049f744(&local_20,&local_30);
  uVar6 = FUN_00466b89(uVar6);
  (**(code **)(iVar8 + 0x14))(param_3,uVar6);
  if (local_30 == 0) {
    local_20 = 0;
  }
  local_8._0_1_ = 3;
  local_1c = (int *)0x0;
  (**(code **)(*param_3 + 0x10))(param_3,local_20,&local_1c);
  local_14[0] = (int *)0x0;
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar8 = (**(code **)(*local_1c + 0x10))(local_1c);
  iVar8 = iVar8 + -1;
  local_2c = (double)CONCAT44(iVar8,(undefined4)local_2c);
  piVar3 = local_1c;
  do {
    local_1c = piVar3;
    if (iVar8 < 0) {
LAB_004a2c63:
      piVar4 = local_14[0];
      piVar3 = param_1 + 0xc;
      piVar2 = (int *)*piVar3;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *piVar3 = 0;
      (**(code **)(*piVar4 + 0x34))(piVar4,piVar3);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_14[0] != (int *)0x0) {
        (**(code **)(*local_14[0] + 8))(local_14[0]);
      }
      piVar3 = (int *)*piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x20))(piVar3,&local_50);
        param_1[0x10] = (uint)local_50;
        fVar10 = (float10)FUN_00474d74((float)local_4e);
        param_1[0xf] = (float)fVar10;
        fVar10 = (float10)FUN_00474d74((float)local_4c);
        fVar1 = (float)param_1[0xf];
        param_1[0xf] = (float)param_1[0xf] / (float)(fVar10 + (float10)fVar1);
        param_1[0xd] = (float)(int)param_1[0x10] / (float)(fVar10 + (float10)fVar1);
        hdc = GetDC((HWND)0x0);
        iVar8 = GetDeviceCaps(hdc,0x5a);
        iVar9 = GetDeviceCaps(hdc,0x58);
        local_3c = (double)((float)(iVar8 + iVar9) * 0.5);
        iVar8 = GetDeviceCaps(hdc,0x5a);
        param_1[0xe] = ((float)local_3c / (float)iVar8) * (float)param_1[0xd];
        ReleaseDC((HWND)0x0,hdc);
        local_3c = (double)CONCAT44(((float)local_4e * 1024.0) / (float)(int)param_1[0x10],
                                    (undefined4)local_3c);
        fVar10 = (float10)FUN_00474d74(((float)local_4c * 1024.0) / (float)(int)param_1[0x10]);
        local_2c = (double)fVar10;
        fVar10 = (float10)FUN_00474d74(local_3c._4_4_);
        FUN_0047745f((float)((float10)1 / (fVar10 + (float10)local_2c)));
        FUN_00476f96();
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))(local_1c);
      }
      return param_1;
    }
    if (local_14[0] != (int *)0x0) {
      (**(code **)(*local_14[0] + 8))(local_14[0]);
    }
    local_14[0] = (int *)0x0;
    (**(code **)(*piVar3 + 0x14))(piVar3,iVar8,local_14);
    if (iVar8 == 0) goto LAB_004a2c63;
    local_8._0_1_ = 5;
    local_18 = (int *)0x0;
    (**(code **)(*local_14[0] + 0x20))(local_14[0],&local_18);
    FUN_004a280f((int)&local_3c + 4);
    FUN_0049f74a();
    cVar5 = FUN_00465948();
    FUN_004652d6();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (cVar5 != '\0') {
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
      }
      goto LAB_004a2c63;
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(local_18);
    }
    iVar8 = local_2c._4_4_ + -1;
    local_2c = (double)CONCAT44(iVar8,(undefined4)local_2c);
    piVar3 = local_1c;
  } while( true );
}

