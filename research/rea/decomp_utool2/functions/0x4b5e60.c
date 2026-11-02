// rea decompile_all
// name: FUN_004b5e60
// address: 0x4b5e60
// body: available
// range: 0x4b5e60-0x4b5fe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5e60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *_Memory;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 in_stack_ffffff70;
  undefined4 uVar4;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined2 local_28 [4];
  undefined4 local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704028;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x78) != 0) {
    iVar3 = 0;
    local_14 = in_ECX;
    Ordinal_8(local_58,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    Ordinal_8(local_68);
    Ordinal_8(&local_48);
    uVar4 = 0x4b5eb7;
    Ordinal_8(local_28);
    if (param_2 != 0) {
      local_28[0] = 8;
      FUN_00636260(&param_2,&DAT_00c129a8,in_stack_ffffff70,uVar4);
      local_8 = 0;
      puVar2 = (undefined4 *)FUN_00458890();
      local_20 = Ordinal_2(*puVar2);
      local_8 = 0xffffffff;
      _Memory = (int *)(param_2 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
    }
    iVar1 = param_3;
    if ((param_3 != 0) && (*(int *)(param_3 + 4) != 0)) {
      iVar3 = Ordinal_411(0x11,0,*(int *)(param_3 + 4));
      if (iVar3 != 0) {
        param_2 = 0;
        Ordinal_23(iVar3,&param_2);
        if (param_2 != 0) {
          FUN_00624430(param_2,extraout_ECX,*(undefined4 *)(iVar1 + 4));
          Ordinal_24(iVar3);
          Ordinal_8(&local_38);
          local_38 = CONCAT22(local_38._2_2_,0x2011);
          local_48 = local_38;
          uStack_44 = uStack_34;
          uStack_3c = uStack_2c;
          iStack_40 = iVar3;
          iStack_30 = iVar3;
        }
      }
    }
    puVar2 = (undefined4 *)FUN_00458890();
    (**(code **)(**(int **)(local_14 + 0x78) + 0x2c))
              (*(int **)(local_14 + 0x78),*puVar2,local_58,local_68,&local_48,local_28);
    if (iVar3 != 0) {
      Ordinal_16(iVar3);
    }
    Ordinal_9(local_58);
    Ordinal_9(local_68);
    Ordinal_9(&local_48);
    Ordinal_9(local_28);
  }
  ExceptionList = local_10;
  return;
}

