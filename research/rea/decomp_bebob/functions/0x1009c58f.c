// rea decompile_all
// name: CDrawingManager::PixelAlpha
// address: 0x1009c58f
// body: available
// range: 0x1009c58f-0x1009c602 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned long __stdcall CDrawingManager::PixelAlpha(unsigned long,int)
   
   Library: Visual Studio 2010 Release */

ulong CDrawingManager::PixelAlpha(ulong param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 local_8;
  
  uVar1 = param_1;
  uVar2 = (int)((param_1 & 0xff) * param_2) / 100;
  local_8 = 0xff;
  if ((int)uVar2 < 0x100) {
    local_8 = uVar2;
  }
  uVar3 = (int)((param_1 >> 8 & 0xff) * param_2) / 100;
  param_1 = 0xff;
  if ((int)uVar3 < 0x100) {
    param_1 = uVar3;
  }
  uVar2 = (int)((uVar1 >> 0x10 & 0xff) * param_2) / 100;
  if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  return ((uVar2 & 0xff) << 8 | param_1 & 0xff) << 8 | local_8 & 0xff;
}

