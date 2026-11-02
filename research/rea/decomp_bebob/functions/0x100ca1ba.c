// rea decompile_all
// name: CPaneContainer::ResizePane
// address: 0x100ca1ba
// body: available
// range: 0x100ca1ba-0x100ca25e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::ResizePane(int,class CPane *,class
   CPaneContainer *,int,int,void * &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneContainer::ResizePane
          (CPaneContainer *this,int param_1,CPane *param_2,CPaneContainer *param_3,int param_4,
          int param_5,void **param_6)

{
  undefined1 local_20 [8];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_2 == (CPane *)0x0) {
    if (param_3 != (CPaneContainer *)0x0) {
      (**(code **)(*(int *)param_3 + 0x34))(param_1,param_4,param_5,1,param_6);
    }
  }
  else {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    ::GetWindowRect(*(HWND *)(param_2 + 0x20),&local_18);
    if (param_4 == 0) {
      if (param_5 == 0) {
        local_18.left = local_18.left + param_1;
      }
      else {
        local_18.right = local_18.right + param_1;
      }
    }
    else if (param_5 == 0) {
      local_18.top = local_18.top - param_1;
    }
    else {
      local_18.bottom = local_18.bottom + param_1;
    }
    (**(code **)(*(int *)param_2 + 0x2a8))
              (local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,0,param_6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

