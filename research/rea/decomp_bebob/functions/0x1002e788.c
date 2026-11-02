// rea decompile_all
// name: CMFCToolBar::RemoveButton
// address: 0x1002e788
// body: available
// range: 0x1002e788-0x1002e8e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::RemoveButton(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::RemoveButton(CMFCToolBar *this,int param_1)

{
  int *piVar1;
  __POSITION *p_Var2;
  __POSITION *p_Var3;
  int iVar4;
  int iVar5;
  
  p_Var3 = CObList::FindIndex((CObList *)(this + 0xbc8),param_1);
  if ((p_Var3 == (__POSITION *)0x0) ||
     ((param_1 == *(int *)(this + 0xbd4) + -1 && (*(int *)(this + 0xca0) != 0)))) {
    iVar4 = 0;
  }
  else {
    piVar1 = *(int **)(p_Var3 + 8);
    CObList::RemoveAt((CObList *)(this + 0xbc8),p_Var3);
    (**(code **)(*piVar1 + 0x58))();
    (**(code **)(*piVar1 + 4))(1);
    iVar4 = *(int *)(this + 0xb80);
    if (param_1 == iVar4) {
      *(undefined4 *)(this + 0xb80) = 0xffffffff;
    }
    else if ((param_1 < iVar4) && (-1 < iVar4)) {
      *(int *)(this + 0xb80) = iVar4 + -1;
    }
    iVar4 = *(int *)(this + 0xb78);
    if (param_1 == iVar4) {
      *(undefined4 *)(this + 0xb78) = 0xffffffff;
    }
    else if ((param_1 < iVar4) && (-1 < iVar4)) {
      *(int *)(this + 0xb78) = iVar4 + -1;
    }
    iVar4 = *(int *)(this + 0xb7c);
    if (param_1 == iVar4) {
      *(undefined4 *)(this + 0xb7c) = 0xffffffff;
      (**(code **)(*(int *)this + 0x3b0))(0xffffffff);
    }
    else if ((param_1 < iVar4) && (-1 < iVar4)) {
      *(int *)(this + 0xb7c) = iVar4 + -1;
      (**(code **)(*(int *)this + 0x3b0))(iVar4 + -1);
    }
    p_Var3 = *(__POSITION **)(this + 0xbd0);
    if (p_Var3 != (__POSITION *)0x0) {
      if (*(int *)(this + 0xca0) == *(int *)(p_Var3 + 8)) {
        p_Var3 = *(__POSITION **)(p_Var3 + 4);
      }
      if (p_Var3 != (__POSITION *)0x0) {
        while( true ) {
          piVar1 = *(int **)(p_Var3 + 8);
          p_Var2 = *(__POSITION **)(p_Var3 + 4);
          if ((p_Var2 == (__POSITION *)0x0) || ((*(byte *)(piVar1 + 9) & 1) == 0)) break;
          CObList::RemoveAt((CObList *)(this + 0xbc8),p_Var3);
          (**(code **)(*piVar1 + 4))(1);
          p_Var3 = p_Var2;
        }
      }
    }
    if ((0 < param_1) && (param_1 < *(int *)(this + 0xbd4))) {
      iVar4 = FUN_100261ef(this,param_1 + -1);
      iVar5 = FUN_100261ef(this,param_1);
      if (((*(byte *)(iVar4 + 0x24) & 1) != 0) && ((*(byte *)(iVar5 + 0x24) & 1) != 0)) {
        (**(code **)(*(int *)this + 0x34c))(param_1);
      }
    }
    FUN_1002de91((int)this);
    iVar4 = 1;
  }
  return iVar4;
}

