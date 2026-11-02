// rea decompile_all
// name: FUN_006a6860
// address: 0x6a6860
// body: available
// range: 0x6a6860-0x6a6a52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a6860(undefined4 param_1,float param_2,float param_3,float param_4,undefined4 *param_5,
                 float param_6)

{
  float fVar1;
  undefined4 uStack_90;
  void **local_8c;
  void *local_64;
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0072311b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_6 * 1.1 < param_2) && (param_6 * 1.1 < param_3)) {
    param_2 = param_2 * 0.5;
    fVar1 = param_3 * 0.5;
    if (param_4 <= param_2) {
      if (param_4 <= fVar1) {
        fVar1 = param_4;
      }
    }
    else if (param_2 <= fVar1) {
      fVar1 = param_2;
    }
    local_8c = (void **)0x0;
    uStack_90 = 0;
    local_58 = (void *)0x0;
    local_54 = 0;
    local_50 = 0;
    local_3c = 1;
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    FUN_00680ef0(param_3,fVar1,fVar1);
    local_8c = (void **)0x0;
    FUN_00680d30(&uStack_90,0x70000ff);
    FUN_006840c0(*param_5);
    local_8c = (void **)&stack0xffffff7c;
    uStack_90 = 0x6a698d;
    FUN_00680d30();
    FUN_0067edd0();
    local_8c = (void **)&stack0xffffff7c;
    uStack_90 = 0x6a69b1;
    FUN_00680d30();
    FUN_0067edd0();
    FUN_00683ff0();
    FUN_006839e0();
    FUN_00684c50();
    local_38 = 0x3f800000;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = 0x3f800000;
    local_24 = 0;
    local_20 = param_6;
    local_8c = &local_58;
    local_1c = 0;
    local_18 = 0;
    uStack_90 = 0x6a6a2e;
    FUN_00682be0();
    FID_conflict__free(local_64);
    local_8c = (void **)0x6a6a3e;
    FID_conflict__free(local_58);
  }
  ExceptionList = local_10;
  return;
}

