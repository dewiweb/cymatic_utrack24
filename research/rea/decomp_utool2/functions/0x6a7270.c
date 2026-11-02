// rea decompile_all
// name: FUN_006a7270
// address: 0x6a7270
// body: available
// range: 0x6a7270-0x6a73ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a7270(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_64 [16];
  undefined1 local_54 [32];
  undefined4 local_34;
  void *pvStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007231d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00684a80(DAT_00c7ef94);
  FUN_006e6400(&local_24);
  FUN_0040dd60(&local_34,iStack_18 / 2);
  uVar2 = FUN_006840c0(0xffe8ebf9,0xfff6f8f9,0,(float)(iStack_18 + iStack_20),0);
  local_8 = 0;
  FUN_00683ff0(uVar2);
  local_8 = 0xffffffff;
  FID_conflict__free(pvStack_30);
  local_34 = local_24;
  pvStack_30 = (void *)iStack_20;
  uStack_2c = uStack_1c;
  iStack_28 = iStack_18;
  (**(code **)(*(int *)*param_1 + 0x54))(&local_34,0);
  FUN_00684c50(0x33000000);
  FUN_00418d70(&local_34,1);
  (**(code **)(*(int *)*param_1 + 0x54))(&local_34,0);
  iVar5 = 0;
  iVar3 = *(int *)(param_2 + 0x80) + -1;
  if (-1 < iVar3) {
    piVar4 = (int *)(*(int *)(param_2 + 0x78) + iVar3 * 4);
    iVar6 = iVar5;
    do {
      iVar1 = *piVar4;
      piVar4 = piVar4 + -1;
      iVar5 = iVar6 + 1;
      if ((*(byte *)(iVar1 + 8) & 1) == 0) {
        iVar5 = iVar6;
      }
      iVar3 = iVar3 + -1;
      iVar6 = iVar5;
    } while (-1 < iVar3);
  }
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    uVar2 = 1;
    puVar7 = local_54;
    FUN_006d7870(local_64,iVar5);
    FUN_0040dcd0(puVar7,uVar2);
    (**(code **)(*(int *)*param_1 + 0x54))(local_54,0);
  }
  ExceptionList = local_10;
  return;
}

