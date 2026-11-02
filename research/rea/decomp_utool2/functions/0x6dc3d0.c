// rea decompile_all
// name: FUN_006dc3d0
// address: 0x6dc3d0
// body: available
// range: 0x6dc3d0-0x6dc4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dc3d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 **ppuStack_2c;
  uint uStack_28;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727be8;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppuStack_2c = &local_18;
  uStack_30 = 0x6dc403;
  FUN_006dc390();
  ppuStack_2c = &local_14;
  local_8 = 0;
  uStack_30 = 0x6dc415;
  uVar3 = FUN_00680580();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ppuStack_2c = (undefined4 **)0x6dc42f;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uStack_30 = 0x6dc437;
  ppuStack_2c = (undefined4 **)uVar3;
  (**(code **)(*(int *)*param_1 + 0x68))();
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uStack_30 = 1;
      (**(code **)*local_14)();
    }
  }
  local_8 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uStack_30 = 1;
      (**(code **)*local_18)();
    }
  }
  puVar4 = &uStack_30;
  uVar3 = 0x6dc488;
  FUN_006ab460(&uStack_30,0x1000601);
  uVar5 = 0x6dc48f;
  FUN_00684c50();
  FUN_00472d90(*(undefined4 *)(param_2 + 4),*(int *)(param_2 + 8) + -0x10,
               (int)((float)*(int *)(param_2 + 0xc) * 0.8));
  FUN_00682290(param_3,0x11,1,0,uVar3,puVar4,uVar5);
  ExceptionList = local_10;
  return;
}

