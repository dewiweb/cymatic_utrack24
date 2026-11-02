// rea decompile_all
// name: FUN_101196e0
// address: 0x101196e0
// body: available
// range: 0x101196e0-0x10119758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10119758 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101196e0(void)

{
  code *pcVar1;
  void *pvVar2;
  undefined **local_14 [3];
  char *local_8;
  
  pvVar2 = FUN_1000858a(0x18);
  if (pvVar2 != (void *)0x0) {
    DAT_10164b00 = pvVar2;
    *(void **)pvVar2 = pvVar2;
    *(void **)((int)DAT_10164b00 + 4) = DAT_10164b00;
    *(void **)((int)DAT_10164b00 + 8) = DAT_10164b00;
    *(undefined1 *)((int)DAT_10164b00 + 0x14) = 1;
    *(undefined1 *)((int)DAT_10164b00 + 0x15) = 1;
    _atexit(FUN_1011a8d0);
    return;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
  __CxxThrowException_8(local_14,&DAT_1014de94);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

