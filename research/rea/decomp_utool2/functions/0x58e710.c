// rea decompile_all
// name: FUN_0058e710
// address: 0x58e710
// body: available
// range: 0x58e710-0x58e7de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e710(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714116;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x41));
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_005bcc20(param_2,param_3,uVar2);
  iVar4 = *(int *)(in_ECX + 100) + 1;
  if (*(int *)(in_ECX + 0x60) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 100) + 9 & 0xfffffff8);
  }
  iVar4 = *(int *)(in_ECX + 100);
  *(int *)(in_ECX + 100) = iVar4 + 1;
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar3;
    *puVar3 = &DAT_00bfe12c;
  }
  _Memory = (int *)(param_3 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar4 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x41));
  ExceptionList = local_10;
  return;
}

