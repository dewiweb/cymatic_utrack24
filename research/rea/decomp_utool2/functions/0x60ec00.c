// rea decompile_all
// name: FUN_0060ec00
// address: 0x60ec00
// body: available
// range: 0x60ec00-0x60edfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060ec00(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  undefined8 local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c6e1;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  piVar2 = param_1;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x38) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(**(int **)(in_ECX + 0x30) + 8);
  }
  local_14 = piVar5;
  (**(code **)(*param_1 + 0x10))(&DAT_00bfdfdc,4,uVar3);
  if (*(code **)(*piVar2 + 0x24) == FUN_0062a8d0) {
    param_1 = *(int **)(in_ECX + 0x3c);
    (**(code **)(*piVar2 + 0x10))(&param_1,4);
  }
  else {
    (**(code **)(*piVar2 + 0x24))(*(int **)(in_ECX + 0x3c));
  }
  if (*(code **)(*piVar2 + 0x2c) == FUN_00620590) {
    local_1c = *(undefined8 *)(in_ECX + 0x40);
    (**(code **)(*piVar2 + 0x10))(&local_1c,8);
  }
  else {
    (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  }
  if (*(code **)(*piVar2 + 0x2c) == FUN_00620590) {
    local_1c = *(undefined8 *)(in_ECX + 0x48);
    (**(code **)(*piVar2 + 0x10))(&local_1c,8);
  }
  else {
    (**(code **)(*piVar2 + 0x2c))(*(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c));
  }
  pcVar1 = *(code **)(*piVar2 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    param_1 = piVar5;
    (**(code **)(*piVar2 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar1)(piVar5);
  }
  pcVar1 = *(code **)(*piVar2 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    param_1 = *(int **)(in_ECX + 0x50);
    (**(code **)(*piVar2 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar1)(*(int **)(in_ECX + 0x50));
  }
  pcVar1 = *(code **)(*piVar2 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    param_1 = (int *)(int)*(double *)(in_ECX + 0x58);
    (**(code **)(*piVar2 + 0x10))(&param_1,4);
  }
  else {
    (*pcVar1)((int *)(int)*(double *)(in_ECX + 0x58));
  }
  pcVar1 = *(code **)(*piVar2 + 0x2c);
  if (pcVar1 == FUN_00620590) {
    local_1c = 0;
    (**(code **)(*piVar2 + 0x10))(&local_1c,8);
  }
  else {
    (*pcVar1)(0,0);
  }
  pcVar1 = *(code **)(*piVar2 + 0x2c);
  if (pcVar1 == FUN_00620590) {
    local_1c = 0;
    (**(code **)(*piVar2 + 0x10))(&local_1c,8);
  }
  else {
    (*pcVar1)(0,0);
  }
  param_1 = (int *)0x0;
  if (0 < (int)piVar5) {
    iVar4 = *(int *)(in_ECX + 0x50);
    piVar5 = local_14;
    do {
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          (**(code **)(*piVar2 + 0x10))
                    (**(int **)(*(int *)(in_ECX + 0x30) + iVar6 * 4) + (int)param_1 * 2,2);
          iVar4 = *(int *)(in_ECX + 0x50);
          iVar6 = iVar6 + 1;
          piVar5 = local_14;
        } while (iVar6 < iVar4);
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < (int)piVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  ExceptionList = local_10;
  return;
}

