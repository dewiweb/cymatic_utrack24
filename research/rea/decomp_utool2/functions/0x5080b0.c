// rea decompile_all
// name: FUN_005080b0
// address: 0x5080b0
// body: available
// range: 0x5080b0-0x50840e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005080b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined **ppuStack_44;
  int *piStack_40;
  undefined **local_3c;
  int *piStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070812c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = FileSelector::Listener::vftable;
  in_ECX[0x1d] = PushButton::Listener::vftable;
  in_ECX[0x1e] = ExtDriveSelectorComponent::Listener::vftable;
  *in_ECX = TargetSelector::vftable;
  in_ECX[0x1c] = TargetSelector::vftable;
  in_ECX[0x1d] = TargetSelector::vftable;
  in_ECX[0x1e] = TargetSelector::vftable;
  in_ECX[0x1f] = param_4;
  param_4 = &DAT_00bfe12c;
  local_8 = 5;
  piStack_30 = (int *)&param_4;
  puStack_34 = (undefined4 *)0x508146;
  FUN_006e8b40();
  piVar5 = (int *)(param_4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (undefined4 *)0x508167;
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 8;
  FUN_004f83b0();
  local_8._0_1_ = 9;
  FUN_004f83b0();
  local_8._0_1_ = 10;
  piStack_30 = (int *)0x50819f;
  FUN_0045c990();
  piStack_30 = (int *)0x0;
  puStack_34 = in_ECX + 0x1c;
  local_8._0_1_ = 0xb;
  piStack_38 = (int *)0x1;
  local_3c = &PTR_DAT_00c7ed68;
  piStack_40 = (int *)&param_4;
  ppuStack_44 = &PTR_DAT_00c7ed68;
  puStack_48 = (undefined1 *)0x5081c9;
  FUN_005073d0();
  local_8._0_1_ = 0xd;
  piVar5 = (int *)(param_4 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_30 = (int *)0x5081ee;
      FID_conflict__free(piVar5);
    }
  }
  puStack_34 = in_ECX + 0x214;
  piStack_30 = (int *)param_5;
  piStack_38 = in_ECX + 0x1e;
  local_3c = (undefined **)0x508205;
  FUN_004f9090();
  in_ECX[0x30c] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xf);
  *(undefined1 *)(in_ECX + 0x30d) = 0;
  if (*(char *)*param_1 != '\0') {
    piStack_30 = param_1;
    puStack_34 = (undefined4 *)0x50822e;
    FUN_006e4900();
    if (in_ECX[0x47] != 0x22) {
      local_3c = (undefined **)&piStack_38;
      in_ECX[0x47] = 0x22;
      piStack_40 = (int *)0x50824c;
      FUN_006e6400();
      local_3c = (undefined **)0x1;
      piStack_40 = (undefined4 *)0x508255;
      FUN_006ce9f0();
    }
    piStack_30 = (int *)0x50825e;
    (**(code **)(in_ECX[0x20] + 0x28))();
    puStack_34 = (undefined4 *)0x508268;
    piStack_30 = in_ECX + 0x20;
    FUN_006e5050();
  }
  if (in_ECX != (undefined4 *)0xffffff8c) {
    piStack_30 = (int *)0x50827b;
    FUN_004097d0();
  }
  piStack_30 = (int *)0x50828d;
  (**(code **)(in_ECX[0x70] + 8))();
  in_ECX[0x91] = 0x10;
  uVar4 = DAT_00c8a948;
  uVar3 = DAT_00c7ef98;
  uVar2 = DAT_00c7ebb0;
  piStack_40 = (int *)&local_3c;
  in_ECX[0x76] = DAT_00c7ef94;
  in_ECX[0x77] = uVar4;
  in_ECX[0x78] = uVar2;
  in_ECX[0x79] = uVar4;
  in_ECX[0x7a] = uVar4;
  in_ECX[0x7b] = uVar3;
  ppuStack_44 = (undefined **)0x5082dd;
  FUN_006e6400();
  piStack_40 = (int *)0x1;
  ppuStack_44 = (undefined **)0x5082e6;
  FUN_006ce9f0();
  piStack_30 = (int *)0x1;
  puStack_34 = (undefined4 *)0x5082ef;
  (**(code **)(in_ECX[0x54] + 0x28))();
  puStack_34 = (undefined4 *)0xffffffff;
  local_3c = (undefined **)0x5082f9;
  piStack_38 = in_ECX + 0x54;
  FUN_006e5050();
  puStack_34 = in_ECX + 0x1d;
  if (puStack_34 != (undefined4 *)0x0) {
    piStack_38 = (int *)0x50830c;
    FUN_004097d0();
  }
  puStack_34 = (undefined4 *)param_3;
  piStack_38 = (int *)0x50831e;
  (**(code **)(in_ECX[0xbd] + 8))();
  in_ECX[0xde] = 0x11;
  uVar4 = DAT_00c8a948;
  uVar3 = DAT_00c7ef98;
  uVar2 = DAT_00c7ebb0;
  puStack_48 = (undefined1 *)&ppuStack_44;
  in_ECX[0xc3] = DAT_00c7ef94;
  in_ECX[0xc4] = uVar4;
  in_ECX[0xc5] = uVar2;
  in_ECX[0xc6] = uVar4;
  in_ECX[199] = uVar4;
  in_ECX[200] = uVar3;
  uStack_4c = 0x508374;
  FUN_006e6400();
  puStack_48 = (undefined1 *)0x1;
  uStack_4c = 0x50837d;
  FUN_006ce9f0();
  piStack_38 = (int *)0x1;
  local_3c = (undefined **)0x508386;
  (**(code **)(in_ECX[0xa1] + 0x28))();
  local_3c = (undefined **)0xffffffff;
  ppuStack_44 = (undefined **)0x508390;
  piStack_40 = in_ECX + 0xa1;
  FUN_006e5050();
  local_3c = (undefined **)0x1;
  piStack_40 = (int *)0x5083a3;
  (**(code **)(in_ECX[0x214] + 0x28))();
  piStack_40 = (int *)0xffffffff;
  puStack_48 = (undefined1 *)0x5083ad;
  ppuStack_44 = (undefined **)(in_ECX + 0x214);
  FUN_006e5050();
  piStack_40 = (int *)0xffffffff;
  ppuStack_44 = (undefined **)(in_ECX + 0xee);
  puStack_48 = (undefined1 *)0x5083bd;
  FUN_006e5050();
  if (in_ECX[0x75] != 1) {
    piStack_40 = (int *)0x5083d1;
    FUN_0063eab0();
    in_ECX[0xa0] = 0;
    in_ECX[0x75] = 1;
    FUN_006e6400(&uStack_4c);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  return;
}

