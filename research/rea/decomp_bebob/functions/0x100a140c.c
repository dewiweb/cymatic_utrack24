// rea decompile_all
// name: CMFCPopupMenuBar::CalcSize
// address: 0x100a140c
// body: available
// range: 0x100a140c-0x100a1657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a1462 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CSize __thiscall CMFCPopupMenuBar::CalcSize(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenuBar::CalcSize(CMFCPopupMenuBar *this,int param_1)

{
  int *piVar1;
  CObject *pCVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  CClientDC local_58 [20];
  undefined1 local_44 [8];
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CObject *local_24;
  int local_20;
  CPen *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x100a1418;
  if (*(int *)(this + 0xd00) == 0) {
    local_24 = (CObject *)0x0;
    local_20 = 0;
    CClientDC::CClientDC(local_58,(CWnd *)this);
    local_8 = 0;
    local_1c = CDC::SelectObject((CDC *)local_58,(CPen *)&DAT_10166bb4);
    if (local_1c == (CPen *)0x0) {
LAB_100a1462:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (*(int *)(this + 0xbd4) == 0) {
      local_24 = (CObject *)0x32;
      local_20 = 0x14;
    }
    else {
      local_2c = 0;
      local_28 = 0;
      CUIntArray::SetSize((CUIntArray *)(this + 0xd20),0,-1);
      FUN_10026c8e(extraout_ECX,extraout_EDX,&local_34);
      local_34 = local_34 + 2;
      local_30 = local_30 + 2;
      if (local_30 <= DAT_10166c6c) {
        local_30 = DAT_10166c6c;
      }
      puVar3 = *(undefined4 **)(this + 0xbcc);
      if (*(undefined4 **)(this + 0xbcc) != (undefined4 *)0x0) {
        do {
          if (puVar3 == (undefined4 *)0x0) goto LAB_100a1462;
          local_18 = (undefined4 *)*puVar3;
          piVar1 = (int *)puVar3[2];
          if (piVar1 == (int *)0x0) goto LAB_100a1462;
          local_14 = 0;
          if ((*(int *)(this + 0xcd0) != 0) && (piVar1[8] == *(int *)(this + 0xcd0))) {
            CDC::SelectObject((CDC *)local_58,(CPen *)&DAT_10166bc4);
            local_14 = 1;
          }
          piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(local_44,local_58,&local_34,1);
          local_3c = *piVar4;
          iVar6 = piVar4[1];
          if (((piVar1[9] & 0x20000000U) != 0) && (DAT_10166e54 == 0)) {
            if ((local_2c != 0) && (local_28 != 0)) {
              if (local_20 < local_28) {
                local_20 = local_28;
              }
              local_24 = local_24 + local_2c + 1;
              CObArray::SetAtGrow((CObArray *)(this + 0xd20),*(int *)(this + 0xd28),local_24);
            }
            local_28 = 0;
            local_2c = 0;
          }
          if ((*(byte *)(piVar1 + 9) & 1) == 0) {
            if (((piVar1[2] != 0) && (*(int *)(piVar1[0xb] + -0xc) != 0)) &&
               (iVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (piVar1 + 0xb),L'\t',0), 0 < iVar5)) {
              local_3c = local_3c + 10;
            }
            if ((*(int *)(this + 0xce0) < 1) || (local_3c <= *(int *)(this + 0xce0) + -2)) {
              iVar5 = 1;
            }
            else {
              iVar5 = 0;
            }
            piVar1[5] = iVar5;
            if (local_2c < local_3c) {
              local_2c = local_3c;
            }
          }
          else {
            iVar6 = 8;
          }
          local_28 = local_28 + iVar6;
          if (local_14 != 0) {
            CDC::SelectObject((CDC *)local_58,(CPen *)&DAT_10166bb4);
          }
          puVar3 = local_18;
        } while (local_18 != (undefined4 *)0x0);
        if (local_20 < local_28) {
          local_20 = local_28;
        }
      }
      local_24 = local_24 + local_2c;
    }
    pCVar2 = *(CObject **)(this + 0xce0);
    local_24 = local_24 + 2;
    iVar6 = local_20 + 2;
    if ((0 < (int)pCVar2) && ((int)pCVar2 < (int)local_24)) {
      local_24 = pCVar2;
    }
    pCVar2 = *(CObject **)(this + 0xce4);
    if ((0 < (int)pCVar2) && ((int)local_24 < (int)pCVar2)) {
      local_24 = pCVar2;
    }
    pCVar2 = local_24;
    CObArray::SetAtGrow((CObArray *)(this + 0xd20),*(int *)(this + 0xd28),local_24);
    CDC::SelectObject((CDC *)local_58,local_1c);
    local_8 = 0xffffffff;
    *(CObject **)param_1 = pCVar2;
    *(int *)(param_1 + 4) = iVar6;
    CClientDC::~CClientDC(local_58);
  }
  else {
    CMFCToolBar::CalcSize((CMFCToolBar *)this,param_1);
  }
  return param_1;
}

