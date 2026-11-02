// rea decompile_all
// name: CMFCVisualManager::OnFillCommandsListBackground
// address: 0x1003202d
// body: available
// range: 0x1003202d-0x100320ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnFillCommandsListBackground(class
   CDC *,class CRect,int)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::OnFillCommandsListBackground
          (undefined4 param_1_00,int param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  ulong uVar1;
  
  if (param_7 == 0) {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,DAT_10166b6c);
    uVar1 = DAT_10166b00;
  }
  else {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,DAT_10166b3c);
    InflateRect((LPRECT)&param_3,-1,-1);
    param_5 = param_5 + -1;
    param_6 = param_6 + -1;
    PatBlt(*(HDC *)(param_1 + 4),param_3,param_4 + 1,1,param_6 - param_4,0x5a0049);
    PatBlt(*(HDC *)(param_1 + 4),param_3,param_4,param_5 - param_3,1,0x5a0049);
    PatBlt(*(HDC *)(param_1 + 4),param_5,param_4,1,param_6 - param_4,0x5a0049);
    PatBlt(*(HDC *)(param_1 + 4),param_3 + 1,param_6,param_5 - param_3,1,0x5a0049);
    uVar1 = DAT_10166ad8;
  }
  return uVar1;
}

