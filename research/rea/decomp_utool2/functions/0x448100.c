// rea decompile_all
// name: FUN_00448100
// address: 0x448100
// body: available
// range: 0x448100-0x448285 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448100(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  void *local_98;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ff0d9;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(in_ECX + 0xb8);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + iVar5 * 4);
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar5 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4);
  }
  local_a8 = *(int *)(in_ECX + 0xb8);
  local_8 = 0;
  local_a4 = param_3;
  local_a0 = 0;
  local_98 = (void *)0x0;
  FUN_004259d0(*(undefined4 *)(in_ECX + 0x1c),0);
  local_8 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 8) + 0x50);
  EnterCriticalSection(lpCriticalSection);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar2 = *(int **)(in_ECX + 8);
  if ((char)piVar2[0x12] == '\0') {
    uVar3 = *(undefined4 *)(*param_2 + *(int *)(in_ECX + 0xbc) * 4);
    if (piVar2[0x13] == 1) {
      (**(code **)(*piVar2 + 0x10))(&local_a8,uVar3);
    }
    else {
      FUN_00425e30(&local_a8,piVar2);
      (**(code **)(**(int **)(in_ECX + 8) + 0x14))(in_ECX + 0x20,uVar3,uVar4);
      FUN_00425eb0(in_ECX + 0x20,extraout_ECX);
    }
  }
  else if (local_14 == '\0') {
    iVar5 = 0;
    if (0 < local_a8) {
      do {
        _memset(*(void **)(local_9c + iVar5 * 4),0,local_a4 << 3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_a8);
    }
    local_14 = '\x01';
  }
  LeaveCriticalSection(lpCriticalSection);
  FID_conflict__free(local_98);
  ExceptionList = local_10;
  return;
}

