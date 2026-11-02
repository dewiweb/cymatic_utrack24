// rea decompile_all
// name: FUN_0019aaf8
// address: 0x19aaf8
// body: available
// range: 0x19aaf8-0x19ac97 inclusive
// range: 0x19aca6-0x19af2f inclusive
// range: 0x19af98-0x19b2eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0019aaf8(byte *param_1,int param_2,byte *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint extraout_r1;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 local_264;
  undefined1 auStack_263 [253];
  byte abStack_166 [46];
  uint local_138;
  uint local_134;
  uint local_130;
  uint *local_12c;
  byte local_128 [260];
  byte *local_24;
  uint local_20;
  byte *local_1c;
  uint *local_18;
  
  local_18 = param_4;
  local_24 = param_1;
  local_134 = 0;
  if (param_2 == 0) {
    return 0;
  }
  local_20 = param_2 - 1U;
  if ((param_2 - 1U == 0) || (bVar13 = *param_3, bVar13 == 0)) {
LAB_0019b2de:
    *local_24 = 0;
    return local_134;
  }
  local_12c = &local_138;
  local_1c = param_3;
LAB_0019ab1c:
  if (bVar13 == 0x25) {
    uVar2 = *(uint *)(DAT_0019af30 + 100);
    local_138 = *(uint *)(DAT_0019af30 + 0x5c);
    uVar9 = 0;
    local_130 = *(uint *)(DAT_0019af30 + 0x60);
LAB_0019ab58:
    while( true ) {
      pbVar15 = local_1c;
      local_1c = local_1c + 1;
      uVar14 = (uint)*local_1c;
      if (uVar14 != 0x2d) break;
      local_138 = local_138 | 1;
LAB_0019abc0:
    }
    if (uVar14 == 0x2b) {
      local_138 = local_138 | 2;
      goto LAB_0019abc0;
    }
    if (uVar14 == 0x20) {
      local_138 = local_138 & 0xff00ffff;
      uVar14 = 0x200000;
LAB_0019abe4:
      local_138 = local_138 | uVar14;
      goto LAB_0019abc0;
    }
    if (uVar14 == 0x23) {
      local_138 = local_138 & 0xffff00ff | (((local_138 & 0xffff) >> 8) + 1 & 0xff) << 8;
      goto LAB_0019ab58;
    }
    if (uVar14 == 0x30) {
      uVar14 = 4;
      goto LAB_0019abe4;
    }
    if (uVar14 == 0x2a) {
      local_130 = *local_18;
      local_18 = local_18 + 1;
      if ((int)local_130 < 0) {
        local_130 = -local_130;
        local_138 = local_138 | 1;
      }
      local_1c = pbVar15 + 2;
      uVar14 = (uint)pbVar15[2];
    }
    else {
      while (uVar14 - 0x30 < 10) {
        local_130 = (local_130 * 10 + uVar14) - 0x30;
        local_1c = local_1c + 1;
        uVar14 = (uint)*local_1c;
      }
    }
    pbVar15 = local_1c;
    if (uVar14 == 0x2e) {
      local_1c = local_1c + 1;
      uVar14 = (uint)*local_1c;
      if (uVar14 == 0x2a) {
        uVar2 = *local_18;
        local_18 = local_18 + 1;
        local_1c = pbVar15 + 2;
        uVar14 = (uint)pbVar15[2];
      }
      else {
        while (uVar14 - 0x30 < 10) {
          uVar2 = (uVar2 * 10 + uVar14) - 0x30;
          local_1c = local_1c + 1;
          uVar14 = (uint)*local_1c;
        }
      }
      local_138 = local_138 | 8;
    }
    if ((local_138 & 1) != 0) {
      local_138 = local_138 & 0xfffffffb;
    }
LAB_0019ac4c:
    do {
      puVar11 = local_12c;
      if (uVar14 == 0x69) goto LAB_0019acc8;
      if (0x69 < uVar14) {
        switch(uVar14) {
        case 0x6c:
switchD_0019ac96_caseD_6c:
          local_138 = local_138 | 0x20;
          local_1c = local_1c + 1;
          uVar14 = (uint)*local_1c;
          goto LAB_0019ac4c;
        default:
          goto LAB_0019b1fa;
        case 0x6e:
          puVar11 = (uint *)*local_18;
          local_18 = local_18 + 1;
          if ((int)(local_138 << 0x1b) < 0) {
            *(short *)puVar11 = (short)local_134;
          }
          else {
            *puVar11 = local_134;
          }
          goto LAB_0019b2d0;
        case 0x6f:
          uVar9 = *local_18;
          local_18 = local_18 + 1;
          if ((int)(local_138 << 0x1b) < 0) {
            uVar9 = uVar9 & 0xffff;
          }
          uVar14 = uVar2;
          if (-1 < (int)(local_138 << 0x1c)) {
            uVar14 = local_130;
            if (-1 < (int)(local_138 << 0x1d)) {
              uVar14 = uVar2;
            }
            if (uVar14 < 2) {
              uVar14 = 1;
            }
          }
          uVar2 = 299;
          if (uVar14 < 300) {
            uVar2 = uVar14;
          }
          uVar10 = 0;
          for (; uVar9 != 0; uVar9 = uVar9 >> 3) {
            puVar11 = (uint *)((int)puVar11 + -1);
            uVar10 = uVar10 + 1;
            *(byte *)puVar11 = ((byte)uVar9 & 7) + 0x30;
          }
          if ((((local_138 & 0xffff) >> 8 != 0) && (uVar10 != 0)) && ((byte)*puVar11 != 0x30)) {
            puVar11 = (uint *)((int)puVar11 + -1);
            uVar10 = uVar10 + 1;
            *(byte *)puVar11 = 0x30;
          }
          for (; uVar10 < uVar2; uVar10 = uVar10 + 1) {
            puVar11 = (uint *)((int)puVar11 + -1);
            *(byte *)puVar11 = 0x30;
          }
          goto LAB_0019b222;
        case 0x70:
          local_138 = local_138 & 0xfffffff7 | 0x20 | ((local_138 & 0x3f | 0x20) >> 5) << 3;
          uVar2 = 8;
LAB_0019af2c:
          pcVar8 = s___0123456789ABCDEF_0019af82 + 2;
          break;
        case 0x73:
          puVar11 = (uint *)*local_18;
          local_18 = local_18 + 1;
          if (puVar11 == (uint *)0x0) {
            uVar10 = 8;
            puVar11 = _DAT_0019b300;
            goto LAB_0019b1be;
          }
          uVar14 = (local_138 & 0xffff) >> 8;
          if (uVar14 == 0) {
            uVar10 = 0;
            if ((int)(local_138 << 0x1c) < 0) goto LAB_0019b06a;
            if ((byte)*puVar11 != 0) goto LAB_0019b05e;
            goto LAB_0019b222;
          }
          if (uVar14 == 1) {
            uVar10 = (uint)(byte)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            goto LAB_0019b1be;
          }
          if (uVar14 != 2) goto LAB_0019b144;
          puVar5 = (undefined4 *)&local_264;
          if ((byte)*puVar11 == 0) {
            local_264 = 0x2e;
            puVar5 = (undefined4 *)auStack_263;
            if ((byte)*puVar11 == 0) goto LAB_0019b1b6;
          }
          pbVar15 = abStack_166;
          goto LAB_0019b0dc;
        case 0x75:
          uVar9 = *local_18;
          local_18 = local_18 + 1;
          if ((int)(local_138 << 0x1b) < 0) {
            uVar9 = uVar9 & 0xffff;
          }
          local_138 = local_138 & 0xff00ffff;
          goto LAB_0019ad36;
        case 0x78:
          pcVar8 = s_0123456789abcdef_0019b2ec;
        }
        uVar9 = *local_18;
        local_18 = local_18 + 1;
        if ((int)(local_138 << 0x1b) < 0) {
          uVar9 = uVar9 & 0xffff;
        }
        if (-1 < (int)(local_138 << 0x1c)) {
          if (((int)(local_138 << 0x1d) < 0) && (uVar2 = local_130, (local_138 & 0xffff) >> 8 != 0))
          {
            uVar2 = local_130 - 2;
          }
          if (uVar2 < 2) {
            uVar2 = 1;
          }
        }
        uVar7 = 299;
        if (uVar2 < 300) {
          uVar7 = uVar2;
        }
        uVar10 = 0;
        for (; uVar9 != 0; uVar9 = uVar9 >> 4) {
          puVar11 = (uint *)((int)puVar11 + -1);
          uVar10 = uVar10 + 1;
          *(char *)puVar11 = pcVar8[uVar9 & 0xf];
        }
        for (; uVar10 < uVar7; uVar10 = uVar10 + 1) {
          puVar11 = (uint *)((int)puVar11 + -1);
          *(byte *)puVar11 = 0x30;
        }
        if ((local_138 & 0xffff) >> 8 != 0) {
          *(byte *)((int)puVar11 + -1) = (byte)uVar14;
          *(byte *)((int)puVar11 + -2) = 0x30;
          uVar10 = uVar10 + 2;
          puVar11 = (uint *)((int)puVar11 + -2);
        }
        goto LAB_0019b222;
      }
      if (uVar14 == 0x61) {
        piVar3 = (int *)*local_18;
        local_18 = local_18 + 1;
        if (piVar3 == (int *)0x0) {
          uVar10 = 8;
          puVar11 = DAT_0019af48;
          goto LAB_0019b222;
        }
        puVar11 = (uint *)&local_264;
        if ((local_138 & 0xffff) >> 8 != 0) {
          if (*piVar3 == 4) {
            piVar3 = piVar3 + 1;
            uVar2 = 4;
          }
          else {
            if (*piVar3 != 6) {
              uVar10 = FUN_0019aae4(puVar11,300,&DAT_0019af34);
              goto LAB_0019b222;
            }
            piVar3 = piVar3 + 1;
            uVar2 = 0x10;
          }
        }
        if (uVar2 == 4) {
          uVar10 = FUN_0019aae4(puVar11,300,s__d__d__d__d_0019af54,(char)*piVar3,
                                *(undefined1 *)((int)piVar3 + 1),*(undefined1 *)((int)piVar3 + 2),
                                *(undefined1 *)((int)piVar3 + 3));
        }
        else if (uVar2 == 6) {
          uVar10 = FUN_0019aae4(puVar11,300,s__02X__02X__02X__02X__02X__02X_0019af60,(char)*piVar3,
                                *(undefined1 *)((int)piVar3 + 1),*(undefined1 *)((int)piVar3 + 2),
                                *(undefined1 *)((int)piVar3 + 3),(char)piVar3[1],
                                *(undefined1 *)((int)piVar3 + 5));
        }
        else if (uVar2 == 0x10) {
          uVar10 = FUN_0019aae4(puVar11,300,_DAT_0019af80,(char)*piVar3,
                                *(undefined1 *)((int)piVar3 + 1),*(undefined1 *)((int)piVar3 + 2),
                                *(undefined1 *)((int)piVar3 + 3),(char)piVar3[1],
                                *(undefined1 *)((int)piVar3 + 5),*(undefined1 *)((int)piVar3 + 6),
                                *(undefined1 *)((int)piVar3 + 7),(char)piVar3[2],
                                *(undefined1 *)((int)piVar3 + 9),*(undefined1 *)((int)piVar3 + 10),
                                *(undefined1 *)((int)piVar3 + 0xb),(char)piVar3[3],
                                *(undefined1 *)((int)piVar3 + 0xd),
                                *(undefined1 *)((int)piVar3 + 0xe),
                                *(undefined1 *)((int)piVar3 + 0xf));
        }
        else {
          uVar10 = FUN_0019aae4(puVar11,300,&DAT_0019af50,DAT_0019af4c);
        }
        goto LAB_0019b222;
      }
      if (uVar14 < 0x62) {
        if (uVar14 != 0x25) {
          if (uVar14 == 0x4c) goto switchD_0019ac96_caseD_6c;
          if (uVar14 == 0x58) goto LAB_0019af2c;
LAB_0019b1fa:
          uVar9 = FUN_0019aae4(&local_264,300,s_<<UNKNOWN_FORMAT_CONVERSION_CODE_0019b338,uVar14);
          puVar11 = (uint *)&local_264;
        }
        *local_24 = (byte)uVar14;
        local_24 = local_24 + 1;
        local_134 = local_134 + 1;
        uVar10 = uVar9;
        if (local_134 < local_20) goto LAB_0019b222;
        goto LAB_0019b2de;
      }
      if (uVar14 == 99) {
        puVar11 = (uint *)((int)local_12c + -1);
        *(byte *)puVar11 = (byte)*local_18;
        local_18 = local_18 + 1;
        uVar10 = 1;
        goto LAB_0019b222;
      }
      if (uVar14 == 100) goto LAB_0019acc8;
      if (uVar14 != 0x68) goto LAB_0019b1fa;
      local_138 = local_138 | 0x10;
      local_1c = local_1c + 1;
      uVar14 = (uint)*local_1c;
    } while( true );
  }
  *local_24 = bVar13;
  local_24 = local_24 + 1;
  local_134 = local_134 + 1;
  if (local_134 < local_20) goto LAB_0019b2d0;
  goto LAB_0019b2de;
LAB_0019acc8:
  uVar9 = *local_18;
  local_18 = local_18 + 1;
  if ((int)(local_138 << 0x1b) < 0) {
    uVar9 = (uint)(short)uVar9;
  }
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
    local_138 = local_138 & 0xff00ffff | 0x2d0000;
  }
  else if ((int)(local_138 << 0x1e) < 0) {
    local_138 = local_138 & 0xff00ffff | 0x2b0000;
  }
LAB_0019ad36:
  if (-1 < (int)(local_138 << 0x1c)) {
    if (((int)(local_138 << 0x1d) < 0) && (uVar2 = local_130, (local_138 & 0xffffff) >> 0x10 != 0))
    {
      uVar2 = local_130 - 1;
    }
    if (uVar2 < 2) {
      uVar2 = 1;
    }
  }
  uVar14 = 299;
  if (uVar2 < 300) {
    uVar14 = uVar2;
  }
  uVar10 = 0;
  while (uVar9 != 0) {
    cVar1 = FUN_0016dbc8(uVar9);
    puVar11 = (uint *)((int)puVar11 + -1);
    uVar10 = uVar10 + 1;
    *(byte *)puVar11 = cVar1 + 0x30;
    uVar9 = extraout_r1;
  }
  for (; uVar10 < uVar14; uVar10 = uVar10 + 1) {
    puVar11 = (uint *)((int)puVar11 + -1);
    *(byte *)puVar11 = 0x30;
  }
  if ((local_138 & 0xffffff) >> 0x10 != 0) {
    *(byte *)((int)puVar11 + -1) = (byte)((local_138 & 0xffffff) >> 0x10);
    uVar10 = uVar10 + 1;
    puVar11 = (uint *)((int)puVar11 + -1);
  }
  goto LAB_0019b222;
  while( true ) {
    uVar14 = 0x5c;
    pbVar6 = local_128;
    puVar12 = puVar11;
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar11 = (uint *)((int)puVar11 + 1);
      bVar13 = *(byte *)puVar11;
      uVar10 = (uint)bVar13;
      if (uVar14 != 0) {
        if ((uVar10 == 0x2e) || (uVar10 == uVar14)) {
          *pbVar6 = (byte)uVar14;
          pbVar6 = pbVar6 + 1;
        }
        else if (uVar10 < 0x21) {
          *pbVar6 = (byte)uVar14;
          pbVar6[1] = (char)(uVar10 * 0x29 >> 0xc) + 0x30;
          cVar1 = FUN_0016dbc8(uVar10 / 10);
          pbVar6[2] = cVar1 + 0x30;
          pbVar6 = pbVar6 + 3;
          cVar1 = FUN_0016dbc8(uVar10);
          bVar13 = cVar1 + 0x30;
        }
      }
      *pbVar6 = bVar13;
      pbVar6 = pbVar6 + 1;
    }
    *pbVar6 = 0;
    iVar4 = FUN_0019aae4(puVar5,(int)&local_138 - (int)puVar5,&DAT_0019b334,local_128);
    puVar5 = (undefined4 *)((int)puVar5 + iVar4);
    puVar11 = (uint *)((int)puVar12 + (byte)*puVar12 + 1);
    if ((byte)*puVar11 == 0) break;
LAB_0019b0dc:
    uVar9 = (uint)(byte)*puVar11;
    if (0x3f < uVar9) {
      iVar4 = FUN_0019aae4(puVar5,(int)&local_138 - (int)puVar5,
                           s____<<INVALID_LABEL_LENGTH__u>>_0019b301 + 3);
      puVar5 = (undefined4 *)((int)puVar5 + iVar4);
      break;
    }
    if (pbVar15 <= (byte *)((int)puVar5 + uVar9)) {
      iVar4 = FUN_0019aae4(puVar5,(int)&local_138 - (int)puVar5,s_<<NAME_TOO_LONG>>_0019b320);
      puVar5 = (undefined4 *)((int)puVar5 + iVar4);
      break;
    }
  }
LAB_0019b1b6:
  uVar10 = (int)puVar5 - (int)&local_264;
  puVar11 = (uint *)&local_264;
  goto LAB_0019b1be;
LAB_0019b06a:
  for (; (uVar9 = uVar10, uVar10 < uVar2 && (*(byte *)((int)puVar11 + uVar10) != 0));
      uVar10 = uVar10 + 1) {
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    if (*(byte *)((int)puVar11 + (uVar9 - 1)) >> 6 != 2) {
      if (*(byte *)((int)puVar11 + (uVar9 - 1)) >> 6 == 3) {
        uVar9 = uVar9 - 1;
        if ((uVar10 - uVar9 < 7) &&
           (*(byte *)((int)puVar11 + uVar9) >> (7 - (uVar10 - uVar9) & 0xff) == 0xfe))
        goto LAB_0019b1be;
      }
      break;
    }
  }
LAB_0019b144:
  uVar10 = uVar9;
LAB_0019b1be:
  if (((int)(local_138 << 0x1c) < 0) && (uVar2 < uVar10)) {
    for (; (uVar10 = uVar2, uVar2 != 0 && (*(byte *)((int)puVar11 + uVar2) >> 6 == 2));
        uVar2 = uVar2 - 1) {
    }
  }
LAB_0019b222:
  if ((uVar10 < local_130) && ((local_138 & 1) == 0)) {
    do {
      *local_24 = 0x20;
      local_24 = local_24 + 1;
      local_134 = local_134 + 1;
      if (local_20 <= local_134) goto LAB_0019b2de;
      local_130 = local_130 - 1;
    } while (uVar10 < local_130);
  }
  pbVar15 = local_24;
  uVar2 = local_20 - local_134;
  if (uVar2 < uVar10) {
    for (; uVar10 = uVar2, uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(byte *)((int)puVar11 + uVar2) >> 6 != 2) goto LAB_0019b272;
    }
  }
  else if (uVar10 != 0) {
LAB_0019b272:
    pbVar6 = local_24 + -1;
    puVar12 = (uint *)((int)puVar11 + -1);
    if ((uVar10 & 1) != 0) {
      *local_24 = (byte)*puVar11;
      pbVar6 = pbVar15;
      puVar12 = puVar11;
    }
    for (uVar2 = uVar10 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      pbVar15 = (byte *)((int)puVar12 + 1);
      puVar12 = (uint *)((int)puVar12 + 2);
      pbVar6[1] = *pbVar15;
      pbVar6 = pbVar6 + 2;
      *pbVar6 = *(byte *)puVar12;
    }
    local_24 = local_24 + uVar10;
  }
  local_134 = local_134 + uVar10;
  if (local_20 <= local_134) goto LAB_0019b2de;
  if (uVar10 < local_130) {
    do {
      *local_24 = 0x20;
      local_24 = local_24 + 1;
      local_134 = local_134 + 1;
      if (local_20 <= local_134) goto LAB_0019b2de;
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_130);
  }
LAB_0019b2d0:
  local_1c = local_1c + 1;
  bVar13 = *local_1c;
  if (bVar13 == 0) goto LAB_0019b2de;
  goto LAB_0019ab1c;
LAB_0019b05e:
  do {
    uVar10 = uVar10 + 1;
  } while (*(byte *)((int)puVar11 + uVar10) != 0);
  goto LAB_0019b1be;
}

