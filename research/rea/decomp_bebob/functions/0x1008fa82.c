// rea decompile_all
// name: CDockingPanesRow::CheckPanes
// address: 0x1008fa82
// body: available
// range: 0x1008fa82-0x1008fe33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008fbd3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDockingPanesRow::CheckPanes(class CRect &,class CPane *,bool,class
   CPoint,int,void * &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockingPanesRow::CheckPanes
          (CDockingPanesRow *this,RECT *param_1,CObject *param_2,bool param_3,long param_5,
          long param_6,int param_7,void **param_8)

{
  CPane *pCVar1;
  __POSITION *p_Var2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  __POSITION *p_Var7;
  BOOL BVar8;
  long lVar9;
  undefined4 *puVar10;
  CObList *this_00;
  __POSITION *p_Var11;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_7c;
  tagRECT local_68;
  RECT local_58;
  tagRECT local_48;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x30) < 2) || (iVar6 = (**(code **)(*(int *)this + 0x14))(), iVar6 < 2))
  goto LAB_1008fe20;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_7c = 0;
  p_Var7 = CObList::Find((CObList *)(this + 0x24),param_2,(__POSITION *)0x0);
  p_Var2 = *(__POSITION **)(this + 0x28);
  if (*(__POSITION **)(this + 0x28) != (__POSITION *)0x0) {
    do {
      p_Var11 = p_Var2;
      if (p_Var11 == (__POSITION *)0x0) goto LAB_1008fbd3;
      pCVar1 = *(CPane **)(p_Var11 + 8);
      p_Var2 = *(__POSITION **)p_Var11;
      iVar6 = (**(code **)(*(int *)pCVar1 + 0x178))();
      if (((iVar6 != 0) || (*(int *)(this + 4) != 0)) && (pCVar1 != (CPane *)param_2)) {
        ::GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_18);
        local_7c = IntersectRect(&local_28,&local_18,param_1);
        if (local_7c != 0) goto LAB_1008fb67;
      }
    } while (p_Var2 != (__POSITION *)0x0);
    if (local_7c != 0) {
LAB_1008fb67:
      CPane::GetVirtualRect(pCVar1,(CRect *)&local_38);
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      BVar8 = IntersectRect(&local_68,&local_38,param_1);
      if ((BVar8 != 0) && (param_7 != 0)) {
        bVar5 = CPane::IsLeftOf((CPane *)param_2,local_38.left,local_38.top,local_38.right,
                                local_38.bottom,1);
        if (param_3 == false) {
          if (!bVar5) goto LAB_1008fbdc;
        }
        else if (bVar5) {
LAB_1008fbdc:
          local_90 = local_18.left;
          local_8c = local_18.top;
          local_88 = local_18.right;
          local_84 = local_18.bottom;
          if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
            if (param_3 == false) {
              local_8c = param_1->bottom;
              local_84 = (local_18.bottom - local_18.top) + local_8c;
            }
            else {
              local_84 = param_1->top;
              local_8c = (local_18.top - local_18.bottom) + local_84;
            }
          }
          else if (param_3 == false) {
            local_90 = param_1->right;
            local_88 = (local_18.right - local_18.left) + local_90;
          }
          else {
            local_88 = param_1->left;
            local_90 = (local_18.left - local_18.right) + local_88;
          }
          MovePane(this,pCVar1,local_90,local_8c,local_88,local_84,param_8);
          this_00 = (CObList *)(this + 0x24);
          CObList::RemoveAt(this_00,p_Var11);
          if (param_3 == false) {
            CObList::InsertAfter(this_00,p_Var7,(CObject *)pCVar1);
          }
          else {
            CObList::InsertBefore(this_00,p_Var7,(CObject *)pCVar1);
          }
          FUN_1008e1b4(this,(CObject *)pCVar1,param_3 == false,param_8);
          local_48.left = 0;
          local_48.top = 0;
          local_48.right = 0;
          local_48.bottom = 0;
          local_58.left = 0;
          local_58.top = 0;
          local_58.right = 0;
          local_58.bottom = 0;
          if (param_3 == false) {
            if (p_Var7 == (__POSITION *)0x0) goto LAB_1008fbd3;
            puVar4 = *(undefined4 **)(p_Var7 + 4);
          }
          else {
            if (p_Var7 == (__POSITION *)0x0) {
LAB_1008fbd3:
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            puVar4 = *(undefined4 **)p_Var7;
          }
          while (puVar4 != (undefined4 *)0x0) {
            if (param_3 == false) {
              if (puVar4 == (undefined4 *)0x0) goto LAB_1008fbd3;
              puVar10 = (undefined4 *)puVar4[1];
            }
            else {
              if (puVar4 == (undefined4 *)0x0) goto LAB_1008fbd3;
              puVar10 = (undefined4 *)*puVar4;
            }
            pCVar1 = (CPane *)puVar4[2];
            iVar6 = (**(code **)(*(int *)pCVar1 + 0x178))();
            puVar4 = puVar10;
            if ((iVar6 != 0) || (*(int *)(this + 4) != 0)) {
              ::GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_48);
              CPane::GetVirtualRect(pCVar1,(CRect *)&local_58);
              BVar8 = EqualRect(&local_48,&local_58);
              if (BVar8 == 0) {
                uVar3 = *(uint *)(this + 0x40);
                if (((uVar3 & 0x2000) == 0) && ((uVar3 & 0x8000) == 0)) {
                  iVar6 = local_84 - local_8c;
                }
                else {
                  iVar6 = local_88 - local_90;
                }
                lVar9 = param_5;
                if (((uVar3 & 0x2000) == 0) && ((uVar3 & 0x8000) == 0)) {
                  lVar9 = param_6;
                }
                lVar9 = _labs(lVar9);
                MovePane(this,pCVar1,iVar6 - lVar9,param_3 == false,param_8);
              }
            }
          }
          goto LAB_1008fe20;
        }
      }
      if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
        iVar6 = local_28.bottom - local_28.top;
      }
      else {
        iVar6 = local_28.right - local_28.left;
      }
      MovePane(this,pCVar1,iVar6,param_3,param_8);
      FUN_1008e1b4(this,(CObject *)pCVar1,param_3,param_8);
    }
  }
  FUN_1008f4b8(this,(undefined4 *)p_Var7,param_5,param_6,param_3,(CPane *)param_2,param_8);
LAB_1008fe20:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

