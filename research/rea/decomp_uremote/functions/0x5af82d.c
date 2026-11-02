// rea decompile_all
// name: FUN_005af82d
// address: 0x5af82d
// body: available
// range: 0x5af82d-0x5af891 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5af891 with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005af82d(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_10 [12];
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_0095c95c & 1) == 0) {
    _DAT_0095c95c = _DAT_0095c95c | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_0095c950);
    _atexit((_func_4879 *)&LAB_005e714f);
  }
  FUN_00445c6c(&DAT_0095c950);
  __CxxThrowException_8(local_10,&DAT_00941648);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

