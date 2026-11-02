// rea decompile_all
// name: FUN_006de870
// address: 0x6de870
// body: available
// range: 0x6de870-0x6dea10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de870(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_4c;
  undefined8 *puStack_48;
  int **ppiStack_44;
  uint uStack_40;
  int *local_24 [2];
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00727e57;
  local_10 = ExceptionList;
  uStack_40 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppiStack_44 = local_24;
  local_8 = 0;
  puStack_48 = (undefined8 *)0x6de8ba;
  local_14 = uStack_40;
  puVar2 = (undefined4 *)FUN_0063bf80();
  ppiStack_44 = (int **)(puVar2 + 2);
  puStack_48 = (undefined8 *)0x6de8c7;
  cVar1 = (**(code **)(*(int *)*puVar2 + 0x14))();
  puStack_48 = &local_1c;
  uStack_4c = 0x6de8d6;
  (**(code **)(*local_24[0] + 0x54))();
  local_8 = 0xffffffff;
  uStack_4c = extraout_ECX;
  FUN_006e8e70(&uStack_4c,(cVar1 != '\0') + 0x1004011,0);
  FUN_00684a80();
  if (*(int *)(param_2 + 0xe0) == 2) {
    local_1c = (double)((float)*(int *)(param_2 + 0x1c) * 0.25) + 6755399441055744.0;
    iVar4 = 0x10;
    if ((int)local_1c < 0x10) {
      iVar4 = (int)local_1c;
    }
    if (0 < iVar4) {
      uStack_4c = 0x6de94e;
      FUN_00684bc0();
      uStack_4c = extraout_ECX_00;
      if (((*(byte *)(param_2 + 0x69) & 0x10) == 0) && (uStack_4c = 0, *(int *)(param_2 + 0xc) != 0)
         ) {
        uStack_4c = 0x6de960;
        FUN_006e6320();
        uStack_4c = extraout_ECX_01;
      }
      uVar3 = 0x1004010;
      puVar2 = &uStack_4c;
      if (cVar1 != '\0') {
        uVar3 = 0x1004013;
      }
      FUN_006e8e70((int)&local_1c + 4,uVar3,0);
      uVar5 = 0x6de9a8;
      FUN_00684d10(puVar2);
      uVar6 = 0x6de9af;
      FUN_00684c50();
      FUN_00472d90((*(int *)(param_2 + 0x1c) - iVar4) + -1,*(int *)(param_2 + 0x18) + -4,iVar4);
      FUN_00682290(param_2 + 0x88,0x24,1,0,uVar3,uVar5,uVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

