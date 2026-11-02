// rea decompile_all
// name: FUN_00590060
// address: 0x590060
// body: available
// range: 0x590060-0x59025a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00590060(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  void *local_24;
  int local_20;
  int local_1c;
  LPCRITICAL_SECTION local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007143e3;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x58) == '\0') {
    local_18 = (LPCRITICAL_SECTION)(in_ECX + 0x30);
    local_14 = in_ECX;
    EnterCriticalSection(local_18);
    local_8 = 0;
    if (param_1 == 0) {
      if (*(int *)(in_ECX + 0x60) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 0x5c));
        *(undefined4 *)(in_ECX + 0x5c) = 0;
        *(undefined4 *)(in_ECX + 0x60) = 0;
      }
      *(undefined4 *)(in_ECX + 100) = 0;
      FUN_0040f7f0();
      if (*(int *)(in_ECX + 0x6c) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 0x68));
        *(undefined4 *)(in_ECX + 0x68) = 0;
        *(undefined4 *)(in_ECX + 0x6c) = 0;
      }
      *(undefined4 *)(in_ECX + 0x70) = 0;
      (**(code **)(**(int **)(in_ECX + 0x28) + 0xc))(param_2);
    }
    else {
      piVar2 = *(int **)(in_ECX + 0x5c);
      for (piVar5 = piVar2; piVar5 != piVar2 + *(int *)(in_ECX + 100); piVar5 = piVar5 + 1) {
        if (param_1 == *piVar5) {
          iVar6 = (int)piVar5 - (int)piVar2 >> 2;
          if (-1 < iVar6) {
            FUN_00459080(iVar6,param_2);
            goto LAB_00590148;
          }
          break;
        }
      }
      FUN_0040e3e0(&param_1);
      FUN_006363c0(param_2);
LAB_00590148:
      local_24 = (void *)0x0;
      local_20 = 0;
      local_1c = 0;
      uVar7 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0 < *(int *)(in_ECX + 0x70)) {
        do {
          if (uVar7 < *(uint *)(in_ECX + 0x70)) {
            ppuVar8 = (undefined **)(*(int *)(in_ECX + 0x68) + uVar7 * 4);
          }
          else {
            ppuVar8 = &PTR_DAT_00c7ed68;
          }
          pcVar3 = *ppuVar8;
          piVar2 = (int *)(pcVar3 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          if (*pcVar3 == '\0') {
LAB_005901f1:
            if (piVar2 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar2);
              }
            }
          }
          else {
            iVar6 = local_1c + 1;
            if (local_20 < iVar6) {
              if (iVar6 < 0) {
                iVar6 = local_1c + 2;
              }
              FUN_00409cf0((iVar6 >> 1) + local_1c + 9 & 0xfffffff8);
            }
            iVar6 = local_1c + 1;
            puVar1 = (undefined4 *)((int)local_24 + local_1c * 4);
            local_1c = iVar6;
            if (puVar1 == (undefined4 *)0x0) goto LAB_005901f1;
            *puVar1 = pcVar3;
            if (piVar2 != &DAT_00bfe124) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              UNLOCK();
              goto LAB_005901f1;
            }
          }
          uVar7 = uVar7 + 1;
          in_ECX = local_14;
        } while ((int)uVar7 < *(int *)(local_14 + 0x70));
      }
      (**(code **)(**(int **)(in_ECX + 0x28) + 8))(&local_24,uVar4);
      FUN_0040f7f0();
      FID_conflict__free(local_24);
    }
    LeaveCriticalSection(local_18);
  }
  ExceptionList = local_10;
  return;
}

