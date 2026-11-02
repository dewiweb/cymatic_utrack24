// rea decompile_all
// name: FUN_00466882
// address: 0x466882
// body: available
// range: 0x466882-0x46694d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00466882(undefined4 param_1)

{
  wchar_t *_Dest;
  wchar_t *_Format;
  int iVar1;
  uint uVar2;
  uint uVar3;
  size_t _Count;
  va_list _Args;
  
  _Dest = _malloc(0x200);
  _Args = &stack0x0000000c;
  _Format = (wchar_t *)FUN_00466b89(&stack0x00000008);
  _Count = 0xff;
  uVar3 = 0x100;
  do {
    iVar1 = __vsnwprintf(_Dest,_Count,_Format,_Args);
    if (0 < iVar1) {
      FUN_004653b1();
      _free(_Dest);
LAB_0046693d:
      FUN_004652d6();
      return param_1;
    }
    uVar2 = uVar3 + 0x100;
    if ((iVar1 == 0) || (0x10000 < uVar2)) {
      _free(_Dest);
      FUN_004652cd();
      goto LAB_0046693d;
    }
    _free(_Dest);
    _Dest = _malloc(uVar2 * 2);
    _Args = &stack0x0000000c;
    _Format = (wchar_t *)FUN_00466b89(&stack0x00000008);
    _Count = uVar3 + 0xff;
    uVar3 = uVar2;
  } while( true );
}

