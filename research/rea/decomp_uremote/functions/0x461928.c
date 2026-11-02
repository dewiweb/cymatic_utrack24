// rea decompile_all
// name: FUN_00461928
// address: 0x461928
// body: available
// range: 0x461928-0x461ad2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00461928(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  float10 fVar3;
  undefined8 uVar4;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x461934;
  local_30 = 0;
  local_2c = param_1;
  iVar2 = (**(code **)(*param_2 + 0x40))();
  if (iVar2 < 1) {
LAB_00461ac6:
    FUN_004615f0();
    goto LAB_00461acd;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))();
  switch(uVar1) {
  case 1:
    (**(code **)(*param_2 + 0x20))();
    FUN_00461619();
    break;
  case 2:
    goto LAB_00461999;
  case 3:
LAB_00461999:
    FUN_0046163a();
    break;
  case 4:
    fVar3 = (float10)(**(code **)(*param_2 + 0x38))();
    FUN_00461644((double)fVar3);
    break;
  case 5:
    FUN_00464c3f();
    local_8 = 0;
    FUN_00464e60(param_2,iVar2 + -1,iVar2 + -1 >> 0x1f);
    FUN_00464ee0();
    FUN_00461693();
    FUN_004652d6();
    local_8 = 0xffffffff;
    FUN_00464cd9();
    break;
  case 6:
    uVar4 = (**(code **)(*param_2 + 0x28))();
    FUN_00461623(uVar4);
    break;
  case 7:
    FUN_004615f0();
    local_8 = 2;
    local_2c = FUN_004618b9();
    iVar2 = (**(code **)(*param_2 + 0x40))();
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_00461928(local_48,param_2);
      local_8._0_1_ = 3;
      FUN_0046e594();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004615f7();
    }
    FUN_00461605();
    FUN_004615f7();
    break;
  case 8:
    FUN_0046443e(&local_34,iVar2 + -1,0);
    local_8 = 1;
    if (1 < iVar2) {
      (**(code **)(*param_2 + 0xc))(local_34,iVar2 + -1);
      FUN_004644f3();
    }
    FUN_004616e1();
    FUN_004f7994();
    break;
  default:
    (**(code **)(*param_2 + 0x5c))(iVar2 + -1,iVar2 + -1 >> 0x1f);
    goto LAB_00461ac6;
  }
LAB_00461acd:
  FUN_005b9f18();
  return;
}

