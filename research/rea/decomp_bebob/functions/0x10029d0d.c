// rea decompile_all
// name: FUN_10029d0d
// address: 0x10029d0d
// body: available
// range: 0x10029d0d-0x10029f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029f71 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10029d0d(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CWnd *pCVar7;
  int iVar8;
  HWND pHVar9;
  CObject *pCVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar11;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_EDX;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  DAT_10166e5c = param_3;
  uVar3 = DAT_101603f8;
  uVar4 = DAT_101603ec;
  uVar5 = DAT_101603f0;
  uVar6 = DAT_101603f4;
  puVar2 = DAT_10166ec0;
  if (param_3 != 0) {
    uVar13 = FUN_100f8660(param_1,param_2);
    DAT_101603fc = (undefined4)uVar13;
    uVar13 = FUN_100f8660(extraout_ECX,(int)(uVar13 >> 0x20));
    DAT_10160400 = (undefined4)uVar13;
    uVar13 = FUN_100f8660(extraout_ECX_00,(int)(uVar13 >> 0x20));
    DAT_10160404 = (undefined4)uVar13;
    uVar13 = FUN_100f8660(extraout_ECX_01,(int)(uVar13 >> 0x20));
    uVar3 = (int)uVar13;
    uVar4 = DAT_101603fc;
    uVar5 = DAT_10160400;
    uVar6 = DAT_10160404;
    puVar2 = DAT_10166ec0;
  }
joined_r0x10029daa:
  do {
    DAT_10160404 = uVar6;
    DAT_10160400 = uVar5;
    DAT_101603fc = uVar4;
    DAT_10160408 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == (undefined4 *)0x0) {
LAB_10029f71:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    piVar1 = (int *)puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if (piVar1 == (int *)0x0) goto LAB_10029f71;
    pCVar7 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
    uVar3 = DAT_10160408;
    uVar4 = DAT_101603fc;
    uVar5 = DAT_10160400;
    uVar6 = DAT_10160404;
  } while (pCVar7 == (CWnd *)0x0);
  if (piVar1[0x2c1] != 0) {
    if (DAT_10166e5c == 0) {
      iVar8 = CSize::operator!=((CSize *)(piVar1 + 0x2eb),*(tagSIZE *)(piVar1 + 0x2e7));
      if ((iVar8 == 0) &&
         (iVar8 = CSize::operator!=((CSize *)(piVar1 + 0x2ed),*(tagSIZE *)(piVar1 + 0x2e9)),
         uVar3 = DAT_10160408, uVar4 = DAT_101603fc, uVar5 = DAT_10160400, uVar6 = DAT_10160404,
         iVar8 == 0)) goto joined_r0x10029daa;
      piVar1[0x2eb] = piVar1[0x2e7];
      piVar1[0x2ec] = piVar1[0x2e8];
      piVar1[0x2ed] = piVar1[0x2e9];
      iVar8 = piVar1[0x2ea];
    }
    else {
      uVar13 = FUN_100f8660(extraout_ECX_02,extraout_EDX);
      uVar12 = (undefined4)(uVar13 >> 0x20);
      uVar11 = extraout_ECX_03;
      if (piVar1[0x2eb] == (int)uVar13) {
        uVar14 = FUN_100f8660(extraout_ECX_03,uVar12);
        uVar12 = (undefined4)(uVar14 >> 0x20);
        uVar11 = extraout_ECX_04;
        if (piVar1[0x2ec] == (int)uVar14) {
          uVar14 = FUN_100f8660(extraout_ECX_04,uVar12);
          uVar12 = (undefined4)(uVar14 >> 0x20);
          uVar11 = extraout_ECX_05;
          if (piVar1[0x2ed] == (int)uVar14) {
            uVar14 = FUN_100f8660(extraout_ECX_05,uVar12);
            uVar12 = (undefined4)(uVar14 >> 0x20);
            uVar11 = extraout_ECX_06;
            uVar3 = DAT_10160408;
            uVar4 = DAT_101603fc;
            uVar5 = DAT_10160400;
            uVar6 = DAT_10160404;
            if (piVar1[0x2ee] == (int)uVar14) goto joined_r0x10029daa;
          }
        }
      }
      piVar1[0x2eb] = (int)uVar13;
      uVar13 = FUN_100f8660(uVar11,uVar12);
      piVar1[0x2ec] = (int)uVar13;
      uVar13 = FUN_100f8660(extraout_ECX_07,(int)(uVar13 >> 0x20));
      piVar1[0x2ed] = (int)uVar13;
      uVar13 = FUN_100f8660(extraout_ECX_08,(int)(uVar13 >> 0x20));
      iVar8 = (int)uVar13;
    }
    piVar1[0x2ee] = iVar8;
  }
  (**(code **)(*piVar1 + 0x208))();
  uVar3 = DAT_10160408;
  uVar4 = DAT_101603fc;
  uVar5 = DAT_10160400;
  uVar6 = DAT_10160404;
  if (piVar1[0x2c1] != 0) {
    pHVar9 = GetParent((HWND)piVar1[8]);
    pCVar7 = CWnd::FromHandle(pHVar9);
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)pCVar7);
    uVar3 = DAT_10160408;
    uVar4 = DAT_101603fc;
    uVar5 = DAT_10160400;
    uVar6 = DAT_10160404;
    if (pCVar10 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar10 + 0x208))();
      uVar3 = DAT_10160408;
      uVar4 = DAT_101603fc;
      uVar5 = DAT_10160400;
      uVar6 = DAT_10160404;
    }
  }
  goto joined_r0x10029daa;
}

