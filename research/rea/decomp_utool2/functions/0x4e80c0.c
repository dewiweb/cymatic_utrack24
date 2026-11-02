// rea decompile_all
// name: FUN_004e80c0
// address: 0x4e80c0
// body: available
// range: 0x4e80c0-0x4e8438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004e8367) */

void FUN_004e80c0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  void *local_b4;
  LPCRITICAL_SECTION local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007049c9;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (LPCRITICAL_SECTION)(in_ECX + 0x34);
  local_14 = in_ECX;
  EnterCriticalSection(local_2c);
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x30) == 0) || (*(char *)(in_ECX + 0x55) != '\0')) {
    if (*param_1 != 0) {
      FUN_00409ea0(param_1[1],param_1[2]);
    }
    *(undefined1 *)(in_ECX + 0x55) = 1;
    local_14 = in_ECX;
  }
  else {
    if (*(int *)(in_ECX + 0x74) < 0) {
      (**(code **)(**(int **)(in_ECX + 0x30) + 0xc))(param_1,uVar2);
    }
    else {
      FUN_00403320(*(undefined4 *)(in_ECX + 0x78),param_1[2],0,0,1);
      iVar4 = 0;
      if (0 < *(int *)(in_ECX + 0x78)) {
        do {
          *(undefined1 *)(in_ECX + 0x310) = 0;
          *(undefined4 *)(in_ECX + 0x7c + iVar4 * 4) =
               *(undefined4 *)(*(int *)(in_ECX + 0x288) + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(in_ECX + 0x78));
      }
      local_c0 = param_1[2];
      local_c4 = *(undefined4 *)(in_ECX + 0x78);
      local_8._0_1_ = 1;
      local_bc = 0;
      local_b4 = (void *)0x0;
      FUN_00409f00(in_ECX + 0x7c,local_c0);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_28 = &local_c4;
      local_20 = param_1[2];
      local_24 = 0;
      (**(code **)(**(int **)(in_ECX + 0x30) + 0xc))(&local_28);
      iVar4 = param_1[1];
      iVar3 = *(int *)(local_28[3] + *(int *)(in_ECX + 0x74) * 4);
      iVar6 = *param_1;
      *(undefined1 *)(iVar6 + 0x94) = 0;
      FUN_004c2c30(**(int **)(iVar6 + 0xc) + param_1[1] * 4,iVar3 + iVar4 * 4,param_1[2] << 2);
      iVar4 = param_1[1];
      iVar3 = *(int *)(local_28[3] + *(int *)(in_ECX + 0x74) * 4);
      iVar6 = *param_1;
      *(undefined1 *)(iVar6 + 0x94) = 0;
      FUN_004c2c30(*(int *)(*(int *)(iVar6 + 0xc) + 4) + param_1[1] * 4,iVar3 + iVar4 * 4,
                   param_1[2] << 2);
      piVar5 = (int *)*param_1;
      iVar4 = 2;
      if (2 < *piVar5) {
        do {
          *(undefined1 *)(piVar5 + 0x25) = 0;
          _memset((void *)(*(int *)(piVar5[3] + iVar4 * 4) + param_1[1] * 4),0,param_1[2] << 2);
          piVar5 = (int *)*param_1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *piVar5);
      }
      local_8 = local_8 & 0xffffff00;
      FID_conflict__free(local_b4);
    }
    if (*(char *)(in_ECX + 0x54) == '\0') {
      iVar4 = *(int *)*param_1;
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        iVar3 = 0x100;
        if (param_1[2] < 0x100) {
          iVar3 = param_1[2];
        }
        FUN_00409da0(iVar4,param_1[1],iVar3,0x3f800000,0);
      }
      if (0x100 < param_1[2]) {
        iVar3 = param_1[1];
        iVar4 = param_1[2] + -0x100;
        piVar5 = (int *)*param_1;
        local_18 = piVar5;
        if ((char)piVar5[0x25] == '\0') {
          if ((iVar3 + 0x100 == 0) && (iVar4 == piVar5[1])) {
            *(undefined1 *)(piVar5 + 0x25) = 1;
          }
          iVar6 = 0;
          if (0 < *piVar5) {
            local_1c = (iVar3 + 0x100) * 4;
            do {
              _memset((void *)(*(int *)(piVar5[3] + iVar6 * 4) + local_1c),0,iVar4 * 4);
              iVar6 = iVar6 + 1;
              in_ECX = local_14;
            } while (iVar6 < *piVar5);
          }
        }
      }
    }
    lVar7 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))();
    lVar8 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x14))();
    if ((lVar7 + 1 < lVar8) &&
       (cVar1 = (**(code **)(**(int **)(local_14 + 0x2c) + 0x1c))(), cVar1 == '\0')) {
      *(undefined1 *)(local_14 + 0x54) = 0;
      *(undefined1 *)(local_14 + 0x71) = 1;
      if (0 < *(int *)(local_14 + 0x1c)) {
        piVar5 = (int *)(*(int *)(local_14 + 0xc) + 0xc);
        LOCK();
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          *piVar5 = 1;
          iVar4 = 0;
        }
        UNLOCK();
        if ((iVar4 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
          LOCK();
          *(undefined4 *)(*(int *)(local_14 + 0xc) + 0xc) = 0;
          UNLOCK();
        }
      }
    }
    *(bool *)(local_14 + 0x55) = *(char *)(local_14 + 0x54) == '\0';
    iVar4 = *(int *)*param_1;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      FUN_00409da0(iVar4,param_1[1],param_1[2],*(undefined4 *)(local_14 + 0x50),
                   *(undefined4 *)(local_14 + 0x4c));
    }
  }
  *(undefined4 *)(local_14 + 0x50) = *(undefined4 *)(local_14 + 0x4c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_14 + 0x34));
  ExceptionList = local_10;
  return;
}

