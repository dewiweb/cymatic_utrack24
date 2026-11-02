// rea decompile_all
// name: FUN_00537c60
// address: 0x537c60
// body: available
// range: 0x537c60-0x537d55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00537c60(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  float in_XMM0_Da;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  local_8 = in_ECX;
  if (**(char **)(in_ECX + 0x9c) != '\0') {
    local_10 = *(undefined4 *)(in_ECX + 0x1c);
    puStack_30 = &local_1c;
    iStack_2c = 1;
    local_1c = 0;
    local_18 = 0;
    iStack_34 = 0x537cac;
    local_14 = iVar1;
    local_c = iVar1;
    iVar1 = FUN_0057f1c0();
    iVar1 = iVar1 + -4;
  }
  local_c = iVar1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    iStack_2c = 0x537cc6;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  iStack_2c = in_ECX + 0xa0;
  puStack_30 = (undefined4 *)0x537cd4;
  (**(code **)(*(int *)*param_1 + 0x68))();
  puStack_30 = (undefined4 *)DAT_00c7ebbc;
  iStack_34 = 0x537ce5;
  FUN_00684c50();
  puStack_30 = *(undefined4 **)(local_8 + 0x1c);
  uStack_38 = 0;
  iStack_3c = 0x537cf8;
  iStack_34 = iVar1;
  FUN_00472d90();
  puStack_30 = (undefined4 *)0x1;
  iStack_34 = 0x21;
  FUN_0040e4d0(auStack_44);
  iVar1 = local_8 + 0x78;
  FUN_006830c0(iVar1);
  iStack_34 = 0x537d25;
  puStack_30 = (undefined4 *)iVar1;
  FUN_006831f0();
  puStack_30 = (undefined4 *)0x537d2a;
  FUN_004363b0();
  puStack_30 = *(undefined4 **)(local_8 + 0x1c);
  iStack_3c = (int)in_XMM0_Da + 4;
  iStack_34 = local_c - iStack_3c;
  uStack_38 = 0;
  uStack_40 = 0x537d4a;
  FUN_0057e5a0();
  return;
}

