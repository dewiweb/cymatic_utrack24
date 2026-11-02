// rea decompile_all
// name: CMFCPopupMenu::Initialize
// address: 0x1005a466
// body: available
// range: 0x1005a466-0x1005a670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::Initialize(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::Initialize(CMFCPopupMenu *this)

{
  ANIMATION_TYPE AVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_10 [2];
  int local_8;
  
  if (DAT_10166c20 != 0) {
    DAT_10168438 = 0;
  }
  *(undefined4 *)(this + 0xea8) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x120) = 1;
  *(undefined4 *)(this + 0xeac) = 1;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0xed8) = 0;
  *(undefined4 *)(this + 0xedc) = 0;
  *(undefined4 *)(this + 0xec4) = 0;
  AVar1 = GetAnimationType(0);
  *(undefined4 *)(this + 0xf20) = 0xffffffff;
  *(undefined4 *)(this + 0xec8) = 0xffffffff;
  *(uint *)(this + 0xee8) = (uint)(AVar1 == 0);
  *(undefined4 *)(this + 0xeec) = 0;
  *(undefined4 *)(this + 0xef0) = 0;
  *(undefined4 *)(this + 0xef4) = 0;
  *(undefined4 *)(this + 0xec0) = 0;
  *(undefined4 *)(this + 0xebc) = 0;
  *(undefined4 *)(this + 0xecc) = 0;
  *(undefined4 *)(this + 0xed4) = 0;
  SetRectEmpty((LPRECT)(this + 0xef8));
  SetRectEmpty((LPRECT)(this + 0xf08));
  pCVar2 = CMFCVisualManager::GetInstance();
  local_8 = (**(code **)(*(int *)pCVar2 + 0x2e8))();
  local_8 = local_8 * 2;
  iVar3 = FUN_10037b18(local_10);
  iVar3 = *(int *)(iVar3 + 4);
  *(undefined4 *)(this + 0xf18) = 0;
  *(int *)(this + 0xf1c) = iVar3 + local_8;
  *(undefined4 *)(this + 0xee0) = 1;
  *(undefined4 *)(this + 0xee4) = 1;
  if (((DAT_101611f4 == 0) || (DAT_10166e54 != 0)) || (DAT_10166c4c < 9)) {
    uVar4 = 0;
  }
  else {
    pCVar2 = CMFCVisualManager::GetInstance();
    uVar4 = *(undefined4 *)(pCVar2 + 0x98);
  }
  *(undefined4 *)(this + 0xfc0) = uVar4;
  *(undefined4 *)(this + 0xf24) = 0;
  AVar1 = GetAnimationType(0);
  if ((AVar1 == 3) && (DAT_10166c4c < 9)) {
    DAT_10168438 = 0;
    *(undefined4 *)(this + 0xee8) = 1;
  }
  *(undefined4 *)(this + 0xfd8) = 0;
  *(undefined4 *)(this + 0xfdc) = 0;
  SetRectEmpty((LPRECT)(this + 0xfe0));
  *(undefined4 *)(this + 0x1090) = 0;
  *(undefined4 *)(this + 0xea4) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0xeb0) = 0;
  *(undefined4 *)(this + 0xeb8) = 0;
  *(undefined4 *)(this + 0x10b0) = 0;
  *(undefined4 *)(this + 0x10b8) = 2;
  *(undefined4 *)(this + 0x10b4) = 0;
  *(undefined4 *)(this + 0x10bc) = 0;
  *(undefined4 *)(this + 0x10c0) = 0;
  *(undefined4 *)(this + 0xed0) = 0;
  *(undefined4 *)(this + 0x108c) = 0;
  *(undefined4 *)(this + 0x1094) = 0;
  SetRectEmpty((LPRECT)(this + 0x10a0));
  *(undefined4 *)(this + 0x1080) = 0;
  *(undefined4 *)(this + 0x1084) = 0;
  *(undefined4 *)(this + 0x1088) = 0;
  *(undefined4 *)(this + 0x109c) = 0;
  *(undefined4 *)(this + 0xeb4) = 0;
  *(undefined4 *)(this + 0xfd4) = 0;
  *(undefined4 *)(this + 0x1098) = 0;
  return;
}

