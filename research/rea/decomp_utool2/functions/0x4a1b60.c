// rea decompile_all
// name: FUN_004a1b60
// address: 0x4a1b60
// body: available
// range: 0x4a1b60-0x4a1cb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1b60(float param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = (int)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703360;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = *in_ECX;
  if ((int)param_1 <= iVar1) {
    return;
  }
  if (*(int *)(in_ECX[6] + 8) + iVar1 <= (int)param_1) {
    return;
  }
  ExceptionList = &local_10;
  FUN_00419e50(200,iVar1);
  local_8 = 0;
  uVar4 = FUN_0049fd60(&param_1,in_ECX[0xc]);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00642ff0(in_ECX[7],uVar4,0,0x501502f9,0);
  _Memory = (int *)((int)param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (iVar2 - *in_ECX < 0) {
    param_1 = *(float *)((iVar2 - *in_ECX) * 0x1c + 0xc);
    if ((float)in_ECX[5] <= param_1) {
      param_1 = (float)in_ECX[5];
    }
  }
  else {
    param_1 = (float)in_ECX[5];
  }
  FUN_00471b00(uVar3);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

