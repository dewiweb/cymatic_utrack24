// rea decompile_all
// name: FUN_101059d9
// address: 0x101059d9
// body: available
// range: 0x101059d9-0x10105c56 inclusive
// range: 0x10105c65-0x10105ceb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_101059d9(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  errno_t eVar4;
  int iVar5;
  size_t sVar6;
  undefined **ppuVar7;
  int *piVar8;
  long lVar9;
  char *unaff_ESI;
  undefined **unaff_EDI;
  char *pcVar10;
  UINT local_38;
  int local_34;
  int local_30;
  long local_2c;
  long local_28;
  undefined **local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10159f70;
  uStack_c = 0x101059e5;
  bVar2 = false;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_101059d3();
  eVar4 = FID_conflict___get_dstbias(local_20);
  if (((eVar4 == 0) && (eVar4 = FID_conflict___get_dstbias(&local_28), eVar4 == 0)) &&
     (eVar4 = FID_conflict___get_dstbias(&local_2c), eVar4 == 0)) {
    local_38 = ____lc_codepage_func();
    DAT_1016ae94 = 0;
    unaff_EDI = (undefined **)0xffffffff;
    DAT_10164104 = 0xffffffff;
    DAT_101640f8 = 0xffffffff;
    unaff_ESI = __getenv_helper_nolock("TZ");
    if (unaff_ESI == (char *)0x0) goto LAB_10105ae7;
    if (*unaff_ESI == '\0') goto LAB_10105ae7;
    if (DAT_1016ae98 != (char *)0x0) {
      iVar5 = _strcmp(unaff_ESI,DAT_1016ae98);
      if (iVar5 == 0) goto LAB_10105bd2;
      if (DAT_1016ae98 != (char *)0x0) {
        _free(DAT_1016ae98);
      }
    }
    sVar6 = _strlen(unaff_ESI);
    DAT_1016ae98 = __malloc_crt(sVar6 + 1);
    if (DAT_1016ae98 == (char *)0x0) goto LAB_10105bd2;
    pcVar10 = unaff_ESI;
    sVar6 = _strlen(unaff_ESI);
    eVar4 = _strcpy_s(DAT_1016ae98,sVar6 + 1,pcVar10);
    if (eVar4 == 0) goto LAB_10105bd9;
  }
  while( true ) {
    do {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_10105ae7:
      if (DAT_1016ae98 != (char *)0x0) {
        _free(DAT_1016ae98);
        DAT_1016ae98 = (char *)0x0;
      }
      ppuVar7 = (undefined **)GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1016ade8);
      if (ppuVar7 != unaff_EDI) {
        DAT_1016ae94 = 1;
        local_20[0] = DAT_1016ade8 * 0x3c;
        if (DAT_1016ae2e != 0) {
          local_20[0] = local_20[0] + DAT_1016ae3c * 0x3c;
        }
        if ((DAT_1016ae82 == 0) || (DAT_1016ae90 == 0)) {
          local_28 = 0;
          local_2c = 0;
        }
        else {
          local_28 = 1;
          local_2c = (DAT_1016ae90 - DAT_1016ae3c) * 0x3c;
        }
        iVar5 = WideCharToMultiByte(local_38,0,(LPCWSTR)&DAT_1016adec,(int)unaff_EDI,*local_24,0x3f,
                                    (LPCSTR)0x0,&local_34);
        if ((iVar5 == 0) || (local_34 != 0)) {
          **local_24 = 0;
        }
        else {
          (*local_24)[0x3f] = 0;
        }
        iVar5 = WideCharToMultiByte(local_38,0,(LPCWSTR)&DAT_1016ae40,-1,local_24[1],0x3f,
                                    (LPCSTR)0x0,&local_34);
        if ((iVar5 == 0) || (local_34 != 0)) {
          *local_24[1] = 0;
        }
        else {
          local_24[1][0x3f] = 0;
        }
      }
LAB_10105bd2:
      local_30 = 1;
LAB_10105bd9:
      lVar9 = local_20[0];
      piVar8 = FUN_101059cd();
      lVar3 = local_28;
      *piVar8 = lVar9;
      piVar8 = FUN_101059c1();
      lVar9 = local_2c;
      *piVar8 = lVar3;
      piVar8 = FUN_101059c7();
      *piVar8 = lVar9;
      local_8 = (undefined *)0xfffffffe;
      FUN_10105c5c();
      unaff_EDI = local_24;
      if (local_30 != 0) {
        return;
      }
      eVar4 = _strncpy_s(*local_24,0x40,unaff_ESI,3);
    } while (eVar4 != 0);
    pcVar10 = unaff_ESI + 3;
    if (unaff_ESI[3] == '-') {
      bVar2 = true;
      pcVar10 = unaff_ESI + 4;
    }
    unaff_ESI = pcVar10;
    lVar9 = _atol(unaff_ESI);
    local_20[0] = lVar9 * 0xe10;
    for (; (cVar1 = *unaff_ESI, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
        unaff_ESI = unaff_ESI + 1) {
    }
    if (*unaff_ESI == ':') {
      unaff_ESI = unaff_ESI + 1;
      lVar9 = _atol(unaff_ESI);
      local_20[0] = local_20[0] + lVar9 * 0x3c;
      for (; ('/' < *unaff_ESI && (*unaff_ESI < ':')); unaff_ESI = unaff_ESI + 1) {
      }
      if (*unaff_ESI == ':') {
        unaff_ESI = unaff_ESI + 1;
        lVar9 = _atol(unaff_ESI);
        local_20[0] = local_20[0] + lVar9;
        for (; ('/' < *unaff_ESI && (*unaff_ESI < ':')); unaff_ESI = unaff_ESI + 1) {
        }
      }
    }
    if (bVar2) {
      local_20[0] = -local_20[0];
    }
    local_28 = (long)*unaff_ESI;
    if (local_28 == 0) break;
    eVar4 = _strncpy_s(unaff_EDI[1],0x40,unaff_ESI,3);
    if (eVar4 == 0) {
LAB_10105cd2:
      lVar3 = local_20[0];
      piVar8 = FUN_101059cd();
      lVar9 = local_28;
      *piVar8 = lVar3;
      piVar8 = FUN_101059c1();
      *piVar8 = lVar9;
      return;
    }
  }
  *unaff_EDI[1] = 0;
  goto LAB_10105cd2;
}

