// rea decompile_all
// name: CDockingManager::~CDockingManager
// address: 0x100411f1
// body: available
// range: 0x100411f1-0x100412f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CDockingManager::~CDockingManager(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingManager::~CDockingManager(CDockingManager *this)

{
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x1b8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b8) + 4))(1);
    *(undefined4 *)(this + 0x1b8) = 0;
  }
  FUN_10001030((undefined4 *)(*(int *)(this + 0x1ec) + -0x10));
  *(undefined ***)(this + 0x1bc) = CMap<unsigned_int,unsigned_int,CPane*,CPane*>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x1bc));
  *(undefined ***)(this + 0x19c) = CList<HWND__*,HWND__*&>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x19c));
  *(undefined ***)(this + 0x180) = CList<HWND__*,HWND__*&>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x180));
  *(undefined ***)(this + 0x164) = CList<HWND__*,HWND__*&>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x164));
  FUN_1001e259((CObList *)(this + 0x134));
  FUN_1001e259((CObList *)(this + 200));
  *(undefined ***)(this + 0xac) =
       CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::vftable;
  CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::RemoveAll
            ((CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)
             (this + 0xac));
  FUN_1001e259((CObList *)(this + 0x90));
  FUN_1001e259((CObList *)(this + 0x74));
  FUN_1001e259((CObList *)(this + 0x58));
  FUN_1001e259((CObList *)(this + 0x3c));
  FUN_1001e259((CObList *)(this + 0x20));
  return;
}

