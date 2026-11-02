// rea decompile_all
// name: FUN_10006870
// address: 0x10006870
// body: available
// range: 0x10006870-0x10006a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006910 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100069d7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10006870(GUID *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  HDEVINFO pvVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 local_58 [3];
  undefined1 local_4c [56];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1010e97e;
  local_10 = ExceptionList;
  local_14 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar7 = (int *)0x0;
  if ((void *)param_1[2].Data1 != (void *)0x0) {
    FUN_100085b9((void *)param_1[2].Data1);
    param_1[2].Data1 = 0;
  }
  param_1[2].Data4[0] = '\0';
  param_1[2].Data4[1] = '\0';
  param_1[2].Data4[2] = '\0';
  param_1[2].Data4[3] = '\0';
  param_1[2].Data2 = 0;
  param_1[2].Data3 = 0;
  uVar1._0_2_ = param_1->Data2;
  uVar1._2_2_ = param_1->Data3;
  iVar4 = FUN_10002000(&DAT_10164a28,param_1->Data1,uVar1,*(undefined4 *)param_1->Data4,
                       *(undefined4 *)(param_1->Data4 + 4));
  if (iVar4 == 0) {
    iVar4 = FUN_10004550(&DAT_10164a28);
    if (iVar4 == 0) {
      pvVar5 = SetupDiGetClassDevsA(param_1,(PCSTR)0x0,(HWND)0x0,0x12);
      if (DAT_10164a60 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      uVar2._0_2_ = param_1->Data2;
      uVar2._2_2_ = param_1->Data3;
      FUN_100065e0(local_58,(undefined4 *)*DAT_10164a5c,param_1->Data1,uVar2,
                   *(undefined4 *)param_1->Data4,*(undefined4 *)(param_1->Data4 + 4));
      local_8 = 0;
      pvVar6 = FUN_1000858a(0xbc);
      local_8._0_1_ = 1;
      if (pvVar6 != (void *)0x0) {
        uVar3._0_2_ = param_1->Data2;
        uVar3._2_2_ = param_1->Data3;
        piVar7 = FUN_10003650(pvVar6,param_1->Data1,uVar3,*(undefined4 *)param_1->Data4,
                              *(undefined4 *)(param_1->Data4 + 4));
      }
      local_8._0_1_ = 0;
      iVar4 = (**(code **)(*piVar7 + 8))(0,pvVar5,local_4c);
      if (iVar4 == 0) {
        pvVar6 = FUN_1000858a(0x114);
        local_8._0_1_ = 2;
        if (pvVar6 == (void *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = FUN_10006510(pvVar6,piVar7,param_1,(int)local_58);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10005a70((int)pvVar6);
        iVar4 = *(int *)&param_1[2].Data2;
        if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        FUN_10005790(param_1[1].Data4 + 4,iVar4 + 1,-1);
        *(void **)(param_1[2].Data1 + iVar4 * 4) = pvVar6;
      }
      local_8 = 0xffffffff;
      FUN_10006060(local_58);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

