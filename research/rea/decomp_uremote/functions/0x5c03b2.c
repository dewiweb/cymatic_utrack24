// rea decompile_all
// name: __input_l
// address: 0x5c03b2
// body: available
// range: 0x5c03b2-0x5c136e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __input_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __input_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  char cVar13;
  byte *pbVar14;
  wchar_t *pwVar15;
  byte *pbVar16;
  bool bVar17;
  longlong lVar18;
  FILE *pFVar19;
  va_list local_200;
  localeinfo_struct local_1fc;
  int local_1f4;
  char local_1f0;
  wchar_t local_1ec [2];
  va_list local_1e8;
  byte local_1e4;
  undefined1 local_1e3;
  undefined4 local_1e0;
  int local_1dc;
  byte local_1d5;
  int local_1d4;
  undefined8 local_1d0;
  int local_1c8;
  wchar_t *local_1c4;
  wchar_t *local_1c0;
  byte *local_1bc;
  int local_1b8;
  char local_1b1;
  undefined1 *local_1b0;
  int local_1ac;
  uint local_1a8;
  char local_1a4;
  byte local_1a3;
  char local_1a2;
  char local_1a1;
  FILE *local_1a0;
  char local_19a;
  char local_199;
  int local_198;
  char local_191;
  wchar_t *local_190;
  uint local_18c;
  undefined1 local_188 [352];
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_1e8 = _ArgList;
  local_1b0 = local_188;
  local_1a0 = _File;
  local_1e0 = 0x15e;
  local_1d4 = 0;
  local_1ec[0] = L'\0';
  local_1ec[1] = L'\0';
  local_18c = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    goto LAB_005c1361;
  }
  if ((_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar10 = &DAT_00956450;
    }
    else {
      puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0095dd00)[(int)uVar4 >> 5]);
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar10 = &DAT_00956450;
      }
      else {
        puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0095dd00)[(int)uVar4 >> 5]);
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_005c04b1;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    goto LAB_005c1361;
  }
LAB_005c04b1:
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1fc,_Locale);
  bVar1 = *param_2;
  local_1a1 = '\0';
  local_190 = (wchar_t *)0x0;
  local_1c8 = 0;
  if (bVar1 != 0) {
LAB_005c04dc:
    pFVar19 = local_1a0;
    iVar9 = _isspace((uint)bVar1);
    if (iVar9 != 0) {
      local_190 = (wchar_t *)((int)local_190 + -1);
      uVar5 = __whiteout(pFVar19,pFVar19);
      __un_inc(uVar5);
      do {
        param_2 = param_2 + 1;
        iVar9 = _isspace((uint)*param_2);
      } while (iVar9 != 0);
      goto LAB_005c12c9;
    }
    if (*param_2 == 0x25) {
      if (param_2[1] == 0x25) {
        if (param_2[1] == 0x25) {
          param_2 = param_2 + 1;
        }
        goto LAB_005c125b;
      }
      local_1c4 = (wchar_t *)0x0;
      local_1d5 = 0;
      local_1ac = 0;
      local_1b8 = 0;
      local_198 = 0;
      local_1a3 = 0;
      local_1a4 = '\0';
      local_19a = '\0';
      local_1b1 = '\0';
      local_1a2 = '\0';
      local_191 = '\0';
      local_199 = '\x01';
      local_1dc = 0;
      do {
        pbVar14 = param_2 + 1;
        uVar4 = (uint)*pbVar14;
        iVar9 = _isdigit(uVar4);
        pbVar16 = pbVar14;
        if (iVar9 == 0) {
          if (uVar4 < 0x4f) {
            if (uVar4 != 0x4e) {
              if (uVar4 == 0x2a) {
                local_19a = local_19a + '\x01';
              }
              else if (uVar4 != 0x46) {
                if (uVar4 == 0x49) {
                  bVar1 = param_2[2];
                  if ((bVar1 == 0x36) && (pbVar16 = param_2 + 3, *pbVar16 == 0x34))
                  goto LAB_005c05fd;
                  if ((((((bVar1 != 0x33) || (pbVar16 = param_2 + 3, *pbVar16 != 0x32)) &&
                        (pbVar16 = pbVar14, bVar1 != 100)) && ((bVar1 != 0x69 && (bVar1 != 0x6f))))
                      && (bVar1 != 0x78)) && (bVar1 != 0x58)) goto LAB_005c0656;
                }
                else if (uVar4 == 0x4c) {
                  local_199 = local_199 + '\x01';
                }
                else {
LAB_005c0656:
                  local_1b1 = local_1b1 + '\x01';
                  pbVar16 = pbVar14;
                }
              }
            }
          }
          else if (uVar4 == 0x68) {
            local_199 = local_199 + -1;
            local_191 = local_191 + -1;
          }
          else {
            if (uVar4 == 0x6c) {
              pbVar16 = param_2 + 2;
              if (*pbVar16 == 0x6c) {
LAB_005c05fd:
                local_1dc = local_1dc + 1;
                local_1d0 = 0;
                goto LAB_005c0680;
              }
              local_199 = local_199 + '\x01';
            }
            else if (uVar4 != 0x77) goto LAB_005c0656;
            local_191 = local_191 + '\x01';
            pbVar16 = pbVar14;
          }
        }
        else {
          local_1b8 = local_1b8 + 1;
          local_198 = local_198 * 10 + -0x30 + uVar4;
        }
LAB_005c0680:
        param_2 = pbVar16;
      } while (local_1b1 == '\0');
      if (local_19a == '\0') {
        local_1c0 = *(wchar_t **)local_1e8;
        local_200 = local_1e8;
        local_1e8 = local_1e8 + 4;
      }
      else {
        local_1c0 = (wchar_t *)0x0;
      }
      cVar13 = '\0';
      if ((local_191 == '\0') && ((*pbVar16 == 0x53 || (local_191 = -1, *pbVar16 == 0x43)))) {
        local_191 = '\x01';
      }
      local_1a8 = *pbVar16 | 0x20;
      local_1bc = pbVar16;
      if (local_1a8 != 0x6e) {
        if ((local_1a8 == 99) || (local_1a8 == 0x7b)) {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
        }
        else {
          local_18c = __whiteout(local_1a0);
        }
        if (local_18c == 0xffffffff) goto LAB_005c12ff;
      }
      pFVar19 = local_1a0;
      if ((local_1b8 != 0) && (local_198 == 0)) goto LAB_005c12e1;
      if ((int)local_1a8 < 0x70) {
        if (local_1a8 == 0x6f) {
LAB_005c0f67:
          if (local_18c == 0x2d) {
            local_1a4 = '\x01';
          }
          else if (local_18c != 0x2b) goto LAB_005c0fa9;
          local_198 = local_198 + -1;
          if ((local_198 == 0) && (local_1b8 != 0)) {
            cVar13 = '\x01';
          }
          else {
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc();
          }
          goto LAB_005c0fa9;
        }
        if (local_1a8 == 99) {
          if (local_1b8 == 0) {
            local_198 = local_198 + 1;
            local_1b8 = 1;
          }
LAB_005c0b8d:
          if ('\0' < local_191) {
            local_1a2 = '\x01';
          }
LAB_005c0b9d:
          pFVar19 = local_1a0;
          pwVar15 = local_1c0;
          local_190 = (wchar_t *)((int)local_190 + -1);
          local_1c4 = local_1c0;
          __un_inc(local_18c,local_1a0);
          do {
            if ((local_1b8 != 0) &&
               (iVar9 = local_198 + -1, bVar17 = local_198 == 0, local_198 = iVar9, bVar17))
            goto LAB_005c0f0d;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc();
            if (local_18c == 0xffffffff) goto LAB_005c0efe;
            bVar1 = (byte)local_18c;
            if (local_1a8 != 99) {
              if (local_1a8 == 0x73) {
                if ((8 < (int)local_18c) && ((int)local_18c < 0xe)) goto LAB_005c0efe;
                if (local_18c != 0x20) goto LAB_005c0c4d;
              }
              if ((local_1a8 != 0x7b) ||
                 (((int)(char)(local_28[(int)local_18c >> 3] ^ local_1a3) & 1 << (bVar1 & 7)) == 0))
              goto LAB_005c0efe;
            }
LAB_005c0c4d:
            if (local_19a == '\0') {
              if (local_1a2 == '\0') {
                *(byte *)pwVar15 = bVar1;
                pwVar15 = (wchar_t *)((int)pwVar15 + 1);
                local_1c0 = pwVar15;
              }
              else {
                local_1e4 = bVar1;
                iVar9 = _isleadbyte(local_18c & 0xff);
                if (iVar9 != 0) {
                  local_190 = (wchar_t *)((int)local_190 + 1);
                  local_1e3 = __inc();
                }
                local_1ec[0] = L'?';
                local_1ec[1] = L'\0';
                __mbtowc_l(local_1ec,(char *)&local_1e4,(size_t)(local_1fc.locinfo)->locale_name[3],
                           &local_1fc);
                *pwVar15 = local_1ec[0];
                pwVar15 = pwVar15 + 1;
                local_1c0 = pwVar15;
              }
            }
            else {
              local_1c4 = (wchar_t *)((int)local_1c4 + 1);
            }
          } while( true );
        }
        if (local_1a8 == 100) goto LAB_005c0f67;
        if ((int)local_1a8 < 0x65) {
LAB_005c0cfa:
          if (*local_1bc != local_18c) goto LAB_005c12e1;
          local_1a1 = local_1a1 + -1;
          if (local_19a == '\0') {
            local_1e8 = local_200;
          }
          goto LAB_005c1238;
        }
        if (0x67 < (int)local_1a8) {
          if (local_1a8 == 0x69) {
            local_1a8 = 100;
            goto LAB_005c07b1;
          }
          if (local_1a8 != 0x6e) goto LAB_005c0cfa;
          pwVar15 = local_190;
          lVar18 = local_1d0;
          if (local_19a != '\0') goto LAB_005c1238;
          goto LAB_005c120c;
        }
        iVar9 = 0;
        if (local_18c == 0x2d) {
          *local_1b0 = 0x2d;
          iVar9 = 1;
LAB_005c07ea:
          local_198 = local_198 + -1;
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
        }
        else if (local_18c == 0x2b) goto LAB_005c07ea;
        if (local_1b8 == 0) {
          local_198 = -1;
        }
        while( true ) {
          iVar6 = _isdigit(local_18c & 0xff);
          if ((iVar6 == 0) ||
             (iVar6 = local_198 + -1, bVar17 = local_198 == 0, local_198 = iVar6, bVar17)) break;
          local_1ac = local_1ac + 1;
          local_1b0[iVar9] = (byte)local_18c;
          iVar9 = iVar9 + 1;
          iVar6 = ___check_float_string(iVar9,local_188,&local_1d4);
          if (iVar6 == 0) goto LAB_005c12ff;
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
        }
        local_1a3 = **(byte **)local_1fc.locinfo[1].lc_codepage;
        if ((local_1a3 == (byte)local_18c) &&
           (iVar6 = local_198 + -1, bVar17 = local_198 != 0, local_198 = iVar6, bVar17)) {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
          local_1b0[iVar9] = local_1a3;
          iVar9 = iVar9 + 1;
          iVar6 = ___check_float_string(iVar9,local_188,&local_1d4);
          if (iVar6 == 0) goto LAB_005c12ff;
          while( true ) {
            iVar6 = _isdigit(local_18c & 0xff);
            if ((iVar6 == 0) ||
               (iVar6 = local_198 + -1, bVar17 = local_198 == 0, local_198 = iVar6, bVar17)) break;
            local_1ac = local_1ac + 1;
            local_1b0[iVar9] = (byte)local_18c;
            iVar9 = iVar9 + 1;
            iVar6 = ___check_float_string(iVar9,local_188,&local_1d4);
            if (iVar6 == 0) goto LAB_005c12ff;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc();
          }
        }
        iVar6 = iVar9;
        if ((local_1ac != 0) &&
           (((local_18c == 0x65 || (local_18c == 0x45)) &&
            (iVar7 = local_198 + -1, bVar17 = local_198 != 0, local_198 = iVar7, bVar17)))) {
          local_1b0[iVar9] = 0x65;
          iVar6 = iVar9 + 1;
          iVar7 = ___check_float_string(iVar6,local_188,&local_1d4);
          if (iVar7 == 0) goto LAB_005c12ff;
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
          if (local_18c == 0x2d) {
            local_1b0[iVar6] = 0x2d;
            iVar6 = iVar9 + 2;
            iVar9 = ___check_float_string(iVar6,local_188,&local_1d4);
            if (iVar9 == 0) goto LAB_005c12ff;
LAB_005c0a5b:
            if (local_198 == 0) {
              local_198 = 0;
            }
            else {
              local_190 = (wchar_t *)((int)local_190 + 1);
              local_198 = local_198 + -1;
              local_18c = __inc();
            }
          }
          else if (local_18c == 0x2b) goto LAB_005c0a5b;
          while( true ) {
            iVar9 = _isdigit(local_18c & 0xff);
            if ((iVar9 == 0) ||
               (iVar9 = local_198 + -1, bVar17 = local_198 == 0, local_198 = iVar9, bVar17)) break;
            local_1ac = local_1ac + 1;
            local_1b0[iVar6] = (byte)local_18c;
            iVar6 = iVar6 + 1;
            iVar9 = ___check_float_string(iVar6,local_188,&local_1d4);
            if (iVar9 == 0) goto LAB_005c12ff;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc();
          }
        }
        local_190 = (wchar_t *)((int)local_190 + -1);
        __un_inc(local_18c,local_1a0);
        if (local_1ac != 0) {
          if (local_19a == '\0') {
            local_1c8 = local_1c8 + 1;
            local_1b0[iVar6] = 0;
            pcVar8 = (code *)__decode_pointer(PTR_LAB_0095705c,local_199 + -1,local_1c0,local_1b0,
                                              &local_1fc);
            (*pcVar8)();
          }
          goto LAB_005c1238;
        }
        goto LAB_005c12ff;
      }
      if (local_1a8 == 0x70) {
        local_199 = '\x01';
        goto LAB_005c0f67;
      }
      if (local_1a8 == 0x73) goto LAB_005c0b8d;
      if (local_1a8 == 0x75) goto LAB_005c0f67;
      if (local_1a8 != 0x78) {
        if (local_1a8 == 0x7b) {
          if ('\0' < local_191) {
            local_1a2 = '\x01';
          }
          pbVar16 = local_1bc + 1;
          if (*pbVar16 == 0x5e) {
            pbVar16 = local_1bc + 2;
            local_1a3 = 0xff;
          }
          _memset(local_28,0,0x20);
          if (*pbVar16 == 0x5d) {
            local_28[0xb] = 0x20;
            uVar4 = 0x5d;
            pbVar16 = pbVar16 + 1;
          }
          else {
            uVar4 = (uint)local_1d5;
          }
          while( true ) {
            bVar1 = *pbVar16;
            local_1bc = pbVar16;
            if (bVar1 == 0x5d) break;
            if (((bVar1 == 0x2d) && (bVar11 = (byte)uVar4, bVar11 != 0)) &&
               (bVar2 = pbVar16[1], bVar2 != 0x5d)) {
              if (bVar2 <= bVar11) {
                uVar4 = (uint)bVar2;
                bVar2 = bVar11;
              }
              if ((byte)uVar4 <= bVar2) {
                uVar12 = (uint)(byte)((bVar2 - (byte)uVar4) + 1);
                do {
                  local_28[uVar4 >> 3] = local_28[uVar4 >> 3] | '\x01' << ((byte)uVar4 & 7);
                  uVar4 = uVar4 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar4 = 0;
              pbVar16 = pbVar16 + 2;
            }
            else {
              local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
              uVar4 = (uint)bVar1;
              pbVar16 = pbVar16 + 1;
            }
          }
          goto LAB_005c0b9d;
        }
        goto LAB_005c0cfa;
      }
LAB_005c07b1:
      cVar13 = '\0';
      if (local_18c == 0x2d) {
        local_1a4 = '\x01';
LAB_005c0dfb:
        local_198 = local_198 + -1;
        if ((local_198 == 0) && (local_1b8 != 0)) {
          cVar13 = '\x01';
        }
        else {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
        }
      }
      else if (local_18c == 0x2b) goto LAB_005c0dfb;
      if (local_18c == 0x30) {
        local_190 = (wchar_t *)((int)local_190 + 1);
        local_18c = __inc();
        if (((char)local_18c == 'x') || ((char)local_18c == 'X')) {
          local_190 = (wchar_t *)((int)local_190 + 1);
          local_18c = __inc();
          if ((local_1b8 != 0) && (local_198 = local_198 + -2, local_198 < 1)) {
            cVar13 = cVar13 + '\x01';
          }
          local_1a8 = 0x78;
        }
        else {
          local_1ac = 1;
          if (local_1a8 == 0x78) {
            local_190 = (wchar_t *)((int)local_190 + -1);
            __un_inc(local_18c,local_1a0);
            local_18c = 0x30;
          }
          else {
            if ((local_1b8 != 0) && (local_198 = local_198 + -1, local_198 == 0)) {
              cVar13 = cVar13 + '\x01';
            }
            local_1a8 = 0x6f;
          }
        }
      }
LAB_005c0fa9:
      lVar18 = local_1d0;
      if (local_1dc == 0) {
        pwVar15 = local_1c4;
        if (cVar13 == '\0') {
          while ((local_1a8 != 0x78 && (local_1a8 != 0x70))) {
            iVar9 = _isdigit(local_18c & 0xff);
            if (iVar9 == 0) goto LAB_005c11b6;
            if (local_1a8 == 0x6f) {
              if (0x37 < (int)local_18c) goto LAB_005c11b6;
              iVar9 = (int)pwVar15 << 3;
            }
            else {
              iVar9 = (int)pwVar15 * 10;
            }
LAB_005c1179:
            local_1ac = local_1ac + 1;
            pwVar15 = (wchar_t *)(iVar9 + -0x30 + local_18c);
            if ((local_1b8 != 0) && (local_198 = local_198 + -1, lVar18 = local_1d0, local_198 == 0)
               ) goto LAB_005c11cf;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc();
          }
          iVar9 = _isxdigit(local_18c & 0xff);
          if (iVar9 != 0) {
            iVar9 = (int)pwVar15 << 4;
            local_18c = __hextodec(local_18c);
            goto LAB_005c1179;
          }
LAB_005c11b6:
          local_190 = (wchar_t *)((int)local_190 + -1);
          __un_inc(local_18c,local_1a0);
          lVar18 = local_1d0;
        }
LAB_005c11cf:
        if (local_1a4 != '\0') {
          pwVar15 = (wchar_t *)-(int)pwVar15;
        }
      }
      else {
        if (cVar13 == '\0') {
          while ((local_1a8 != 0x78 && (local_1a8 != 0x70))) {
            iVar9 = _isdigit(local_18c & 0xff);
            if (iVar9 == 0) goto LAB_005c10b0;
            if (local_1a8 == 0x6f) {
              if (0x37 < (int)local_18c) goto LAB_005c10b0;
              lVar18 = local_1d0 << 3;
            }
            else {
              lVar18 = __allmul(local_1d0,10,0);
            }
LAB_005c1063:
            local_1ac = local_1ac + 1;
            local_1d0 = lVar18 + (int)(local_18c - 0x30);
            if ((local_1b8 != 0) && (local_198 = local_198 + -1, lVar18 = local_1d0, local_198 == 0)
               ) goto LAB_005c10c9;
            local_190 = (wchar_t *)((int)local_190 + 1);
            local_18c = __inc();
          }
          iVar9 = _isxdigit(local_18c & 0xff);
          if (iVar9 != 0) {
            lVar18 = local_1d0 << 4;
            local_18c = __hextodec(local_18c);
            goto LAB_005c1063;
          }
LAB_005c10b0:
          local_190 = (wchar_t *)((int)local_190 + -1);
          __un_inc(local_18c,local_1a0);
          lVar18 = local_1d0;
        }
LAB_005c10c9:
        local_1d0._4_4_ = (int)((ulonglong)lVar18 >> 0x20);
        local_1d0._0_4_ = (int)lVar18;
        pwVar15 = local_1c4;
        if (local_1a4 != '\0') {
          lVar18 = CONCAT44(-(local_1d0._4_4_ + (uint)((int)local_1d0 != 0)),-(int)local_1d0);
        }
      }
      if (local_1a8 == 0x46) {
        local_1ac = 0;
      }
      local_1d0 = lVar18;
      if (local_1ac == 0) goto LAB_005c12ff;
      if (local_19a == '\0') {
        local_1c8 = local_1c8 + 1;
LAB_005c120c:
        local_1d0 = lVar18;
        if (local_1dc == 0) {
          if (local_199 == '\0') {
            *local_1c0 = (wchar_t)pwVar15;
          }
          else {
            *(wchar_t **)local_1c0 = pwVar15;
          }
        }
        else {
          *(longlong *)local_1c0 = lVar18;
        }
      }
      goto LAB_005c1238;
    }
LAB_005c125b:
    local_190 = (wchar_t *)((int)local_190 + 1);
    uVar4 = __inc();
    pbVar16 = param_2 + 1;
    local_1bc = pbVar16;
    local_18c = uVar4;
    if (*param_2 == uVar4) {
      iVar9 = _isleadbyte(uVar4 & 0xff);
      if (iVar9 != 0) {
        local_190 = (wchar_t *)((int)local_190 + 1);
        uVar12 = __inc();
        bVar1 = *pbVar16;
        pbVar16 = param_2 + 2;
        local_1bc = pbVar16;
        if (bVar1 == uVar12) {
          local_190 = (wchar_t *)((int)local_190 + -1);
          goto LAB_005c12ad;
        }
        __un_inc(uVar12,pFVar19);
        __un_inc(uVar4,pFVar19);
        goto LAB_005c12ff;
      }
      goto LAB_005c12ad;
    }
LAB_005c12e1:
    __un_inc(local_18c,pFVar19);
LAB_005c12ff:
    if (local_1d4 == 1) {
      _free(local_1b0);
    }
    if (local_18c == 0xffffffff) {
      if (local_1f0 != '\0') {
        *(uint *)(local_1f4 + 0x70) = *(uint *)(local_1f4 + 0x70) & 0xfffffffd;
      }
      goto LAB_005c1361;
    }
  }
  if (local_1f0 != '\0') {
    *(uint *)(local_1f4 + 0x70) = *(uint *)(local_1f4 + 0x70) & 0xfffffffd;
  }
LAB_005c1361:
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
LAB_005c0efe:
  local_190 = (wchar_t *)((int)local_190 + -1);
  __un_inc(local_18c,pFVar19);
LAB_005c0f0d:
  if (local_1c4 == pwVar15) goto LAB_005c12ff;
  if ((local_19a == '\0') && (local_1c8 = local_1c8 + 1, local_1a8 != 99)) {
    if (local_1a2 == '\0') {
      *(byte *)local_1c0 = 0;
    }
    else {
      *local_1c0 = L'\0';
    }
  }
LAB_005c1238:
  local_1a1 = local_1a1 + '\x01';
  pbVar16 = local_1bc + 1;
  local_1bc = pbVar16;
LAB_005c12ad:
  param_2 = pbVar16;
  if ((local_18c == 0xffffffff) &&
     ((*pbVar16 != 0x25 || (param_2 = local_1bc, local_1bc[1] != 0x6e)))) goto LAB_005c12ff;
LAB_005c12c9:
  bVar1 = *param_2;
  if (bVar1 == 0) goto LAB_005c12ff;
  goto LAB_005c04dc;
}

