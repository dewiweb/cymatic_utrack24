// rea decompile_all
// name: CMFCPropertyGridProperty::AddTerminalProp
// address: 0x1004991f
// body: available
// range: 0x1004991f-0x100499af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridProperty::AddTerminalProp(class CList<class
   CMFCPropertyGridProperty *,class CMFCPropertyGridProperty *> &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridProperty::AddTerminalProp
          (CMFCPropertyGridProperty *this,
          CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *param_1)

{
  undefined4 *puVar1;
  __POSITION *p_Var2;
  bool bVar3;
  int iVar4;
  __POSITION *p_Var5;
  undefined4 *puVar6;
  
  if ((*(int *)(this + 0x58) == 0) || (*(int *)(this + 0x68) != 0)) {
    bVar3 = false;
    p_Var5 = *(__POSITION **)(param_1 + 4);
    do {
      if (p_Var5 == (__POSITION *)0x0) break;
      p_Var2 = *(__POSITION **)p_Var5;
      iVar4 = (**(code **)(**(int **)(this + 0xc0) + 0x1b0))(*(undefined4 *)(p_Var5 + 8),this);
      if (0 < iVar4) {
        CList<unsigned_long,unsigned_long>::InsertBefore
                  ((CList<unsigned_long,unsigned_long> *)param_1,p_Var5,(ulong)this);
        bVar3 = true;
      }
      p_Var5 = p_Var2;
    } while (!bVar3);
    if (!bVar3) {
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)param_1,(HWND__ *)this);
    }
  }
  else {
    SetRectEmpty((LPRECT)(this + 0x2c));
    puVar6 = *(undefined4 **)(this + 0xcc);
    while (puVar6 != (undefined4 *)0x0) {
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      AddTerminalProp((CMFCPropertyGridProperty *)*puVar1,param_1);
    }
  }
  return;
}

