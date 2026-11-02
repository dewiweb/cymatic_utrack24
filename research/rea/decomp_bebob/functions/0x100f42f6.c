// rea decompile_all
// name: CMFCColorPickerCtrl::CreateHexagon
// address: 0x100f42f6
// body: available
// range: 0x100f42f6-0x100f44f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::CreateHexagon(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPickerCtrl::CreateHexagon(CMFCColorPickerCtrl *this)

{
  int iVar1;
  CCellObj *pCVar2;
  CObject *pCVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x100f4302;
  if (*(int *)(this + 0xb0) == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
    if (local_24.bottom - local_24.top < local_24.right - local_24.left) {
      iVar14 = 0;
      iVar1 = -((((local_24.top - local_24.bottom) - local_24.left) + local_24.right) / 2);
    }
    else {
      iVar14 = -((((local_24.bottom - local_24.top) - local_24.right) + local_24.left) / 2);
      iVar1 = 0;
    }
    InflateRect(&local_24,iVar1,iVar14);
    iVar1 = (local_24.bottom - local_24.top) / 0xd + 1;
    iVar14 = (local_24.top + local_24.bottom) / 2;
    iVar7 = (local_24.left + local_24.right) / 2;
    pCVar2 = FUN_1000858a(0x48);
    if (pCVar2 == (CCellObj *)0x0) {
      pCVar3 = (CObject *)0x0;
    }
    else {
      pCVar3 = (CObject *)
               CCellObj::CCellObj(pCVar2,*(CPalette **)(this + 0x9c),0xffffff,iVar7,iVar14,iVar1,0);
    }
    CObArray::SetAtGrow((CObArray *)(this + 0xa8),*(int *)(this + 0xb0),pCVar3);
    local_40 = 1;
    local_34 = 6;
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    local_44 = iVar7;
    do {
      local_44 = local_44 + iVar1;
      local_28 = 0;
      local_30 = local_44;
      local_2c = iVar14;
      do {
        uVar8 = FUN_100f8660(uVar5,uVar6);
        uVar9 = FUN_100f8660(extraout_ECX_00,(int)(uVar8 >> 0x20));
        iVar4 = (int)uVar9;
        uVar5 = extraout_ECX_01;
        if (0 < local_40) {
          local_38 = local_40;
          do {
            GetAngleFromPoint(this,local_30 - iVar7,local_2c - iVar14);
            pCVar2 = FUN_1000858a(0x48);
            local_8 = 0;
            if (pCVar2 == (CCellObj *)0x0) {
              pCVar3 = (CObject *)0x0;
            }
            else {
              lVar15 = 0x10;
              iVar11 = local_30;
              iVar12 = local_2c;
              iVar13 = iVar1;
              uVar10 = FUN_1009c992();
              pCVar3 = (CObject *)
                       CCellObj::CCellObj(pCVar2,*(CPalette **)(this + 0x9c),(ulong)uVar10,iVar11,
                                          iVar12,iVar13,lVar15);
            }
            local_8 = 0xffffffff;
            CObArray::SetAtGrow((CObArray *)(this + 0xa8),*(int *)(this + 0xb0),pCVar3);
            uVar9 = CONCAT44(extraout_EDX_00,iVar4);
            local_30 = local_30 + (int)uVar8;
            local_2c = local_2c + iVar4;
            local_38 = local_38 + -1;
            uVar5 = extraout_ECX_02;
          } while (local_38 != 0);
        }
        uVar6 = (undefined4)(uVar9 >> 0x20);
        local_28 = local_28 + 4;
      } while (local_28 < 0x18);
      local_40 = local_40 + 1;
      local_34 = local_34 + -1;
    } while (0 < local_34);
  }
  FUN_100f90cf();
  return;
}

