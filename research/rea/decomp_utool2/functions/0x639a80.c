// rea decompile_all
// name: FUN_00639a80
// address: 0x639a80
// body: available
// range: 0x639a80-0x639bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639a80(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *_Memory;
  int local_40;
  int local_3c;
  int *local_38;
  void *local_34;
  int local_2c;
  uint local_24;
  byte local_1c;
  undefined1 local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f24e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  FUN_0062cb00(0x100);
  local_8 = 0;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  FUN_00639f50(4,iVar1,0,0,0,uVar2);
  iVar1 = 0;
  for (uVar2 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f); uVar2 != 0;
      uVar2 = uVar2 >> 8) {
    local_1b[iVar1] = (char)uVar2;
    iVar1 = iVar1 + 1;
  }
  local_1c = (byte)iVar1;
  if ((int)param_3 < 0) {
    local_1c = local_1c | 0x80;
  }
  (**(code **)(local_40 + 0x10))(&local_1c,iVar1 + 1);
  if (local_38 != (int *)0x0) {
    if (local_24 < (uint)local_38[1]) {
      *(undefined1 *)(local_24 + *local_38) = 0;
    }
    local_2c = *local_38;
  }
  (**(code **)(*in_ECX + 0x1c))(local_2c,local_24);
  FUN_00622b80();
  FID_conflict__free(local_34);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

