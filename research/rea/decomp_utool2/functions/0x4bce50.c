// rea decompile_all
// name: FUN_004bce50
// address: 0x4bce50
// body: available
// range: 0x4bce50-0x4bcf12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004bce50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701898;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  iVar2 = FUN_00472320(param_2,param_3);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    UNLOCK();
    *param_1 = iVar2;
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_10;
    return param_1;
  }
  LOCK();
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  UNLOCK();
  iVar2 = FUN_004bdc60(uVar1);
  FUN_00472400(param_2,param_3);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return param_1;
}

