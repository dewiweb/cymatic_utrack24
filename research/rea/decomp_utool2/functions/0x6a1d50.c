// rea decompile_all
// name: FUN_006a1d50
// address: 0x6a1d50
// body: available
// range: 0x6a1d50-0x6a1ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a1d50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4,
                 undefined1 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined1 local_38 [40];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722d46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_58 = (void *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 1;
  local_8 = 0;
  uVar3 = 0x3f000000;
  if (param_4 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f000000;
    uVar3 = 0;
  }
  FUN_006824f0(uVar3,uVar4);
  puVar5 = &stack0xffffff9c;
  FUN_00680c60(&param_5);
  FUN_006842b0(puVar5);
  FUN_00684c50();
  iVar2 = FUN_00418cd0();
  FUN_0067fe30(local_38,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),1);
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))(&local_58);
  }
  FID_conflict__free(local_58);
  ExceptionList = local_10;
  return;
}

