// rea decompile_all
// name: FUN_100fe6e4
// address: 0x100fe6e4
// body: available
// range: 0x100fe6e4-0x100ff280 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100fe6e4(int param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  ushort uVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  undefined3 extraout_var;
  code *pcVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  ushort *puVar11;
  bool bVar12;
  longlong lVar13;
  uint *puVar14;
  wchar_t *pwVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  localeinfo_struct *plVar18;
  uint local_474;
  uint local_470;
  undefined4 local_46c;
  int *local_468;
  ushort *local_464;
  uint local_460;
  wchar_t *local_45c;
  int local_458;
  int local_454;
  localeinfo_struct local_450;
  int local_448;
  char local_444;
  uint local_440;
  char local_43c [4];
  wchar_t local_438;
  short local_436;
  int local_434;
  int local_430;
  uint local_42c;
  int local_428;
  uint local_424;
  wchar_t *local_420;
  int local_41c;
  size_t local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_430 = param_1;
  local_420 = param_4;
  local_458 = 0;
  local_40c = 0;
  local_42c = 0;
  local_410 = 0;
  local_428 = 0;
  local_454 = 0;
  local_434 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_450,param_3);
  local_468 = __errno();
  if ((param_1 == 0) || (param_2 == (ushort *)0x0)) {
LAB_100fe75a:
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_100fe6d4();
    if (local_444 != '\0') {
      *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
    }
  }
  else {
    local_424 = (uint)*param_2;
    local_41c = 0;
    local_418 = 0;
    local_440 = 0;
    local_45c = (wchar_t *)0x0;
    if (*param_2 != 0) {
      do {
        puVar11 = param_2 + 1;
        local_464 = puVar11;
        if (local_41c < 0) break;
        wVar2 = (wchar_t)local_424;
        if ((ushort)(wVar2 + L'￠') < 0x59) {
          uVar5 = *(byte *)((int)&PTR_s__local_static_thread_guard__101444c8 + local_424) & 0xf;
        }
        else {
          uVar5 = 0;
        }
        local_440 = (uint)((byte)(&DAT_101444e8)[local_440 + uVar5 * 9] >> 4);
        if (local_440 == 8) goto LAB_100fe75a;
        pwVar10 = local_420;
        switch(local_440) {
        case 0:
switchD_100fe814_caseD_0:
          local_434 = 1;
          write_char(wVar2);
          pwVar10 = param_4;
          break;
        case 1:
          local_410 = 0xffffffff;
          local_46c = 0;
          local_454 = 0;
          local_42c = 0;
          local_428 = 0;
          local_40c = 0;
          local_434 = 0;
          pwVar10 = param_4;
          break;
        case 2:
          if (local_424 == 0x20) {
            local_40c = local_40c | 2;
            pwVar10 = param_4;
          }
          else if (local_424 == 0x23) {
            local_40c = local_40c | 0x80;
            pwVar10 = param_4;
          }
          else if (local_424 == 0x2b) {
            local_40c = local_40c | 1;
            pwVar10 = param_4;
          }
          else if (local_424 == 0x2d) {
            local_40c = local_40c | 4;
            pwVar10 = param_4;
          }
          else if (local_424 == 0x30) {
            local_40c = local_40c | 8;
            pwVar10 = param_4;
          }
          break;
        case 3:
          if (wVar2 == L'*') {
            local_42c = *(uint *)param_4;
            local_420 = param_4 + 2;
            pwVar10 = local_420;
            if ((int)local_42c < 0) {
              local_40c = local_40c | 4;
              local_42c = -local_42c;
            }
          }
          else {
            local_42c = local_42c * 10 + -0x30 + local_424;
            pwVar10 = param_4;
          }
          break;
        case 4:
          local_410 = 0;
          pwVar10 = param_4;
          break;
        case 5:
          if (wVar2 == L'*') {
            local_410 = *(uint *)param_4;
            local_420 = param_4 + 2;
            pwVar10 = local_420;
            if ((int)local_410 < 0) {
              local_410 = 0xffffffff;
            }
          }
          else {
            local_410 = local_410 * 10 + -0x30 + local_424;
            pwVar10 = param_4;
          }
          break;
        case 6:
          if (local_424 == 0x49) {
            uVar1 = *puVar11;
            if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
              local_40c = local_40c | 0x8000;
              pwVar10 = param_4;
              puVar11 = param_2 + 3;
            }
            else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
              local_40c = local_40c & 0xffff7fff;
              pwVar10 = param_4;
              puVar11 = param_2 + 3;
            }
            else {
              pwVar10 = param_4;
              if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                  ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                local_440 = 0;
                goto switchD_100fe814_caseD_0;
              }
            }
          }
          else if (local_424 == 0x68) {
            local_40c = local_40c | 0x20;
            pwVar10 = param_4;
          }
          else if (local_424 == 0x6c) {
            if (*puVar11 == 0x6c) {
              local_40c = local_40c | 0x1000;
              pwVar10 = param_4;
              puVar11 = param_2 + 2;
            }
            else {
              local_40c = local_40c | 0x10;
              pwVar10 = param_4;
            }
          }
          else {
            pwVar10 = param_4;
            if (local_424 == 0x77) {
              local_40c = local_40c | 0x800;
            }
          }
          break;
        case 7:
          if (local_424 < 0x65) {
            if (local_424 == 100) {
LAB_100fed0e:
              local_40c = local_40c | 0x40;
LAB_100fed15:
              local_424 = 10;
LAB_100fed1f:
              if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
                local_420 = param_4 + 2;
                if ((local_40c & 0x20) == 0) {
                  uVar5 = *(uint *)param_4;
                  if ((local_40c & 0x40) == 0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = (int)uVar5 >> 0x1f;
                  }
                }
                else {
                  if ((local_40c & 0x40) == 0) {
                    uVar5 = (uint)(ushort)*param_4;
                  }
                  else {
                    uVar5 = (uint)*param_4;
                  }
                  uVar8 = (int)uVar5 >> 0x1f;
                }
              }
              else {
                local_420 = param_4 + 4;
                uVar5 = *(uint *)param_4;
                uVar8 = *(uint *)(param_4 + 2);
              }
              if ((((local_40c & 0x40) != 0) && ((int)uVar8 < 1)) && ((int)uVar8 < 0)) {
                bVar12 = uVar5 != 0;
                uVar5 = -uVar5;
                uVar8 = -(uVar8 + bVar12);
                local_40c = local_40c | 0x100;
              }
              if ((local_40c & 0x9000) == 0) {
                uVar8 = 0;
              }
              lVar13 = CONCAT44(uVar8,uVar5);
              if ((int)local_410 < 0) {
                local_410 = 1;
              }
              else {
                local_40c = local_40c & 0xfffffff7;
                if (0x200 < (int)local_410) {
                  local_410 = 0x200;
                }
              }
              if (uVar5 == 0 && uVar8 == 0) {
                local_428 = 0;
              }
              pwVar10 = &local_209;
              while( true ) {
                uVar5 = local_410 - 1;
                if (((int)local_410 < 1) && (lVar13 == 0)) break;
                local_410 = uVar5;
                lVar13 = __aulldvrm((uint)lVar13,(uint)((ulonglong)lVar13 >> 0x20),local_424,
                                    (int)local_424 >> 0x1f);
                iVar7 = extraout_ECX + 0x30;
                if (0x39 < iVar7) {
                  iVar7 = iVar7 + local_458;
                }
                *(byte *)pwVar10 = (byte)iVar7;
                pwVar10 = (wchar_t *)((int)pwVar10 + -1);
              }
              local_418 = (int)&local_209 + -(int)pwVar10;
              local_414 = (wchar_t *)((int)pwVar10 + 1);
              local_410 = uVar5;
              if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30))))
              {
                local_418 = (int)&local_209 + -(int)pwVar10 + 1;
                *(byte *)pwVar10 = 0x30;
                local_414 = pwVar10;
              }
            }
            else if (local_424 < 0x54) {
              if (local_424 == 0x53) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
                goto LAB_100feaec;
              }
              if (local_424 != 0x41) {
                if (local_424 == 0x43) {
                  if ((local_40c & 0x830) == 0) {
                    local_40c = local_40c | 0x20;
                  }
LAB_100feb96:
                  wVar2 = *param_4;
                  local_460 = (uint)(ushort)wVar2;
                  local_420 = param_4 + 2;
                  local_434 = 1;
                  if ((local_40c & 0x20) == 0) {
                    local_408[0] = wVar2;
                  }
                  else {
                    local_43c[0] = (char)wVar2;
                    local_43c[1] = 0;
                    iVar7 = __mbtowc_l(local_408,local_43c,
                                       (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                    if (iVar7 < 0) {
                      local_454 = 1;
                    }
                  }
                  local_418 = 1;
                  local_414 = local_408;
                  goto LAB_100ff050;
                }
                if ((local_424 != 0x45) && (local_424 != 0x47)) goto LAB_100ff050;
              }
              local_424 = local_424 + 0x20;
              local_46c = 1;
LAB_100fea82:
              local_40c = local_40c | 0x40;
              local_418 = 0x200;
              pwVar10 = local_408;
              sVar9 = local_418;
              pwVar15 = local_408;
              if ((int)local_410 < 0) {
                local_410 = 6;
              }
              else if (local_410 == 0) {
                if ((short)local_424 == 0x67) {
                  local_410 = 1;
                }
              }
              else {
                if (0x200 < (int)local_410) {
                  local_410 = 0x200;
                }
                if (0xa3 < (int)local_410) {
                  sVar9 = local_410 + 0x15d;
                  local_414 = local_408;
                  local_45c = __malloc_crt(sVar9);
                  pwVar10 = local_45c;
                  pwVar15 = local_45c;
                  if (local_45c == (wchar_t *)0x0) {
                    local_410 = 0xa3;
                    pwVar10 = local_408;
                    sVar9 = local_418;
                    pwVar15 = local_414;
                  }
                }
              }
              local_414 = pwVar15;
              local_418 = sVar9;
              local_474 = *(uint *)param_4;
              local_420 = param_4 + 4;
              local_470 = *(uint *)(param_4 + 2);
              plVar18 = &local_450;
              uVar16 = CONCAT44(local_410,(int)(char)local_424);
              puVar14 = &local_474;
              pwVar15 = pwVar10;
              sVar9 = local_418;
              uVar17 = local_46c;
              pcVar6 = DecodePointer(PTR_LAB_10163eec);
              (*pcVar6)(puVar14,pwVar15,sVar9,uVar16,uVar17,plVar18);
              uVar5 = local_40c & 0x80;
              if ((uVar5 != 0) && (local_410 == 0)) {
                plVar18 = &local_450;
                pwVar15 = pwVar10;
                pcVar6 = DecodePointer(PTR_LAB_10163ef8);
                (*pcVar6)(pwVar15,plVar18);
              }
              if (((short)local_424 == 0x67) && (uVar5 == 0)) {
                plVar18 = &local_450;
                pwVar15 = pwVar10;
                pcVar6 = DecodePointer(PTR_LAB_10163ef4);
                (*pcVar6)(pwVar15,plVar18);
              }
              if ((byte)*pwVar10 == 0x2d) {
                local_40c = local_40c | 0x100;
                pwVar10 = (wchar_t *)((int)pwVar10 + 1);
                local_414 = pwVar10;
              }
LAB_100fec6f:
              local_418 = _strlen((char *)pwVar10);
            }
            else {
              if (local_424 == 0x58) goto LAB_100fee5c;
              if (local_424 == 0x5a) {
                psVar3 = *(short **)param_4;
                local_420 = param_4 + 2;
                if ((psVar3 == (short *)0x0) ||
                   (local_414 = *(wchar_t **)(psVar3 + 2), local_414 == (wchar_t *)0x0)) {
                  local_414 = (wchar_t *)PTR_DAT_10163ec8;
                  pwVar10 = (wchar_t *)PTR_DAT_10163ec8;
                  goto LAB_100fec6f;
                }
                local_418 = (size_t)*psVar3;
                if ((local_40c & 0x800) != 0) {
                  iVar7 = local_418 - ((int)local_418 >> 0x1f);
                  goto LAB_100ff048;
                }
                local_434 = 0;
              }
              else {
                if (local_424 == 0x61) goto LAB_100fea82;
                if (local_424 == 99) goto LAB_100feb96;
              }
            }
LAB_100ff050:
            if (local_454 == 0) {
              if ((local_40c & 0x40) != 0) {
                if ((local_40c & 0x100) == 0) {
                  if ((local_40c & 1) == 0) {
                    if ((local_40c & 2) == 0) goto LAB_100ff092;
                    local_438 = L' ';
                  }
                  else {
                    local_438 = L'+';
                  }
                }
                else {
                  local_438 = L'-';
                }
                local_428 = 1;
              }
LAB_100ff092:
              uVar5 = (local_42c - local_418) - local_428;
              local_424 = uVar5;
              if ((local_40c & 0xc) == 0) {
                do {
                  if ((int)uVar5 < 1) break;
                  uVar5 = uVar5 - 1;
                  write_char(L' ');
                } while (local_41c != -1);
              }
              FUN_100fd91b(&local_438,local_428);
              if (((local_40c & 8) != 0) && (uVar5 = local_424, (local_40c & 4) == 0)) {
                do {
                  if ((int)uVar5 < 1) break;
                  write_char(L'0');
                  uVar5 = uVar5 - 1;
                } while (local_41c != -1);
              }
              if ((local_434 == 0) && (sVar9 = local_418, pwVar10 = local_414, 0 < (int)local_418))
              {
                do {
                  sVar9 = sVar9 - 1;
                  iVar7 = __mbtowc_l((wchar_t *)&local_460,(char *)pwVar10,
                                     (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                  if (iVar7 < 1) {
                    local_41c = -1;
                    break;
                  }
                  write_char((wchar_t)local_460);
                  pwVar10 = (wchar_t *)((int)pwVar10 + iVar7);
                } while (0 < (int)sVar9);
              }
              else {
                FUN_100fd91b(local_414,local_418);
              }
              if ((-1 < local_41c) && (uVar5 = local_424, (local_40c & 4) != 0)) {
                do {
                  if ((int)uVar5 < 1) break;
                  write_char(L' ');
                  uVar5 = uVar5 - 1;
                } while (local_41c != -1);
              }
            }
          }
          else {
            if (0x70 < local_424) {
              if (local_424 == 0x73) {
LAB_100feaec:
                uVar5 = local_410;
                if (local_410 == 0xffffffff) {
                  uVar5 = 0x7fffffff;
                }
                local_420 = param_4 + 2;
                local_414 = *(wchar_t **)param_4;
                if ((local_40c & 0x20) == 0) {
                  pwVar10 = local_414;
                  if (local_414 == (wchar_t *)0x0) {
                    local_414 = (wchar_t *)PTR_u__null__10163ecc;
                    pwVar10 = (wchar_t *)PTR_u__null__10163ecc;
                  }
                  for (; (uVar5 != 0 && (uVar5 = uVar5 - 1, *pwVar10 != L'\0'));
                      pwVar10 = pwVar10 + 1) {
                  }
                  iVar7 = (int)pwVar10 - (int)local_414;
LAB_100ff048:
                  local_420 = param_4 + 2;
                  local_434 = 1;
                  local_418 = iVar7 >> 1;
                }
                else {
                  if (local_414 == (wchar_t *)0x0) {
                    local_414 = (wchar_t *)PTR_DAT_10163ec8;
                  }
                  local_418 = 0;
                  pwVar10 = local_414;
                  if (0 < (int)uVar5) {
                    do {
                      if ((byte)*pwVar10 == 0) break;
                      iVar7 = __isleadbyte_l((uint)(byte)*pwVar10,&local_450);
                      if (iVar7 != 0) {
                        pwVar10 = (wchar_t *)((int)pwVar10 + 1);
                      }
                      pwVar10 = (wchar_t *)((int)pwVar10 + 1);
                      local_418 = local_418 + 1;
                    } while ((int)local_418 < (int)uVar5);
                  }
                }
                goto LAB_100ff050;
              }
              if (local_424 == 0x75) goto LAB_100fed15;
              if (local_424 != 0x78) goto LAB_100ff050;
              local_458 = 0x27;
LAB_100fee8c:
              local_424 = 0x10;
              if ((local_40c & 0x80) != 0) {
                local_438 = L'0';
                local_436 = (short)local_458 + 0x51;
                local_428 = 2;
              }
              goto LAB_100fed1f;
            }
            if (local_424 == 0x70) {
              local_410 = 8;
LAB_100fee5c:
              local_458 = 7;
              goto LAB_100fee8c;
            }
            if (local_424 < 0x65) goto LAB_100ff050;
            if (local_424 < 0x68) goto LAB_100fea82;
            if (local_424 == 0x69) goto LAB_100fed0e;
            if (local_424 != 0x6e) {
              if (local_424 != 0x6f) goto LAB_100ff050;
              local_424 = 8;
              if ((local_40c & 0x80) != 0) {
                local_40c = local_40c | 0x200;
              }
              goto LAB_100fed1f;
            }
            local_420 = param_4 + 2;
            piVar4 = *(int **)param_4;
            bVar12 = FUN_101099d6();
            if (CONCAT31(extraout_var,bVar12) == 0) goto LAB_100fe75a;
            if ((local_40c & 0x20) == 0) {
              *piVar4 = local_41c;
            }
            else {
              *(undefined2 *)piVar4 = (undefined2)local_41c;
            }
            local_454 = 1;
          }
          pwVar10 = local_420;
          puVar11 = local_464;
          if (local_45c != (wchar_t *)0x0) {
            _free(local_45c);
            local_45c = (wchar_t *)0x0;
            pwVar10 = local_420;
            puVar11 = local_464;
          }
        }
        local_424 = (uint)*puVar11;
        param_4 = pwVar10;
        param_2 = puVar11;
      } while (*puVar11 != 0);
      if ((local_440 != 0) && (local_440 != 7)) goto LAB_100fe75a;
    }
    if (local_444 != '\0') {
      *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

