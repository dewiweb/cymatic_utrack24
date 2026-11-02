// rea decompile_all
// name: FUN_006a5060
// address: 0x6a5060
// body: available
// range: 0x6a5060-0x6a542d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a5060(undefined4 *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6,char param_7)

{
  char cVar1;
  void *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  void *local_58;
  int local_54;
  int local_50;
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
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072307d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
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
  FUN_0067c020(0x40000000,0x3f800000);
  FUN_00682d90();
  FUN_0067c020(0x401ccccd,0x40c00000);
  FUN_00682d90();
  FUN_0067c020(0x41000000,0x40a00000);
  FUN_00682d90();
  FUN_0067c020(0x40f1999a,0);
  if ((local_50 != 0) && (*(float *)((int)local_58 + local_50 * 4 + -4) != 100005.0)) {
    if (local_54 < local_50 + 1) {
      FUN_00409cf0();
    }
    *(undefined4 *)((int)local_58 + local_50 * 4) = 0x47c35280;
    local_50 = local_50 + 1;
  }
  FUN_006842b0();
  FUN_00684c50();
  local_38 = param_5 / 9.0;
  local_34 = 0;
  local_2c = 0;
  local_28 = param_6 / 9.0;
  local_30 = param_3 + 0.0;
  local_24 = param_4 + 0.0;
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))(&local_58);
  }
  FUN_006842b0(&stack0xffffff78);
  FUN_00684c50();
  local_20 = 0x3f666666;
  local_1c = 0;
  local_18 = 0;
  FUN_00682be0(&local_58,&local_20);
  if (param_7 != '\0') {
    local_78 = (void *)0x0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    local_5c = 1;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00682e50();
    FUN_00682d90();
    FUN_00682d90();
    FUN_00684c50();
    local_20 = 0x40200000;
    local_1c = 0;
    local_18 = 0;
    FUN_00682be0(&local_78,&local_20);
    FID_conflict__free(local_78);
  }
  FID_conflict__free(local_58);
  ExceptionList = local_10;
  return;
}

