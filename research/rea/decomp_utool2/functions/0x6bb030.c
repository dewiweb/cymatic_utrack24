// rea decompile_all
// name: FUN_006bb030
// address: 0x6bb030
// body: available
// range: 0x6bb030-0x6bb258 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_006bb030(undefined4 param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,undefined1 param_9)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  code *pcVar4;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724828;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
  local_8 = 0;
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    iVar1 = **(int **)(in_ECX + 0x34);
    if (param_2 == '\0') {
      pcVar4 = *(code **)(iVar1 + 4);
    }
    else {
      pcVar4 = *(code **)(iVar1 + 8);
    }
    cVar2 = (*pcVar4)(param_1,uVar3);
    if (cVar2 == '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
      ExceptionList = local_10;
      return 0;
    }
  }
  piVar5 = operator_new(0x28);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  piVar5[9] = 0;
  *piVar5 = (int)&DAT_00bfe12c;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar6 = (int *)FUN_00636a10(&local_18);
  iVar1 = *piVar5;
  *piVar5 = *piVar6;
  *piVar6 = iVar1;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar5[2] = param_3;
  piVar5[3] = param_4;
  piVar5[4] = param_5;
  piVar5[5] = param_6;
  piVar5[6] = param_7;
  piVar5[7] = param_8;
  *(char *)(piVar5 + 8) = param_2;
  *(undefined1 *)((int)piVar5 + 0x21) = param_9;
  _param_2 = *(int *)(local_14 + 0x60) + -1;
  if (-1 < _param_2) {
    iVar1 = *piVar5;
    puVar7 = (undefined4 *)(*(int *)(local_14 + 0x58) + _param_2 * 4);
    do {
      iVar9 = iVar1;
      if (*(int *)*puVar7 == iVar1) {
LAB_006bb1ad:
        piVar6 = (int *)(iVar1 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        FUN_004bfe14(piVar5,0x28);
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_14 + 0x40));
        ExceptionList = local_10;
        return 0;
      }
      while( true ) {
        local_18 = iVar9;
        iVar8 = FUN_00443260();
        iVar9 = FUN_00443260();
        if ((iVar8 - iVar9 != 0) && ((iVar8 - iVar9 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        iVar9 = local_18;
        if (iVar8 == 0) goto LAB_006bb1ad;
      }
      _param_2 = _param_2 + -1;
      puVar7 = puVar7 + -1;
    } while (-1 < _param_2);
  }
  uVar10 = FUN_00684da0(piVar5,_param_2,*(undefined4 *)(local_14 + 0x60));
  FUN_00411110(uVar10,piVar5);
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_14 + 0x40));
  ExceptionList = local_10;
  return 1;
}

