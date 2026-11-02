// rea decompile_all
// name: FUN_004ebda0
// address: 0x4ebda0
// body: available
// range: 0x4ebda0-0x4ec32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ebda0(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_38;
  double local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705022;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  dVar9 = 0.0;
  iVar6 = *(int *)(in_ECX + 0x18) + -4;
  fVar1 = *(float *)(in_ECX + 0xa64);
  iVar8 = *(int *)(in_ECX + 0x1c) + -4;
  if (fVar1 < 0.0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xb0));
    iVar2 = *(int *)(in_ECX + 0xd0);
    iVar3 = *(int *)(in_ECX + 0xd4);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xb0));
    if (iVar2 == 0 && iVar3 == 0) {
      iVar8 = iVar8 / 2;
    }
    else {
      iVar8 = iVar8 / 3;
    }
    if (*(int *)(in_ECX + 0x88) == 0 && *(int *)(in_ECX + 0x8c) == 0) {
      local_30 = 0.0;
    }
    else {
      FUN_006f56f0();
      dVar13 = dVar9;
      FUN_006f56f0();
      local_30 = dVar9 / dVar13;
      dVar9 = dVar13;
    }
    iVar4 = *(int *)(in_ECX + 0x90);
    iVar7 = *(int *)(in_ECX + 0x94);
    if (iVar4 == 0 && iVar7 == 0) {
      local_38 = 0.0;
    }
    else {
      FUN_006f56f0();
      dVar13 = dVar9;
      FUN_006f56f0();
      local_38 = dVar9 / dVar13;
      iVar7 = *(int *)(in_ECX + 0x94);
      dVar9 = dVar13;
    }
    dVar13 = 0.0;
    if (iVar4 != 0 || iVar7 != 0) {
      FUN_006f56f0();
      dVar13 = dVar9;
      FUN_006f56f0();
      dVar13 = dVar9 / dVar13;
    }
    dVar9 = 1.0;
    if (local_30 <= 1.0) {
      dVar9 = local_30;
    }
    dVar11 = (double)iVar6;
    dVar10 = 1.0;
    if (local_38 <= 1.0) {
      dVar10 = local_38;
    }
    dVar12 = 1.0;
    if (dVar13 <= 1.0) {
      dVar12 = dVar13;
    }
    FUN_00684c50();
    FUN_00472db0();
    FUN_00683310();
    if (4 < (int)(dVar11 * dVar9)) {
      FUN_00472db0();
      FUN_00684310();
    }
    if (4 < (int)(dVar11 * dVar10)) {
      FUN_00472db0();
      FUN_00684310();
    }
    if (4 < (int)(dVar11 * dVar12)) {
      FUN_00472db0();
      FUN_00684310();
    }
    DVar5 = timeGetTime();
    if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar5;
    }
    if ((0.0 < *(float *)(in_ECX + 0x590)) || (0.0 < *(float *)(in_ECX + 0x720))) {
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      *(undefined1 *)(param_1 + 2) = 1;
      if (2 < iVar6) {
        local_8 = 0;
        FUN_0045c990("Audio Process - Read ");
        local_8 = 0xffffffff;
        FUN_004eb900(param_1,extraout_ECX,3,iVar6,(int)(dVar11 * dVar9),iVar8 + -2);
        FUN_00684210();
        local_8 = 1;
        FUN_0045c990("Audio Process - Write ");
        local_8 = 0xffffffff;
        FUN_004eb900(param_1,extraout_ECX_00,iVar8 + 3,iVar6,(int)(dVar11 * dVar10),iVar8 + -2);
        if ((iVar3 != 0) || (iVar2 != 0)) {
          local_8 = 2;
          FUN_0045c990("Copy to target ");
          local_8 = 0xffffffff;
          FUN_004eb900(param_1,extraout_ECX_01,iVar8 * 2 + 3,iVar6,(int)(dVar11 * dVar12),iVar8 + -2
                      );
        }
      }
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*(int *)*param_1 + 0x38))();
    }
  }
  else {
    FUN_00684c50();
    FUN_00472db0();
    FUN_00683310();
    if (4 < (int)((float)iVar6 * fVar1)) {
      FUN_00472db0();
      FUN_00684310();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

