// rea decompile_all
// name: FUN_004153fe
// address: 0x4153fe
// body: available
// range: 0x4153fe-0x4155a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004153fe(int param_1)

{
  char cVar1;
  char *_Src;
  uint _Size;
  int iVar2;
  size_t sVar3;
  undefined1 *_Dst;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t local_2c [4];
  char *local_1c [5];
  int local_8;
  
  local_1c[4] = *(char **)(param_1 + 100);
  iVar6 = 0;
  local_8 = 0;
  local_1c[0] = (char *)0x0;
  local_1c[1] = (undefined *)0x0;
  local_1c[2] = (char *)0x0;
  local_1c[3] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = FUN_00414b6e("SLANT");
  if (((iVar2 != 0) && (*(char *)(iVar2 + 4) != '\0')) &&
     ((cVar1 = **(char **)(iVar2 + 8), cVar1 == 'O' ||
      (((cVar1 == 'o' || (cVar1 == 'I')) || (cVar1 == 'i')))))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
    if ((**(char **)(iVar2 + 8) == 'O') || (local_1c[2] = "Italic", **(char **)(iVar2 + 8) == 'o'))
    {
      local_1c[2] = "Oblique";
    }
  }
  iVar2 = FUN_00414b6e("WEIGHT_NAME");
  if (((iVar2 != 0) && (*(char *)(iVar2 + 4) != '\0')) &&
     ((**(char **)(iVar2 + 8) == 'B' || (**(char **)(iVar2 + 8) == 'b')))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    local_1c[1] = "Bold";
  }
  iVar2 = FUN_00414b6e("SETWIDTH_NAME");
  if ((iVar2 != 0) && (*(char *)(iVar2 + 4) != '\0')) {
    cVar1 = **(char **)(iVar2 + 8);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_1c[3] = *(char **)(iVar2 + 8);
    }
  }
  iVar2 = FUN_00414b6e("ADD_STYLE_NAME");
  if ((iVar2 != 0) && (*(char *)(iVar2 + 4) != '\0')) {
    cVar1 = **(char **)(iVar2 + 8);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_1c[0] = *(char **)(iVar2 + 8);
    }
  }
  uVar5 = 0;
  do {
    *(size_t *)((int)local_2c + uVar5) = 0;
    if (*(char **)((int)local_1c + uVar5) != (char *)0x0) {
      sVar3 = _strlen(*(char **)((int)local_1c + uVar5));
      *(size_t *)((int)local_2c + uVar5) = sVar3;
      iVar6 = iVar6 + 1 + sVar3;
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x10);
  if (iVar6 == 0) {
    local_1c[0] = "Regular";
    local_2c[0] = _strlen("Regular");
    iVar6 = local_2c[0] + 1;
  }
  _Dst = (undefined1 *)FUN_00411912(iVar6,&local_8);
  uVar5 = 0;
  *(undefined1 **)(param_1 + 0x18) = _Dst;
  if (local_8 == 0) {
    do {
      _Src = local_1c[uVar5];
      _Size = local_2c[uVar5];
      if (_Src != (char *)0x0) {
        if (_Dst != *(undefined1 **)(param_1 + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        _memcpy(_Dst,_Src,_Size);
        if (((uVar5 == 0) || (uVar5 == 3)) && (uVar4 = 0, _Size != 0)) {
          do {
            if (_Dst[uVar4] == ' ') {
              _Dst[uVar4] = 0x2d;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < _Size);
        }
        _Dst = _Dst + _Size;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    *_Dst = 0;
    local_8 = 0;
  }
  return local_8;
}

