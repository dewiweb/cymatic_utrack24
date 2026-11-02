// rea decompile_all
// name: CMFCToolBar::LoadToolBar
// address: 0x10025ef3
// body: available
// range: 0x10025ef3-0x10025f3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::LoadToolBar(unsigned int,unsigned int,unsigned
   int,int,unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBar::LoadToolBar
          (CMFCToolBar *this,uint param_1,uint param_2,uint param_3,int param_4,uint param_5,
          uint param_6,uint param_7)

{
  int iVar1;
  int *extraout_EDX;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  uint local_8;
  
  FUN_10025b87(&local_24);
  local_24 = param_2;
  local_20 = param_7;
  local_1c = param_5;
  local_c = param_3;
  local_8 = param_6;
  iVar1 = (**(code **)(*extraout_EDX + 0x338))(param_1,&local_24,param_4);
  return iVar1;
}

