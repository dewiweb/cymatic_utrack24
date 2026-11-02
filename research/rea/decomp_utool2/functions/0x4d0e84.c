// rea decompile_all
// name: common_freopen<char>
// address: 0x4d0e84
// body: available
// range: 0x4d0e84-0x4d0f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl common_freopen<char>(struct _iobuf * * const,char const * const,char const *
   const,class __crt_stdio_stream,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_freopen<char>(int *param_1,char *param_2,int param_3,FILE *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int local_20;
  
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
    if (param_2 == (char *)0x0) {
      piVar1 = __errno();
      *piVar1 = 9;
      return 9;
    }
    if ((param_3 != 0) && (param_4 != (FILE *)0x0)) {
      if (*param_2 == '\0') {
        piVar1 = __errno();
        *piVar1 = 0x16;
        return 0x16;
      }
      local_20 = 0;
      __lock_file(param_4);
      if (((uint)param_4->_flag >> 0xd & 1) != 0) {
        __fclose_nolock(param_4);
      }
      param_4->_ptr = (char *)0x0;
      param_4->_cnt = 0;
      param_4->_base = (char *)0x0;
      LOCK();
      param_4->_flag = 0;
      UNLOCK();
      LOCK();
      param_4->_flag = param_4->_flag | 0x2000;
      UNLOCK();
      iVar2 = FUN_004d964d(param_2,param_3,param_5,param_4);
      *param_1 = iVar2;
      if (iVar2 == 0) {
        LOCK();
        param_4->_flag = param_4->_flag & 0xffffdfff;
        UNLOCK();
        piVar1 = __errno();
        local_20 = *piVar1;
      }
      FUN_004d0f8c();
      return local_20;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_004d0d1c();
  return 0x16;
}

