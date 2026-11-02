// rea decompile_all
// name: CMFCToolBarMenuButton::CreateFromMenu
// address: 0x1007d942
// body: available
// range: 0x1007d942-0x1007da8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::CreateFromMenu(struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarMenuButton::CreateFromMenu(CMFCToolBarMenuButton *this,HMENU__ *param_1)

{
  int iVar1;
  BOOL BVar2;
  CMenu *this_00;
  UINT UVar3;
  int iVar4;
  CRuntimeClass *this_01;
  CObject *pCVar5;
  UINT UVar6;
  uint uVar7;
  HMENU pHVar8;
  CMenu *pCVar9;
  undefined4 uVar10;
  
  while (*(int *)(this + 0x7c) != 0) {
    pCVar5 = CObList::RemoveHead((CObList *)(this + 0x70));
    if (pCVar5 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar5 + 4))(1);
    }
  }
  BVar2 = IsMenu(param_1);
  if (BVar2 != 0) {
    this_00 = CMenu::FromHandle(param_1);
    if (this_00 != (CMenu *)0x0) {
      UVar3 = GetMenuDefaultItem(param_1,0,1);
      iVar4 = GetMenuItemCount(*(HMENU *)(this_00 + 4));
      param_1 = (HMENU__ *)0x0;
      if (0 < iVar4) {
        do {
          this_01 = (CRuntimeClass *)(*(code *)**(undefined4 **)this)();
          pCVar5 = CRuntimeClass::CreateObject(this_01);
          UVar6 = GetMenuItemID(*(HMENU *)(this_00 + 4),(int)param_1);
          *(UINT *)(pCVar5 + 0x20) = UVar6;
          CMenu::GetMenuStringW
                    (this_00,(uint)param_1,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (pCVar5 + 0x2c),0x400);
          if (*(UINT *)(pCVar5 + 0x20) == 0xffffffff) {
            if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
              iVar1 = *(int *)pCVar5;
              uVar7 = CMenuTearOffManager::Parse
                                (DAT_101697f4,
                                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)(pCVar5 + 0x2c));
              (**(code **)(iVar1 + 0xf4))(uVar7);
            }
            pHVar8 = GetSubMenu(*(HMENU *)(this_00 + 4),(int)param_1);
            pCVar9 = CMenu::FromHandle(pHVar8);
            uVar10 = 0;
            if (pCVar9 != (CMenu *)0x0) {
              uVar10 = *(undefined4 *)(pCVar9 + 4);
            }
            (**(code **)(*(int *)pCVar5 + 0xcc))(uVar10);
          }
          else if (*(UINT *)(pCVar5 + 0x20) == UVar3) {
            *(undefined4 *)(pCVar5 + 0x98) = 1;
          }
          UVar6 = GetMenuState(*(HMENU *)(this_00 + 4),(UINT)param_1,0x400);
          if ((UVar6 & 0x40) != 0) {
            *(uint *)(pCVar5 + 0x24) = *(uint *)(pCVar5 + 0x24) | 0x20000000;
          }
          if ((UVar6 & 3) != 0) {
            *(uint *)(pCVar5 + 0x24) = *(uint *)(pCVar5 + 0x24) | 0x40000;
          }
          CObList::AddTail((CObList *)(this + 0x70),pCVar5);
          param_1 = (HMENU__ *)((int)&param_1->unused + 1);
        } while ((int)param_1 < iVar4);
      }
    }
  }
  return;
}

