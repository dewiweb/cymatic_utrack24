// rea decompile_all
// name: FUN_00644f50
// address: 0x644f50
// body: available
// range: 0x644f50-0x645129 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644f50(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int *in_ECX;
  int in_EDX;
  int *piVar6;
  int local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined1 local_23 [4];
  undefined3 uStack_1f;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0072002a;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  iVar2 = in_ECX[2];
  if (iVar2 == 0) {
    if (param_2 == (undefined4 *)0x0) {
      local_23 = (undefined1  [4])0xff000000;
      local_18 = (undefined4 *)local_23;
      local_14 = 2;
    }
    else {
      local_14 = 1;
      local_23[3] = (undefined1)*param_2;
      uStack_1f = (undefined3)((uint)*param_2 >> 8);
      local_18 = (undefined4 *)(local_23 + 3);
    }
    local_1c = in_EDX;
    if (param_1 == (int *)0x0) {
      local_28 = in_ECX;
      operator_new(0x28);
      local_30 = (int *)FUN_00468990();
      if (local_30 != (int *)0x0) {
        LOCK();
        local_30[1] = local_30[1] + 1;
        UNLOCK();
      }
      bVar4 = false;
      bVar3 = true;
      piVar6 = local_28;
      in_ECX = local_30;
    }
    else {
      local_30 = (int *)*param_1;
      if (local_30 != (int *)0x0) {
        LOCK();
        local_30[1] = local_30[1] + 1;
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = false;
      piVar6 = local_30;
    }
    local_38 = 0;
    local_34 = 0;
    if (0 < local_1c) {
      local_34 = local_1c;
    }
    local_2c = *local_18;
    if (local_30 != (int *)0x0) {
      LOCK();
      local_30[1] = local_30[1] + 1;
      UNLOCK();
    }
    FUN_0046e860(&local_38);
    if (local_30 != (int *)0x0) {
      LOCK();
      piVar1 = local_30 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_30)(1,uVar5);
      }
    }
    if ((bVar3) && (in_ECX != (int *)0x0)) {
      LOCK();
      piVar1 = in_ECX + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*in_ECX)(1);
      }
    }
    if ((bVar4) && (piVar6 != (int *)0x0)) {
      LOCK();
      piVar1 = piVar6 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*piVar6)(1);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else {
    local_38 = *(int *)(*in_ECX + -0xc + iVar2 * 0x10);
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)(iVar2 * 0x10 + *in_ECX + -4);
    }
    if (param_1 == (int *)0x0) {
      param_1 = (int *)(iVar2 * 0x10 + *in_ECX + -8);
    }
    local_2c = *param_2;
    local_34 = local_38;
    if (local_38 < local_38 + in_EDX) {
      local_34 = local_38 + in_EDX;
    }
    local_30 = (int *)*param_1;
    if (local_30 != (undefined4 *)0x0) {
      LOCK();
      local_30[1] = local_30[1] + 1;
      UNLOCK();
    }
    FUN_0046e860(&local_38);
    if (local_30 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_30 + 1;
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_30)(1);
      }
    }
    FUN_00645130();
  }
  ExceptionList = local_10;
  return;
}

