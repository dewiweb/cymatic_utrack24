// rea decompile_all
// name: CMFCVisualManager::OnDrawMiniFrameBorder
// address: 0x1003063b
// body: available
// range: 0x1003063b-0x1003073a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMiniFrameBorder(class CDC *,class
   CPaneFrameWnd *,class CRect,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawMiniFrameBorder(undefined4 param_1_00,CDC *param_1,int param_2)

{
  code *pcVar1;
  int in_stack_00000020;
  int in_stack_00000024;
  ulong uVar2;
  
  if (*(int *)(param_2 + 0x17c) == 1) {
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,0x7f,DAT_10166af8);
    pcVar1 = InflateRect_exref;
    InflateRect((LPRECT)&stack0x0000000c,-1,-1);
    uVar2 = 0x7f;
  }
  else {
    if (*(int *)(param_2 + 0x17c) == 2) {
      CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,0x7f0000,DAT_10166af8);
      pcVar1 = InflateRect_exref;
      InflateRect((LPRECT)&stack0x0000000c,-1,-1);
      CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,DAT_10166af4,0x7f0000);
      goto LAB_100306f3;
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,DAT_10166aec,DAT_10166af8);
    pcVar1 = InflateRect_exref;
    InflateRect((LPRECT)&stack0x0000000c,-1,-1);
    uVar2 = DAT_10166af0;
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,DAT_10166af4,uVar2);
LAB_100306f3:
  (*pcVar1)(&stack0x0000000c,2 - in_stack_00000024,2 - in_stack_00000020);
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,DAT_10166aec,DAT_10166aec);
  (*pcVar1)(&stack0x0000000c,1,1);
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,DAT_10166aec,DAT_10166aec);
  return;
}

