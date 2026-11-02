// rea decompile_all
// name: FUN_006b45f0
// address: 0x6b45f0
// body: available
// range: 0x6b45f0-0x6b47bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b45f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  int local_24;
  undefined8 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723c7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x88) != 0) {
    iVar3 = (int)&local_1c + 4;
    local_14 = in_ECX;
    (**(code **)(*(int *)*param_1 + 0x6c))(iVar3,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    uVar2 = FUN_00683640(iVar3);
    local_8 = 0;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    uVar8 = 0x6b466c;
    (**(code **)(*(int *)*param_1 + 0x68))(uVar2);
    local_8 = 0xffffffff;
    if (local_1c._4_4_ != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_1c._4_4_ + 1;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar8 = 1;
        (**(code **)*local_1c._4_4_)(1);
      }
    }
    iVar3 = *(int *)(in_ECX + 0x88);
    if (iVar3 == 0) {
      iVar4 = 0;
      iVar3 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
    }
    local_1c._0_4_ = SUB84((double)((float)*(int *)(in_ECX + 0x18) * 0.97) + 6755399441055744.0,0);
    dVar7 = (double)(int)local_1c / (double)iVar4;
    dVar6 = (double)(*(int *)(in_ECX + 0x1c) + -0x34) / (double)iVar3;
    if (1.0 <= dVar7) {
      if (1.0 <= dVar6) {
        dVar6 = 1.0;
      }
    }
    else if (dVar7 <= dVar6) {
      dVar6 = dVar7;
    }
    local_1c = (double)iVar3 * dVar6 + 6755399441055744.0;
    iVar3 = (int)local_1c;
    uVar2 = 0x124;
    local_24 = SUB84((double)iVar4 * dVar6 + 6755399441055744.0,0);
    iVar5 = (*(int *)(in_ECX + 0x1c) - ((int)local_1c + 0x38)) / 2;
    iVar4 = (int)local_1c;
    FUN_00676a00(local_14 + 0x88,(*(int *)(local_14 + 0x18) - local_24) / 2,iVar5,local_24,
                 (int)local_1c,0x124,uVar8);
    FUN_00472d90(iVar3 + 4 + iVar5,*(undefined4 *)(local_14 + 0x18),100);
    FUN_00682290(local_14 + 0x8c,0xc,4,extraout_EDX,local_24,iVar4,uVar2,uVar8);
  }
  ExceptionList = local_10;
  return;
}

