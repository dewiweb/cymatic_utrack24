// rea decompile_all
// name: FUN_004a3c17
// address: 0x4a3c17
// body: available
// range: 0x4a3c17-0x4a3de1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a3c17(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_60 [7];
  undefined4 local_44 [8];
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x4a3c23;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[2] = 3;
  local_44[1] = 0x57;
  local_44[0] = 1;
  local_44[5] = 2;
  local_44[6] = 0;
  puVar4 = local_44;
  puVar6 = local_60;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_8 = 0;
  local_1c = (int *)0x0;
  (**(code **)(*param_3 + 0x40))(param_3,local_60,&local_1c);
  iVar3 = param_4;
  iVar5 = 0;
  local_14[0] = (int *)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_20 = *(int **)(unaff_EBX + 0x10);
  local_18 = *(int *)(unaff_EBX + 0xc);
  cVar1 = FUN_004a39f4(param_1,local_18,local_20,local_1c,param_2,param_4,local_14);
  if (cVar1 != '\0') {
    param_3 = (int *)0x0;
    (**(code **)(*local_14[0] + 0xec))(local_14[0],0,0,&param_3);
    thunk_FUN_0046ea7f();
    piVar2 = (int *)FUN_005af82d(0x18);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[4] = -1;
      piVar2[5] = -0x39e3c000;
      piVar2[3] = iVar3;
      piVar2[1] = 0;
      *piVar2 = (int)juce::DirectWriteTypeLayout::CustomDirectWriteTextRenderer::vftable;
      piVar2[2] = param_1;
    }
    local_24 = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    local_8._0_1_ = 2;
    (**(code **)(*local_14[0] + 0xe8))(local_14[0]);
    local_8._0_1_ = 1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    local_20 = _malloc((int)param_3 * 0x18);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(*local_14[0] + 0xec))(local_14[0],local_20,param_3,&param_3);
    local_24 = (int *)FUN_00440367(param_3);
    local_18 = 0;
    piVar2 = local_20;
    if (0 < (int)local_24) {
      do {
        FUN_00439b5a(iVar5);
        uVar7 = FUN_004a13ed();
        *(int *)((int)uVar7 + 0xc) = iVar5;
        *(int *)((int)uVar7 + 0x10) = (int)((ulonglong)uVar7 >> 0x20);
        iVar5 = iVar5 + *piVar2;
        local_18 = local_18 + 1;
        piVar2 = piVar2 + 6;
      } while (local_18 < (int)local_24);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    _free(local_20);
  }
  local_8 = local_8 & 0xffffff00;
  if (local_14[0] != (int *)0x0) {
    (**(code **)(*local_14[0] + 8))(local_14[0]);
  }
  local_8 = 0xffffffff;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
  }
  return;
}

