// rea decompile_all
// name: __winput_s_l
// address: 0x10103ef6
// body: available
// range: 0x10103ef6-0x101050db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __winput_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __winput_s_l(FILE *_File,wchar_t *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte *pbVar1;
  wchar_t wVar2;
  void *pvVar3;
  wint_t wVar4;
  ushort uVar5;
  wchar_t wVar6;
  int *piVar7;
  va_list pcVar8;
  char *_Dst;
  errno_t eVar9;
  code *pcVar10;
  uint uVar11;
  uint extraout_EAX;
  int iVar12;
  uint uVar13;
  size_t sVar14;
  size_t sVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  bool bVar18;
  char *pcVar19;
  FILE *pFVar20;
  uint local_34c;
  int local_348 [2];
  int local_340;
  char local_33c;
  int local_338;
  int local_334;
  va_list local_330;
  va_list local_32c;
  void *local_328;
  int local_324;
  int local_320;
  uint local_31c;
  int local_318;
  rsize_t local_314;
  int local_310;
  wchar_t *local_30c;
  wchar_t *local_308;
  byte local_301;
  undefined8 local_300;
  uint local_2f8;
  uint local_2f4;
  int local_2f0;
  wchar_t *local_2ec;
  char local_2e7;
  char local_2e6;
  char local_2e5;
  FILE *local_2e4;
  char local_2dd;
  int local_2dc;
  char local_2d5;
  uint local_2d4;
  char local_2cd;
  uint local_2cc;
  char local_2c5;
  wchar_t local_2c4 [350];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_32c = _ArgList;
  local_2ec = local_2c4;
  local_2e4 = _File;
  local_308 = param_2;
  local_320 = 0x15e;
  local_324 = 0;
  local_328 = (void *)0x0;
  local_334 = 0;
  local_2d4 = 0;
  local_338 = 0;
  if ((param_2 == (wchar_t *)0x0) || (_File == (FILE *)0x0)) {
    piVar7 = __errno();
    *piVar7 = 0x16;
    FUN_100fe6d4();
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_348,_Locale);
    wVar6 = *param_2;
    local_2e6 = '\0';
    local_2cc = 0;
    local_318 = 0;
    if (wVar6 != L'\0') {
      do {
        iVar12 = _iswctype(wVar6,8);
        if (iVar12 == 0) {
          pwVar16 = local_308;
          if (*local_308 == L'%') {
            if (local_308[1] == L'%') {
              if (local_308[1] == L'%') {
                pwVar16 = local_308 + 1;
              }
              goto LAB_10104f5b;
            }
            local_2f8 = 0;
            local_34c = 0;
            local_2f0 = 0;
            local_310 = 0;
            local_2dc = 0;
            local_314 = 0;
            local_301 = 0;
            local_2e7 = '\0';
            local_2d5 = '\0';
            local_2c5 = '\0';
            local_2e5 = '\0';
            local_2cd = '\0';
            local_2dd = '\x01';
            local_2f4 = 0;
            do {
              pwVar17 = pwVar16 + 1;
              uVar13 = (uint)(ushort)*pwVar17;
              if (((*pwVar17 & 0xff00U) == 0) && (iVar12 = _isdigit(uVar13 & 0xff), iVar12 != 0)) {
                local_310 = local_310 + 1;
                local_2dc = local_2dc * 10 + -0x30 + uVar13;
              }
              else if (uVar13 < 0x4f) {
                if (uVar13 != 0x4e) {
                  if (uVar13 == 0x2a) {
                    local_2d5 = local_2d5 + '\x01';
                  }
                  else if (uVar13 != 0x46) {
                    if (uVar13 == 0x49) {
                      wVar6 = pwVar16[2];
                      if ((wVar6 == L'6') && (pwVar16[3] == L'4')) {
                        pwVar17 = pwVar16 + 3;
                        goto LAB_10104103;
                      }
                      if ((wVar6 == L'3') && (pwVar16[3] == L'2')) {
                        pwVar17 = pwVar16 + 3;
                      }
                      else if ((wVar6 != L'd') &&
                              ((((wVar6 != L'i' && (wVar6 != L'o')) && (wVar6 != L'x')) &&
                               (wVar6 != L'X')))) goto LAB_1010415a;
                    }
                    else if (uVar13 == 0x4c) {
                      local_2dd = local_2dd + '\x01';
                    }
                    else {
LAB_1010415a:
                      local_2c5 = local_2c5 + '\x01';
                    }
                  }
                }
              }
              else if (uVar13 == 0x68) {
                local_2dd = local_2dd + -1;
                local_2cd = local_2cd + -1;
              }
              else {
                if (uVar13 == 0x6c) {
                  if (pwVar16[2] == L'l') {
                    pwVar17 = pwVar16 + 2;
LAB_10104103:
                    local_2f4 = local_2f4 + 1;
                    local_300 = 0;
                    goto LAB_10104188;
                  }
                  local_2dd = local_2dd + '\x01';
                }
                else if (uVar13 != 0x77) goto LAB_1010415a;
                local_2cd = local_2cd + '\x01';
              }
LAB_10104188:
              pwVar16 = pwVar17;
            } while (local_2c5 == '\0');
            if (local_2d5 == '\0') {
              local_30c = *(wchar_t **)local_32c;
              local_330 = local_32c;
              local_32c = local_32c + 4;
            }
            else {
              local_30c = (wchar_t *)0x0;
            }
            local_2c5 = '\0';
            if ((local_2cd == '\0') &&
               ((*pwVar17 == L'S' || (local_2cd = '\x01', *pwVar17 == L'C')))) {
              local_2cd = -1;
            }
            uVar13 = (ushort)*pwVar17 | 0x20;
            local_31c = uVar13;
            local_308 = pwVar17;
            if (uVar13 != 0x6e) {
              if ((uVar13 == 99) || (uVar13 == 0x7b)) {
                local_2cc = local_2cc + 1;
                uVar5 = __fgetwc_nolock(local_2e4);
              }
              else {
                uVar5 = __whiteout(local_2e4);
              }
              local_2d4 = (uint)uVar5;
              if (uVar5 == 0xffff) break;
            }
            if ((local_310 != 0) && (local_2dc == 0)) goto LAB_10105026;
            if ((local_2d5 == '\0') && (((uVar13 == 99 || (uVar13 == 0x73)) || (uVar13 == 0x7b)))) {
              local_30c = *(wchar_t **)local_330;
              pcVar8 = local_330 + 4;
              local_32c = local_330 + 8;
              local_314 = *(rsize_t *)(local_330 + 4);
              local_330 = pcVar8;
              if (local_314 == 0) {
                if (local_2cd < '\x01') {
                  *(undefined1 *)local_30c = 0;
                }
                else {
                  *local_30c = L'\0';
                }
                piVar7 = __errno();
                *piVar7 = 0xc;
                break;
              }
            }
            if (uVar13 < 0x70) {
              if (uVar13 == 0x6f) {
LAB_10104c22:
                if ((wchar_t)local_2d4 == L'-') {
                  local_2e7 = '\x01';
                }
                else if ((wchar_t)local_2d4 != L'+') goto LAB_10104c71;
                local_2dc = local_2dc + -1;
                if ((local_2dc == 0) && (local_310 != 0)) {
                  local_2c5 = '\x01';
                }
                else {
                  local_2cc = local_2cc + 1;
                  wVar4 = __fgetwc_nolock(local_2e4);
                  local_2d4 = (uint)wVar4;
                }
                goto LAB_10104c71;
              }
              if (uVar13 == 99) {
                if (local_310 == 0) {
                  local_2dc = local_2dc + 1;
                  local_310 = 1;
                }
LAB_101047b8:
                pwVar16 = local_308;
                if ('\0' < local_2cd) {
                  local_2e5 = '\x01';
                }
                goto LAB_101047c8;
              }
              if (uVar13 == 100) goto LAB_10104c22;
              if (uVar13 < 0x65) {
LAB_101048ed:
                uVar13 = local_2d4;
                if (*local_308 != (wchar_t)local_2d4) {
LAB_10104fee:
                  __un_inc((wint_t)uVar13,local_2e4);
                  local_338 = 1;
                  break;
                }
                local_2e6 = local_2e6 + -1;
                if (local_2d5 == '\0') {
                  local_32c = local_330;
                }
              }
              else {
                if (0x67 < uVar13) {
                  if (uVar13 == 0x69) {
                    local_31c = 100;
                    uVar13 = 100;
                    goto LAB_10104310;
                  }
                  if (uVar13 != 0x6e) goto LAB_101048ed;
                  uVar13 = local_2cc;
                  if (local_2d5 != '\0') goto LAB_10104f36;
                  goto LAB_10104f0a;
                }
                sVar14 = 0;
                if ((wchar_t)local_2d4 == L'-') {
                  *local_2ec = L'-';
                  sVar14 = 1;
LAB_10104354:
                  local_2dc = local_2dc + -1;
                  local_2cc = local_2cc + 1;
                  wVar4 = __fgetwc_nolock(local_2e4);
                  local_2d4 = (uint)wVar4;
                }
                else if ((wchar_t)local_2d4 == L'+') goto LAB_10104354;
                if (local_310 == 0) {
                  local_2dc = -1;
                }
                if ((local_2d4 & 0xff00) == 0) {
                  do {
                    iVar12 = _isdigit(local_2d4 & 0xff);
                    if ((iVar12 == 0) ||
                       (iVar12 = local_2dc + -1, bVar18 = local_2dc == 0, local_2dc = iVar12, bVar18
                       )) break;
                    local_2f0 = local_2f0 + 1;
                    local_2ec[sVar14] = (short)(char)local_2d4;
                    sVar14 = sVar14 + 1;
                    iVar12 = ___check_float_string(sVar14,local_2c4,&local_324);
                    if (iVar12 == 0) goto LAB_10105039;
                    local_2cc = local_2cc + 1;
                    wVar4 = __fgetwc_nolock(local_2e4);
                    local_2d4 = (uint)wVar4;
                  } while ((wVar4 & 0xff00) == 0);
                }
                wVar6 = **(wchar_t **)(*(int *)(local_348[0] + 0xbc) + 0x30);
                if (((uint)(ushort)wVar6 == (int)(char)local_2d4) &&
                   (iVar12 = local_2dc + -1, bVar18 = local_2dc != 0, local_2dc = iVar12, bVar18)) {
                  local_2cc = local_2cc + 1;
                  wVar4 = __fgetwc_nolock(local_2e4);
                  local_2d4 = (uint)wVar4;
                  local_2ec[sVar14] = wVar6;
                  sVar14 = sVar14 + 1;
                  iVar12 = ___check_float_string(sVar14,local_2c4,&local_324);
                  if (iVar12 == 0) break;
                  if ((local_2d4 & 0xff00) == 0) {
                    do {
                      iVar12 = _isdigit(local_2d4 & 0xff);
                      if ((iVar12 == 0) ||
                         (iVar12 = local_2dc + -1, bVar18 = local_2dc == 0, local_2dc = iVar12,
                         bVar18)) break;
                      local_2f0 = local_2f0 + 1;
                      local_2ec[sVar14] = (wchar_t)local_2d4;
                      sVar14 = sVar14 + 1;
                      iVar12 = ___check_float_string(sVar14,local_2c4,&local_324);
                      if (iVar12 == 0) goto LAB_10105039;
                      local_2cc = local_2cc + 1;
                      wVar4 = __fgetwc_nolock(local_2e4);
                      local_2d4 = (uint)wVar4;
                    } while ((wVar4 & 0xff00) == 0);
                  }
                }
                if ((local_2f0 != 0) &&
                   ((((wchar_t)local_2d4 == 0x65 || ((wchar_t)local_2d4 == 0x45)) &&
                    (iVar12 = local_2dc + -1, bVar18 = local_2dc != 0, local_2dc = iVar12, bVar18)))
                   ) {
                  local_2ec[sVar14] = L'e';
                  sVar15 = sVar14 + 1;
                  iVar12 = ___check_float_string(sVar15,local_2c4,&local_324);
                  if (iVar12 == 0) break;
                  local_2cc = local_2cc + 1;
                  wVar4 = __fgetwc_nolock(local_2e4);
                  local_2d4 = (uint)wVar4;
                  if (wVar4 == 0x2d) {
                    local_2ec[sVar15] = L'-';
                    sVar15 = sVar14 + 2;
                    iVar12 = ___check_float_string(sVar15,local_2c4,&local_324);
                    if (iVar12 == 0) break;
LAB_10104616:
                    sVar14 = sVar15;
                    if (local_2dc == 0) {
                      local_2dc = 0;
                    }
                    else {
                      local_2cc = local_2cc + 1;
                      local_2dc = local_2dc + -1;
                      wVar4 = __fgetwc_nolock(local_2e4);
                      local_2d4 = (uint)wVar4;
                    }
                  }
                  else {
                    sVar14 = sVar15;
                    if (wVar4 == 0x2b) goto LAB_10104616;
                  }
                  if ((local_2d4 & 0xff00) == 0) {
                    do {
                      iVar12 = _isdigit(local_2d4 & 0xff);
                      if ((iVar12 == 0) ||
                         (iVar12 = local_2dc + -1, bVar18 = local_2dc == 0, local_2dc = iVar12,
                         bVar18)) break;
                      local_2f0 = local_2f0 + 1;
                      local_2ec[sVar14] = (wchar_t)local_2d4;
                      sVar14 = sVar14 + 1;
                      iVar12 = ___check_float_string(sVar14,local_2c4,&local_324);
                      if (iVar12 == 0) goto LAB_10105039;
                      local_2cc = local_2cc + 1;
                      wVar4 = __fgetwc_nolock(local_2e4);
                      local_2d4 = (uint)wVar4;
                    } while ((wVar4 & 0xff00) == 0);
                  }
                }
                local_2cc = local_2cc - 1;
                __un_inc((wint_t)local_2d4,local_2e4);
                if (local_2f0 == 0) break;
                if (local_2d5 == '\0') {
                  local_318 = local_318 + 1;
                  iVar12 = local_320 * 2;
                  sVar15 = iVar12 + 2;
                  local_2ec[sVar14] = L'\0';
                  _Dst = __malloc_crt(sVar15);
                  if (_Dst != (char *)0x0) {
                    eVar9 = _wcstombs_s((size_t *)0x0,_Dst,sVar15,local_2ec,iVar12 + 1);
                    if ((eVar9 != 0) && ((eVar9 == 0x16 || (eVar9 == 0x22)))) {
                      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      uVar13 = extraout_EAX;
                      goto LAB_10104fee;
                    }
                    piVar7 = local_348;
                    iVar12 = local_2dd + -1;
                    pwVar16 = local_30c;
                    pcVar19 = _Dst;
                    pcVar10 = DecodePointer(PTR_LAB_10163ef0);
                    (*pcVar10)(iVar12,pwVar16,pcVar19,piVar7);
                    _free(_Dst);
                    goto LAB_10104f36;
                  }
                  break;
                }
              }
            }
            else {
              if (uVar13 == 0x70) {
                local_2dd = '\x01';
                goto LAB_10104c22;
              }
              if (uVar13 == 0x73) goto LAB_101047b8;
              if (uVar13 == 0x75) goto LAB_10104c22;
              if (uVar13 != 0x78) {
                if (uVar13 != 0x7b) goto LAB_101048ed;
                if ('\0' < local_2cd) {
                  local_2e5 = '\x01';
                }
                pwVar16 = local_308 + 1;
                if (local_308[1] == L'^') {
                  pwVar16 = local_308 + 2;
                  local_301 = 0xff;
                }
                if (local_328 == (void *)0x0) {
                  local_328 = __malloc_crt(0x2000);
                  if (local_328 == (void *)0x0) break;
                  local_334 = 1;
                }
                pvVar3 = local_328;
                _memset(local_328,0,0x2000);
                if (*pwVar16 == L']') {
                  *(undefined1 *)((int)pvVar3 + 0xb) = 0x20;
                  local_34c = 0x5d;
                  pwVar16 = pwVar16 + 1;
                }
LAB_10104a35:
                do {
                  wVar6 = *pwVar16;
                  if (wVar6 == L']') goto code_r0x10104a44;
                  if ((wVar6 == L'-') && ((wchar_t)local_34c != L'\0')) {
                    wVar2 = pwVar16[1];
                    uVar13 = (uint)(ushort)wVar2;
                    if (wVar2 != L']') {
                      local_2f4 = local_34c;
                      if ((ushort)(wchar_t)local_34c < (ushort)wVar2) {
                        local_2f4 = uVar13;
                        uVar13 = local_34c;
                      }
                      if ((ushort)uVar13 < (ushort)local_2f4) {
                        local_2f8 = local_2f4 - uVar13 & 0xffff;
                        do {
                          pbVar1 = (byte *)((uVar13 >> 3) + (int)pvVar3);
                          *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar13 & 7);
                          uVar13 = uVar13 + 1;
                          local_2f8 = local_2f8 - 1;
                        } while (local_2f8 != 0);
                      }
                      pbVar1 = (byte *)((uint)(ushort)((ushort)local_2f4 >> 3) + (int)pvVar3);
                      *pbVar1 = *pbVar1 | '\x01' << ((byte)local_2f4 & 7);
                      local_34c = 0;
                      pwVar16 = pwVar16 + 2;
                      goto LAB_10104a35;
                    }
                  }
                  pbVar1 = (byte *)((uint)((ushort)wVar6 >> 3) + (int)pvVar3);
                  *pbVar1 = *pbVar1 | '\x01' << ((byte)wVar6 & 7);
                  local_34c = (uint)(ushort)wVar6;
                  pwVar16 = pwVar16 + 1;
                } while( true );
              }
LAB_10104310:
              if ((wchar_t)local_2d4 == L'-') {
                local_2e7 = '\x01';
LAB_10104a6d:
                local_2dc = local_2dc + -1;
                if ((local_2dc == 0) && (local_310 != 0)) {
                  local_2c5 = '\x01';
                }
                else {
                  local_2cc = local_2cc + 1;
                  wVar4 = __fgetwc_nolock(local_2e4);
                  local_2d4 = (uint)wVar4;
                }
              }
              else if ((wchar_t)local_2d4 == L'+') goto LAB_10104a6d;
              if ((short)local_2d4 == 0x30) {
                local_2cc = local_2cc + 1;
                wVar4 = __fgetwc_nolock(local_2e4);
                local_2d4 = (uint)wVar4;
                if ((wVar4 == 0x78) || (wVar4 == 0x58)) {
                  local_2cc = local_2cc + 1;
                  wVar4 = __fgetwc_nolock(local_2e4);
                  local_2d4 = (uint)wVar4;
                  if ((local_310 != 0) && (local_2dc = local_2dc + -2, local_2dc < 1)) {
                    local_2c5 = local_2c5 + '\x01';
                  }
                  local_31c = 0x78;
                  uVar13 = local_31c;
                }
                else {
                  local_2f0 = 1;
                  if (uVar13 == 0x78) {
                    local_2cc = local_2cc - 1;
                    __un_inc(wVar4,local_2e4);
                    local_2d4 = 0x30;
                  }
                  else {
                    if ((local_310 != 0) && (local_2dc = local_2dc + -1, local_2dc == 0)) {
                      local_2c5 = local_2c5 + '\x01';
                    }
                    local_31c = 0x6f;
                    uVar13 = local_31c;
                  }
                }
              }
LAB_10104c71:
              if (local_2f4 == 0) {
                if (local_2c5 == '\0') {
                  while ((uVar11 = local_2d4, uVar5 = (ushort)local_2d4, uVar13 != 0x78 &&
                         (uVar13 != 0x70))) {
                    if (((local_2d4 & 0xff00) != 0) ||
                       (iVar12 = _isdigit(local_2d4 & 0xff), iVar12 == 0)) goto LAB_10104eb3;
                    if (uVar13 == 0x6f) {
                      if (0x37 < uVar5) goto LAB_10104eb3;
                      local_2f8 = local_2f8 << 3;
                    }
                    else {
                      local_2f8 = local_2f8 * 10;
                    }
LAB_10104e6f:
                    local_2f0 = local_2f0 + 1;
                    local_2f8 = local_2f8 + -0x30 + (uVar11 & 0xffff);
                    if ((local_310 != 0) && (local_2dc = local_2dc + -1, local_2dc == 0))
                    goto LAB_10104ec7;
                    local_2cc = local_2cc + 1;
                    wVar4 = __fgetwc_nolock(local_2e4);
                    local_2d4 = (uint)wVar4;
                  }
                  if (((local_2d4 & 0xff00) == 0) &&
                     (iVar12 = _isxdigit(local_2d4 & 0xff), iVar12 != 0)) {
                    local_2f8 = local_2f8 << 4;
                    uVar11 = __hextodec(uVar11);
                    uVar11 = uVar11 & 0xffff;
                    local_2d4 = uVar11;
                    goto LAB_10104e6f;
                  }
LAB_10104eb3:
                  local_2cc = local_2cc - 1;
                  __un_inc(uVar5,local_2e4);
                }
LAB_10104ec7:
                if (local_2e7 != '\0') {
                  local_2f8 = -local_2f8;
                }
              }
              else {
                if (local_2c5 == '\0') {
                  while ((uVar11 = local_2d4, uVar5 = (ushort)local_2d4, uVar13 != 0x78 &&
                         (uVar13 != 0x70))) {
                    if (((local_2d4 & 0xff00) != 0) ||
                       (iVar12 = _isdigit(local_2d4 & 0xff), iVar12 == 0)) goto LAB_10104d9b;
                    if (uVar13 == 0x6f) {
                      if (0x37 < uVar5) goto LAB_10104d9b;
                      local_300 = CONCAT44(local_300._4_4_ << 3 | (uint)local_300 >> 0x1d,
                                           (uint)local_300 << 3);
                    }
                    else {
                      local_300 = __allmul((uint)local_300,local_300._4_4_,10,0);
                    }
LAB_10104d51:
                    local_2f0 = local_2f0 + 1;
                    uVar11 = (uVar11 & 0xffff) - 0x30;
                    local_300 = CONCAT44(local_300._4_4_ + ((int)uVar11 >> 0x1f) +
                                         (uint)CARRY4((uint)local_300,uVar11),
                                         (uint)local_300 + uVar11);
                    if ((local_310 != 0) && (local_2dc = local_2dc + -1, local_2dc == 0))
                    goto LAB_10104daf;
                    local_2cc = local_2cc + 1;
                    wVar4 = __fgetwc_nolock(local_2e4);
                    local_2d4 = (uint)wVar4;
                  }
                  if (((local_2d4 & 0xff00) == 0) &&
                     (iVar12 = _isxdigit(local_2d4 & 0xff), iVar12 != 0)) {
                    local_300 = CONCAT44(local_300._4_4_ << 4 | (uint)local_300 >> 0x1c,
                                         (uint)local_300 << 4);
                    uVar11 = __hextodec(uVar11);
                    uVar11 = uVar11 & 0xffff;
                    local_2d4 = uVar11;
                    goto LAB_10104d51;
                  }
LAB_10104d9b:
                  local_2cc = local_2cc - 1;
                  __un_inc(uVar5,local_2e4);
                }
LAB_10104daf:
                if (local_2e7 != '\0') {
                  local_300 = CONCAT44(-(local_300._4_4_ + (uint)((uint)local_300 != 0)),
                                       -(uint)local_300);
                }
              }
              if (uVar13 == 0x46) {
                local_2f0 = 0;
              }
              if (local_2f0 == 0) break;
              if (local_2d5 == '\0') {
                local_318 = local_318 + 1;
                uVar13 = local_2f8;
LAB_10104f0a:
                if (local_2f4 == 0) {
                  if (local_2dd == '\0') {
                    *local_30c = (wchar_t)uVar13;
                  }
                  else {
                    *(uint *)local_30c = uVar13;
                  }
                }
                else {
                  *(uint *)local_30c = (uint)local_300;
                  *(int *)(local_30c + 2) = local_300._4_4_;
                }
              }
            }
LAB_10104f36:
            local_2e6 = local_2e6 + '\x01';
            local_308 = local_308 + 1;
          }
          else {
LAB_10104f5b:
            local_2cc = local_2cc + 1;
            wVar6 = __fgetwc_nolock(local_2e4);
            local_2d4 = (uint)(ushort)wVar6;
            local_308 = pwVar16 + 1;
            if (*pwVar16 != wVar6) {
LAB_10105026:
              __un_inc((wint_t)local_2d4,local_2e4);
              break;
            }
          }
          pwVar16 = local_308;
          if (((wchar_t)local_2d4 == -1) && ((*local_308 != L'%' || (local_308[1] != L'n')))) break;
        }
        else {
          local_2cc = local_2cc - 1;
          pFVar20 = local_2e4;
          wVar4 = __whiteout(local_2e4);
          __un_inc(wVar4,pFVar20);
          pwVar16 = local_308;
          do {
            pwVar16 = pwVar16 + 1;
            iVar12 = _iswctype(*pwVar16,8);
          } while (iVar12 != 0);
        }
        local_308 = pwVar16;
        wVar6 = *local_308;
      } while (wVar6 != L'\0');
LAB_10105039:
      if (local_334 == 1) {
        _free(local_328);
      }
      if (local_324 == 1) {
        _free(local_2ec);
      }
      if ((wchar_t)local_2d4 == -1) {
        if (local_33c != '\0') {
          *(uint *)(local_340 + 0x70) = *(uint *)(local_340 + 0x70) & 0xfffffffd;
        }
        goto LAB_101050ce;
      }
      if (local_338 == 1) {
        piVar7 = __errno();
        *piVar7 = 0x16;
        FUN_100fe6d4();
      }
    }
    if (local_33c != '\0') {
      *(uint *)(local_340 + 0x70) = *(uint *)(local_340 + 0x70) & 0xfffffffd;
    }
  }
LAB_101050ce:
  iVar12 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar12;
code_r0x10104a44:
  uVar13 = local_31c;
  if (*pwVar16 != L'\0') {
LAB_101047c8:
    local_308 = pwVar16;
    pwVar16 = local_30c;
    local_2cc = local_2cc - 1;
    __un_inc((wint_t)local_2d4,local_2e4);
    pwVar17 = pwVar16;
    if (uVar13 == 99) goto LAB_101047ee;
LAB_101047e8:
    local_314 = local_314 - 1;
LAB_101047ee:
    do {
      if ((local_310 != 0) &&
         (iVar12 = local_2dc + -1, bVar18 = local_2dc == 0, local_2dc = iVar12, bVar18)) {
LAB_10104bd0:
        if (pwVar17 == pwVar16) break;
        if ((local_2d5 == '\0') && (local_318 = local_318 + 1, uVar13 != 99)) {
          if (local_2e5 == '\0') {
            *(undefined1 *)local_30c = 0;
          }
          else {
            *local_30c = L'\0';
          }
        }
        goto LAB_10104f36;
      }
      local_2cc = local_2cc + 1;
      wVar6 = __fgetwc_nolock(local_2e4);
      local_2d4 = (uint)(ushort)wVar6;
      if (wVar6 == L'\xffff') {
LAB_10104bbc:
        local_2cc = local_2cc - 1;
        __un_inc(wVar6,local_2e4);
        goto LAB_10104bd0;
      }
      if (uVar13 != 99) {
        if (uVar13 == 0x73) {
          if ((8 < local_2d4) && (local_2d4 < 0xe)) goto LAB_10104bbc;
          if (local_2d4 != 0x20) goto LAB_1010488b;
        }
        if ((uVar13 != 0x7b) ||
           (uVar13 = local_31c,
           ((int)(char)(*(byte *)((uint)((ushort)wVar6 >> 3) + (int)local_328) ^ local_301) &
           1 << ((byte)wVar6 & 7)) == 0)) goto LAB_10104bbc;
      }
LAB_1010488b:
      if (local_2d5 == '\0') {
        if (local_314 != 0) {
          if (local_2e5 != '\0') goto code_r0x101048b2;
          local_2f4 = 0;
          eVar9 = _wctomb_s((int *)&local_2f4,(char *)pwVar16,local_314,wVar6);
          if (eVar9 != 0x22) {
            if (0 < (int)local_2f4) {
              pwVar16 = (wchar_t *)((int)pwVar16 + local_2f4);
              local_314 = local_314 - local_2f4;
              local_30c = pwVar16;
            }
            goto LAB_101047ee;
          }
        }
        piVar7 = __errno();
        *piVar7 = 0xc;
        if (local_2e5 == '\0') {
          *(undefined1 *)pwVar17 = 0;
        }
        else {
          *pwVar17 = L'\0';
        }
        break;
      }
      pwVar17 = pwVar17 + 1;
    } while( true );
  }
  goto LAB_10105039;
code_r0x101048b2:
  *pwVar16 = wVar6;
  pwVar16 = pwVar16 + 1;
  local_30c = pwVar16;
  goto LAB_101047e8;
}

