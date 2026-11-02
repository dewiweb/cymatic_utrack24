// rea decompile_all
// name: _fwrite
// address: 0x4d17cc
// body: available
// range: 0x4d17cc-0x4d1823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2015 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  FILE **local_14;
  void **local_10;
  size_t *local_c;
  size_t *local_8;
  
  if ((_Size != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      local_14 = &_File;
      local_10 = &_Str;
      local_c = &_Size;
      local_8 = &_Count;
      uVar2 = __acrt_lock_stream_and_call<<lambda_b51c0495177f500e782686251704ae76>_>
                        (_File,(<lambda_b51c0495177f500e782686251704ae76> *)&local_14);
      return uVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004d0d1c();
  }
  return 0;
}

