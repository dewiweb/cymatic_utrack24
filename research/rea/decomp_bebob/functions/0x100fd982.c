// rea decompile_all
// name: FUN_100fd982
// address: 0x100fd982
// body: available
// range: 0x100fd982-0x100fe528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100fd982(int param_1,wchar_t *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  short *psVar3;
  wchar_t *pwVar4;
  int *piVar5;
  uint uVar6;
  undefined3 extraout_var;
  code *pcVar7;
  int iVar8;
  int extraout_ECX;
  uint uVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  bool bVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  localeinfo_struct *plVar18;
  uint local_474;
  uint local_470;
  undefined4 local_46c;
  int *local_468;
  int local_464;
  uint local_460;
  localeinfo_struct local_45c;
  int local_454;
  char local_450;
  int local_44c;
  int local_448;
  wchar_t *local_444;
  wchar_t *local_440;
  char local_43c;
  undefined1 local_43b;
  wchar_t local_438;
  short local_436;
  uint local_434;
  int local_430;
  int local_42c;
  int local_428;
  wchar_t *local_424;
  uint local_420;
  int local_41c;
  size_t local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_428 = param_1;
  local_424 = param_4;
  local_448 = 0;
  local_40c = 0;
  local_434 = 0;
  local_410 = 0;
  local_42c = 0;
  local_44c = 0;
  local_430 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_45c,param_3);
  local_468 = __errno();
  if ((local_428 == 0) || (param_2 == (wchar_t *)0x0)) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_100fe6d4();
LAB_100fda12:
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  else {
    wVar1 = *param_2;
    local_41c = 0;
    local_418 = 0;
    local_440 = (wchar_t *)0x0;
    iVar8 = 0;
    while (local_420 = (uint)(ushort)wVar1, wVar1 != L'\0') {
      local_444 = param_2 + 1;
      if (local_41c < 0) break;
      if ((ushort)(wVar1 + L'￠') < 0x59) {
        uVar6 = (int)(char)(&DAT_10141a18)[local_420] & 0xf;
      }
      else {
        uVar6 = 0;
      }
      local_464 = (int)(char)(&DAT_10141a38)[uVar6 * 8 + iVar8] >> 4;
      switch(local_464) {
      case 0:
switchD_100fda9e_caseD_0:
        local_430 = 1;
        write_char(wVar1);
        break;
      case 1:
        local_410 = 0xffffffff;
        local_46c = 0;
        local_44c = 0;
        local_434 = 0;
        local_42c = 0;
        local_40c = 0;
        local_430 = 0;
        break;
      case 2:
        if (local_420 == 0x20) {
          local_40c = local_40c | 2;
        }
        else if (local_420 == 0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (local_420 == 0x2b) {
          local_40c = local_40c | 1;
        }
        else if (local_420 == 0x2d) {
          local_40c = local_40c | 4;
        }
        else if (local_420 == 0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (wVar1 == L'*') {
          local_424 = param_4 + 2;
          local_434 = *(uint *)param_4;
          if ((int)local_434 < 0) {
            local_40c = local_40c | 4;
            local_434 = -local_434;
          }
        }
        else {
          local_434 = local_434 * 10 + -0x30 + local_420;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (wVar1 == L'*') {
          local_424 = param_4 + 2;
          local_410 = *(uint *)param_4;
          if ((int)local_410 < 0) {
            local_410 = 0xffffffff;
          }
        }
        else {
          local_410 = local_410 * 10 + -0x30 + local_420;
        }
        break;
      case 6:
        if (local_420 == 0x49) {
          wVar2 = *local_444;
          if ((wVar2 == L'6') && (param_2[2] == L'4')) {
            local_444 = param_2 + 3;
            local_40c = local_40c | 0x8000;
          }
          else if ((wVar2 == L'3') && (param_2[2] == L'2')) {
            local_444 = param_2 + 3;
            local_40c = local_40c & 0xffff7fff;
          }
          else if (((((wVar2 != L'd') && (wVar2 != L'i')) && (wVar2 != L'o')) &&
                   ((wVar2 != L'u' && (wVar2 != L'x')))) && (wVar2 != L'X')) {
            local_464 = 0;
            goto switchD_100fda9e_caseD_0;
          }
        }
        else if (local_420 == 0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (local_420 == 0x6c) {
          if (*local_444 == L'l') {
            local_444 = param_2 + 2;
            local_40c = local_40c | 0x1000;
          }
          else {
            local_40c = local_40c | 0x10;
          }
        }
        else if (local_420 == 0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        if (local_420 < 0x65) {
          if (local_420 == 100) {
LAB_100fdfae:
            local_40c = local_40c | 0x40;
LAB_100fdfb5:
            local_420 = 10;
LAB_100fdfbf:
            if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
              local_424 = param_4 + 2;
              if ((local_40c & 0x20) == 0) {
                uVar6 = *(uint *)param_4;
                if ((local_40c & 0x40) == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (int)uVar6 >> 0x1f;
                }
              }
              else {
                if ((local_40c & 0x40) == 0) {
                  uVar6 = (uint)(ushort)*param_4;
                }
                else {
                  uVar6 = (uint)*param_4;
                }
                uVar9 = (int)uVar6 >> 0x1f;
              }
            }
            else {
              uVar6 = *(uint *)param_4;
              uVar9 = *(uint *)(param_4 + 2);
              local_424 = param_4 + 4;
            }
            if ((((local_40c & 0x40) != 0) && ((int)uVar9 < 1)) && ((int)uVar9 < 0)) {
              bVar13 = uVar6 != 0;
              uVar6 = -uVar6;
              uVar9 = -(uVar9 + bVar13);
              local_40c = local_40c | 0x100;
            }
            if ((local_40c & 0x9000) == 0) {
              uVar9 = 0;
            }
            lVar14 = CONCAT44(uVar9,uVar6);
            if ((int)local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar6 == 0 && uVar9 == 0) {
              local_42c = 0;
            }
            pwVar12 = &local_209;
            while( true ) {
              uVar6 = local_410 - 1;
              if (((int)local_410 < 1) && (lVar14 == 0)) break;
              local_410 = uVar6;
              lVar14 = __aulldvrm((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_420,
                                  (int)local_420 >> 0x1f);
              iVar8 = extraout_ECX + 0x30;
              if (0x39 < iVar8) {
                iVar8 = iVar8 + local_448;
              }
              *(byte *)pwVar12 = (byte)iVar8;
              pwVar12 = (wchar_t *)((int)pwVar12 + -1);
            }
            local_418 = (int)&local_209 + -(int)pwVar12;
            local_414 = (wchar_t *)((int)pwVar12 + 1);
            local_410 = uVar6;
            if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30)))) {
              local_418 = (int)&local_209 + -(int)pwVar12 + 1;
              *(byte *)pwVar12 = 0x30;
              local_414 = pwVar12;
            }
          }
          else if (local_420 < 0x54) {
            if (local_420 == 0x53) {
              if ((local_40c & 0x830) == 0) {
                local_40c = local_40c | 0x20;
              }
              goto LAB_100fdd8a;
            }
            if (local_420 != 0x41) {
              if (local_420 == 0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
LAB_100fde33:
                wVar1 = *param_4;
                local_460 = (uint)(ushort)wVar1;
                local_424 = param_4 + 2;
                local_430 = 1;
                if ((local_40c & 0x20) == 0) {
                  local_408[0] = wVar1;
                }
                else {
                  local_43c = (char)wVar1;
                  local_43b = 0;
                  iVar8 = __mbtowc_l(local_408,&local_43c,
                                     (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                  if (iVar8 < 0) {
                    local_44c = 1;
                  }
                }
                local_418 = 1;
                local_414 = local_408;
                goto LAB_100fe2ed;
              }
              if ((local_420 != 0x45) && (local_420 != 0x47)) goto LAB_100fe2ed;
            }
            local_420 = local_420 + 0x20;
            local_46c = 1;
LAB_100fdd21:
            local_40c = local_40c | 0x40;
            local_418 = 0x200;
            pwVar10 = local_408;
            sVar11 = local_418;
            pwVar12 = local_408;
            if ((int)local_410 < 0) {
              local_410 = 6;
            }
            else if (local_410 == 0) {
              if ((short)local_420 == 0x67) {
                local_410 = 1;
              }
            }
            else {
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
              if (0xa3 < (int)local_410) {
                sVar11 = local_410 + 0x15d;
                local_414 = local_408;
                local_440 = __malloc_crt(sVar11);
                pwVar10 = local_440;
                pwVar12 = local_440;
                if (local_440 == (wchar_t *)0x0) {
                  local_410 = 0xa3;
                  pwVar10 = local_408;
                  sVar11 = local_418;
                  pwVar12 = local_414;
                }
              }
            }
            local_414 = pwVar12;
            local_418 = sVar11;
            local_474 = *(uint *)param_4;
            local_424 = param_4 + 4;
            local_470 = *(uint *)(param_4 + 2);
            plVar18 = &local_45c;
            uVar16 = CONCAT44(local_410,(int)(char)local_420);
            puVar15 = &local_474;
            pwVar12 = pwVar10;
            sVar11 = local_418;
            uVar17 = local_46c;
            pcVar7 = DecodePointer(PTR_LAB_10163eec);
            (*pcVar7)(puVar15,pwVar12,sVar11,uVar16,uVar17,plVar18);
            uVar6 = local_40c & 0x80;
            if ((uVar6 != 0) && (local_410 == 0)) {
              plVar18 = &local_45c;
              pwVar12 = pwVar10;
              pcVar7 = DecodePointer(PTR_LAB_10163ef8);
              (*pcVar7)(pwVar12,plVar18);
            }
            if (((short)local_420 == 0x67) && (uVar6 == 0)) {
              plVar18 = &local_45c;
              pwVar12 = pwVar10;
              pcVar7 = DecodePointer(PTR_LAB_10163ef4);
              (*pcVar7)(pwVar12,plVar18);
            }
            pwVar12 = pwVar10;
            pwVar4 = local_414;
            if ((byte)*pwVar10 == 0x2d) {
              local_40c = local_40c | 0x100;
              pwVar12 = (wchar_t *)((int)pwVar10 + 1);
              pwVar4 = (wchar_t *)((int)pwVar10 + 1);
            }
LAB_100fdf0c:
            local_414 = pwVar4;
            local_418 = _strlen((char *)pwVar12);
          }
          else {
            if (local_420 == 0x58) goto LAB_100fe110;
            if (local_420 == 0x5a) {
              psVar3 = *(short **)param_4;
              local_424 = param_4 + 2;
              pwVar12 = (wchar_t *)PTR_DAT_10163ec8;
              pwVar4 = (wchar_t *)PTR_DAT_10163ec8;
              if ((psVar3 == (short *)0x0) ||
                 (local_414 = *(wchar_t **)(psVar3 + 2), pwVar4 = (wchar_t *)PTR_DAT_10163ec8,
                 local_414 == (wchar_t *)0x0)) goto LAB_100fdf0c;
              local_418 = (size_t)*psVar3;
              if ((local_40c & 0x800) != 0) {
                iVar8 = local_418 - ((int)local_418 >> 0x1f);
                goto LAB_100fe2e5;
              }
              local_430 = 0;
            }
            else {
              if (local_420 == 0x61) goto LAB_100fdd21;
              if (local_420 == 99) goto LAB_100fde33;
            }
          }
LAB_100fe2ed:
          if (local_44c == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_100fe32f;
                  local_438 = L' ';
                }
                else {
                  local_438 = L'+';
                }
              }
              else {
                local_438 = L'-';
              }
              local_42c = 1;
            }
LAB_100fe32f:
            uVar6 = (local_434 - local_418) - local_42c;
            local_420 = uVar6;
            if ((local_40c & 0xc) == 0) {
              do {
                if ((int)uVar6 < 1) break;
                uVar6 = uVar6 - 1;
                write_char(L' ');
              } while (local_41c != -1);
            }
            FUN_100fd91b(&local_438,local_42c);
            if (((local_40c & 8) != 0) && (uVar6 = local_420, (local_40c & 4) == 0)) {
              do {
                if ((int)uVar6 < 1) break;
                write_char(L'0');
                uVar6 = uVar6 - 1;
              } while (local_41c != -1);
            }
            if ((local_430 == 0) && (sVar11 = local_418, pwVar12 = local_414, 0 < (int)local_418)) {
              do {
                sVar11 = sVar11 - 1;
                iVar8 = __mbtowc_l((wchar_t *)&local_460,(char *)pwVar12,
                                   (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                if (iVar8 < 1) {
                  local_41c = -1;
                  break;
                }
                write_char((wchar_t)local_460);
                pwVar12 = (wchar_t *)((int)pwVar12 + iVar8);
              } while (0 < (int)sVar11);
            }
            else {
              FUN_100fd91b(local_414,local_418);
            }
            if ((-1 < local_41c) && (uVar6 = local_420, (local_40c & 4) != 0)) {
              do {
                if ((int)uVar6 < 1) break;
                write_char(L' ');
                uVar6 = uVar6 - 1;
              } while (local_41c != -1);
            }
          }
        }
        else {
          if (0x70 < local_420) {
            if (local_420 == 0x73) {
LAB_100fdd8a:
              uVar6 = local_410;
              if (local_410 == 0xffffffff) {
                uVar6 = 0x7fffffff;
              }
              local_424 = param_4 + 2;
              local_414 = *(wchar_t **)param_4;
              if ((local_40c & 0x20) == 0) {
                pwVar12 = local_414;
                if (local_414 == (wchar_t *)0x0) {
                  pwVar12 = (wchar_t *)PTR_u__null__10163ecc;
                  local_414 = (wchar_t *)PTR_u__null__10163ecc;
                }
                for (; (uVar6 != 0 && (uVar6 = uVar6 - 1, *pwVar12 != L'\0')); pwVar12 = pwVar12 + 1
                    ) {
                }
                iVar8 = (int)pwVar12 - (int)local_414;
LAB_100fe2e5:
                local_424 = param_4 + 2;
                local_430 = 1;
                local_418 = iVar8 >> 1;
              }
              else {
                if (local_414 == (wchar_t *)0x0) {
                  local_414 = (wchar_t *)PTR_DAT_10163ec8;
                }
                local_418 = 0;
                pwVar12 = local_414;
                if (0 < (int)uVar6) {
                  do {
                    if ((byte)*pwVar12 == 0) break;
                    iVar8 = __isleadbyte_l((uint)(byte)*pwVar12,&local_45c);
                    if (iVar8 != 0) {
                      pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    }
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    local_418 = local_418 + 1;
                  } while ((int)local_418 < (int)uVar6);
                }
              }
              goto LAB_100fe2ed;
            }
            if (local_420 == 0x75) goto LAB_100fdfb5;
            if (local_420 != 0x78) goto LAB_100fe2ed;
            local_448 = 0x27;
LAB_100fe13c:
            local_420 = 0x10;
            if ((local_40c & 0x80) != 0) {
              local_438 = L'0';
              local_436 = (short)local_448 + 0x51;
              local_42c = 2;
            }
            goto LAB_100fdfbf;
          }
          if (local_420 == 0x70) {
            local_410 = 8;
LAB_100fe110:
            local_448 = 7;
            goto LAB_100fe13c;
          }
          if (local_420 < 0x65) goto LAB_100fe2ed;
          if (local_420 < 0x68) goto LAB_100fdd21;
          if (local_420 == 0x69) goto LAB_100fdfae;
          if (local_420 != 0x6e) {
            if (local_420 != 0x6f) goto LAB_100fe2ed;
            local_420 = 8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_100fdfbf;
          }
          piVar5 = *(int **)param_4;
          local_424 = param_4 + 2;
          bVar13 = FUN_101099d6();
          if (CONCAT31(extraout_var,bVar13) == 0) {
            piVar5 = __errno();
            *piVar5 = 0x16;
            FUN_100fe6d4();
            goto LAB_100fda12;
          }
          if ((local_40c & 0x20) == 0) {
            *piVar5 = local_41c;
          }
          else {
            *(undefined2 *)piVar5 = (undefined2)local_41c;
          }
          local_44c = 1;
        }
        if (local_440 != (wchar_t *)0x0) {
          _free(local_440);
          local_440 = (wchar_t *)0x0;
        }
      }
      iVar8 = local_464;
      param_2 = local_444;
      param_4 = local_424;
      wVar1 = *local_444;
    }
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

