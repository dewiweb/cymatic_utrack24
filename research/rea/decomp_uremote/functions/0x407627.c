// rea decompile_all
// name: FUN_00407627
// address: 0x407627
// body: available
// range: 0x407627-0x4077e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00407627(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint _Size;
  int iVar3;
  size_t sVar4;
  undefined1 *_Dst;
  uint uVar5;
  uint uVar6;
  size_t local_2c [4];
  char *local_1c [5];
  int local_8;
  
  local_1c[4] = *(char **)(param_1 + 100);
  uVar6 = 0;
  local_8 = 0;
  local_1c[0] = (char *)0x0;
  local_1c[1] = (undefined *)0x0;
  local_1c[2] = (char *)0x0;
  local_1c[3] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = FUN_0040751b();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) && (*(char **)(iVar3 + 0xc) != (char *)0x0)) &&
     (((cVar1 = **(char **)(iVar3 + 0xc), cVar1 == 'O' || (cVar1 == 'o')) ||
      ((cVar1 == 'I' || (cVar1 == 'i')))))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
    if ((**(char **)(iVar3 + 0xc) == 'O') ||
       (local_1c[2] = "Italic", **(char **)(iVar3 + 0xc) == 'o')) {
      local_1c[2] = "Oblique";
    }
  }
  iVar3 = FUN_0040751b();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) && (*(char **)(iVar3 + 0xc) != (char *)0x0)) &&
     ((cVar1 = **(char **)(iVar3 + 0xc), cVar1 == 'B' || (cVar1 == 'b')))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
    local_1c[1] = "Bold";
  }
  iVar3 = FUN_0040751b();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) &&
     ((pcVar2 = *(char **)(iVar3 + 0xc), pcVar2 != (char *)0x0 &&
      (((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != 'N')) && (cVar1 != 'n')))))) {
    local_1c[3] = pcVar2;
  }
  iVar3 = FUN_0040751b();
  if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 1)) &&
     (((pcVar2 = *(char **)(iVar3 + 0xc), pcVar2 != (char *)0x0 &&
       ((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != 'N')))) && (cVar1 != 'n')))) {
    local_1c[0] = pcVar2;
  }
  iVar3 = 0;
  do {
    *(size_t *)((int)local_2c + uVar6) = 0;
    if (*(char **)((int)local_1c + uVar6) != (char *)0x0) {
      sVar4 = _strlen(*(char **)((int)local_1c + uVar6));
      *(size_t *)((int)local_2c + uVar6) = sVar4;
      iVar3 = iVar3 + 1 + sVar4;
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  uVar6 = 0;
  if (iVar3 == 0) {
    local_1c[0] = "Regular";
    local_2c[0] = _strlen("Regular");
    iVar3 = local_2c[0] + 1;
  }
  _Dst = (undefined1 *)FUN_00411912(iVar3,&local_8);
  *(undefined1 **)(param_1 + 0x18) = _Dst;
  if (local_8 == 0) {
    do {
      pcVar2 = local_1c[uVar6];
      _Size = local_2c[uVar6];
      if (pcVar2 != (char *)0x0) {
        if (_Dst != *(undefined1 **)(param_1 + 0x18)) {
          *_Dst = 0x20;
          _Dst = _Dst + 1;
        }
        _memcpy(_Dst,pcVar2,_Size);
        if (((uVar6 == 0) || (uVar6 == 3)) && (uVar5 = 0, _Size != 0)) {
          do {
            if (_Dst[uVar5] == ' ') {
              _Dst[uVar5] = 0x2d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < _Size);
        }
        _Dst = _Dst + _Size;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    *_Dst = 0;
    local_8 = 0;
  }
  return local_8;
}

