// rea decompile_all
// name: FUN_0051d380
// address: 0x51d380
// body: available
// range: 0x51d380-0x51d553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *piVar7;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070a0a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puStack_2c = (undefined4 *)param_1;
  uStack_30 = 0x51d3bc;
  FUN_0051a1c0();
  puVar1 = in_ECX + 0x9f;
  *puVar1 = PushButton::Listener::vftable;
  in_ECX[0xa0] = param_2;
  in_ECX[0xa1] = param_3;
  *in_ECX = ProjectExplorerItem_Playlist::TVIPlaylist::vftable;
  in_ECX[0x1c] = ProjectExplorerItem_Playlist::TVIPlaylist::vftable;
  in_ECX[0x1d] = ProjectExplorerItem_Playlist::TVIPlaylist::vftable;
  in_ECX[0x24] = ProjectExplorerItem_Playlist::TVIPlaylist::vftable;
  in_ECX[0x26] = ProjectExplorerItem_Playlist::TVIPlaylist::vftable;
  *puVar1 = ProjectExplorerItem_Playlist::TVIPlaylist::vftable;
  in_ECX[0xa2] = param_4;
  if (param_4 != (undefined4 *)0x0) {
    LOCK();
    param_4[1] = param_4[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  FUN_004f83b0();
  local_8._0_1_ = 4;
  *(undefined1 *)(in_ECX + 0xf0) = 0;
  uVar5 = DAT_00c7ef98;
  puStack_2c = (undefined4 *)0x51d44f;
  FUN_006841a0();
  uVar6 = DAT_00c8a948;
  uVar4 = DAT_00c7ef94;
  uVar3 = DAT_00c7ebb0;
  in_ECX[0xc5] = DAT_00c7ebb0;
  in_ECX[0xc6] = uVar6;
  in_ECX[199] = uVar3;
  in_ECX[200] = uVar4;
  in_ECX[0xc9] = param_1;
  in_ECX[0xca] = uVar5;
  FUN_006e6400(auStack_34);
  FUN_006ce9f0(1);
  puStack_2c = (undefined4 *)0x51d4b4;
  FUN_0045c990();
  local_8._0_1_ = 5;
  puStack_2c = &param_1;
  uStack_30 = 0x51d4cf;
  FUN_004f8290();
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar7 = (int *)(param_1 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      puStack_2c = (undefined4 *)0x51d4f5;
      FID_conflict__free(piVar7);
    }
  }
  puStack_2c = in_ECX + 0xa3;
  uStack_30 = 0x51d508;
  FUN_006e5050();
  FUN_0051d000();
  uStack_30 = 0x51d519;
  FUN_006dfe90();
  if (puVar1 != (undefined4 *)0x0) {
    puStack_2c = (undefined4 *)0x51d529;
    FUN_004097d0();
  }
  if (param_4 != (undefined4 *)0x0) {
    LOCK();
    piVar7 = param_4 + 1;
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puStack_2c = (undefined4 *)0x51d53e;
      (**(code **)*param_4)();
    }
  }
  ExceptionList = local_10;
  return;
}

