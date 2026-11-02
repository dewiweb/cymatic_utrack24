// rea decompile_all
// name: FUN_10077f0f
// address: 0x10077f0f
// body: available
// range: 0x10077f0f-0x10078171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007816d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * __thiscall FUN_10077f0f(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  HMENU pHVar2;
  int *piVar3;
  int iVar4;
  undefined **ppuVar5;
  DWORD *pDVar6;
  BOOL BVar7;
  int iVar8;
  HWND pHVar9;
  uint uIDNewItem;
  undefined **local_30;
  HMENU local_2c;
  int *local_28;
  int local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  DWORD local_18;
  LPCWSTR local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  puVar1 = &LAB_101134c7;
  if (DAT_101688d8 != (int *)0x0) {
    local_30 = CMenu::vftable;
    local_2c = (HMENU)0x0;
    local_8 = 0;
    local_28 = this;
    pHVar2 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_30,pHVar2);
    local_24 = 0;
    if (0 < *(int *)((int)this + 0x9c)) {
      do {
        if ((local_24 < 0) || (*(int *)((int)this + 0x90) <= local_24)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar8 = *(int *)(*(int *)((int)this + 0x8c) + local_24 * 4);
        if (*(int *)(iVar8 + 0x34) != 0) {
          uIDNewItem = -local_24 - 100;
          piVar3 = FUN_10005e30((int *)(*(int *)(iVar8 + 4) + -0x10));
          local_14[0] = (LPCWSTR)(piVar3 + 4);
          local_8._0_1_ = 1;
          FUN_10006ce0(&local_20,(short *)&DAT_1012bb58);
          local_8 = CONCAT31(local_8._1_3_,2);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     L"&&",local_20);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     L"&",L"&&");
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     local_20,L"&&");
          local_18 = 0;
          iVar4 = GetMenuItemCount(local_2c);
          if (0 < iVar4) {
            do {
              ppuVar5 = FUN_1000ad47();
              FUN_10005e00(&local_1c,(int *)ppuVar5);
              local_8._0_1_ = 3;
              CMenu::GetMenuStringW
                        ((CMenu *)&local_30,local_18,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_1c,0x400);
              iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      CompareNoCase((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                     *)local_14,local_1c);
              if (iVar4 < 0) {
                InsertMenuW(local_2c,local_18,0x400,uIDNewItem,local_14[0]);
                local_8 = CONCAT31(local_8._1_3_,2);
                FUN_10001030((undefined4 *)(local_1c + -8));
                goto LAB_10078053;
              }
              local_8 = CONCAT31(local_8._1_3_,2);
              FUN_10001030((undefined4 *)(local_1c + -8));
              local_18 = local_18 + 1;
              iVar4 = GetMenuItemCount(local_2c);
            } while ((int)local_18 < iVar4);
          }
          AppendMenuW(local_2c,0,uIDNewItem,local_14[0]);
LAB_10078053:
          iVar4 = *(int *)(iVar8 + 0x20);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
            local_18 = SendMessageW(*(HWND *)(iVar4 + 0x20),0x7f,0,0);
            if (local_18 == 0) {
              if (*(int *)(iVar8 + 0x20) == 0) {
                pHVar9 = (HWND)0x0;
              }
              else {
                pHVar9 = *(HWND *)(*(int *)(iVar8 + 0x20) + 0x20);
              }
              local_18 = GetClassLongW(pHVar9,-0x22);
            }
            pDVar6 = (DWORD *)CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                        ((CMap<unsigned_int,unsigned_int,int,int> *)
                                         &PTR_vftable_101612d0,uIDNewItem);
            *pDVar6 = local_18;
          }
          FUN_10001030((undefined4 *)(local_20 + -8));
          local_8 = local_8 & 0xffffff00;
          FUN_10001030((undefined4 *)(local_14[0] + -8));
          this = local_28;
        }
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)((int)this + 0x9c));
    }
    pHVar9 = *(HWND *)((int)this + 0x20);
    local_28 = (int *)(**(code **)(*DAT_101688d8 + 0x14))(local_2c,param_1,param_2,this,0);
    BVar7 = IsWindow(pHVar9);
    if (BVar7 != 0) {
      iVar8 = -100 - (int)local_28;
      if ((-1 < iVar8) && (iVar8 < *(int *)((int)this + 0x9c))) {
        *(int *)((int)this + 0x200) = 1;
        (**(code **)(*(int *)this + 0x210))(iVar8);
        *(int *)((int)this + 0x200) = 0;
      }
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)&PTR_vftable_101612d0);
    }
    local_8 = 0xffffffff;
    local_30 = CMenu::vftable;
    puVar1 = (undefined1 *)CMenu::DestroyMenu((CMenu *)&local_30);
  }
  return puVar1;
}

