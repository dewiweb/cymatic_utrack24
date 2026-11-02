// rea decompile_all
// name: FUN_00461166
// address: 0x461166
// body: available
// range: 0x461166-0x4611ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00461166(undefined4 param_1,int *param_2)

{
  int iVar1;
  void *_Memory;
  size_t _Size;
  
  iVar1 = FUN_00466bf6();
  _Size = iVar1 + 1;
  _Memory = _malloc(_Size);
  FUN_00466b9f(_Size);
  (**(code **)(*param_2 + 0x48))(iVar1 + 2);
  (**(code **)(*param_2 + 0x14))(5);
  (**(code **)(*param_2 + 0x10))(_Memory,_Size);
  _free(_Memory);
  return;
}

