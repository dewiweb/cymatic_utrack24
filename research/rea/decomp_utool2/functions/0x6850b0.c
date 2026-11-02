// rea decompile_all
// name: FUN_006850b0
// address: 0x6850b0
// body: available
// range: 0x6850b0-0x685dda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006850b0(int *param_1,undefined4 *param_2,char param_3,undefined4 param_4,char param_5,
                 char param_6,char param_7)

{
  WCHAR WVar1;
  byte bVar2;
  undefined1 *puVar3;
  LPWSTR pWVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  LPWSTR pszPath;
  int iVar8;
  undefined4 *puVar9;
  DWORD DVar10;
  BOOL BVar11;
  HRESULT HVar12;
  LPCWSTR _Memory;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  WCHAR *pWVar16;
  int *in_EDX;
  uint uVar17;
  char cStack0000000f;
  int *piStack_274;
  tagOFNW local_258;
  int local_200;
  byte local_198;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  LPWSTR local_17c;
  int local_178;
  undefined4 *local_174;
  undefined4 *local_170;
  void *local_16c;
  void *local_168;
  LPITEMIDLIST local_164;
  LPITEMIDLIST local_160;
  LPWSTR local_15c;
  LPWSTR local_158;
  WCHAR *local_154;
  int local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  int local_140;
  int local_13c;
  undefined1 *local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  int local_12c;
  int local_128;
  undefined1 *local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char *local_104;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined1 *local_ec;
  undefined1 *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 *local_cc;
  undefined1 *local_c8;
  int local_c4;
  int local_c0;
  _browseinfoW local_bc;
  WCHAR *local_9c;
  undefined1 *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  int local_8c;
  int local_88;
  LPCWSTR local_84;
  int local_80;
  LPCWSTR local_7c;
  IMalloc *local_78;
  undefined1 *local_74;
  int local_70;
  LPWSTR local_6c;
  int local_68;
  undefined4 *local_64;
  int local_60;
  uint local_5c;
  void *local_58;
  undefined4 *local_54;
  uint local_50;
  undefined1 *local_4c;
  WCHAR *local_48;
  LPWSTR local_44;
  undefined1 *local_40;
  WCHAR *local_3c;
  int local_38;
  int *local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00720cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_50 = 0;
  local_178 = *in_EDX;
  piVar7 = (int *)(local_178 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_4c = &DAT_00bfe12c;
  local_40 = &DAT_00bfe12c;
  local_150 = local_178;
  local_14 = local_178;
  FID_conflict__free((void *)0x0);
  piStack_274 = (int *)0x685127;
  pszPath = (LPWSTR)FUN_004c5556();
  local_30 = &DAT_00bfe12c;
  local_18 = 0;
  local_2c = "";
  local_28 = 0;
  local_17c = pszPath;
  local_44 = pszPath;
  FUN_006ea2c0();
  local_8._0_1_ = 4;
  if (DAT_00c8a67c == 0) {
    local_58 = operator_new(0xd0);
    local_8._0_1_ = 5;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8._0_1_ = 4;
  piVar7 = (int *)**(int **)(DAT_00c8a67c + 0x54);
  local_18c = *piVar7;
  local_184 = piVar7[2];
  local_188 = piVar7[1];
  local_180 = piVar7[3];
  piStack_274 = (int *)(((int)(local_184 + (local_184 >> 0x1f & 3U)) >> 2) + local_18c);
  local_38 = local_18c;
  FUN_006e9790();
  if ((local_198 & 4) == 0) {
    bVar5 = local_198 | 4;
    bVar2 = local_198 & 1;
    local_198 = bVar5;
    if ((bVar2 != 0) && (iVar8 = FUN_0068db10(), iVar8 != 0)) {
      (**(code **)(local_200 + 0x30))();
    }
    FUN_006e6400(&piStack_274);
    FUN_006ce9f0(1);
  }
  local_5c = local_5c & 0xffffff00;
  EnumWindows(FUN_00686f00,(LPARAM)&local_5c);
  FUN_006d1c90();
  FUN_006e9aa0();
  cVar6 = FUN_006d1aa0();
  if (cVar6 == '\0') {
    FUN_0048c530();
    FUN_006ca6c0();
    (**(code **)(local_200 + 0x28))();
    FUN_006cc500();
  }
  puVar9 = (undefined4 *)FUN_00458890();
  DVar10 = GetFileAttributesW((LPCWSTR)*puVar9);
  if (((DVar10 & 0x10) == 0) || (DVar10 == 0xffffffff)) {
    puVar9 = (undefined4 *)FUN_00636a10();
    local_d0 = *puVar9;
    if (pszPath == (LPWSTR)0x0) {
      FUN_0045d6b0();
    }
    else {
      local_d4 = local_d0;
      local_6c = pszPath;
      FUN_0045e270();
    }
    local_d8 = local_70;
    local_dc = local_70;
    piVar7 = (int *)(local_70 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)FUN_00636040();
    local_e4 = *piVar7;
    piVar14 = (int *)(local_e4 + -8);
    if (piVar14 != &DAT_00bfe124) {
      LOCK();
      *piVar14 = *piVar14 + 1;
      UNLOCK();
    }
    local_e8 = (undefined1 *)*piVar7;
    LOCK();
    UNLOCK();
    piVar7 = (int *)(local_30 + -8);
    local_ec = local_30;
    local_f0 = local_30;
    local_e0 = local_e4;
    local_30 = local_e8;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_f4 = local_74;
    local_f8 = local_74;
  }
  else {
    local_c4 = *param_1;
    piVar7 = (int *)(local_c4 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    local_c8 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
    local_cc = local_30;
    local_98 = local_30;
    local_74 = local_30;
    local_c0 = local_c4;
    local_30 = local_c8;
  }
  piVar7 = (int *)(local_74 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (param_3 == '\0') {
    _param_3 = (LPITEMIDLIST)
               ((uint)(&PNG_0087c790.field_0x407c + (uint)(param_6 != '\0') * 2) | 0x200);
    if (param_7 == '\0') {
      _param_3 = (LPITEMIDLIST)(&PNG_0087c790.field_0x407c + (uint)(param_6 != '\0') * 2);
    }
    FID_conflict__free((void *)0x0);
    piStack_274 = (int *)0x685610;
    _Memory = (LPCWSTR)FUN_004c5556();
    local_108 = *param_2;
    local_84 = _Memory;
    if (_Memory == (LPCWSTR)0x0) {
      iVar8 = FUN_0045d6b0();
      uVar17 = iVar8 + 2;
    }
    else {
      local_10c = local_108;
      local_7c = _Memory;
      uVar17 = FUN_0045e270();
    }
    iVar8 = (int)_Memory + (uVar17 & 0xfffffffe);
    local_110 = *param_2;
    if (iVar8 == 0) {
      FUN_0045d6b0();
    }
    else {
      local_114 = local_110;
      local_80 = iVar8;
      FUN_0045e270();
    }
    uVar17 = 0;
    do {
      if (_Memory[uVar17] == L'|') {
        _Memory[uVar17] = L'\0';
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x800);
    piStack_274 = (int *)0x6856ba;
    _memset(&local_258,0,0x58);
    puVar3 = local_30;
    local_118 = local_30;
    local_11c = local_30;
    piVar7 = (int *)(local_30 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 10;
    local_258.lStructSize = 0x4c;
    piVar7 = (int *)FUN_006d1d80();
    if (piVar7 == (int *)0x0) {
      local_258.hwndOwner = (HWND)0x0;
    }
    else if ((undefined **)*piVar7 == juce::HWNDComponentPeer::vftable) {
      local_258.hwndOwner = (HWND)piVar7[0xe];
    }
    else {
      local_258.hwndOwner = (HWND)(*(code *)((undefined **)*piVar7)[1])();
    }
    local_258.nFilterIndex = 1;
    local_258.nMaxFile = 0x8000;
    local_258.lpstrFilter = _Memory;
    local_258.lpstrFile = pszPath;
    puVar9 = (undefined4 *)FUN_00458890();
    local_258.lpstrInitialDir = (LPCWSTR)*puVar9;
    puVar9 = (undefined4 *)FUN_00458890();
    local_258.lpstrTitle = (LPCWSTR)*puVar9;
    local_258.lCustData = (LPARAM)&local_30;
    local_258.Flags = (DWORD)_param_3;
    if (param_5 == '\0') {
      BVar11 = GetOpenFileNameW(&local_258);
      if (BVar11 == 0) {
        piVar7 = (int *)(puVar3 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FID_conflict__free(_Memory);
        FUN_006ea0b0();
        FUN_004ad4a0();
        FID_conflict__free(pszPath);
        piVar7 = (int *)(local_14 + -8);
        if (piVar7 == &DAT_00bfe124) {
          ExceptionList = local_10;
          return;
        }
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        goto joined_r0x00685b39;
      }
    }
    else {
      local_24 = (void *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_8._0_1_ = 0xb;
      piStack_274 = (int *)0x6857be;
      FUN_00635720();
      FUN_0062c6c0();
      uVar15 = local_50;
      uVar17 = local_1c;
      while (uVar17 = uVar17 - 1, local_50 = uVar15, -1 < (int)uVar17) {
        cVar6 = FUN_00629eb0();
        pszPath = local_44;
        _Memory = local_84;
        uVar15 = local_50;
        if ((cVar6 == '\0') && (uVar17 < local_1c)) {
          FUN_004179e0();
          pszPath = local_44;
          _Memory = local_84;
          uVar15 = local_50;
        }
      }
      if (local_1c == 1) {
        puVar9 = (undefined4 *)FUN_00631430();
        uVar15 = 1;
        if (*(char *)*puVar9 != '\0') {
          _param_3 = (LPITEMIDLIST)CONCAT13(1,SUB43(_param_3,0));
        }
      }
      if ((uVar15 & 1) != 0) {
        local_128 = local_88;
        local_12c = local_88;
        piVar7 = (int *)(local_88 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
      }
      if (cStack0000000f != '\0') {
        piStack_274 = &local_8c;
        puVar9 = (undefined4 *)FUN_00634090();
        local_130 = &DAT_00bfe12c;
        local_138 = &DAT_00bfe12c;
        local_134 = (undefined1 *)*puVar9;
        *puVar9 = &DAT_00bfe12c;
        local_13c = local_8c;
        piVar7 = (int *)(local_8c + -8);
        local_140 = local_8c;
        local_40 = local_134;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        puVar9 = (undefined4 *)FUN_00458890();
        local_258.lpstrDefExt = (LPCWSTR)*puVar9;
        local_4c = local_40;
      }
      BVar11 = GetSaveFileNameW(&local_258);
      if (BVar11 == 0) {
        FUN_0040f7f0();
        FID_conflict__free(local_24);
        piVar7 = (int *)(puVar3 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FID_conflict__free(_Memory);
        FUN_006ea0b0();
        FUN_004ad4a0();
        FID_conflict__free(pszPath);
        piVar7 = (int *)(local_4c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_14 + -8);
        if (piVar7 == &DAT_00bfe124) {
          ExceptionList = local_10;
          return;
        }
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        goto joined_r0x00685b39;
      }
      FUN_0040f7f0();
      FID_conflict__free(local_24);
    }
    local_18 = (uint)local_258.nFileOffset;
    local_148 = puVar3;
    local_14c = puVar3;
    piVar7 = (int *)(puVar3 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_8._0_1_ = 4;
    FID_conflict__free(_Memory);
LAB_00685a23:
    pWVar16 = local_9c;
    if (((param_7 == '\0') || (local_18 == 0)) ||
       (local_48 = pszPath + local_18, pszPath[local_18 - 1] != L'\0')) {
      if (*pszPath != L'\0') {
        FUN_0045cae0();
        local_8._0_1_ = 0xe;
        FUN_00627bf0();
        FUN_004153b0();
        piVar7 = (int *)(local_68 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_38 + -8);
        pWVar16 = local_9c;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
            pWVar16 = local_9c;
          }
        }
      }
    }
    else {
      WVar1 = *local_48;
      pWVar4 = local_48;
      while (local_9c = pWVar4, local_48 = local_9c, WVar1 != L'\0') {
        if (*local_9c == L'\0') {
          puVar9 = (undefined4 *)&DAT_00bfe12c;
        }
        else {
          iVar8 = FUN_0045ddd0();
          puVar13 = (undefined4 *)FUN_004bfe22();
          local_154 = local_48;
          puVar13[1] = iVar8 + 4U & 0xfffffffc;
          puVar9 = puVar13 + 2;
          *puVar13 = 0;
          local_90 = puVar9;
          FUN_0045e480();
        }
        local_8._0_1_ = 0xc;
        local_3c = (WCHAR *)&stack0xfffffd98;
        local_54 = (undefined4 *)&stack0xfffffd94;
        local_158 = pszPath;
        local_64 = puVar9;
        puVar13 = (undefined4 *)&stack0xfffffd94;
        pWVar16 = (WCHAR *)&stack0xfffffd98;
        if ((pszPath != (LPWSTR)0x0) &&
           (puVar13 = (undefined4 *)&stack0xfffffd94, pWVar16 = (WCHAR *)&stack0xfffffd98,
           *pszPath != L'\0')) {
          piStack_274 = (int *)0x685b75;
          iVar8 = FUN_0045ddd0();
          uVar17 = iVar8 + 4U & 0xfffffffc;
          piStack_274 = (int *)(uVar17 + 0xb);
          puVar13 = (undefined4 *)FUN_004bfe22();
          puVar13[1] = uVar17;
          *puVar13 = 0;
          local_15c = local_44;
          piStack_274 = (int *)0x685bb1;
          local_94 = puVar13 + 2;
          FUN_0045e480();
          *local_54 = puVar13 + 2;
          pszPath = local_44;
          puVar13 = local_54;
          pWVar16 = local_3c;
        }
        local_3c = pWVar16;
        local_54 = puVar13;
        FUN_006377c0();
        FUN_00637730();
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_00627bf0();
        if (local_34[1] < local_34[2] + 1) {
          FUN_00409cf0();
        }
        iVar8 = local_34[2];
        local_34[2] = iVar8 + 1;
        puVar13 = (undefined4 *)(*local_34 + iVar8 * 4);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = _param_3;
          _param_3 = (LPITEMIDLIST)&DAT_00bfe12c;
        }
        piVar7 = (int *)((int)&_param_3[-3].mkid.cb + 1);
        local_164 = _param_3;
        local_160 = _param_3;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_168 = local_58;
        local_16c = local_58;
        piVar7 = (int *)((int)local_58 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8._0_1_ = 4;
        piVar7 = puVar9 + -2;
        local_174 = puVar9;
        local_170 = puVar9;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_3c = local_48 + 1;
        pWVar16 = local_48;
        do {
          WVar1 = *pWVar16;
          pWVar16 = pWVar16 + 1;
        } while (WVar1 != L'\0');
        WVar1 = local_48[((int)pWVar16 - (int)local_3c >> 1) + 1];
        pWVar4 = local_48 + ((int)pWVar16 - (int)local_3c >> 1) + 1;
        pWVar16 = local_9c;
      }
    }
    local_9c = pWVar16;
    FUN_006ea0b0();
    FUN_004ad4a0();
    FID_conflict__free(pszPath);
    piVar7 = (int *)(local_4c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  else {
    local_bc.hwndOwner = (HWND)0x0;
    local_bc.lpfn = (BFFCALLBACK)0x0;
    local_bc.lParam = 0;
    local_bc.pidlRoot = (LPCITEMIDLIST)0x0;
    local_bc.pszDisplayName = (LPWSTR)0x0;
    local_bc.lpszTitle = (LPCWSTR)0x0;
    local_bc.ulFlags = 0;
    local_bc.iImage = 0;
    piVar7 = (int *)FUN_006d1d80();
    if (piVar7 == (int *)0x0) {
      local_bc.hwndOwner = (HWND)0x0;
    }
    else if ((undefined **)*piVar7 == juce::HWNDComponentPeer::vftable) {
      local_bc.hwndOwner = (HWND)piVar7[0xe];
    }
    else {
      local_bc.hwndOwner = (HWND)(*(code *)((undefined **)*piVar7)[1])();
    }
    local_bc.pszDisplayName = pszPath;
    puVar9 = (undefined4 *)FUN_00458890();
    local_bc.lpszTitle = (LPCWSTR)*puVar9;
    local_bc.lParam = (LPARAM)&local_30;
    local_bc.lpfn = FUN_00686000;
    local_bc.ulFlags = 0x70;
    _param_3 = SHBrowseForFolderW(&local_bc);
    BVar11 = SHGetPathFromIDListW(_param_3,pszPath);
    if (BVar11 == 0) {
      *pszPath = L'\0';
      local_100 = local_2c;
      local_104 = local_2c;
      piVar7 = (int *)(local_2c + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_2c = "";
    }
    if ((_param_3 != (LPITEMIDLIST)0x0) && (HVar12 = SHGetMalloc(&local_78), -1 < HVar12)) {
      (*local_78->lpVtbl->Free)(local_78,_param_3);
    }
    if (*local_2c == '\0') goto LAB_00685a23;
    FUN_0045cae0();
    local_8._0_1_ = 6;
    FUN_00627bf0();
    local_8._0_1_ = 7;
    FUN_00632f30();
    FUN_004153b0();
    piVar7 = (int *)(local_50 - 8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_60 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_18 - 8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    FUN_006ea0b0();
    FUN_004ad4a0();
    FID_conflict__free(pszPath);
  }
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 == &DAT_00bfe124) {
    ExceptionList = local_10;
    return;
  }
  LOCK();
  iVar8 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
joined_r0x00685b39:
  if (iVar8 == 0) {
    FID_conflict__free(piVar7);
  }
  ExceptionList = local_10;
  return;
}

