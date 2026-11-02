// rea decompile_all
// name: CMFCVisualManager::OnDrawMenuSystemButton
// address: 0x100321c9
// body: available
// range: 0x100321c9-0x10032222 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMenuSystemButton(class CDC *,class
   CRect,unsigned int,unsigned int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCVisualManager::OnDrawMenuSystemButton(undefined4 param_1_00,int param_1)

{
  uint uVar1;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  uVar1 = 0;
  if (in_stack_00000018 == 0xf020) {
    uVar1 = 1;
  }
  else if (in_stack_00000018 != 0xf060) {
    if (in_stack_00000018 != 0xf120) {
      return;
    }
    uVar1 = 3;
  }
  if ((in_stack_0000001c & 0x20000) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_stack_0000001c & 0x40000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  DrawFrameControl(*(HDC *)(param_1 + 4),(LPRECT)&stack0x00000008,1,uVar1);
  return;
}

