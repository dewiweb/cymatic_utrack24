// rea decompile_all
// name: CDockingPanesRow::ShowPane
// address: 0x1008f3ff
// body: available
// range: 0x1008f3ff-0x1008f4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingPanesRow::ShowPane(class CPane *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockingPanesRow::ShowPane(CDockingPanesRow *this,CPane *param_1,int param_2,int param_3)

{
  __POSITION *p_Var1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  p_Var1 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var1 != (__POSITION *)0x0) {
    CWnd::ShowWindow((CWnd *)param_1,-(uint)(param_2 != 0) & 5);
    (**(code **)(*(int *)this + 0x44))(param_3);
    if (param_2 == 0) {
      FUN_1008dd5a((int *)this);
    }
    else {
      if (param_3 != 0) goto LAB_1008f4a7;
      (**(code **)(*(int *)param_1 + 0x208))();
      (**(code **)(*(int *)this + 0x28))(param_1);
    }
    if (param_3 == 0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      GetClientRect(this,(CRect *)&local_18);
      (**(code **)(**(int **)(this + 0x44) + 0x294))(&local_18);
      (**(code **)(*(int *)this + 0x3c))(&local_18,0xffffffff,0,0);
    }
  }
LAB_1008f4a7:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

