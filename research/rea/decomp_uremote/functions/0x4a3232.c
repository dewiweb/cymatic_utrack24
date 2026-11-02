// rea decompile_all
// name: FUN_004a3232
// address: 0x4a3232
// body: available
// range: 0x4a3232-0x4a3519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_004a3232(int param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  void *pvStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dd6ed;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((NAN(param_4) || -1e+10 < param_4 == (param_4 == -1e+10)) || (1e+10 < param_4)) {
    param_4 = 0.0;
  }
  if (*(float *)(param_1 + 0x14) != param_4) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(float *)(param_1 + 0x14) = param_4;
    if (*(int *)(param_2 + 8) <= *(int *)(param_1 + 0x10)) {
      iVar1 = FUN_005af82d();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004a11df();
      }
      FUN_004a13f8();
      *(undefined4 *)(iVar1 + 0x14) = param_3;
      *(float *)(iVar1 + 0x18) = param_4;
    }
  }
  piVar2 = (int *)FUN_004a13ed();
  (**(code **)(*(int *)*param_6 + 0x20))();
  FUN_004a351a();
  fVar5 = (float10)FUN_0043bcfe();
  piVar2[7] = (int)(float)fVar5;
  FUN_004a351a();
  fVar5 = (float10)FUN_0043bcfe();
  piVar2[8] = (int)(float)fVar5;
  iVar1 = FUN_005af82d();
  local_14 = (void *)0x0;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00439b5a();
    uVar3 = FUN_004a1167();
  }
  local_14 = (void *)0xffffffff;
  FUN_004a6f5e();
  iVar1 = piVar2[2];
  piVar2[2] = iVar1 + 1;
  *(undefined4 *)(*piVar2 + iVar1 * 4) = uVar3;
  (**(code **)(*(int *)*param_6 + 0x20))();
  FUN_00474d74();
  FUN_00474d74();
  FUN_004a3594();
  FUN_0049f5e8();
  FUN_004c4d7a();
  FUN_004a3546();
  FUN_004d076d();
  FUN_004a13ed();
  uVar4 = 0;
  if (param_6[2] != 0) {
    do {
      FUN_004a110c();
      FUN_004a53bc();
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_6[2]);
  }
  ExceptionList = pvStack_24;
  return 0;
}

