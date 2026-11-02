// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog
// address: 0x10096bb0
// body: available
// range: 0x10096bb0-0x10096d48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog(CMFCToolBarsCustomizeDialog *this)

{
  CObList *this_00;
  undefined **ppuVar1;
  CObject *pCVar2;
  CPropertyPage *pCVar3;
  CObList *local_1c;
  __POSITION *local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  *(undefined ***)this = vftable;
  local_18 = (__POSITION *)-(uint)(*(int *)(this + 0xd8) != 0);
  local_8 = 5;
  while (local_18 != (__POSITION *)0x0) {
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar1);
    local_8 = CONCAT31(local_8._1_3_,6);
    CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
    ::GetNextAssoc((CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
                    *)(this + 0xcc),&local_18,
                   (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14,&local_1c);
    this_00 = local_1c;
    while (*(int *)(this_00 + 0xc) != 0) {
      pCVar2 = CObList::RemoveHead(this_00);
      if (pCVar2 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar2 + 4))(1);
      }
    }
    (**(code **)(*(int *)this_00 + 4))(1);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  }
  CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
  ::RemoveAll((CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
               *)(this + 0xcc));
  if (*(int **)(this + 0x104) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x104) + 4))(1);
  }
  if (*(int **)(this + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x108) + 4))(1);
  }
  if (*(int **)(this + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x10c) + 4))(1);
  }
  if (*(int **)(this + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x110) + 4))(1);
  }
  if (*(int **)(this + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x114) + 4))(1);
  }
  if (*(int **)(this + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x118) + 4))(1);
  }
  if (*(int **)(this + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x11c) + 4))(1);
  }
  while (*(int *)(this + 300) != 0) {
    pCVar3 = CList<CPropertyPage*,CPropertyPage*>::RemoveHead
                       ((CList<CPropertyPage*,CPropertyPage*> *)(this + 0x120));
    if (pCVar3 != (CPropertyPage *)0x0) {
      (**(code **)(*(int *)pCVar3 + 4))(1);
    }
  }
  local_8._0_1_ = 4;
  CMFCButton::~CMFCButton((CMFCButton *)(this + 0x150));
  FUN_10001030((undefined4 *)(*(int *)(this + 0x13c) + -0x10));
  local_8._0_1_ = 2;
  *(undefined ***)(this + 0x120) = CList<CPropertyPage*,CPropertyPage*>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x120));
  local_8._0_1_ = 1;
  FUN_100541e5((undefined4 *)(this + 0xe8));
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined ***)(this + 0xcc) =
       CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CObList*,CObList*>
       ::vftable;
  CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
  ::RemoveAll((CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
               *)(this + 0xcc));
  local_8 = 0xffffffff;
  CPropertySheet::~CPropertySheet((CPropertySheet *)this);
  return;
}

