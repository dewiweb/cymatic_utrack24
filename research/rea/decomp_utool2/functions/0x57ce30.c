// rea decompile_all
// name: FUN_0057ce30
// address: 0x57ce30
// body: available
// range: 0x57ce30-0x57cfa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057ce30(uint param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  float in_XMM3_Da;
  float fVar4;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  local_c = 0;
  local_10 = in_XMM3_Da;
  iVar2 = FUN_00465820(param_1);
  local_c = *(undefined4 *)(iVar2 + 8);
  local_8 = (float)(param_1 >> 0x18) / 255.0;
  FUN_00684c50(param_1);
  cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
  if (cVar1 == '\0') {
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      local_58 = 1.0;
      fStack_54 = 0.0;
      fStack_50 = 0.0;
      fStack_4c = 0.0;
      local_48 = 1.0;
      local_44 = 0.0;
      (**(code **)(*(int *)*in_ECX + 0x5c))();
    }
  }
  if ((char)param_2 == '\0') {
    puVar3 = (undefined4 *)FUN_006842b0(&param_2);
  }
  else {
    param_2 = DAT_00c7ebb0;
    puVar3 = &param_2;
  }
  FUN_00684c50(*puVar3);
  iVar2 = FUN_00683770(local_30);
  fVar4 = *(float *)(iVar2 + 8);
  iVar2 = FUN_00683770(local_40);
  local_20 = 0x3f800000;
  local_1c = 0;
  local_58 = (fVar4 - 1.6) / *(float *)(iVar2 + 8);
  local_18 = 0;
  local_48 = (local_10 - 1.6) / local_10;
  fStack_54 = local_58 * 0.0;
  fStack_4c = local_48 * 0.0;
  fStack_50 = local_58;
  local_44 = local_48;
  FUN_00682be0(in_EDX,&local_20,&local_58);
  return;
}

