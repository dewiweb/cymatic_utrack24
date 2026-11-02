// rea decompile_all
// name: _qsort
// address: 0x5ae320
// body: available
// range: 0x5ae320-0x5ae43c inclusive
// range: 0x5ae440-0x5ae4bc inclusive
// range: 0x5ae4c0-0x5ae56c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2008 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 auStack_104 [30];
  undefined4 auStack_8c [30];
  size_t local_14;
  int local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  if ((_Base == (void *)0x0) && (_NumOfElements != 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    return;
  }
  if ((_SizeOfElements == 0) || (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else if (1 < _NumOfElements) {
    local_10 = 0;
    local_8 = _Base;
    local_c = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_005ae3a8:
    while (puVar7 = local_8, puVar8 = local_c,
          uVar3 = (uint)((int)local_c - (int)local_8) / _SizeOfElements + 1, 8 < uVar3) {
      puVar4 = local_8 + (uVar3 >> 1) * _SizeOfElements;
      iVar5 = (*_PtFuncCompare)(local_8,puVar4);
      if (0 < iVar5) {
        swap();
      }
      iVar5 = (*_PtFuncCompare)(puVar7,puVar8);
      if (0 < iVar5) {
        swap();
      }
      iVar5 = (*_PtFuncCompare)(puVar4,puVar8);
      if (0 < iVar5) {
        swap();
      }
LAB_005ae420:
      if (puVar7 < puVar4) {
        do {
          puVar7 = puVar7 + _SizeOfElements;
          if (puVar4 <= puVar7) goto LAB_005ae440;
          iVar5 = (*_PtFuncCompare)(puVar7,puVar4);
        } while (iVar5 < 1);
        if (puVar4 <= puVar7) goto LAB_005ae440;
      }
      else {
LAB_005ae440:
        do {
          puVar7 = puVar7 + _SizeOfElements;
          if (local_c < puVar7) break;
          iVar5 = (*_PtFuncCompare)(puVar7,puVar4);
        } while (iVar5 < 1);
      }
      do {
        puVar8 = puVar8 + -_SizeOfElements;
        if (puVar8 <= puVar4) break;
        iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
      } while (0 < iVar5);
      if (puVar7 <= puVar8) {
        if (puVar7 != puVar8) {
          puVar6 = puVar8;
          local_14 = _SizeOfElements;
          do {
            local_14 = local_14 - 1;
            uVar1 = puVar6[(int)puVar7 - (int)puVar8];
            puVar6[(int)puVar7 - (int)puVar8] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          } while (local_14 != 0);
        }
        if (puVar4 == puVar8) {
          puVar4 = puVar7;
        }
        goto LAB_005ae420;
      }
      puVar8 = puVar8 + _SizeOfElements;
      if (puVar4 < puVar8) {
        do {
          puVar8 = puVar8 + -_SizeOfElements;
          if (puVar8 <= puVar4) goto LAB_005ae4c0;
          iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
        } while (iVar5 == 0);
        if (puVar8 <= puVar4) goto LAB_005ae4c0;
      }
      else {
LAB_005ae4c0:
        do {
          puVar8 = puVar8 + -_SizeOfElements;
          if (puVar8 <= local_8) break;
          iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
        } while (iVar5 == 0);
      }
      puVar6 = local_8;
      puVar4 = local_c;
      if ((int)puVar8 - (int)local_8 < (int)local_c - (int)puVar7) goto LAB_005ae513;
      if (local_8 < puVar8) {
        auStack_8c[local_10] = local_8;
        auStack_104[local_10] = puVar8;
        local_10 = local_10 + 1;
      }
      local_8 = puVar7;
      if (puVar4 <= puVar7) goto LAB_005ae541;
    }
    shortsort(local_8,_SizeOfElements,_PtFuncCompare);
    goto LAB_005ae541;
  }
  return;
LAB_005ae513:
  if (puVar7 < local_c) {
    auStack_8c[local_10] = puVar7;
    auStack_104[local_10] = local_c;
    local_10 = local_10 + 1;
  }
  local_c = puVar8;
  if (puVar8 <= puVar6) {
LAB_005ae541:
    local_10 = local_10 + -1;
    if (local_10 < 0) {
      return;
    }
    local_c = (undefined1 *)auStack_104[local_10];
    local_8 = (undefined1 *)auStack_8c[local_10];
  }
  goto LAB_005ae3a8;
}

