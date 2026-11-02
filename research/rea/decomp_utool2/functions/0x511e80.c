// rea decompile_all
// name: FUN_00511e80
// address: 0x511e80
// body: available
// range: 0x511e80-0x511fc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00511e80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *_Memory;
  int iVar5;
  char *pcVar6;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708ccb;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00684c50(DAT_00c7ef90);
  iVar1 = *(int *)*param_1;
  uVar4 = FUN_00472d90((*(int *)(in_ECX + 0x1c) + -10) / 2,*(undefined4 *)(in_ECX + 0x7c),10,0,uVar3
                      );
  (**(code **)(iVar1 + 0x54))(uVar4);
  pcVar6 = "colOrange";
  FUN_0045c990("colOrange");
  local_8 = 0;
  FUN_0057f430();
  FUN_00684c50(pcVar6);
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  iVar1 = *(int *)(in_ECX + 0x18);
  iVar5 = *(int *)(in_ECX + 0x98) / 2 + *(int *)(in_ECX + 0x90);
  iVar2 = *(int *)*param_1;
  if (iVar5 < iVar1 / 2) {
    iVar5 = iVar1 / 2 - iVar5;
  }
  else {
    iVar5 = iVar5 - iVar1 / 2;
  }
  uVar4 = FUN_00472d90((*(int *)(in_ECX + 0x1c) + -10) / 2,iVar5,10,0);
  (**(code **)(iVar2 + 0x54))(uVar4);
  ExceptionList = local_10;
  return;
}

