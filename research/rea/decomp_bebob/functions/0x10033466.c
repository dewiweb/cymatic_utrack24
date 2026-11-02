// rea decompile_all
// name: CMFCBaseVisualManager::DrawComboDropButton
// address: 0x10033466
// body: available
// range: 0x10033466-0x100334c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseVisualManager::DrawComboDropButton(class CDC *,class
   CRect,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCBaseVisualManager::DrawComboDropButton(CMFCBaseVisualManager *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  if (*(int *)(this + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    if (in_stack_00000018 == 0) {
      if (in_stack_0000001c == 0) {
        cVar3 = (in_stack_00000020 != 0) + '\x01';
      }
      else {
        cVar3 = '\x03';
      }
    }
    else {
      cVar3 = '\x04';
    }
    if (*(code **)(this + 0x58) != (code *)0x0) {
      if (param_1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
      }
      (**(code **)(this + 0x58))(*(int *)(this + 0x18),uVar2,1,cVar3,&stack0x00000008,0);
    }
    iVar1 = 1;
  }
  return iVar1;
}

