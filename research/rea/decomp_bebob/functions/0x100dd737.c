// rea decompile_all
// name: CSmartDockingHighlighterWnd::Create
// address: 0x100dd737
// body: available
// range: 0x100dd737-0x100dd7d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingHighlighterWnd::Create(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CSmartDockingHighlighterWnd::Create(CSmartDockingHighlighterWnd *this,CWnd *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  tagRECT *ptVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(CWnd **)(this + 0x74) = param_1;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_1c = 0x80000;
  if (DAT_10166c4c < 9) {
    local_1c = 0;
  }
  iVar1 = *(int *)this;
  uVar7 = 0;
  uVar6 = 0;
  ptVar5 = &local_18;
  uVar4 = 0x80000000;
  ppuVar3 = &PTR_1011d390;
  pcVar2 = GetSmartDockingWndClassName<0>();
  (**(code **)(iVar1 + 0x58))(local_1c,pcVar2,ppuVar3,uVar4,ptVar5,param_1,uVar6,uVar7);
  if (local_1c == 0x80000) {
    SetLayeredWindowAttributes(*(HWND *)(this + 0x20),0,'d',2);
  }
  *(undefined4 *)(this + 0xa4) = DAT_10168160;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

