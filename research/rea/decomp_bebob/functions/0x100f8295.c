// rea decompile_all
// name: __wcstombs_l_helper
// address: 0x100f8295
// body: available
// range: 0x100f8295-0x100f84fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wcstombs_l_helper
   
   Library: Visual Studio 2010 Release */

void __cdecl
__wcstombs_l_helper(LPSTR param_1,WCHAR *param_2,uint param_3,localeinfo_struct *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  WCHAR *pWVar4;
  int iVar5;
  DWORD DVar6;
  WCHAR WVar7;
  int local_30;
  uint local_28;
  int local_24 [2];
  int local_1c;
  char local_18;
  BOOL local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) goto LAB_100f84ed;
  if (param_2 == (WCHAR *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_100fe6d4();
    goto LAB_100f84ed;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_24,param_4);
  if (param_1 == (LPSTR)0x0) {
    if (*(int *)(local_24[0] + 0x14) != 0) {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  &local_14);
joined_r0x100f84cd:
      if (iVar5 != 0) {
joined_r0x100f83c4:
        if (local_14 == 0) goto LAB_100f832a;
      }
LAB_100f84d3:
      piVar2 = __errno();
      *piVar2 = 0x2a;
      if (local_18 != '\0') {
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
      }
      goto LAB_100f84ed;
    }
    WVar7 = *param_2;
    while (WVar7 != L'\0') {
      if (0xff < (ushort)WVar7) goto LAB_100f84d3;
      param_2 = param_2 + 1;
      WVar7 = *param_2;
    }
  }
  else {
    if (*(int *)(local_24[0] + 0x14) != 0) {
      if (*(int *)(local_24[0] + 0xac) == 1) {
        pWVar4 = param_2;
        uVar3 = param_3;
        if (param_3 != 0) {
          do {
            if (*pWVar4 == L'\0') break;
            pWVar4 = pWVar4 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          if ((uVar3 != 0) && (*pWVar4 == L'\0')) {
            param_3 = ((int)pWVar4 - (int)param_2 >> 1) + 1;
          }
        }
        iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,param_3,param_1,param_3,
                                    (LPCSTR)0x0,&local_14);
        goto joined_r0x100f84cd;
      }
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) goto joined_r0x100f83c4;
      if ((local_14 == 0) && (DVar6 = GetLastError(), DVar6 == 0x7a)) {
        local_28 = 0;
        if (param_3 != 0) {
          do {
            uVar3 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,1,local_10,
                                        *(int *)(local_24[0] + 0xac),(LPCSTR)0x0,&local_14);
            if ((((uVar3 == 0) || (local_14 != 0)) || ((int)uVar3 < 0)) || (5 < uVar3))
            goto LAB_100f84d3;
            if (param_3 < uVar3 + local_28) goto LAB_100f832a;
            local_30 = 0;
            if (0 < (int)uVar3) {
              do {
                cVar1 = local_10[local_30];
                param_1[local_28] = cVar1;
                if (cVar1 == '\0') goto LAB_100f832a;
                local_30 = local_30 + 1;
                local_28 = local_28 + 1;
              } while (local_30 < (int)uVar3);
            }
            param_2 = param_2 + 1;
          } while (local_28 < param_3);
        }
        if (local_18 != '\0') {
          *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        }
        goto LAB_100f84ed;
      }
      goto LAB_100f84d3;
    }
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        if (0xff < (ushort)*param_2) goto LAB_100f84d3;
        param_1[uVar3] = (CHAR)*param_2;
        WVar7 = *param_2;
        param_2 = param_2 + 1;
      } while ((WVar7 != L'\0') && (uVar3 = uVar3 + 1, uVar3 < param_3));
    }
  }
LAB_100f832a:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
LAB_100f84ed:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

