// rea decompile_all
// name: AfxMergeMenus
// address: 0x10008a4a
// body: available
// range: 0x10008a4a-0x10008cd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    struct HMENU__ * __stdcall AfxMergeMenus(struct HMENU__ *,struct HMENU__ *,long *,int,int)
   
   Library: Visual Studio 2010 Release */

HMENU__ * AfxMergeMenus(HMENU__ *param_1,HMENU__ *param_2,long *param_3,int param_4,int param_5)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  UINT UVar4;
  int iVar5;
  AFX_MODULE_STATE *pAVar6;
  size_t sVar7;
  uint uFlags;
  HMENU uIDNewItem;
  HMENU__ *pHVar8;
  WCHAR *lpNewItem;
  HMENU local_238;
  LPCWSTR local_228;
  HMENU local_224;
  UINT local_220;
  int local_21c;
  UINT local_218;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x234;
  local_8 = 0x10008a59;
  bVar2 = false;
  iVar3 = GetMenuItemCount(param_2);
  local_21c = 0;
  local_218 = 0;
  if (param_4 == 1) {
    local_218 = *param_3;
  }
  local_220 = 0;
  if (0 < iVar3) {
    do {
      local_224 = GetSubMenu(param_2,local_220);
      UVar4 = GetMenuState(param_2,local_220,0x400);
      if ((local_224 == (HMENU)0x0) && ((UVar4 & 0x800) != 0)) {
        param_3[param_4] = local_21c;
        local_21c = 0;
        if (param_4 < 5) {
          local_218 = local_218 + (param_3 + param_4)[1];
        }
        param_4 = param_4 + 2;
      }
      else {
        local_238 = (HMENU)0x0;
        if ((param_5 != 0) && ((param_4 == 5 && (param_3[5] == 1)))) {
          local_238 = GetSubMenu(param_1,local_218);
        }
        iVar5 = GetMenuStringW(param_2,local_220,local_214,0x100,0x400);
        if (local_224 == (HMENU)0x0) {
          if (0 < iVar5) {
            lpNewItem = local_214;
            uIDNewItem = (HMENU)GetMenuItemID(param_2,local_220);
            uFlags = UVar4 | 0x400;
LAB_10008c7e:
            InsertMenuW(param_1,local_218,uFlags,(UINT_PTR)uIDNewItem,lpNewItem);
            local_218 = local_218 + 1;
            local_21c = local_21c + 1;
          }
        }
        else if (local_238 == (HMENU)0x0) {
          iVar5 = GetMenuItemCount(local_224);
          if (iVar5 != 0) {
            lpNewItem = local_214;
            uFlags = UVar4 & 0xff | 0x410;
            uIDNewItem = local_224;
            goto LAB_10008c7e;
          }
        }
        else {
          pAVar6 = AfxGetModuleState();
          FUN_10006ce0(&local_228,*(short **)(pAVar6 + 0x10));
          local_8 = 0;
          if (*(int *)(local_228 + -6) != 0) {
            ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_228,L' ')
            ;
          }
          sVar7 = _wcslen(local_214);
          ATL::CSimpleStringT<wchar_t,0>::Append
                    ((CSimpleStringT<wchar_t,0> *)&local_228,local_214,sVar7);
          AppendMenuW(local_238,0x10,(UINT_PTR)local_224,local_228);
          local_8 = 0xffffffff;
          plVar1 = param_3 + param_4;
          *plVar1 = 0;
          plVar1[-1] = plVar1[-1] + 1;
          bVar2 = true;
          FUN_10001030((undefined4 *)(local_228 + -8));
        }
      }
      local_220 = local_220 + 1;
    } while ((int)local_220 < iVar3);
    if (bVar2) goto LAB_10008ccc;
  }
  param_3[param_4] = local_21c;
LAB_10008ccc:
  pHVar8 = (HMENU__ *)FUN_100f90cf();
  return pHVar8;
}

