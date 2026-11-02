// rea decompile_all
// name: __Init_thread_notify
// address: 0x4c03e3
// body: available
// range: 0x4c03e3-0x4c0423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __Init_thread_notify
   
   Library: Visual Studio 2015 Release */

void __Init_thread_notify(void)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_00c89ae8 == (HANDLE)0x0) {
    uVar2 = DAT_00c76070 ^ _DAT_00c89af0;
    bVar1 = (byte)DAT_00c76070 & 0x1f;
    guard_check_icall(&DAT_00c89ae4);
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))();
    return;
  }
  SetEvent(DAT_00c89ae8);
  ResetEvent(DAT_00c89ae8);
  return;
}

