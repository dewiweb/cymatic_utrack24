// rea decompile_all
// name: FUN_0049b870
// address: 0x49b870
// body: available
// range: 0x49b870-0x49babe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b870(undefined ***param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int *_Memory;
  float10 fVar5;
  double in_XMM0_Qa;
  uint *puStack_74;
  undefined8 uStack_70;
  undefined ***pppuStack_68;
  uint uStack_64;
  double local_54;
  uint local_48;
  int *local_44 [2];
  undefined1 local_3c [8];
  int *local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702b48;
  local_10 = ExceptionList;
  uStack_64 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 0;
  pppuStack_68 = (undefined ***)0x49b8ac;
  local_14 = uStack_64;
  FUN_0049c2c0();
  if ((*(int *)(in_ECX + 0x18) != 9) && (*(int *)(in_ECX + 0x18) != 10)) {
    if ((param_2 != '\0') && (in_XMM0_Qa < *(double *)(in_ECX + 0x58))) {
      pppuStack_68 = param_1;
      uStack_70 = (double)CONCAT44(0x49b8e0,(undefined4)uStack_70);
      FUN_0049b400();
    }
    local_54 = in_XMM0_Qa;
    if (in_XMM0_Qa <= *(double *)(in_ECX + 0x58)) {
      local_54 = *(double *)(in_ECX + 0x58);
    }
    goto LAB_0049b9a1;
  }
  if (param_2 == '\0') {
LAB_0049b935:
    bVar2 = false;
  }
  else {
    pppuStack_68 = (undefined ***)local_34;
    uStack_70 = (double)CONCAT44(0x49b90e,(undefined4)uStack_70);
    puVar3 = (undefined4 *)FUN_0063bf80();
    local_48 = 1;
    pppuStack_68 = (undefined ***)(puVar3 + 2);
    uStack_70 = (double)CONCAT44(0x49b922,(undefined4)uStack_70);
    fVar5 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))();
    local_1c = (double)fVar5;
    if (local_1c <= in_XMM0_Qa) goto LAB_0049b935;
    bVar2 = true;
  }
  if ((local_48 & 1) != 0) {
    pppuStack_68 = (undefined ***)local_2c;
    uStack_70 = (double)CONCAT44(0x49b949,(undefined4)uStack_70);
    (**(code **)(*local_34[0] + 0x54))();
  }
  if (bVar2) {
    pppuStack_68 = (undefined ***)0x0;
    uStack_70 = (double)CONCAT44(param_1,0x49b95f);
    FUN_0049b650();
  }
  pppuStack_68 = (undefined ***)local_34;
  uStack_70 = (double)CONCAT44(0x49b96b,(undefined4)uStack_70);
  puVar3 = (undefined4 *)FUN_0063bf80();
  pppuStack_68 = (undefined ***)(puVar3 + 2);
  uStack_70 = (double)CONCAT44(0x49b978,(undefined4)uStack_70);
  fVar5 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))();
  local_1c = (double)fVar5;
  local_54 = in_XMM0_Qa;
  if (in_XMM0_Qa <= local_1c) {
    local_54 = local_1c;
  }
  uStack_70 = (double)CONCAT44(local_2c,0x49b99c);
  (**(code **)(*local_34[0] + 0x54))();
LAB_0049b9a1:
  if (*(double *)(in_ECX + 0x68) != local_54) {
    *(double *)(in_ECX + 0x68) = local_54;
    local_24[0] = &PTR_vftable_00c7ed2c;
    local_8 = 0;
    pppuStack_68 = local_24;
    uStack_70 = (double)CONCAT44(0x49b9d8,(undefined4)uStack_70);
    local_1c = local_54;
    (**(code **)(**(int **)(in_ECX + 0x48) + 8))();
    local_8 = 0xffffffff;
    uStack_70 = (double)CONCAT44(&local_1c,0x49b9eb);
    (**(code **)(*local_24[0] + 0x54))();
    FUN_006e6400(&puStack_74);
    FUN_006ce9f0(1);
    if (*(int *)(in_ECX + 0x14c) != 0) {
      pppuStack_68 = (undefined ***)local_44;
      uStack_70 = (double)CONCAT44(0x49ba1b,(undefined4)uStack_70);
      puVar3 = (undefined4 *)FUN_0063bf80();
      local_8 = 1;
      pppuStack_68 = (undefined ***)(puVar3 + 2);
      uStack_70 = (double)CONCAT44(0x49ba2f,(undefined4)uStack_70);
      fVar5 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))();
      puStack_74 = &local_48;
      uStack_70 = (double)fVar5;
      local_1c = uStack_70;
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x14) + 0xc0))();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0049efb0(uVar4);
      _Memory = (int *)(local_48 - 8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_44[0] + 0x54))(local_3c);
    }
    if (param_1 != (undefined ***)0x0) {
      pppuStack_68 = param_1;
      uStack_70 = (double)CONCAT44(0x49baa1,(undefined4)uStack_70);
      FUN_0049bb60();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

