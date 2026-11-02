// rea decompile_all
// name: CMFCColorPickerCtrl::CreateHexGreyScaleBar
// address: 0x100f4097
// body: available
// range: 0x100f4097-0x100f42b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::CreateHexGreyScaleBar(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPickerCtrl::CreateHexGreyScaleBar(CMFCColorPickerCtrl *this)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  CCellObj *pCVar5;
  CObject *pCVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  int local_38;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xb0) == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    uVar3 = (local_18.bottom - local_18.top) / 2 - 2;
    uVar4 = (local_18.right - local_18.left) / 0xd;
    if ((int)uVar3 < (int)uVar4) {
      uVar4 = uVar3;
    }
    uVar3 = uVar4 & 0x80000001;
    bVar9 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar9 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar9) {
      uVar4 = uVar4 + 1;
    }
    iVar7 = (local_18.bottom + local_18.top) / 2;
    uVar10 = FUN_100f8660(local_18.bottom,local_18.bottom + local_18.top >> 0x1f);
    local_20 = 0;
    iVar8 = iVar7 - (int)uVar10 / 2;
    local_30 = local_18.left;
    iVar1 = (int)uVar4 / 2;
    do {
      if (local_20 == 1) {
        pCVar5 = FUN_1000858a(0x48);
        pCVar6 = (CObject *)0x0;
        if (pCVar5 != (CCellObj *)0x0) {
          pCVar6 = (CObject *)
                   CCellObj::CCellObj(pCVar5,*(CPalette **)(this + 0x9c),0xffffff,
                                      (int)(uVar4 * 2) / 2 + local_30,iVar7,uVar4 * 2,0);
        }
        CObArray::SetAtGrow((CObArray *)(this + 0xa8),*(int *)(this + 0xb0),pCVar6);
      }
      local_24 = uVar4 * 3 + local_30;
      cVar2 = -0x10;
      local_38 = 0xf;
      local_1c = iVar8;
      do {
        if (local_20 == 1) {
          pCVar5 = FUN_1000858a(0x48);
          if (pCVar5 == (CCellObj *)0x0) {
            pCVar6 = (CObject *)0x0;
          }
          else {
            pCVar6 = (CObject *)
                     CCellObj::CCellObj(pCVar5,*(CPalette **)(this + 0x9c),
                                        (uint)CONCAT21(CONCAT11(cVar2,cVar2),cVar2),local_24,
                                        local_1c,uVar4,7);
          }
          CObArray::SetAtGrow((CObArray *)(this + 0xa8),*(int *)(this + 0xb0),pCVar6);
        }
        local_24 = local_24 + iVar1;
        bVar9 = local_1c == iVar8;
        local_1c = iVar8;
        if (bVar9) {
          local_1c = iVar8 + (int)uVar10;
        }
        cVar2 = cVar2 + -0xf;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
      if (local_20 == 1) {
        pCVar5 = FUN_1000858a(0x48);
        if (pCVar5 == (CCellObj *)0x0) {
          pCVar6 = (CObject *)0x0;
        }
        else {
          pCVar6 = (CObject *)
                   CCellObj::CCellObj(pCVar5,*(CPalette **)(this + 0x9c),0,
                                      iVar1 + local_24 + -1 + uVar4,iVar7,uVar4 * 2,0);
        }
        CObArray::SetAtGrow((CObArray *)(this + 0xa8),*(int *)(this + 0xb0),pCVar6);
      }
      if (local_20 == 0) {
        local_30 = (int)(((local_18.right - iVar1) - local_24) + uVar4 * -2) / 2;
      }
      local_20 = local_20 + 1;
    } while (local_20 < 2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

