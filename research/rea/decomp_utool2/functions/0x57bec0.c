// rea decompile_all
// name: FUN_0057bec0
// address: 0x57bec0
// body: available
// range: 0x57bec0-0x57c143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057bec0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,char param_8)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00712255;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_60 = (void *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_44 = 1;
  local_8 = 0;
  if (param_5 == 0) {
    fVar3 = (float)param_4 * 0.7;
    fVar2 = (float)param_3 * 0.9;
  }
  else {
    if (param_5 == 1) {
      fVar2 = (float)param_3 * 0.3;
    }
    else {
      if (param_5 == 2) {
        fVar3 = (float)param_4 * 0.3;
        fVar2 = (float)param_3 * 0.9;
        goto LAB_0057c048;
      }
      if (param_5 != 3) goto LAB_0057c050;
      fVar2 = (float)param_3 * 0.7;
    }
    fVar3 = (float)param_4 * 0.1;
  }
LAB_0057c048:
  FUN_006824f0(fVar3,fVar2);
LAB_0057c050:
  puVar4 = &stack0xffffff94;
  if (param_8 == '\0') {
    FUN_006e8e70(&stack0xffffff94,0x1000400,0);
  }
  else {
    FUN_006e8e70(&param_8,0x1000400,0);
    FUN_00680c60(puVar4);
  }
  FUN_00684c50();
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar1 == '\0') {
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      local_28 = 0x3f800000;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_18 = 0x3f800000;
      local_14 = 0;
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_60);
    }
  }
  FUN_00684c50();
  local_30 = 0x3f800000;
  local_2c = 0;
  uStack_1c = 0x3f000000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00682be0(&local_60,&uStack_1c);
  FID_conflict__free(local_60);
  ExceptionList = local_10;
  return;
}

