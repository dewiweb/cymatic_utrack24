// rea decompile_all
// name: FUN_10002a00
// address: 0x10002a00
// body: available
// range: 0x10002a00-0x10002af4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_10002a00(int *param_1,char *param_2)

{
  uint _Size;
  char *_Dest;
  uint _Count;
  char local_208 [512];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  _Count = 0x200;
  _Dest = local_208;
  _Size = __vsnprintf(_Dest,0x200,param_2,&stack0x0000000c);
  do {
    if (-1 < (int)_Size) {
LAB_10002aa0:
      FUN_10002780(param_1,_Size);
      FID_conflict__memcpy(*(void **)(*param_1 + 4),_Dest,_Size);
      *(undefined1 *)(_Size + *(int *)(*param_1 + 4)) = 0;
LAB_10002acf:
      if (_Dest != local_208) {
        FUN_100085b9(_Dest);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (_Size != 0xffffffff) {
      if ((int)_Size < 0) goto LAB_10002acf;
      goto LAB_10002aa0;
    }
    if (_Count == 0x7fffffff) {
      _Size = 0x7fffffff;
      goto LAB_10002aa0;
    }
    _Count = _Count * 2;
    if (0x7fffffff < _Count) {
      _Count = 0x7fffffff;
    }
    if (_Dest != local_208) {
      FUN_100085b9(_Dest);
    }
    _Dest = (char *)FUN_100085c4(_Count);
    _Size = __vsnprintf(_Dest,_Count,param_2,&stack0x0000000c);
  } while( true );
}

