// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawLabel
// address: 0x100dbe95
// body: available
// range: 0x100dbe95-0x100dbfe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolTipCtrl::OnDrawLabel(class CDC *,class CRect,int)
   
   Library: Visual Studio 2010 Release */

int * __thiscall
CMFCToolTipCtrl::OnDrawLabel
          (undefined4 param_1_00,int *param_1,CDC *param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,int param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_20 [4];
  int local_1c;
  CWnd *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100dbea1;
  *param_1 = 0;
  param_1[1] = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = 0;
  CWnd::GetWindowTextW
            (local_18,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14
            );
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L"\t",
             L"    ");
  if ((*(int *)(local_18 + 0xa8) == 0) ||
     (local_1c = 1, *(int *)(*(int *)(local_18 + 0xd8) + -0xc) == 0)) {
    local_1c = 0;
  }
  if ((*(int *)(local_18 + 0xb0) == 0) || (puVar2 = &DAT_10166bc4, local_1c == 0)) {
    puVar2 = &DAT_10166bbc;
  }
  uVar3 = (**(code **)(*(int *)param_3 + 0x28))(puVar2);
  iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     L'\n',0);
  if (iVar4 < 0) {
    if (param_8 == 0) {
      uVar6 = 0x120;
      if (local_1c == 0) {
        uVar6 = 0x124;
      }
      if (*(int *)(local_18 + 0x9c) != 0) {
        uVar6 = uVar6 | 0x800;
      }
      iVar4 = (**(code **)(*(int *)param_3 + 0x68))
                        (local_14[0],*(undefined4 *)(local_14[0] + -0xc),&param_4,uVar6);
      param_1[1] = iVar4;
      *param_1 = param_6 - param_4;
      goto LAB_100dbfca;
    }
    piVar5 = (int *)CDC::GetTextExtent(param_3,local_20);
    *param_1 = *piVar5;
    iVar4 = piVar5[1];
  }
  else {
    uVar6 = 0x800;
    if (param_8 != 0) {
      uVar6 = 0xc00;
    }
    if (*(int *)(local_18 + 0x9c) != 0) {
      uVar6 = uVar6 | 0x800;
    }
    iVar4 = (**(code **)(*(int *)param_3 + 0x68))
                      (local_14[0],*(undefined4 *)(local_14[0] + -0xc),&param_4,uVar6);
    *param_1 = param_6 - param_4;
  }
  param_1[1] = iVar4;
LAB_100dbfca:
  (**(code **)(*(int *)param_3 + 0x28))(uVar3);
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return param_1;
}

