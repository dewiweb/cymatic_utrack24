// rea decompile_all
// name: FUN_004d61ee
// address: 0x4d61ee
// body: available
// range: 0x4d61ee-0x4d6564 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d6564 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d61ee(wchar_t *param_1,wchar_t *param_2,rsize_t param_3,short *param_4,
                 undefined4 param_5,uint *param_6)

{
  wchar_t wVar1;
  short sVar2;
  code *pcVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  short *psVar7;
  errno_t eVar8;
  uint uVar9;
  wchar_t *pwVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  uint uVar14;
  bool bVar15;
  uint local_1e8;
  wchar_t *local_1e4;
  short *local_1e0;
  uint *local_1dc;
  wchar_t *local_1d8;
  undefined1 local_1d4 [288];
  wchar_t local_b4;
  undefined1 local_b2 [170];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_1e0 = param_4;
  if (param_1 == (wchar_t *)0x0) goto LAB_004d622a;
  iVar6 = FUN_004d90bf();
  local_1dc = (uint *)(iVar6 + 0x68);
  local_1e4 = (wchar_t *)(iVar6 + 0x6c);
  local_1d8 = (wchar_t *)(iVar6 + 0x172);
  psVar7 = (short *)(iVar6 + 0x2a0);
  local_1e8 = 0;
  iVar6 = FUN_004df612(param_4,param_5,psVar7,0x55);
  if (iVar6 != 0) goto LAB_004d655f;
  if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
    eVar8 = _wcscpy_s(param_2,param_3,L"C");
    if (eVar8 == 0) {
      if (param_6 != (uint *)0x0) {
        *param_6 = 0;
      }
      goto LAB_004d622a;
    }
    goto LAB_004d655f;
  }
  pwVar10 = param_1;
  do {
    wVar1 = *pwVar10;
    pwVar10 = pwVar10 + 1;
  } while (wVar1 != L'\0');
  uVar14 = (int)pwVar10 - (int)(param_1 + 1) >> 1;
  pwVar10 = local_1d8;
  pwVar12 = param_1;
  if (uVar14 < 0x83) {
    do {
      wVar1 = *pwVar10;
      bVar15 = (ushort)wVar1 < (ushort)*pwVar12;
      if (wVar1 != *pwVar12) {
LAB_004d6314:
        uVar9 = -(uint)bVar15 | 1;
        goto LAB_004d6319;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar10[1];
      bVar15 = (ushort)wVar1 < (ushort)pwVar12[1];
      if (wVar1 != pwVar12[1]) goto LAB_004d6314;
      pwVar10 = pwVar10 + 2;
      pwVar12 = pwVar12 + 2;
    } while (wVar1 != L'\0');
    uVar9 = 0;
LAB_004d6319:
    pwVar10 = local_1e4;
    pwVar12 = param_1;
    if (uVar9 != 0) {
      do {
        wVar1 = *pwVar10;
        bVar15 = (ushort)wVar1 < (ushort)*pwVar12;
        if (wVar1 != *pwVar12) {
LAB_004d634f:
          uVar9 = -(uint)bVar15 | 1;
          goto LAB_004d6354;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar10[1];
        bVar15 = (ushort)wVar1 < (ushort)pwVar12[1];
        if (wVar1 != pwVar12[1]) goto LAB_004d634f;
        pwVar10 = pwVar10 + 2;
        pwVar12 = pwVar12 + 2;
      } while (wVar1 != L'\0');
      uVar9 = 0;
LAB_004d6354:
      if (uVar9 != 0) goto LAB_004d635c;
    }
  }
  else {
LAB_004d635c:
    cVar5 = FUN_004d7bcd();
    iVar6 = FUN_004d602e(local_1d4,param_1);
    puVar4 = local_1dc;
    if (iVar6 == 0) {
      if (cVar5 == '\0') {
        iVar6 = ___acrt_get_qualified_locale_downlevel();
      }
      else {
        iVar6 = FUN_004e1104(local_1d4,local_1dc,local_1d4);
      }
      if (iVar6 == 0) goto LAB_004d640f;
      FUN_004d5fbe(local_1d8,0x83,local_1d4);
      if (local_1e0 != (short *)0x0) {
        pwVar10 = &local_b4;
        do {
          wVar1 = *pwVar10;
          pwVar10 = pwVar10 + 1;
        } while (wVar1 != L'\0');
        iVar6 = ((int)pwVar10 - (int)local_b2 >> 1) + 1;
        psVar7 = local_1e0;
        pwVar10 = &local_b4;
        goto LAB_004d6491;
      }
    }
    else {
LAB_004d640f:
      iVar6 = ___acrt_IsValidLocaleName_4(param_1);
      if (iVar6 == 0) {
        psVar13 = local_1e0;
        do {
          sVar2 = *psVar13;
          psVar13 = psVar13 + 1;
        } while (sVar2 != 0);
        iVar6 = FUN_004df612(psVar7,0x55,local_1e0,((int)psVar13 - (int)(local_1e0 + 1) >> 1) + 1);
        if (iVar6 != 0) goto LAB_004d655f;
        goto LAB_004d622a;
      }
      iVar6 = ___acrt_GetLocaleInfoEx_16(param_1,0x20001004,&local_1e8,2);
      if ((iVar6 == 0) || (local_1e8 == 0)) {
        local_1e8 = GetACP();
      }
      *puVar4 = local_1e8 & 0xffff;
      iVar6 = uVar14 + 1;
      iVar11 = FUN_004df612(local_1d8,0x83,param_1,iVar6);
      if ((iVar11 != 0) || (iVar11 = FUN_004df612(local_1e0,param_5,param_1,iVar6), iVar11 != 0))
      goto LAB_004d655f;
      param_5 = 0x55;
      pwVar10 = param_1;
LAB_004d6491:
      iVar6 = FUN_004df612(psVar7,param_5,pwVar10,iVar6);
      if (iVar6 != 0) goto LAB_004d655f;
    }
    if ((*param_1 == L'\0') || (0x82 < uVar14)) {
      *local_1e4 = L'\0';
    }
    else {
      iVar6 = FUN_004df612(local_1e4,0x83,param_1,uVar14 + 1);
      if (iVar6 != 0) goto LAB_004d655f;
    }
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = *local_1dc;
  }
  eVar8 = _wcscpy_s(param_2,param_3,local_1d8);
  if (eVar8 == 0) {
LAB_004d622a:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004d655f:
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

