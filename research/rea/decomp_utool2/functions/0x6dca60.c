// rea decompile_all
// name: FUN_006dca60
// address: 0x6dca60
// body: available
// range: 0x6dca60-0x6dcc23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dca60(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00727c4e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_68 = (void *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_4c = 1;
  local_8 = 0;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  local_20 = *param_3;
  uVar6 = 0x40a00000;
  local_1c = param_3[1];
  uVar2 = FUN_0046f9b0(local_30,&local_20);
  uVar3 = FUN_0046fb70(&uStack_40);
  FUN_0067b450(uVar3,uVar2,uVar4,uVar5,uVar6);
  FUN_006e8e70(&stack0xffffff8c,0x1000af0,0);
  FUN_00684c50();
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    local_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_38 = 0x3f800000;
    local_34 = 0;
    (**(code **)(*(int *)*param_1 + 0x5c))(&local_68);
  }
  FUN_006e8e70(&stack0xffffff8c,0x1000af1,0);
  FUN_00684c50();
  local_38 = 0x3f800000;
  local_34 = 0;
  local_1c = 0x3f800000;
  local_48 = 0x3f800000;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00682be0(&local_68,&local_1c);
  FID_conflict__free(local_68);
  ExceptionList = local_10;
  return;
}

