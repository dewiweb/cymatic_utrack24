// rea decompile_all
// name: FUN_00585400
// address: 0x585400
// body: available
// range: 0x585400-0x585610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585400(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  LPCRITICAL_SECTION in_ECX;
  int *piVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48 [2];
  int local_40;
  _RTL_CRITICAL_SECTION local_3c;
  void *local_24;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713155;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00586930(param_1);
  local_8 = 0;
  uVar3 = FUN_00630b10(&local_40);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00585620(uVar3);
  piVar6 = (int *)(local_40 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if ((local_1c != 0) && (local_40 = 0, 0 < local_1c)) {
    do {
      piVar6 = (int *)FUN_0041a1f0(local_48,local_40);
      local_50 = *(int *)(*piVar6 + 8);
      if (local_48[0] != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_48[0] + 1;
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_48[0])(1);
        }
      }
      iVar7 = 0;
      if (0 < in_ECX[1].RecursionCount) {
        do {
          piVar6 = (int *)FUN_0041a1f0(&local_4c,iVar7);
          iVar2 = *(int *)(*piVar6 + 8);
          if (local_4c != (undefined4 *)0x0) {
            LOCK();
            piVar6 = local_4c + 1;
            iVar1 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)*local_4c)(1);
            }
          }
          if (iVar2 == local_50) {
            puVar4 = (undefined4 *)FUN_0041a1f0(&local_54,local_40);
            FUN_0041a150(iVar7,*puVar4);
            puVar4 = local_54;
            goto LAB_00585543;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < in_ECX[1].RecursionCount);
      }
      puVar4 = (undefined4 *)FUN_0041a1f0(&local_58,local_40);
      uVar3 = *puVar4;
      EnterCriticalSection(in_ECX);
      uVar5 = FUN_00584fe0(uVar3,extraout_ECX,in_ECX[1].RecursionCount);
      FUN_0041a600(uVar5,uVar3);
      LeaveCriticalSection(in_ECX);
      puVar4 = local_58;
LAB_00585543:
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = puVar4 + 1;
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*puVar4)(1);
        }
      }
      local_40 = local_40 + 1;
    } while (local_40 < local_1c);
  }
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  while (0 < local_1c) {
    local_1c = local_1c + -1;
    puVar4 = *(undefined4 **)((int)local_24 + local_1c * 4);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = puVar4 + 1;
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  FID_conflict__free(local_24);
  DeleteCriticalSection(&local_3c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

