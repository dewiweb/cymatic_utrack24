// rea decompile_all
// name: CMFCOutlookBarPane::Dock
// address: 0x100c08c9
// body: available
// range: 0x100c08c9-0x100c099f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCOutlookBarPane::Dock(class CBasePane *,struct tagRECT const
   *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCOutlookBarPane::Dock
          (CMFCOutlookBarPane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  int *piVar1;
  undefined **ppuVar2;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100c08d5;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x224))(0);
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar2);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  iVar5 = 1;
  if (param_3 == 2) {
    param_1 = (CBasePane *)CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x1c94));
LAB_100c0920:
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBar_10135f0e_2_101623c0,
                                (CObject *)param_1);
    if (pCVar3 != (CObject *)0x0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x178))(this,0,0);
      }
      (**(code **)(*(int *)pCVar3 + 0x3b8))(this,1,1,1);
      piVar1 = (int *)(**(code **)(*(int *)pCVar3 + 0x3a4))();
      iVar4 = (**(code **)(*piVar1 + 0x1a8))();
      (**(code **)(*piVar1 + 0x1bc))(iVar4 + -1,local_14);
      (**(code **)(*piVar1 + 0x210))(iVar4 + -1);
      goto LAB_100c0934;
    }
  }
  else if (param_3 == 1) goto LAB_100c0920;
  iVar5 = 0;
LAB_100c0934:
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return iVar5;
}

