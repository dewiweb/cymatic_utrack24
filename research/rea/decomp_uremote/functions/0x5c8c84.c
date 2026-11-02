// rea decompile_all
// name: ___init_numeric
// address: 0x5c8c84
// body: available
// range: 0x5c8c84-0x5c8e4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_00955bc4;
LAB_005c8df0:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_00955bc4;
          _Address->lc_codepage = (uint)PTR_DAT_00955bc8;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_00955bcc;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_005c8d16:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num(_Address);
            iVar7 = -1;
            goto LAB_005c8d16;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_005c8da0;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_005c8da0:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_005c8df0;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}

