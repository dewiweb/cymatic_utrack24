// rea decompile_all
// name: CMFCToolBar::StretchPane
// address: 0x1002b6f9
// body: available
// range: 0x1002b6f9-0x1002b7d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolBar::StretchPane(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::StretchPane(CMFCToolBar *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_stack_0000000c;
  undefined1 local_20 [8];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xca0) != 0) {
    *(undefined4 *)(*(int *)(this + 0xca0) + 0xfc) = 0;
  }
  uVar1 = (**(code **)(*(int *)this + 0x418))();
  *(undefined4 *)(this + 0xb74) = uVar1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  iVar2 = (**(code **)(*(int *)this + 0x160))();
  if (iVar2 == 0) {
    iVar2 = local_18.right - local_18.left;
  }
  else {
    iVar2 = local_18.bottom - local_18.top;
  }
  SizeToolBar(this,iVar2 + param_2,in_stack_0000000c);
  iVar2 = *(int *)this;
  iVar3 = (**(code **)(iVar2 + 0x160))();
  puVar4 = (undefined4 *)(**(code **)(iVar2 + 0x2a4))(local_20,iVar3 == 0);
  *(undefined4 *)param_1 = *puVar4;
  *(undefined4 *)(param_1 + 4) = puVar4[1];
  if (*(int *)(this + 0xac) == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x160))();
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar1 = *(undefined4 *)param_1;
    }
    *(undefined4 *)(this + 300) = uVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

