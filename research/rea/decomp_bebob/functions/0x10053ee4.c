// rea decompile_all
// name: _AfxCommDlgProc
// address: 0x10053ee4
// body: available
// range: 0x10053ee4-0x1005408d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10053f0e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    unsigned int __stdcall _AfxCommDlgProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Library: Visual Studio 2010 Release */

uint _AfxCommDlgProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  CNoTrackObject *pCVar2;
  CWnd *pCVar3;
  int iVar4;
  
  if (param_1 == (HWND__ *)0x0) {
    uVar1 = 0;
  }
  else {
    pCVar2 = CThreadLocalObject::GetData
                       ((CThreadLocalObject *)&DAT_10164b18,
                        (_func_CNoTrackObject_ptr *)&LAB_10009084);
    if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if ((*(int *)(pCVar2 + 0x18) != 0) &&
       (pCVar3 = CWnd::FromHandlePermanent(param_1), pCVar3 == (CWnd *)0x0)) {
      CWnd::SubclassWindow(*(CWnd **)(pCVar2 + 0x18),param_1);
      *(undefined4 *)(pCVar2 + 0x18) = 0;
    }
    if (param_2 == 0x110) {
      DAT_10168380 = RegisterWindowMessageW(L"commdlg_LBSelChangedNotify");
      DAT_10168384 = RegisterWindowMessageW(L"commdlg_ShareViolation");
      DAT_10168388 = RegisterWindowMessageW(L"commdlg_FileNameOK");
      DAT_1016838c = RegisterWindowMessageW(L"commdlg_ColorOK");
      DAT_10168390 = RegisterWindowMessageW(L"commdlg_help");
      _DAT_10168394 = RegisterWindowMessageW(L"commdlg_SetRGBColor");
      uVar1 = AfxDlgProc(param_1,0x110,param_3,param_4);
    }
    else if ((param_2 == DAT_10168390) || ((param_2 == 0x111 && ((short)param_3 == 0x40e)))) {
      SendMessageW(param_1,0x111,0xe146,0);
      uVar1 = 1;
    }
    else {
      if (((0xbfff < param_2) &&
          (pCVar3 = CWnd::FromHandlePermanent(param_1), pCVar3 != (CWnd *)0x0)) &&
         ((iVar4 = CObject::IsKindOf((CObject *)pCVar3,(CRuntimeClass *)&PTR_s_CFileDialog_1011f864)
          , iVar4 == 0 ||
          (iVar4 = FUN_1002e3c4((int)pCVar3), (*(uint *)(iVar4 + 0x34) & 0x80000) == 0)))) {
        if (param_2 == DAT_10168384) {
          uVar1 = (**(code **)(*(int *)pCVar3 + 0x18c))(param_4);
          return uVar1;
        }
        if (param_2 == DAT_10168388) {
          *(long *)(pCVar3 + 0x33c) = param_4;
          uVar1 = (**(code **)(*(int *)pCVar3 + 400))();
          *(undefined4 *)(pCVar3 + 0x33c) = 0;
          return uVar1;
        }
        if (param_2 == DAT_10168380) {
          (**(code **)(*(int *)pCVar3 + 0x194))(param_3,param_4 & 0xffff,(uint)param_4 >> 0x10);
        }
        else if (param_2 == DAT_1016838c) {
          uVar1 = (**(code **)(*(int *)pCVar3 + 0x188))();
          return uVar1;
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

