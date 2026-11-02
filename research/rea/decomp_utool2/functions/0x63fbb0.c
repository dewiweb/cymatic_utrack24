// rea decompile_all
// name: FUN_0063fbb0
// address: 0x63fbb0
// body: available
// range: 0x63fbb0-0x63fe83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063fbb0(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  undefined4 in_EDX;
  float in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  int **ppiVar6;
  undefined4 **ppuVar7;
  undefined4 local_44;
  int local_40;
  float local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fa9c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  local_14 = uVar3;
  operator_new(0x28);
  local_2c = (undefined4 *)FUN_00468990(uVar3);
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    local_2c[1] = local_2c[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_40 = 0;
  if (local_2c[2] == 0) {
    ppuVar7 = &local_2c;
    ppiVar6 = &local_24;
    FUN_004681b0(ppiVar6,ppuVar7);
    puVar4 = (undefined4 *)FUN_004682f0(ppiVar6,ppuVar7);
    uVar1 = local_2c[2];
    local_2c[2] = *puVar4;
    *puVar4 = uVar1;
    if (local_24 != (int *)0x0) {
      LOCK();
      piVar2 = local_24 + 1;
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*local_24)(1);
      }
    }
  }
  puVar4 = (undefined4 *)FUN_00458890();
  (**(code **)(*param_2 + 0x14))(param_2,*puVar4,&local_44,&local_40);
  if (local_40 == 0) {
    local_44 = 0;
  }
  local_8._0_1_ = 1;
  local_38 = (int *)0x0;
  (**(code **)(*param_2 + 0x10))(param_2,local_44,&local_38);
  local_8._0_1_ = 2;
  local_34 = (int *)0x0;
  (**(code **)(*local_38 + 0x1c))(local_38,400,5,0,&local_34);
  FUN_00640340();
  local_8._0_1_ = 3;
  local_28 = (int *)0x0;
  local_24 = (int *)local_2c[5];
  local_3c = in_XMM0_Da;
  puVar4 = (undefined4 *)FUN_00458890();
  piVar2 = local_30;
  (**(code **)(*local_30 + 0x3c))
            (local_30,*puVar4,param_2,400,0,5,(float)local_24 * local_3c,L"en-us",&local_28);
  FUN_00640260();
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  local_8._0_1_ = 4;
  local_24 = (int *)0x0;
  (**(code **)(*piVar2 + 0x50))(piVar2,local_28,&local_24);
  (**(code **)(*local_28 + 0x24))(local_28,&local_20,local_24);
  local_8._0_1_ = 5;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  local_24 = (int *)FUN_0044ec90();
  piVar2 = (int *)*param_3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = local_28;
  *param_3 = 0;
  puVar4 = (undefined4 *)FUN_00458890();
  iVar5 = (**(code **)(*local_30 + 0x48))
                    (local_30,*puVar4,local_24,piVar2,in_XMM1_Da,in_XMM2_Da,param_3);
  if (((-1 < iVar5) && (*param_3 != 0)) && (iVar5 = *(int *)(in_ECX + 0x1c), 0 < iVar5)) {
    do {
      FUN_0063fe90(local_24,in_EDX,param_2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_8._0_1_ = 9;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  local_8._0_1_ = 10;
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))(local_34);
  }
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))(local_38);
  }
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_2c + 1;
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*local_2c)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

