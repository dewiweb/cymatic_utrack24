// rea decompile_all
// name: FUN_0057cc20
// address: 0x57cc20
// body: available
// range: 0x57cc20-0x57ce27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057cc20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  void *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712382;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_2;
  local_14 = uVar3;
  FUN_006d79e0(&local_7c);
  local_8 = 0;
  puVar4 = (undefined4 *)FUN_0063bf80(&local_24);
  cVar2 = (**(code **)(*(int *)*puVar4 + 0x14))(puVar4 + 2,uVar3);
  (**(code **)(*local_24 + 0x54))(&uStack_1c);
  local_8 = 0xffffffff;
  puVar4 = &DAT_00c7ebb0;
  if (cVar2 == '\0') {
    puVar4 = &DAT_00c7ef7c;
  }
  FUN_00684c50(*puVar4);
  local_24 = local_7c;
  uStack_20 = uStack_78;
  uStack_1c = uStack_74;
  uStack_18 = uStack_70;
  (**(code **)(*(int *)*param_2 + 0x54))(&local_24,0);
  FUN_00684c50(DAT_00c7ef90);
  local_24 = local_7c;
  uStack_20 = uStack_78;
  uStack_1c = uStack_74;
  uStack_18 = uStack_70;
  FUN_00418d70(&local_38,1);
  (**(code **)(*(int *)*param_2 + 0x54))(&local_38,0);
  puVar4 = &DAT_00c7ef94;
  if (cVar2 == '\0') {
    puVar4 = &DAT_00c7ef90;
  }
  pfVar5 = &local_38;
  uVar1 = *puVar4;
  FUN_006d79a0(&local_24);
  FUN_0040e4d0(pfVar5);
  local_54 = (void *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 9;
  local_8 = 1;
  FUN_0057ca80(param_1,uVar1,&local_54);
  puVar4 = local_3c;
  local_64 = local_38 + 0.0;
  local_58 = local_34 + 0.0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x3f800000;
  if (*(char *)(local_3c + 2) != '\0') {
    *(undefined1 *)(local_3c + 2) = 0;
    (**(code **)(*(int *)*local_3c + 0x34))();
  }
  (**(code **)(*(int *)*puVar4 + 0xc))(&local_6c);
  uStack_1c = local_30;
  local_24 = (int *)0x0;
  uStack_20 = 0;
  uStack_18 = local_2c;
  FUN_00684760(puVar4,&local_24);
  FUN_00471a50();
  FID_conflict__free(local_54);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

