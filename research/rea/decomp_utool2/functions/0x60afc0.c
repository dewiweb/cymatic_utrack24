// rea decompile_all
// name: FUN_0060afc0
// address: 0x60afc0
// body: available
// range: 0x60afc0-0x60b1d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060afc0(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  uint uVar9;
  void *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c4db;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 8) != param_1) {
    if (((param_1 != (int *)0x0) && (0.0 < *(double *)(in_ECX + 0x28))) &&
       (0 < *(int *)(in_ECX + 0x30))) {
      iVar6 = param_1[4];
      iVar7 = 1;
      iVar2 = param_1[7];
      uVar9 = uVar4;
      if (1 < iVar6) {
        do {
          uVar5 = FUN_00608c80(uVar9);
          local_8 = 0;
          (**(code **)(*param_1 + 0x20))(1,iVar7,uVar5);
          local_8 = 0xffffffff;
          FID_conflict__free(local_34);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
      }
      iVar7 = 1;
      if (1 < iVar2) {
        do {
          uVar5 = FUN_00608c80(uVar9);
          local_8 = 1;
          (**(code **)(*param_1 + 0x20))(0,iVar7,uVar5);
          local_8 = 0xffffffff;
          FID_conflict__free(local_34);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      if ((0 < iVar6) && (iVar6 = FUN_00637390(), iVar6 != *(int *)(in_ECX + 0x38))) {
        uVar5 = FUN_00608ad0();
        local_8 = 2;
        (**(code **)(*param_1 + 0x20))(1,0,uVar5);
        local_8 = 0xffffffff;
        FID_conflict__free(local_34);
      }
      if ((0 < iVar2) && (iVar6 = FUN_00637390(), iVar6 != *(int *)(in_ECX + 0x3c))) {
        uVar5 = FUN_00608ad0();
        local_8 = 3;
        (**(code **)(*param_1 + 0x20))(0,0,uVar5);
        local_8 = 0xffffffff;
        FID_conflict__free(local_34);
      }
      uVar1 = *(undefined8 *)(in_ECX + 0x28);
      param_1[0x10] = *(int *)(in_ECX + 0x30);
      *(undefined8 *)(param_1 + 0xe) = uVar1;
      cVar3 = (**(code **)(*param_1 + 0x24))();
      if ((cVar3 == '\0') || (*(char *)(in_ECX + 0x35) == '\0')) {
        iVar6 = 0;
      }
      else {
        iVar6 = 1;
      }
      param_1[0x13] = iVar6;
      (**(code **)(*param_1 + 8))(*(undefined8 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x30));
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
    if (*(char *)(in_ECX + 0x34) == '\0') {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(in_ECX + 8);
    }
    *(int **)(in_ECX + 8) = param_1;
    *(undefined1 *)(in_ECX + 0x34) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc));
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

