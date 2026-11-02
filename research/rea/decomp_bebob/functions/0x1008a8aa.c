// rea decompile_all
// name: CTooltipManager::SetTooltipText
// address: 0x1008a8aa
// body: available
// range: 0x1008a8aa-0x1008a9ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static void __stdcall CTooltipManager::SetTooltipText(struct tagTOOLINFOW *,class
   CToolTipCtrl *,unsigned int,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void CTooltipManager::SetTooltipText
               (int param_1,CObject *param_2,int param_3,int param_4,undefined **param_5)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  LPWSTR lpString1;
  CObject *pCVar4;
  LPCWSTR lpString2;
  int iVar5;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0;
  if ((param_2 != (CObject *)0x0) && (param_1 != 0)) {
    iVar1 = 1;
    iVar5 = 0;
    do {
      if (iVar1 == param_3) {
        if (iVar5 != -1) {
          piVar2 = FUN_10005e30((int *)(param_4 + -0x10));
          lpString2 = (LPCWSTR)(piVar2 + 4);
          local_8._0_1_ = 1;
          ppuVar3 = param_5;
          if (param_5 == (undefined **)0x0) {
            ppuVar3 = &PTR_1011d390;
          }
          local_14[0] = lpString2;
          FUN_10006ce0(&param_3,(short *)ppuVar3);
          local_8 = CONCAT31(local_8._1_3_,2);
          if ((DAT_101689e8 != 0) && (*(int *)(iVar5 * 0x34 + 4 + DAT_101689e8) != 0)) {
            if (*(int *)(param_3 + -0xc) == 0) {
              SendMessageW(*(HWND *)(param_2 + 0x20),0x421,1,param_3);
            }
            else {
              SendMessageW(*(HWND *)(param_2 + 0x20),0x421,1,param_4);
              FUN_10007c90(local_14,&param_3);
              lpString2 = local_14[0];
            }
          }
          lpString1 = _calloc(*(int *)(lpString2 + -6) + 1,2);
          *(LPWSTR *)(param_1 + 0x24) = lpString1;
          if (lpString1 != (LPWSTR)0x0) {
            lstrcpyW(lpString1,lpString2);
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolTipCtrl_1013a824,param_2);
            if (pCVar4 != (CObject *)0x0) {
              FUN_10005e30((int *)(param_3 + -0x10));
              (**(code **)(*(int *)pCVar4 + 0x16c))();
            }
          }
          FUN_10001030((undefined4 *)(param_3 + -0x10));
          FUN_10001030((undefined4 *)(lpString2 + -8));
        }
        break;
      }
      iVar1 = iVar1 * 2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb);
  }
  FUN_10001030((undefined4 *)(param_4 + -0x10));
  return;
}

