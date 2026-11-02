// rea decompile_all
// name: FUN_0062e2d0
// address: 0x62e2d0
// body: available
// range: 0x62e2d0-0x62e3da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062e2d0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  int *_Memory;
  uint uVar5;
  int local_3c;
  uint local_38;
  undefined **local_34 [2];
  undefined1 local_2c [8];
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e23b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  local_14 = uVar2;
  if (param_2 == 0) {
    local_34[0] = &PTR_vftable_00c7ed38;
    pppuVar4 = local_34;
    local_8 = param_2;
    uVar5 = 1;
  }
  else {
    puVar3 = (undefined4 *)FUN_0061a490(&local_3c,&DAT_00738c41);
    local_24[0] = &PTR_vftable_00c7ed4c;
    local_1c[0] = *puVar3;
    *puVar3 = &DAT_00bfe12c;
    pppuVar4 = local_24;
    local_8 = 2;
    uVar5 = 6;
  }
  local_38 = uVar5;
  FUN_006323b0(param_1,pppuVar4);
  if ((uVar5 & 4) != 0) {
    uVar5 = uVar5 & 0xfffffffb;
    (**(code **)(*local_24[0] + 0x54))(local_1c,uVar2);
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    _Memory = (int *)(local_3c + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  if ((uVar5 & 1) != 0) {
    (**(code **)(*local_34[0] + 0x54))(local_2c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

