// rea decompile_all
// name: FUN_00692d70
// address: 0x692d70
// body: available
// range: 0x692d70-0x692ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00692d70(int param_1)

{
  wchar_t *pwVar1;
  pthreadlocinfo ptVar2;
  pthreadlocinfo ptVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  wchar_t **_Memory;
  int in_ECX;
  int iVar7;
  char cVar8;
  char cVar9;
  _locale_t _Locale;
  int local_10;
  pthreadlocinfo local_c;
  pthreadlocinfo local_8;
  
  local_10 = param_1;
  local_c = (pthreadlocinfo)param_1;
  if (param_1 < param_1 + 0x200) {
    local_c = (pthreadlocinfo)(param_1 + 0x200);
  }
  _Locale = (_locale_t)&local_8;
  (**(code **)(*(int *)(in_ECX + 0x70) + 0x14))(_Locale,&local_10);
  iVar5 = FUN_0044ec90();
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      local_c = local_8;
      FUN_0044ebd0(iVar7);
      wVar4 = FUN_00426f70();
      iVar6 = FID_conflict___iswspace_l(wVar4,_Locale);
      if (iVar6 == 0) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  local_c = local_8;
  FUN_0044ebd0(iVar7);
  wVar4 = FUN_00426f70();
  iVar6 = FID_conflict__iswalnum(wVar4,_Locale);
  if (iVar6 == 0) {
    iVar6 = FID_conflict___iswspace_l(wVar4,_Locale);
    cVar8 = iVar6 == 0;
  }
  else {
    cVar8 = '\x02';
  }
  for (; ptVar2 = local_c, iVar7 < iVar5; iVar7 = iVar7 + 1) {
    FUN_0044ebd0(iVar7);
    local_c = (pthreadlocinfo)FUN_00426f70();
    iVar6 = FID_conflict__iswalnum((wint_t)local_c,_Locale);
    if (iVar6 == 0) {
      iVar6 = FID_conflict___iswspace_l((wint_t)local_c,_Locale);
      cVar9 = iVar6 == 0;
    }
    else {
      cVar9 = '\x02';
    }
    ptVar2 = local_c;
    ptVar3 = local_8;
    if (cVar8 != cVar9) goto joined_r0x00692e6b;
  }
LAB_00692e99:
  local_c = ptVar2;
  _Memory = local_8[-1].locale_name + 4;
  if (_Memory != (wchar_t **)&DAT_00bfe124) {
    LOCK();
    pwVar1 = *_Memory;
    *_Memory = (wchar_t *)((int)*_Memory + -1);
    UNLOCK();
    if (pwVar1 == (wchar_t *)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  return iVar7 + param_1;
joined_r0x00692e6b:
  local_c = ptVar3;
  local_8 = local_c;
  if (iVar5 <= iVar7) goto LAB_00692e99;
  FUN_0044ebd0(iVar7);
  wVar4 = FUN_00426f70();
  iVar6 = FID_conflict___iswspace_l(wVar4,_Locale);
  ptVar2 = local_c;
  if (iVar6 == 0) goto LAB_00692e99;
  iVar7 = iVar7 + 1;
  ptVar3 = local_8;
  goto joined_r0x00692e6b;
}

