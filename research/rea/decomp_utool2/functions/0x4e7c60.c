// rea decompile_all
// name: FUN_004e7c60
// address: 0x4e7c60
// body: available
// range: 0x4e7c60-0x4e7d7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7c60(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070496a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  local_8 = 0;
  FUN_004097d0(param_2);
  iVar4 = *(int *)(in_ECX + 0x1d0) + 1;
  if (*(int *)(in_ECX + 0x1cc) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x1d0) + 9 & 0xfffffff8);
  }
  iVar4 = *(int *)(in_ECX + 0x1d0);
  *(int *)(in_ECX + 0x1d0) = iVar4 + 1;
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x1c8) + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  uVar2 = *(uint *)(*(int *)(param_2 + 4) + 0x20);
  uVar3 = *(uint *)(in_ECX + 0x1c4);
  if (*(uint *)(in_ECX + 0x1c4) < uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(in_ECX + 0x1c4) = uVar3;
  FUN_004096e0(param_1,param_2);
  FUN_004096e0(param_1,param_3);
  FUN_00409440(param_1,0);
  FUN_004095f0(param_1);
  FUN_004095f0(param_1);
  FUN_004095f0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  ExceptionList = local_10;
  return;
}

