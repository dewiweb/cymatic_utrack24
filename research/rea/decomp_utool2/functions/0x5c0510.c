// rea decompile_all
// name: FUN_005c0510
// address: 0x5c0510
// body: available
// range: 0x5c0510-0x5c0633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0510(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_ECX;
  undefined **local_20;
  undefined8 local_1c;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a4f1;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (LPCRITICAL_SECTION)(in_ECX + 0x30);
  EnterCriticalSection(local_14);
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0xc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 4) + iVar2 * 4) + 8))(uVar3);
  }
  uVar3 = (uint)local_8 >> 8;
  local_8 = CONCAT31((int3)uVar3,1);
  if ((*(int *)(in_ECX + 0x4c) != 0) || (*(int *)(in_ECX + 0x48) != 2)) {
    cVar1 = *(char *)(in_ECX + 0xdc);
    *(undefined4 *)(in_ECX + 0x50) = 0x30;
    FID_conflict__free(*(void **)(in_ECX + 0x58));
    if (cVar1 == '\0') {
      piVar4 = (int *)FUN_004c554b(0x30);
    }
    else {
      piVar4 = (int *)FUN_004c5556(0x30,1);
    }
    *(int **)(in_ECX + 0x58) = piVar4;
    if (piVar4 == (int *)0x0) {
      local_20 = std::bad_alloc::vftable;
      local_1c = 0xc066d4;
      piVar4 = (int *)__CxxThrowException_8(&local_20,&DAT_00c4d060);
    }
    *(int **)(in_ECX + 0x54) = piVar4;
    *piVar4 = (int)(piVar4 + 4);
    *(int **)(*(int *)(in_ECX + 0x54) + 4) = piVar4 + 4;
    *(undefined4 *)(*(int *)(in_ECX + 0x54) + 8) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 2;
  }
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined8 *)(in_ECX + 0xe0) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x30));
  ExceptionList = local_10;
  return;
}

