// rea decompile_all
// name: FUN_00410fba
// address: 0x410fba
// body: available
// range: 0x410fba-0x411044 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00410fba(undefined4 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  int local_8;
  
  local_8 = 0;
  sVar1 = _strlen(param_2);
  sVar2 = _strlen(param_3);
  _Dest = (char *)FUN_00411912(sVar1 + sVar2 + 1,&local_8);
  if (local_8 == 0) {
    pcVar3 = _strrchr(param_2,0x2f);
    if (pcVar3 == (char *)0x0) {
      *_Dest = '\0';
    }
    else {
      _strncpy(_Dest,param_2,(size_t)(pcVar3 + (1 - (int)param_2)));
      _Dest[(int)(pcVar3 + (1 - (int)param_2))] = '\0';
      param_2 = pcVar3 + 1;
    }
    FUN_005af590(_Dest,param_3);
    FUN_005af590(_Dest,param_2);
  }
  else {
    _Dest = (char *)0x0;
  }
  return _Dest;
}

