// rea decompile_all
// name: FUN_00676e90
// address: 0x676e90
// body: available
// range: 0x676e90-0x677014 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676e90(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  float in_XMM1_Da;
  undefined4 local_84;
  void **local_80;
  void **local_7c;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float afStack_24 [4];
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007207d3;
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
  if (param_3 == param_4) {
    local_14 = in_XMM1_Da * 0.5;
    FUN_0040ef50(&local_84);
    FUN_0067bc00();
    FUN_0046fb70(&local_84);
    FUN_0067bc00();
    local_4c = 0;
    cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00682580();
      if (cVar1 == '\0') {
        local_30 = 0x3f800000;
        uStack_2c = 0;
        uStack_28 = 0;
        afStack_24[0] = 0.0;
        afStack_24[1] = 1.0;
        afStack_24[2] = 0.0;
        local_7c = &local_68;
        local_80 = (void **)0x676f81;
        (**(code **)(*(int *)*in_ECX + 0x5c))();
      }
    }
  }
  else {
    local_84 = param_1;
    local_80 = (void **)param_2;
    local_7c = (void **)param_3;
    local_14 = in_XMM1_Da;
    FUN_0067bc00();
    local_7c = (void **)afStack_24;
    local_38 = 0x3f800000;
    local_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_80 = &local_68;
    local_34 = 0;
    afStack_24[0] = local_14;
    afStack_24[1] = 0.0;
    afStack_24[2] = 0.0;
    local_84 = 0x676ff8;
    FUN_00682be0();
  }
  local_7c = (void **)0x677000;
  FID_conflict__free(local_68);
  ExceptionList = local_10;
  return;
}

