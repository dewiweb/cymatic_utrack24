// rea decompile_all
// name: FUN_0041aa27
// address: 0x41aa27
// body: available
// range: 0x41aa27-0x41ab3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041aa27(int param_1,uint param_2)

{
  undefined1 uVar1;
  char *_Str1;
  int iVar2;
  void *_Dst;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar3;
  int in_EDX;
  size_t _Size;
  int *piVar4;
  int local_14;
  undefined4 local_10;
  char *local_c;
  uint local_8;
  
  local_10 = *(undefined4 *)(param_1 + 4);
  local_8 = 0;
  if (param_2 != 0) {
    piVar4 = (int *)(in_EDX + 4);
    do {
      if (piVar4[-1] == 0) {
        _Str1 = (char *)FUN_0041a9d9();
        piVar3 = extraout_ECX;
      }
      else {
        _Str1 = (char *)FUN_0041a973();
        piVar3 = extraout_ECX_00;
      }
      if (_Str1 == (char *)0x0) {
        return local_8;
      }
      iVar2 = piVar4[-1];
      _Size = (*piVar3 - (int)_Str1) - 1;
      local_c = _Str1;
      if (-1 < iVar2) {
        if (iVar2 < 2) {
          _Dst = (void *)FUN_0041194c(*piVar3 - (int)_Str1,&local_14);
          *piVar4 = (int)_Dst;
          if (local_14 == 0) {
            _memcpy(_Dst,_Str1,_Size);
            *(undefined1 *)(_Size + *piVar4) = 0;
          }
        }
        else {
          if (iVar2 == 2) {
            iVar2 = FUN_0041b290(&local_c,0);
          }
          else {
            if (iVar2 != 3) {
              if (iVar2 == 4) {
                if ((_Size == 4) && (iVar2 = _strncmp(_Str1,"true",4), iVar2 == 0)) {
                  uVar1 = 1;
                }
                else {
                  uVar1 = 0;
                }
                *(undefined1 *)piVar4 = uVar1;
              }
              else if (iVar2 == 5) {
                if (*(code **)(param_1 + 0xc) == (code *)0x0) {
                  *piVar4 = 0;
                }
                else {
                  iVar2 = (**(code **)(param_1 + 0xc))(_Str1,_Size,*(undefined4 *)(param_1 + 0x10));
                  *piVar4 = iVar2;
                }
              }
              goto LAB_0041ab26;
            }
            iVar2 = FUN_0041b26a();
          }
          *piVar4 = iVar2;
        }
      }
LAB_0041ab26:
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 2;
    } while (local_8 < param_2);
  }
  return local_8;
}

