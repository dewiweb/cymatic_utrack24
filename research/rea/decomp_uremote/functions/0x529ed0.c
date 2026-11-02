// rea decompile_all
// name: CMFCRibbonInfo::~CMFCRibbonInfo
// address: 0x529ed0
// body: available
// range: 0x529ed0-0x529f34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCRibbonInfo::~CMFCRibbonInfo(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCRibbonInfo::~CMFCRibbonInfo(CMFCRibbonInfo *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d0311;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = CPCHAI::CCHAIPort::vftable;
  local_8 = 0;
  FUN_0054e580(uVar1);
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

