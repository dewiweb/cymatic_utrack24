// rea decompile_all
// name: FUN_006a8f60
// address: 0x6a8f60
// body: available
// range: 0x6a8f60-0x6a9103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a8f60(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int local_24;
  
  iVar6 = param_4;
  if ((*(byte *)(param_4 + 0x69) & 0x10) != 0) {
    return;
  }
  iVar5 = 0;
  iVar1 = DAT_00c8a678;
  if (*(int *)(param_4 + 0xc) != 0) {
    local_24 = 0x6a8f84;
    cVar3 = FUN_006e6320();
    iVar1 = DAT_00c8a678;
    iVar5 = extraout_EDX;
    if (cVar3 == '\0') {
      return;
    }
  }
  for (; iVar1 != iVar6; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (iVar1 == 0) goto LAB_006a8faf;
  }
  if (*(char *)(iVar6 + 0x94) == '\0') {
    if (iVar5 != 0) {
      local_24 = 0x6a9063;
      cVar3 = FUN_006e6320();
      if (cVar3 == '\0') goto LAB_006a8faf;
    }
    puStack_30 = &local_24;
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = 0x1000206;
    FUN_006e8e70();
    puVar2 = param_1;
    puStack_28 = (undefined4 *)0x6a9087;
    FUN_00684c50();
    iVar6 = param_3;
    local_24 = param_3;
    puStack_28 = (undefined4 *)param_2;
    uStack_2c = 0;
    puStack_30 = (undefined4 *)0x6a909a;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_30);
    FUN_00677150();
    if (*(char *)(puVar2 + 2) != '\0') {
      *(undefined1 *)(puVar2 + 2) = 0;
      local_24 = 0x6a90c1;
      (**(code **)(*(int *)*puVar2 + 0x34))();
    }
    local_24 = 0x3f800000;
    puStack_28 = (undefined4 *)0x6a90d0;
    (**(code **)(*(int *)*puVar2 + 0x48))();
    puStack_28 = &param_1;
    uStack_2c = 0;
    puStack_30 = (undefined4 *)0x1000207;
    FUN_006e8e70(&param_3);
    uStack_2c = 0x6a90f5;
    FUN_00684d10();
    puStack_30 = &param_1;
    uVar7 = 4;
    uVar4 = extraout_ECX_00;
  }
  else {
LAB_006a8faf:
    puStack_30 = &local_24;
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = 0x1000205;
    FUN_006e8e70();
    puVar2 = param_1;
    puStack_28 = (undefined4 *)0x6a8fcb;
    FUN_00684c50();
    iVar6 = param_3;
    local_24 = param_3;
    puStack_28 = (undefined4 *)param_2;
    uStack_2c = 0;
    puStack_30 = (undefined4 *)0x6a8fde;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_30);
    FUN_00677150();
    if (*(char *)(puVar2 + 2) != '\0') {
      *(undefined1 *)(puVar2 + 2) = 0;
      local_24 = 0x6a9005;
      (**(code **)(*(int *)*puVar2 + 0x34))();
    }
    local_24 = 0x3f800000;
    puStack_28 = (undefined4 *)0x6a9014;
    (**(code **)(*(int *)*puVar2 + 0x48))();
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = 0x1000207;
    puStack_30 = &param_4;
    FUN_006e8e70();
    puStack_30 = &param_4;
    uVar7 = 3;
    uVar4 = extraout_ECX;
  }
  FUN_006e4430(uVar4,param_2,iVar6 + 2,uVar7,puStack_30);
  return;
}

