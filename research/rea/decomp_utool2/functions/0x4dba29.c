// rea decompile_all
// name: __commit
// address: 0x4dba29
// body: available
// range: 0x4dba29-0x4dba97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2015 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00c8a548)) &&
       ((*(byte *)((&DAT_00c8a348)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) & 1) !=
        0)) {
      local_8 = &_FileHandle;
      iVar2 = __acrt_lowio_lock_fh_and_call<<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
                        (_FileHandle,(<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *)&local_8);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_004d0d1c();
  }
  return -1;
}

