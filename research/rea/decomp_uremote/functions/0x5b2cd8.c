// rea decompile_all
// name: _fprintf
// address: 0x5b2cd8
// body: available
// range: 0x5b2cd8-0x5b2de9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2008 Release */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  int *piVar1;
  uint uVar2;
  int _Flag;
  undefined *puVar3;
  int local_20;
  
  local_20 = 0;
  if ((_File == (FILE *)0x0) || (_Format == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  __lock_file(_File);
  if ((_File->_flag & 0x40) == 0) {
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_00956450;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_0095dd00)[(int)uVar2 >> 5]);
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &DAT_00956450;
      }
      else {
        puVar3 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_0095dd00)[(int)uVar2 >> 5]);
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_005b2dad;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_20 = -1;
  }
LAB_005b2dad:
  if (local_20 == 0) {
    _Flag = __stbuf(_File);
    local_20 = __output_l(_File,_Format,(_locale_t)0x0,&stack0x0000000c);
    __ftbuf(_Flag,_File);
  }
  FUN_005b2dea();
  return local_20;
}

