// rea decompile_all
// name: FUN_004ce9ee
// address: 0x4ce9ee
// body: available
// range: 0x4ce9ee-0x4cf4c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_004ce9ee(_locale_t param_1,ushort param_2,tm *param_3,wchar_t **param_4,uint *param_5,
            __crt_lc_time_data *param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  wchar_t wVar5;
  int iVar6;
  int *piVar7;
  errno_t eVar8;
  uint in_ECX;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  wchar_t *pwVar14;
  size_t local_c;
  uint local_8;
  
  local_c = in_ECX;
  local_8 = in_ECX;
  if (0x5a < param_2) {
    while (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        pwVar14 = L"\n";
        goto LAB_004cecbf;
      }
      if (param_2 < 0x66) {
        if (param_2 == 0x65) {
          iVar6 = param_3->tm_mday;
          if ((iVar6 < 1) || (0x1f < iVar6)) goto LAB_004ceced;
          bVar4 = ((char)param_7 != '\0') - 1U & 0x20;
          goto LAB_004ced1f;
        }
        if (param_2 == 0x61) {
          iVar6 = param_3->tm_wday;
          if ((iVar6 < 0) || (6 < iVar6)) goto LAB_004ceced;
          pwVar14 = *(wchar_t **)(param_6 + iVar6 * 4 + 0xb4);
          goto LAB_004cecbf;
        }
        if (param_2 == 0x62) {
          iVar6 = param_3->tm_mon;
          if ((iVar6 < 0) || (0xb < iVar6)) goto LAB_004ceced;
          pwVar14 = *(wchar_t **)(param_6 + iVar6 * 4 + 0xec);
          goto LAB_004cecbf;
        }
        if (param_2 != 99) {
          if (param_2 != 100) {
            return 0;
          }
          if ((param_3->tm_mday < 1) || (0x1f < param_3->tm_mday)) goto LAB_004ceced;
          wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
          iVar13 = 2;
          iVar6 = param_3->tm_mday;
          goto LAB_004cea77;
        }
        if ((param_6 != (__crt_lc_time_data *)&PTR_DAT_00732748) || ((char)param_7 != '\0')) {
          bVar3 = store_winword((__crt_locale_pointers *)param_1,(uint)((char)param_7 != '\0'),
                                param_3,param_4,param_5,param_6);
          if (!bVar3) goto LAB_004ceb9d;
          store_string(L" ",param_4,param_5);
          cVar2 = store_winword((__crt_locale_pointers *)param_1,2,param_3,param_4,param_5,param_6);
          goto LAB_004cec45;
        }
        cVar2 = FUN_004ce9ee(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_00732748,0);
        if (cVar2 == '\0') goto LAB_004ceb9d;
        store_string(L" ",param_4,param_5);
        cVar2 = FUN_004ce9ee(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_00732748,0);
        if (cVar2 == '\0') goto LAB_004ceb9d;
        store_string(L" ",param_4,param_5);
        cVar2 = FUN_004ce9ee(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_00732748,0);
        if (cVar2 == '\0') goto LAB_004ceb9d;
        store_string(L" ",param_4,param_5);
        cVar2 = FUN_004ce9ee(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_00732748,0);
        if (cVar2 == '\0') goto LAB_004ceb9d;
        store_string(L" ",param_4,param_5);
        param_7 = 0;
        uVar11 = 0x59;
        goto LAB_004cec3a;
      }
      if (param_2 == 0x67) {
        if ((param_3->tm_year < -0x76c) || (0x1fa3 < param_3->tm_year)) goto LAB_004ceced;
        wVar5 = L'0';
        iVar13 = 2;
        iVar6 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
        goto LAB_004ceaf6;
      }
      if (param_2 != 0x68) {
        if (param_2 == 0x6a) {
          iVar6 = param_3->tm_yday;
          if ((iVar6 < 0) || (0x16d < iVar6)) goto LAB_004ceced;
          iVar13 = 3;
        }
        else {
          if (param_2 != 0x6d) {
            return 0;
          }
          iVar6 = param_3->tm_mon;
          if ((iVar6 < 0) || (0xb < iVar6)) goto LAB_004ceced;
          iVar13 = 2;
        }
        wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
        iVar6 = iVar6 + 1;
        goto LAB_004cea77;
      }
      param_2 = 0x62;
    }
    if (param_2 < 0x78) {
      if (param_2 != 0x77) {
        if (param_2 == 0x70) {
          iVar6 = param_3->tm_hour;
          if ((-1 < iVar6) && (iVar6 < 0x18)) {
            if (iVar6 < 0xc) {
              pwVar14 = *(wchar_t **)(param_6 + 0x14c);
            }
            else {
              pwVar14 = *(wchar_t **)(param_6 + 0x150);
            }
            goto LAB_004cecbf;
          }
          goto LAB_004ceced;
        }
        if (param_2 == 0x72) {
          if (param_6 == (__crt_lc_time_data *)&PTR_DAT_00732748) {
            cVar2 = FUN_004ce9ee(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_00732748,param_7);
            if (cVar2 == '\0') goto LAB_004ceb9d;
            store_string(L":",param_4,param_5);
            cVar2 = FUN_004ce9ee(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_00732748,param_7);
            if (cVar2 == '\0') goto LAB_004ceb9d;
            store_string(L":",param_4,param_5);
            cVar2 = FUN_004ce9ee(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_00732748,param_7);
            if (cVar2 == '\0') goto LAB_004ceb9d;
            store_string(L" ",param_4,param_5);
            uVar11 = 0x70;
            goto LAB_004cec3a;
          }
          cVar2 = FUN_004ce9ee(param_1,0x58,param_3,param_4,param_5,param_6,param_7);
          goto LAB_004cec45;
        }
        if (param_2 == 0x74) {
          pwVar14 = L"\t";
          goto LAB_004cecbf;
        }
        if (param_2 != 0x75) {
          return 0;
        }
      }
      iVar6 = param_3->tm_wday;
      if ((-1 < iVar6) && (iVar6 < 7)) {
        if ((iVar6 == 0) && (param_2 == 0x75)) {
          iVar6 = 7;
        }
        bVar4 = ((char)param_7 != '\0') - 1U & 0x30;
        iVar13 = 1;
LAB_004ced2d:
        wVar5 = (wchar_t)(char)bVar4;
LAB_004cea77:
        store_number(iVar6,iVar13,param_4,param_5,wVar5);
        return 1;
      }
    }
    else {
      if (param_2 == 0x78) {
        uVar12 = (uint)((char)param_7 != '\0');
        goto LAB_004cefbd;
      }
      if (param_2 == 0x79) {
        iVar6 = param_3->tm_year;
        if ((-0x76d < iVar6) && (iVar6 < 0x1fa4)) {
          wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
          iVar13 = 2;
LAB_004ceaf6:
          iVar6 = (iVar6 + 0x76c) % 100;
          goto LAB_004cea77;
        }
      }
      else {
        if (param_2 != 0x7a) {
          return 0;
        }
        ___tzset();
        local_8 = 0;
        iVar6 = FUN_004d0af5(&local_8);
        if (iVar6 == 0) {
          if (param_3->tm_isdst == 0) {
LAB_004cef10:
            iVar6 = (int)((local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f)) / 0x3c;
            pwVar14 = L"+";
            if (-1 < (int)local_8) {
              pwVar14 = L"-";
            }
            store_string(pwVar14,param_4,param_5);
            store_number(iVar6 / 0x3c,2,param_4,param_5,L'0');
            store_number(iVar6 % 0x3c,2,param_4,param_5,L'0');
            return 1;
          }
          local_c = 0;
          iVar6 = FUN_004d0ac9(&local_c);
          if (iVar6 == 0) {
            local_8 = local_8 + local_c;
            goto LAB_004cef10;
          }
        }
      }
    }
    goto LAB_004ceced;
  }
  if (param_2 == 0x5a) {
    ___tzset();
    local_c = 0;
    iVar6 = FUN_004d0a97();
    eVar8 = __mbstowcs_s_l(&local_c,*param_4,*param_5,
                           *(char **)(iVar6 + (uint)(param_3->tm_isdst != 0) * 4),0xffffffff,param_1
                          );
    if ((eVar8 != 0) && ((eVar8 == 0x16 || (eVar8 == 0x22)))) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (eVar8 == 0x50) {
      *param_4 = *param_4 + *param_5;
      *param_5 = 0;
      return 1;
    }
    *param_5 = *param_5 + (1 - local_c);
    *param_4 = *param_4 + (local_c - 1);
    return 1;
  }
  if (param_2 < 0x4e) {
    if (param_2 == 0x4d) {
      iVar6 = param_3->tm_min;
      if (-1 < iVar6) {
        bVar10 = SBORROW4(iVar6,0x3b);
        bVar9 = iVar6 + -0x3b < 0;
        bVar3 = iVar6 == 0x3b;
        goto LAB_004cf19c;
      }
      goto LAB_004ceced;
    }
    if (param_2 < 0x45) {
      if (param_2 != 0x44) {
        if (param_2 == 0x25) {
          pwVar14 = L"%";
LAB_004cecbf:
          store_string(pwVar14,param_4,param_5);
          return 1;
        }
        if (param_2 == 0x41) {
          iVar6 = param_3->tm_wday;
          if ((-1 < iVar6) && (iVar6 < 7)) {
            pwVar14 = *(wchar_t **)(param_6 + iVar6 * 4 + 0xd0);
            goto LAB_004cecbf;
          }
        }
        else if (param_2 == 0x42) {
          iVar6 = param_3->tm_mon;
          if ((-1 < iVar6) && (iVar6 < 0xc)) {
            pwVar14 = *(wchar_t **)(param_6 + iVar6 * 4 + 0x11c);
            goto LAB_004cecbf;
          }
        }
        else {
          if (param_2 != 0x43) {
            return 0;
          }
          iVar6 = param_3->tm_year;
          if ((-0x76d < iVar6) && (iVar6 < 0x1fa4)) {
            wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
            iVar13 = 2;
            iVar6 = (iVar6 + 0x76c) / 100;
            goto LAB_004cea77;
          }
        }
        goto LAB_004ceced;
      }
      cVar2 = FUN_004ce9ee(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_004ceb9d;
      store_string(L"/",param_4,param_5);
      cVar2 = FUN_004ce9ee(param_1,100,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_004ceb9d;
      store_string(L"/",param_4,param_5);
      uVar11 = 0x79;
    }
    else {
      if (param_2 != 0x46) {
        if (param_2 == 0x47) {
          if ((-0x76d < param_3->tm_year) && (param_3->tm_year < 0x1fa4)) {
            wVar5 = L'0';
            iVar13 = 4;
            iVar6 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
            iVar6 = iVar6 + 0x76c;
            goto LAB_004cea77;
          }
        }
        else if (param_2 == 0x48) {
          iVar6 = param_3->tm_hour;
          if (-1 < iVar6) {
            bVar10 = SBORROW4(iVar6,0x17);
            bVar9 = iVar6 + -0x17 < 0;
            bVar3 = iVar6 == 0x17;
            goto LAB_004cf19c;
          }
        }
        else {
          if (param_2 != 0x49) {
            return 0;
          }
          iVar13 = param_3->tm_hour;
          if ((-1 < iVar13) && (iVar13 < 0x18)) {
            iVar6 = iVar13 % 0xc;
            if (iVar13 % 0xc == 0) {
              iVar6 = 0xc;
            }
            wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
            iVar13 = 2;
            goto LAB_004cea77;
          }
        }
        goto LAB_004ceced;
      }
      cVar2 = FUN_004ce9ee(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_004ceb9d;
      store_string(L"-",param_4,param_5);
      cVar2 = FUN_004ce9ee(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_004ceb9d;
      store_string(L"-",param_4,param_5);
      uVar11 = 100;
    }
    goto LAB_004cec3a;
  }
  switch(param_2) {
  case 0x52:
    cVar2 = FUN_004ce9ee(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
    if (cVar2 == '\0') goto LAB_004ceb9d;
    store_string(L":",param_4,param_5);
    uVar11 = 0x4d;
    goto LAB_004cec3a;
  case 0x53:
    iVar6 = param_3->tm_sec;
    if (-1 < iVar6) {
      bVar10 = SBORROW4(iVar6,0x3c);
      bVar9 = iVar6 + -0x3c < 0;
      bVar3 = iVar6 == 0x3c;
LAB_004cf19c:
      if (bVar3 || bVar10 != bVar9) {
        bVar4 = ((char)param_7 != '\0') - 1U & 0x30;
LAB_004ced1f:
        iVar13 = 2;
        goto LAB_004ced2d;
      }
    }
    break;
  case 0x54:
    cVar2 = FUN_004ce9ee(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
    if (cVar2 == '\0') goto LAB_004ceb9d;
    store_string(L":",param_4,param_5);
    cVar2 = FUN_004ce9ee(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
    if (cVar2 == '\0') goto LAB_004ceb9d;
    store_string(L":",param_4,param_5);
    uVar11 = 0x53;
LAB_004cec3a:
    cVar2 = FUN_004ce9ee(param_1,uVar11,param_3,param_4,param_5,param_6,param_7);
LAB_004cec45:
    if (cVar2 != '\0') {
      return 1;
    }
LAB_004ceb9d:
    piVar7 = __errno();
    *piVar7 = 0x16;
    return 0;
  case 0x55:
  case 0x57:
    iVar13 = param_3->tm_wday;
    if ((-1 < iVar13) && (iVar13 < 7)) {
      if (param_2 == 0x57) {
        if (iVar13 == 0) {
          iVar13 = 6;
        }
        else {
          iVar13 = iVar13 + -1;
        }
      }
      iVar1 = param_3->tm_yday;
      if ((-1 < iVar1) && (iVar1 < 0x16e)) {
        iVar6 = 0;
        if ((iVar13 <= iVar1) && (iVar6 = iVar1 / 7, iVar13 <= iVar1 % 7)) {
          iVar6 = iVar6 + 1;
        }
        wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
        iVar13 = 2;
        goto LAB_004cea77;
      }
    }
    break;
  case 0x56:
    wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
    iVar13 = 2;
    iVar6 = compute_iso_week(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
    goto LAB_004cea77;
  case 0x58:
    uVar12 = 2;
LAB_004cefbd:
    cVar2 = store_winword((__crt_locale_pointers *)param_1,uVar12,param_3,param_4,param_5,param_6);
    goto LAB_004cec45;
  case 0x59:
    iVar6 = param_3->tm_year;
    if ((-0x76d < iVar6) && (iVar6 < 0x1fa4)) {
      wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
      iVar6 = iVar6 + 0x76c;
      iVar13 = 4;
      goto LAB_004cea77;
    }
    break;
  default:
    goto LAB_004cf4b9;
  }
LAB_004ceced:
  piVar7 = __errno();
  *piVar7 = 0x16;
  FUN_004d0d1c();
LAB_004cf4b9:
  return 0;
}

