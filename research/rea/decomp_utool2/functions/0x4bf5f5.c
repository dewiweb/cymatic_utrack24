// rea decompile_all
// name: _Init_atexit::~_Init_atexit
// address: 0x4bf5f5
// body: available
// range: 0x4bf5f5-0x4bf658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall _Init_atexit::~_Init_atexit(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fe220;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  while (DAT_00c76008 < 10) {
    iVar1 = DAT_00c76008 * 4;
    DAT_00c76008 = DAT_00c76008 + 1;
    pcVar3 = DecodePointer(*(PVOID *)(iVar1 + 0xc89958));
    if (pcVar3 != (code *)0x0) {
      guard_check_icall(uVar2);
      (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return;
}

