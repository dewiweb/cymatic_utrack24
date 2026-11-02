// rea decompile_all
// name: FUN_0044fc60
// address: 0x44fc60
// body: available
// range: 0x44fc60-0x44fd79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044fc60(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *_Memory;
  uint uVar5;
  undefined1 local_20 [4];
  byte local_1c;
  undefined1 local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffb48;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  iVar4 = FUN_0045d1e0(*param_1,uVar3);
  _Memory = (void *)FUN_004c554b(iVar4 + 1);
  local_8 = 0;
  if (_Memory == (void *)0x0) {
    FUN_0045d1e0(*param_1,uVar3);
  }
  else {
    FUN_0045e320(*param_1);
  }
  uVar3 = iVar4 + 2;
  if (*(code **)(*param_2 + 0x48) == FUN_006205c0) {
    iVar2 = 0;
    for (uVar5 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f); uVar5 != 0; uVar5 = uVar5 >> 8
        ) {
      local_1b[iVar2] = (char)uVar5;
      iVar2 = iVar2 + 1;
    }
    local_1c = (byte)iVar2;
    if ((int)uVar3 < 0) {
      local_1c = local_1c | 0x80;
    }
    (**(code **)(*param_2 + 0x10))(&local_1c,iVar2 + 1);
  }
  else {
    (**(code **)(*param_2 + 0x48))(uVar3);
  }
  pcVar1 = *(code **)(*param_2 + 0x14);
  if (pcVar1 == FUN_0062c8e0) {
    local_20[0] = 5;
    (**(code **)(*param_2 + 0x10))(local_20,1);
  }
  else {
    (*pcVar1)(5);
  }
  (**(code **)(*param_2 + 0x10))(_Memory,iVar4 + 1);
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

