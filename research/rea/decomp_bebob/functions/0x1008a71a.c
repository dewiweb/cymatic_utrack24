// rea decompile_all
// name: CTooltipManager::DeleteToolTip
// address: 0x1008a71a
// body: available
// range: 0x1008a71a-0x1008a795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __stdcall CTooltipManager::DeleteToolTip(class CToolTipCtrl * &)
   
   Library: Visual Studio 2010 Release */

void CTooltipManager::DeleteToolTip(CToolTipCtrl **param_1)

{
  CToolTipCtrl *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  __POSITION *p_Var4;
  uint uVar5;
  
  pCVar1 = *param_1;
  if (pCVar1 != (CToolTipCtrl *)0x0) {
    if (*(int *)(pCVar1 + 0x20) != 0) {
      pHVar2 = GetParent(*(HWND *)(pCVar1 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 == (CWnd *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(pCVar3 + 0x20);
      }
      if ((DAT_101689e8 != 0) && (uVar5 != 0)) {
        p_Var4 = CList<unsigned_int,unsigned_int>::Find
                           ((CList<unsigned_int,unsigned_int> *)(DAT_101689e8 + 0x26c),uVar5,
                            (__POSITION *)0x0);
        if (p_Var4 != (__POSITION *)0x0) {
          CList<unsigned_int,unsigned_int&>::RemoveAt
                    ((CList<unsigned_int,unsigned_int&> *)(DAT_101689e8 + 0x26c),p_Var4);
        }
      }
      (**(code **)(*(int *)*param_1 + 0x60))();
    }
    if (*param_1 != (CToolTipCtrl *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))(1);
    }
    *param_1 = (CToolTipCtrl *)0x0;
  }
  return;
}

