// rea decompile_all
// name: FUN_006d7d10
// address: 0x6d7d10
// body: available
// range: 0x6d7d10-0x6d7f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d7d10(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined4 **ppuVar6;
  undefined4 *local_48;
  uint uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727695;
  local_10 = ExceptionList;
  uStack_44 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_4 == 0) {
    local_48 = (undefined4 *)0x1;
    local_8 = 0;
    FUN_00673a00(&param_4,2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    local_8 = 0xffffffff;
    piVar3 = (int *)*piVar4;
    *piVar4 = (int)param_4;
    param_4 = piVar3;
    if (piVar3 != (int *)0x0) {
      LOCK();
      piVar1 = piVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        local_48 = (undefined4 *)0x1;
        (**(code **)*piVar3)();
      }
    }
    if ((int *)*piVar4 == (int *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      local_48 = (undefined4 *)0x6d7da8;
      local_1c = (undefined4 *)(**(code **)(*(int *)*piVar4 + 4))();
    }
    local_14 = local_14 & 0xffffff00;
    local_48 = param_3;
    ppuVar6 = &local_1c;
    local_8 = 1;
    local_18 = local_1c;
    FUN_006842b0(&param_4);
    piStack_2c = param_4;
    uStack_28 = 8;
    local_24 = 0;
    local_20 = 2;
    FUN_006411a0(ppuVar6);
    local_8 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
      local_48 = (undefined4 *)0x1;
      (**(code **)*local_18)();
    }
  }
  local_48 = DAT_00c7ef90;
  FUN_00684c50();
  local_34 = 0x3f800000;
  uStack_30 = 0;
  piStack_2c = (int *)0x0;
  uStack_28 = 0;
  local_24 = 0x3f800000;
  local_20 = 0;
  if (*piVar4 != 0) {
    local_48 = (undefined4 *)0x6d7e46;
    cVar5 = (**(code **)(*(int *)*param_2 + 0x30))();
    if (cVar5 == '\0') {
      local_48 = &local_34;
      (**(code **)(*(int *)*param_2 + 0x60))(piVar4);
    }
  }
  ppuVar6 = &local_48;
  FUN_0067f410(&local_48);
  FUN_006842b0(ppuVar6);
  FUN_00684c50();
  local_48 = (undefined4 *)0x6d7e87;
  cVar5 = (**(code **)(*(int *)*param_2 + 0x30))();
  if (cVar5 == '\0') {
    local_48 = (undefined4 *)0x6d7e92;
    cVar5 = FUN_00682580();
    if (cVar5 == '\0') {
      local_48 = &local_34;
      local_34 = 0x3f800000;
      uStack_30 = 0;
      piStack_2c = (int *)0x0;
      uStack_28 = 0;
      local_24 = 0x3f800000;
      local_20 = 0;
      (**(code **)(*(int *)*param_2 + 0x5c))(param_3);
    }
  }
  FUN_006842b0(&local_48);
  FUN_00684c50();
  local_48 = &local_34;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_34 = 0x3f800000;
  uStack_30 = 0;
  piStack_2c = (int *)0x0;
  uStack_28 = 0;
  local_1c = (undefined4 *)0x40000000;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  FUN_00682be0(param_3,&local_1c);
  ExceptionList = local_10;
  return;
}

