// rea decompile_all
// name: FUN_00534ba0
// address: 0x534ba0
// body: available
// range: 0x534ba0-0x534cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00534ba0(undefined4 *param_1)

{
  int in_ECX;
  float in_XMM0_Da;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  local_28 = DAT_00c7eba8;
  uStack_2c = 0x534bbf;
  FUN_00684c50();
  local_28 = in_ECX + 0x78;
  uStack_2c = 0x534bcb;
  FUN_006831f0();
  local_28 = 0x534bd0;
  FUN_004363b0();
  local_38 = 20.0;
  uStack_3c = 0x534bfb;
  FUN_00472db0();
  local_38 = 7.649628e-39;
  FUN_00684310();
  local_38 = (float)(*(int *)(in_ECX + 0x1c) + -0x10);
  uStack_3c = 0x534c3d;
  FUN_00472db0();
  local_38 = 7.64972e-39;
  FUN_00684310();
  local_28 = DAT_00c7ef94;
  uStack_2c = 0x534c60;
  FUN_00684c50();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    local_28 = 0x534c71;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  local_28 = in_ECX + 0x7c;
  uStack_2c = 0x534c7c;
  (**(code **)(*(int *)*param_1 + 0x68))();
  uStack_2c = 0x10;
  iStack_30 = (int)(float)(int)in_XMM0_Da;
  uStack_34 = 0;
  local_38 = 7.649824e-39;
  FUN_00472d90();
  uStack_2c = 1;
  iStack_30 = 0x21;
  FUN_0040e4d0(auStack_40);
  FUN_006830c0(in_ECX + 0x78);
  return;
}

