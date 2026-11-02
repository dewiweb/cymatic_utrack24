// rea decompile_all
// name: FUN_0045a160
// address: 0x45a160
// body: available
// range: 0x45a160-0x45a323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a160(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined1 param_5,
                 char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_54 [4];
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44 [5];
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007007a6;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = CONCAT31(local_48._1_3_,param_5);
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*in_ECX + 0x24))(param_1,param_2,param_3,param_4,local_48,param_6,local_14);
  }
  else {
    local_4c = in_ECX;
    uVar2 = FUN_0044e940(local_54);
    local_8 = 0;
    FUN_0045d8f0(uVar2);
    local_8 = 1;
    if ((local_50 != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 2;
    if (param_6 == '\0') {
      uVar2 = FUN_0045ae00(local_44);
    }
    else {
      uVar2 = FUN_0045ade0(local_44);
    }
    FUN_0045ba20(uVar2);
    if (0xf < local_30) {
      FUN_0045b830(local_44[0],local_30 + 1);
    }
    if ((*(int *)(param_4 + 0x24) < 0) ||
       (((*(int *)(param_4 + 0x24) < 1 && (*(int *)(param_4 + 0x20) == 0)) ||
        (*(uint *)(param_4 + 0x20) <= local_1c)))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(uint *)(param_4 + 0x20) - local_1c;
    }
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar3 = (undefined4 *)FUN_0045ae70(local_4c,local_54,param_2,param_3,local_48,iVar5);
      iVar5 = 0;
      param_2 = *puVar3;
      param_3 = (int *)puVar3[1];
    }
    ppppuVar4 = local_2c;
    if (0xf < local_18) {
      ppppuVar4 = (undefined4 ****)local_2c[0];
    }
    local_50 = param_3;
    puVar3 = (undefined4 *)FUN_0045aef0(local_4c,local_54,param_2,param_3,ppppuVar4,local_1c);
    uVar2 = *puVar3;
    uVar1 = puVar3[1];
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    FUN_0045ae70(local_4c,param_1,uVar2,uVar1,local_48,iVar5);
    if (0xf < local_18) {
      FUN_0045b830(local_2c[0],local_18 + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

