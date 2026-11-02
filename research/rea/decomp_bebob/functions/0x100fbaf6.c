// rea decompile_all
// name: __wcsicoll
// address: 0x100fbaf6
// body: available
// range: 0x100fbaf6-0x100fbb80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wcsicoll
   
   Library: Visual Studio 2010 Release */

int __cdecl __wcsicoll(wchar_t *_Str1,wchar_t *_Str2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if (DAT_1016a538 == 0) {
    if ((_Str1 == (wchar_t *)0x0) || (_Str2 == (wchar_t *)0x0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_100fe6d4();
      iVar2 = 0x7fffffff;
    }
    else {
      iVar2 = (int)_Str1 - (int)_Str2;
      do {
        uVar4 = *(ushort *)(iVar2 + (int)_Str2);
        if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
          uVar4 = uVar4 + 0x20;
        }
        uVar3 = (uint)(ushort)*_Str2;
        if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
          uVar3 = uVar3 + 0x20 & 0xffff;
        }
        _Str2 = _Str2 + 1;
      } while ((uVar4 != 0) && (uVar4 == (ushort)uVar3));
      iVar2 = uVar4 - uVar3;
    }
  }
  else {
    iVar2 = __wcsicoll_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}

