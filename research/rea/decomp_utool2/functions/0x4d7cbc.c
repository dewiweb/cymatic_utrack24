// rea decompile_all
// name: common_lseek<__int64>
// address: 0x4d7cbc
// body: available
// range: 0x4d7cbc-0x4d7d8a inclusive
// range: 0x4d7d9c-0x4d7dc0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __int64 __cdecl common_lseek<__int64>(int,__int64,int)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_lseek<__int64>(int param_1,__int64 param_2,int param_3)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  __int64 _Var4;
  int in_stack_ffffffc0;
  
  if (param_1 == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < param_1) && ((uint)param_1 < DAT_00c8a548)) {
      iVar3 = (param_1 & 0x3fU) * 0x30;
      if ((*(byte *)((&DAT_00c8a348)[param_1 >> 6] + 0x28 + iVar3) & 1) != 0) {
        ___acrt_lowio_lock_fh(param_1);
        _Var4 = -1;
        if ((*(byte *)((&DAT_00c8a348)[param_1 >> 6] + 0x28 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
        }
        else {
          _Var4 = common_lseek_nolock<__int64>(param_1,param_2,in_stack_ffffffc0);
        }
        FUN_004d7d94();
        return _Var4;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_004d0d1c();
  }
  return -1;
}

