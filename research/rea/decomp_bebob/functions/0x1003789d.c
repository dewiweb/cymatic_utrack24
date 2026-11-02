// rea decompile_all
// name: CCommandManager::EnableMenuItemImage
// address: 0x1003789d
// body: available
// range: 0x1003789d-0x10037906 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CCommandManager::EnableMenuItemImage(unsigned int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CCommandManager::EnableMenuItemImage(CCommandManager *this,uint param_1,int param_2,int param_3)

{
  __POSITION *p_Var1;
  int *piVar2;
  
  p_Var1 = CList<unsigned_int,unsigned_int>::Find
                     ((CList<unsigned_int,unsigned_int> *)(this + 0x58),param_1,(__POSITION *)0x0);
  if (param_2 == 0) {
    CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
              ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)(this + 0x74),(CWnd *)param_1);
    if (p_Var1 == (__POSITION *)0x0) {
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0x58),(HWND__ *)param_1);
    }
  }
  else {
    if (p_Var1 != (__POSITION *)0x0) {
      CList<unsigned_int,unsigned_int&>::RemoveAt
                ((CList<unsigned_int,unsigned_int&> *)(this + 0x58),p_Var1);
    }
    if (param_3 < 0) {
      CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
                ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)(this + 0x74),(CWnd *)param_1);
    }
    else {
      piVar2 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                         ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x74),param_1);
      *piVar2 = param_3;
    }
  }
  return;
}

