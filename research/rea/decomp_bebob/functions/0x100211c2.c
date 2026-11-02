// rea decompile_all
// name: SetTaskbarTabText
// address: 0x100211c2
// body: available
// range: 0x100211c2-0x10021311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMDIChildWndEx::SetTaskbarTabText(char const *)
    protected: virtual void __thiscall CMDIChildWndEx::SetTaskbarTabText(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall SetTaskbarTabText(void *this,wchar_t *param_1)

{
  undefined1 uVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CObject *this_00;
  ulong uVar4;
  undefined **ppuVar5;
  CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *pCVar6;
  undefined4 *puVar7;
  int local_20;
  int local_1c;
  int local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100211ce;
  iVar2 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled(this);
  if (iVar2 != 0) {
    iVar2 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs(this);
    if (iVar2 != 0) {
      pCVar3 = CWnd::GetTopLevelFrame(this);
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar3
                                  );
      if (this_00 != (CObject *)0x0) {
        uVar4 = CWnd::GetExStyle((CWnd *)this_00);
        if ((uVar4 & 0x8000) == 0) {
          CWnd::SetWindowTextW((CWnd *)((int)this + 0x43c),param_1);
        }
        else {
          GetTitle(this_00,&local_1c);
          local_8 = 0;
          ppuVar5 = FUN_1000ad47();
          FUN_10005e00(local_14,(int *)ppuVar5);
          local_8._0_1_ = 1;
          FUN_10006ce0(&local_18,param_1);
          local_8._0_1_ = 2;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 2;
          if ((uVar4 & 0x4000) == 0) {
            local_8._0_1_ = uVar1;
            pCVar6 = (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                      *)ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_20,(wchar_t *)&local_1c);
            local_8._0_1_ = 5;
            puVar7 = (undefined4 *)
                     ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                     *)&param_1,pCVar6);
            local_8._0_1_ = 6;
          }
          else {
            pCVar6 = (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                      *)ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_20,(wchar_t *)&local_18);
            local_8._0_1_ = 3;
            puVar7 = (undefined4 *)
                     ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                     *)&param_1,pCVar6);
            local_8._0_1_ = 4;
          }
          FUN_10007c90(local_14,puVar7);
          FUN_10001030((undefined4 *)(param_1 + -8));
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_10001030((undefined4 *)(local_20 + -0x10));
          CWnd::SetWindowTextW((CWnd *)((int)this + 0x43c),local_14[0]);
          FUN_10001030((undefined4 *)(local_18 + -0x10));
          FUN_10001030((undefined4 *)(local_14[0] + -8));
          FUN_10001030((undefined4 *)(local_1c + -0x10));
        }
      }
    }
  }
  return;
}

