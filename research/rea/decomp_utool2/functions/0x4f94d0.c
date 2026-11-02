// rea decompile_all
// name: FUN_004f94d0
// address: 0x4f94d0
// body: available
// range: 0x4f94d0-0x4f964e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f94d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  float in_XMM0_Da;
  undefined1 auStack_7c [8];
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  undefined4 uStack_60;
  undefined4 **ppuStack_5c;
  int iStack_58;
  undefined4 local_54;
  uint uStack_50;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706720;
  local_10 = ExceptionList;
  uStack_50 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (**(char **)(in_ECX + 4) != '\0') {
    local_54 = DAT_00c8a71c;
    iStack_58 = 0x4f951d;
    FUN_00684c50();
    local_54 = 0;
    iVar2 = *(int *)*param_1;
    iStack_58 = *(int *)(in_ECX + 0x1c) + -0x10;
    ppuStack_5c = *(undefined4 ***)(in_ECX + 0x18);
    uStack_60 = 0x10;
    ppuStack_64 = (undefined4 **)0x4f9539;
    iStack_58 = FUN_00472d90();
    ppuStack_5c = (undefined4 **)0x4f9542;
    (**(code **)(iVar2 + 0x54))();
    ppuStack_5c = (undefined4 **)0x4f954f;
    FUN_0057f4a0();
    ppuStack_5c = &local_14;
    local_8 = 0;
    uStack_60 = 0x4f9569;
    FUN_00683640();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        ppuStack_5c = (undefined4 **)0x1;
        uStack_60 = 0x4f958c;
        (**(code **)*param_1)();
      }
    }
    ppuStack_5c = (undefined4 **)(in_ECX + 4);
    uStack_60 = 0x4f959b;
    FUN_006831f0();
    ppuStack_5c = (undefined4 **)0x0;
    uStack_60 = 0x10;
    iVar2 = *(int *)*param_1;
    uStack_68 = 0;
    iStack_6c = 0x4f95ba;
    ppuStack_64 = (undefined4 **)((int)in_XMM0_Da + 0x14);
    uStack_60 = FUN_00472d90();
    ppuStack_64 = (undefined4 **)0x4f95c3;
    (**(code **)(iVar2 + 0x54))();
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      ppuStack_64 = (undefined4 **)0x4f95d4;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    ppuStack_64 = &local_14;
    uStack_68 = 0x4f95df;
    (**(code **)(*(int *)*param_1 + 0x68))();
    uStack_68 = DAT_00c7ef94;
    iStack_6c = 0x4f95f0;
    FUN_00684c50();
    uStack_68 = 0x10;
    uStack_70 = 0;
    uStack_74 = 0x4f9601;
    iStack_6c = (int)in_XMM0_Da + 0x14;
    FUN_00472d90();
    uStack_68 = 1;
    iStack_6c = 0x24;
    FUN_0040e4d0(auStack_7c);
    FUN_006830c0(in_ECX + 4);
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uStack_68 = 1;
        iStack_6c = 0x4f963b;
        (**(code **)*local_14)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

