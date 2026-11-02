// rea decompile_all
// name: FUN_1010186b
// address: 0x1010186b
// body: available
// range: 0x1010186b-0x10102451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_1010186b(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  code *pcVar6;
  errno_t eVar7;
  undefined *puVar8;
  int iVar9;
  int extraout_ECX;
  uint uVar10;
  byte *pbVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  wchar_t *pwVar16;
  undefined4 uVar17;
  localeinfo_struct *plVar18;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  int local_278;
  int local_274;
  int *local_270;
  size_t local_26c;
  uint local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  int local_250;
  wchar_t *local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  FILE *local_234;
  undefined1 local_230;
  char local_22f;
  size_t local_22c;
  int local_228;
  wchar_t *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_234 = param_1;
  local_220 = param_4;
  local_250 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_248 = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  local_270 = __errno();
  if (param_1 != (FILE *)0x0) {
    if ((param_1->_flag & 0x40) == 0) {
      uVar4 = __fileno(param_1);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar8 = &DAT_10163f00;
      }
      else {
        puVar8 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_1016bfc0)[(int)uVar4 >> 5]);
      }
      if ((puVar8[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar8 = &DAT_10163f00;
        }
        else {
          puVar8 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_1016bfc0)[(int)uVar4 >> 5]);
        }
        if ((puVar8[0x24] & 0x80) == 0) goto LAB_10101970;
      }
    }
    else {
LAB_10101970:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_228 = 0;
        local_22c = 0;
        local_24c = (wchar_t *)0x0;
        iVar9 = 0;
        pwVar12 = local_220;
        while ((local_220 = pwVar12, local_215 != 0 &&
               (pbVar11 = param_2 + 1, local_244 = pbVar11, -1 < local_228))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar4 = (int)(char)(&DAT_10141a18)[(char)local_215] & 0xf;
          }
          else {
            uVar4 = 0;
          }
          local_278 = (int)(char)(&DAT_10141a38)[uVar4 * 8 + iVar9] >> 4;
          switch(local_278) {
          case 0:
switchD_101019e5_caseD_0:
            local_240 = 0;
            iVar9 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar9 != 0) {
              write_char();
              local_244 = param_2 + 2;
              if (*pbVar11 == 0) goto LAB_101018e1;
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_27c = 0;
            local_248 = 0;
            local_23c = 0;
            local_238 = 0;
            local_214 = 0;
            local_240 = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_23c = *(int *)param_4;
              local_220 = param_4 + 2;
              if (local_23c < 0) {
                local_214 = local_214 | 4;
                local_23c = -local_23c;
              }
            }
            else {
              local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_21c = *(int *)param_4;
              local_220 = param_4 + 2;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar11;
              if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_244 = param_2 + 3;
              }
              else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_244 = param_2 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_278 = 0;
                goto switchD_101019e5_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar11 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_244 = param_2 + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_10101eb1:
                local_214 = local_214 | 0x40;
LAB_10101eb8:
                pwVar12 = param_4;
                local_22c = 10;
LAB_10101ec2:
                if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                  local_220 = pwVar12 + 2;
                  if ((local_214 & 0x20) == 0) {
                    uVar4 = *(uint *)pwVar12;
                    if ((local_214 & 0x40) == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = (int)uVar4 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar4 = (uint)(ushort)*pwVar12;
                    }
                    else {
                      uVar4 = (uint)*pwVar12;
                    }
                    uVar10 = (int)uVar4 >> 0x1f;
                  }
                }
                else {
                  uVar4 = *(uint *)pwVar12;
                  uVar10 = *(uint *)(pwVar12 + 2);
                  local_220 = pwVar12 + 4;
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
                  bVar13 = uVar4 != 0;
                  uVar4 = -uVar4;
                  uVar10 = -(uVar10 + bVar13);
                  local_214 = local_214 | 0x100;
                }
                uVar14 = CONCAT44(uVar10,uVar4);
                if ((local_214 & 0x9000) == 0) {
                  uVar10 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar4 == 0 && uVar10 == 0) {
                  local_238 = 0;
                }
                pwVar12 = &local_11;
                while( true ) {
                  uVar4 = (uint)uVar14;
                  iVar9 = local_21c + -1;
                  if ((local_21c < 1) && (uVar4 == 0 && uVar10 == 0)) break;
                  local_21c = iVar9;
                  uVar14 = __aulldvrm(uVar4,uVar10,local_22c,(int)local_22c >> 0x1f);
                  uVar10 = (uint)((ulonglong)uVar14 >> 0x20);
                  iVar9 = extraout_ECX + 0x30;
                  if (0x39 < iVar9) {
                    iVar9 = iVar9 + local_250;
                  }
                  *(char *)pwVar12 = (char)iVar9;
                  pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                  local_264 = uVar4;
                }
                local_22c = (int)&local_11 + -(int)pwVar12;
                local_224 = (wchar_t *)((int)pwVar12 + 1);
                local_21c = iVar9;
                if (((local_214 & 0x200) != 0) && ((local_22c == 0 || (*(char *)local_224 != '0'))))
                {
                  *(char *)pwVar12 = '0';
                  local_22c = (int)&local_11 + -(int)pwVar12 + 1;
                  local_224 = pwVar12;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_10101cc6;
                }
                if (local_215 == 0x41) {
LAB_10101c79:
                  local_215 = local_215 + 0x20;
                  local_27c = 1;
LAB_10101ee7:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar12 = local_210;
                  uVar4 = local_264;
                  pwVar16 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      uVar4 = local_21c + 0x15d;
                      local_224 = local_210;
                      local_24c = __malloc_crt(uVar4);
                      pwVar12 = local_24c;
                      pwVar16 = local_24c;
                      if (local_24c == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar12 = local_210;
                        uVar4 = local_264;
                        pwVar16 = local_224;
                      }
                    }
                  }
                  local_224 = pwVar16;
                  local_264 = uVar4;
                  local_284 = *(undefined4 *)param_4;
                  local_220 = param_4 + 4;
                  local_280 = *(undefined4 *)(param_4 + 2);
                  plVar18 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar15 = &local_284;
                  pwVar16 = pwVar12;
                  uVar4 = local_264;
                  iVar9 = local_21c;
                  uVar17 = local_27c;
                  pcVar6 = DecodePointer(PTR_LAB_10163eec);
                  (*pcVar6)(puVar15,pwVar16,uVar4,iVar5,iVar9,uVar17,plVar18);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar18 = &local_260;
                    pwVar16 = pwVar12;
                    pcVar6 = DecodePointer(PTR_LAB_10163ef8);
                    (*pcVar6)(pwVar16,plVar18);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar18 = &local_260;
                    pwVar16 = pwVar12;
                    pcVar6 = DecodePointer(PTR_LAB_10163ef4);
                    (*pcVar6)(pwVar16,plVar18);
                  }
                  if ((char)*pwVar12 == '-') {
                    local_214 = local_214 | 0x100;
                    local_224 = (wchar_t *)((int)pwVar12 + 1);
                    pwVar12 = local_224;
                  }
LAB_10101dfe:
                  local_22c = _strlen((char *)pwVar12);
                }
                else if (local_215 == 0x43) {
                  pwVar12 = param_4;
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_10101d3f:
                  local_220 = pwVar12 + 2;
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*pwVar12;
                    local_22c = 1;
                  }
                  else {
                    eVar7 = _wctomb_s((int *)&local_22c,(char *)local_210,0x200,*pwVar12);
                    if (eVar7 != 0) {
                      local_248 = 1;
                    }
                  }
                  local_224 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_10101c79;
              }
              else {
                if (local_215 == 0x58) goto LAB_10102047;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)param_4;
                  local_220 = param_4 + 2;
                  pwVar12 = (wchar_t *)PTR_DAT_10163ec8;
                  local_224 = (wchar_t *)PTR_DAT_10163ec8;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar16 = *(wchar_t **)(psVar2 + 2), pwVar16 == (wchar_t *)0x0))
                  goto LAB_10101dfe;
                  local_22c = (size_t)*psVar2;
                  local_224 = pwVar16;
                  if ((local_214 & 0x800) == 0) {
                    local_240 = 0;
                  }
                  else {
                    local_22c = (int)local_22c / 2;
                    local_240 = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_10101ee7;
                  if (local_215 == 99) goto LAB_10101d3f;
                }
              }
LAB_10102224:
              if (local_248 == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_10102271;
                      local_230 = 0x20;
                    }
                    else {
                      local_230 = 0x2b;
                    }
                  }
                  else {
                    local_230 = 0x2d;
                  }
                  local_238 = 1;
                }
LAB_10102271:
                uVar4 = (local_23c - local_22c) - local_238;
                local_264 = uVar4;
                if ((local_214 & 0xc) == 0) {
                  do {
                    if ((int)uVar4 < 1) break;
                    uVar4 = uVar4 - 1;
                    write_char();
                  } while (local_228 != -1);
                }
                FUN_10101809(&local_230,local_238);
                if (((local_214 & 8) != 0) && (uVar4 = local_264, (local_214 & 4) == 0)) {
                  do {
                    if ((int)uVar4 < 1) break;
                    write_char();
                    uVar4 = uVar4 - 1;
                  } while (local_228 != -1);
                }
                if ((local_240 == 0) || ((int)local_22c < 1)) {
                  FUN_10101809(local_224,local_22c);
                }
                else {
                  local_26c = local_22c;
                  pwVar12 = local_224;
                  do {
                    _WCh = *pwVar12;
                    local_26c = local_26c - 1;
                    pwVar12 = pwVar12 + 1;
                    eVar7 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar7 != 0) || (local_274 == 0)) {
                      local_228 = -1;
                      break;
                    }
                    FUN_10101809((int)&local_11 + 1,local_274);
                  } while (local_26c != 0);
                }
                if ((-1 < local_228) && (uVar4 = local_264, (local_214 & 4) != 0)) {
                  do {
                    if ((int)uVar4 < 1) break;
                    write_char();
                    uVar4 = uVar4 - 1;
                  } while (local_228 != -1);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_10101cc6:
                  iVar9 = local_21c;
                  if (local_21c == -1) {
                    iVar9 = 0x7fffffff;
                  }
                  local_220 = param_4 + 2;
                  local_224 = *(wchar_t **)param_4;
                  if ((local_214 & 0x810) == 0) {
                    pwVar12 = local_224;
                    if (local_224 == (wchar_t *)0x0) {
                      pwVar12 = (wchar_t *)PTR_DAT_10163ec8;
                      local_224 = (wchar_t *)PTR_DAT_10163ec8;
                    }
                    for (; (iVar9 != 0 && (iVar9 = iVar9 + -1, (char)*pwVar12 != '\0'));
                        pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                    }
                    local_22c = (int)pwVar12 - (int)local_224;
                  }
                  else {
                    if (local_224 == (wchar_t *)0x0) {
                      local_224 = (wchar_t *)PTR_u__null__10163ecc;
                    }
                    local_240 = 1;
                    for (pwVar12 = local_224;
                        (iVar9 != 0 && (iVar9 = iVar9 + -1, *pwVar12 != L'\0'));
                        pwVar12 = pwVar12 + 1) {
                    }
                    local_22c = (int)pwVar12 - (int)local_224 >> 1;
                  }
                  goto LAB_10102224;
                }
                if (local_215 == 0x75) goto LAB_10101eb8;
                if (local_215 != 0x78) goto LAB_10102224;
                local_250 = 0x27;
LAB_10102079:
                local_22c = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_22f = (char)local_250 + 'Q';
                  local_230 = 0x30;
                  local_238 = 2;
                }
                goto LAB_10101ec2;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_10102047:
                local_250 = 7;
                pwVar12 = param_4;
                goto LAB_10102079;
              }
              if ((char)local_215 < 'e') goto LAB_10102224;
              param_4 = pwVar12;
              if ((char)local_215 < 'h') goto LAB_10101ee7;
              if (local_215 == 0x69) goto LAB_10101eb1;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_10102224;
                local_22c = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_10101ec2;
              }
              local_220 = pwVar12 + 2;
              piVar3 = *(int **)pwVar12;
              bVar13 = FUN_101099d6();
              if (CONCAT31(extraout_var,bVar13) == 0) goto LAB_101018e1;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_228;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_228;
              }
              local_248 = 1;
            }
            if (local_24c != (wchar_t *)0x0) {
              _free(local_24c);
              local_24c = (wchar_t *)0x0;
            }
          }
          local_215 = *local_244;
          iVar9 = local_278;
          param_2 = local_244;
          param_4 = local_220;
          pwVar12 = local_220;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_10102443;
      }
    }
  }
LAB_101018e1:
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_100fe6d4();
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_10102443:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

