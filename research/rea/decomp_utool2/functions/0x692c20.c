// rea decompile_all
// name: FUN_00692c20
// address: 0x692c20
// body: available
// range: 0x692c20-0x692d6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00692c20(pthreadlocinfo param_1)

{
  int **ppiVar1;
  wchar_t *pwVar2;
  pthreadlocinfo ptVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  wchar_t **_Memory;
  int in_ECX;
  pthreadlocinfo ptVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  _locale_t _Locale;
  pthreadlocinfo local_10;
  pthreadlocinfo local_c;
  
  ptVar3 = param_1;
  if ((int)param_1 < 1) {
    return 0;
  }
  ppiVar1 = &param_1[-3].lc_category[1].refcount;
  ptVar7 = (pthreadlocinfo)0x0;
  if (0 < (int)ppiVar1) {
    ptVar7 = (pthreadlocinfo)ppiVar1;
  }
  _Locale = (_locale_t)&param_1;
  local_c = ptVar7;
  if ((int)ptVar7 < (int)param_1) {
    local_c = param_1;
  }
  local_10 = ptVar7;
  (**(code **)(*(int *)(in_ECX + 0x70) + 0x14))(_Locale,&local_10);
  iVar6 = (int)ptVar3 - (int)ptVar7;
  do {
    iVar8 = iVar6;
    if (iVar8 < 1) goto LAB_00692d3e;
    local_c = param_1;
    FUN_0044ebd0(iVar8 + -1);
    wVar4 = FUN_00426f70();
    iVar5 = FID_conflict___iswspace_l(wVar4,_Locale);
    iVar6 = iVar8 + -1;
  } while (iVar5 != 0);
  if (0 < iVar8) {
    local_c = param_1;
    FUN_0044ebd0(iVar8 + -1);
    wVar4 = FUN_00426f70();
    iVar6 = FID_conflict__iswalnum(wVar4,_Locale);
    if (iVar6 == 0) {
      iVar6 = FID_conflict___iswspace_l(wVar4,_Locale);
      cVar9 = iVar6 == 0;
    }
    else {
      cVar9 = '\x02';
    }
    do {
      iVar6 = iVar8 + -1;
      local_c = param_1;
      FUN_0044ebd0(iVar6);
      local_c = (pthreadlocinfo)FUN_00426f70();
      iVar5 = FID_conflict__iswalnum((wint_t)local_c,_Locale);
      if (iVar5 == 0) {
        iVar5 = FID_conflict___iswspace_l((wint_t)local_c,_Locale);
        cVar10 = iVar5 == 0;
      }
      else {
        cVar10 = '\x02';
      }
    } while ((cVar9 == cVar10) && (iVar8 = iVar6, 0 < iVar6));
  }
LAB_00692d3e:
  _Memory = param_1[-1].locale_name + 4;
  if (_Memory != (wchar_t **)&DAT_00bfe124) {
    LOCK();
    pwVar2 = *_Memory;
    *_Memory = (wchar_t *)((int)*_Memory + -1);
    UNLOCK();
    if (pwVar2 == (wchar_t *)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  return (int)&((threadlocaleinfostruct *)(ptVar7->lc_category + -1))->refcount + iVar8;
}

