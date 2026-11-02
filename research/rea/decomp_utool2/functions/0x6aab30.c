// rea decompile_all
// name: FUN_006aab30
// address: 0x6aab30
// body: available
// range: 0x6aab30-0x6aad49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aab30(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6,char param_7,char param_8,undefined4 param_9,undefined1 *param_10)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_74;
  void **ppvStack_70;
  undefined4 *puStack_6c;
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007234c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_5 * 0.7;
  puStack_6c = (undefined4 *)param_10;
  ppvStack_70 = (void **)param_9;
  ppuVar1 = &puStack_74;
  puStack_74 = param_10;
  FUN_006e8e70(&param_9,0x1000100,0);
  FUN_00684d10(ppuVar1);
  FUN_006ab370();
  puStack_6c = (undefined4 *)0x6aac1b;
  FUN_006a64a0();
  if (param_7 != '\0') {
    local_58 = (void *)0x0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_3c = 1;
    local_8 = 0;
    FUN_00682e50();
    FUN_00682d90();
    FUN_00682d90();
    puStack_74 = &stack0xffffff98;
    puStack_6c = (undefined4 *)0x0;
    ppvStack_70 = (void **)((param_8 == '\0') + 0x1006502);
    FUN_006e8e70();
    puStack_6c = (undefined4 *)0x6aacb3;
    FUN_00684c50();
    local_38 = param_5 / 9.0;
    puStack_6c = &local_20;
    ppvStack_70 = &local_58;
    local_34 = 0;
    local_2c = 0;
    local_20 = 0x40200000;
    local_1c = 0;
    local_18 = 0;
    local_28 = param_6 / 9.0;
    local_30 = param_3 + 0.0;
    local_24 = param_4 + 0.0;
    puStack_74 = (undefined1 *)0x6aad2c;
    FUN_00682be0();
    puStack_6c = (undefined4 *)0x6aad34;
    FID_conflict__free(local_58);
  }
  ExceptionList = local_10;
  return;
}

