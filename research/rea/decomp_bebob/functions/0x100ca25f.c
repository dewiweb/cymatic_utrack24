// rea decompile_all
// name: CPaneContainer::Move
// address: 0x100ca25f
// body: available
// range: 0x100ca25f-0x100ca3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::Move(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::Move(CPaneContainer *this,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  if (*(int *)(this + 4) != 0) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_18);
    (**(code **)(**(int **)(this + 4) + 0x234))(0,param_2,param_3,0,0,0x15,0);
  }
  if (*(int **)(this + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x10) + 0xc))(&local_18,0);
    (**(code **)(**(int **)(this + 0x10) + 0x30))(param_2,param_3);
  }
  local_2c = local_18.bottom - local_18.top;
  iVar2 = local_18.right - local_18.left;
  if (*(int **)(this + 0xc) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0xc) + 0x160))();
    if (iVar1 == 0) {
      (**(code **)(**(int **)(this + 0xc) + 0x234))(0,param_2 + iVar2,param_3,0,0,0x15,0);
      iVar2 = iVar2 + *(int *)(*(int *)(this + 0xc) + 0x108);
      local_2c = 0;
    }
    else {
      (**(code **)(**(int **)(this + 0xc) + 0x234))(0,param_2,param_3 + local_2c);
      local_2c = local_2c + *(int *)(*(int *)(this + 0xc) + 0x108);
      iVar2 = 0;
    }
  }
  if (*(int **)(this + 8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 8) + 0x234))(0,param_2 + iVar2,param_3 + local_2c,0,0,0x15,0);
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 0x30))(iVar2 + param_2,local_2c + param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

