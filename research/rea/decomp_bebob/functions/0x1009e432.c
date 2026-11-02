// rea decompile_all
// name: FUN_1009e432
// address: 0x1009e432
// body: available
// range: 0x1009e432-0x1009e8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009e4fb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall
FUN_1009e432(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
            int param_7,CMenu *param_8,CMenu *param_9,undefined4 param_10,int param_11)

{
  int cx;
  BOOL BVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  CGdiObject *pCVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int local_80;
  HBITMAP__ *local_7c;
  int local_78;
  int local_74;
  CDC local_70 [4];
  HDC__ *local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined **local_50;
  void *local_4c;
  int local_48;
  int local_44;
  void *local_40;
  int local_3c;
  int local_38;
  int local_34;
  CMenu *local_30;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CMenu *local_1c;
  uint local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  cx = param_5;
  uStack_4 = 0x7c;
  local_8 = 0x1009e43e;
  local_1c = param_8;
  local_30 = param_9;
  if ((param_5 == 0) || (local_40 = this, BVar1 = IsRectEmpty((RECT *)&param_1), BVar1 != 0)) {
LAB_1009e8d9:
    uVar8 = 1;
  }
  else {
    iVar10 = param_4 - param_2;
    local_28 = param_3 - param_1;
    local_18 = (uint)(param_11 == 0);
    local_54 = iVar10;
    if (local_30 != (CMenu *)0x0) {
      local_5c = *(int *)(local_30 + 4);
      if (((local_5c != 0) && (local_1c != (CMenu *)0x0)) && (*(int *)(local_1c + 4) != 0)) {
        uVar9 = param_3;
        if (local_18 != 0) {
          uVar9 = param_1 - cx;
        }
        CDC::DrawState(*(CDC **)((int)this + 4),uVar9,param_2,cx,iVar10 + cx,local_30,0,0);
        iVar10 = param_1;
        if (local_18 != 0) {
          iVar10 = param_1 - cx;
        }
        CDC::DrawState(*(CDC **)((int)this + 4),iVar10,param_4,local_28 + cx,cx,local_1c,0,0);
        goto LAB_1009e8d9;
      }
      if (local_5c != 0) goto LAB_1009e4fb;
    }
    if ((local_1c != (CMenu *)0x0) && (*(int *)(local_1c + 4) != 0)) {
LAB_1009e4fb:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    FUN_1001714b((undefined4 *)local_70);
    local_8 = 0;
    pHVar2 = (HDC)0x0;
    if (*(int *)((int)this + 4) != 0) {
      pHVar2 = *(HDC *)(*(int *)((int)this + 4) + 4);
    }
    pHVar2 = CreateCompatibleDC(pHVar2);
    iVar3 = CDC::Attach(local_70,pHVar2);
    if (iVar3 != 0) {
      local_4c = (void *)0x0;
      local_50 = CBitmap::vftable;
      local_34 = cx + iVar10;
      local_24 = local_28 + cx;
      local_8 = CONCAT31(local_8._1_3_,1);
      pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)((int)this + 4) + 4),local_24,local_34);
      iVar3 = CMenu::Attach((CMenu *)&local_50,(HMENU__ *)pHVar4);
      if (iVar3 != 0) {
        pCVar5 = CDC::SelectGdiObject(local_6c,local_4c);
        if (pCVar5 == (CGdiObject *)0x0) goto LAB_1009e4fb;
        local_80 = local_24;
        local_7c = (HBITMAP__ *)local_34;
        local_7c = CDrawingManager::CreateBitmap_32((CSize *)&local_80,&local_2c);
        if ((local_7c != (HBITMAP__ *)0x0) && (local_2c != (void *)0x0)) {
          SelectObject(local_6c,local_7c);
          iVar3 = param_1;
          if (local_18 != 0) {
            iVar3 = param_1 - cx;
          }
          if (*(int *)((int)this + 4) == 0) {
            pHVar2 = (HDC)0x0;
          }
          else {
            pHVar2 = *(HDC *)(*(int *)((int)this + 4) + 4);
          }
          BitBlt(local_6c,0,0,local_24,local_34,pHVar2,iVar3,param_2,0xcc0020);
          local_74 = (param_7 - param_6) / cx;
          if (0 < cx) {
            local_60 = -local_74;
            local_38 = local_24;
            local_48 = param_7;
            local_58 = param_7 - cx * local_74;
            local_20 = local_28;
            local_3c = iVar10 + 1;
            iVar3 = iVar10 - local_28;
            local_78 = cx - local_28;
            local_44 = cx * 2;
            local_5c = cx;
            do {
              iVar6 = local_38 + iVar3;
              local_14 = iVar10;
              for (; local_14 < iVar6; local_14 = local_14 + 1) {
                CDrawingManager::SetAlphaPixel
                          (local_2c,param_1,param_2,param_3,param_4,local_78 + local_20,local_14,
                           local_58,cx,param_10,local_18);
                iVar10 = local_54;
                this = local_40;
              }
              local_14 = local_44;
              if (local_44 < local_20) {
                do {
                  CDrawingManager::SetAlphaPixel
                            (local_2c,param_1,param_2,param_3,param_4,local_14,local_3c + -1,
                             local_48,cx,param_10,local_18);
                  local_14 = local_14 + 1;
                  iVar10 = local_54;
                  this = local_40;
                } while (local_14 < local_20);
              }
              local_14 = local_44;
              if (local_44 < local_3c) {
                do {
                  CDrawingManager::SetAlphaPixel
                            (local_2c,param_1,param_2,param_3,param_4,local_20,local_14,local_48,cx,
                             param_10,local_18);
                  local_14 = local_14 + 1;
                  iVar10 = local_54;
                  this = local_40;
                } while (local_14 < local_3c);
              }
              local_14 = local_28;
              if (local_28 < local_38) {
                do {
                  CDrawingManager::SetAlphaPixel
                            (local_2c,param_1,param_2,param_3,param_4,local_14,local_78 + local_20,
                             local_58,cx,param_10,local_18);
                  local_14 = local_14 + 1;
                  iVar10 = local_54;
                  this = local_40;
                } while (local_14 < local_38);
              }
              local_48 = local_48 + local_60;
              local_3c = local_3c + 1;
              local_20 = local_20 + 1;
              local_58 = local_58 + local_74;
              local_44 = local_44 + -1;
              local_38 = local_38 + -1;
              local_5c = local_5c + -1;
            } while (local_5c != 0);
          }
          iVar10 = param_1;
          if (local_18 != 0) {
            iVar10 = param_1 - cx;
          }
          BitBlt(*(HDC *)(*(int *)((int)this + 4) + 4),iVar10,param_2,local_24,local_34,local_6c,0,0
                 ,0xcc0020);
          if (local_30 != (CMenu *)0x0) {
            pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)((int)this + 4) + 4),cx + 1,local_34);
            CMenu::Attach(local_30,(HMENU__ *)pHVar4);
            CDC::SelectGdiObject(local_6c,*(void **)(local_30 + 4));
            pHVar2 = (HDC)0x0;
            if (*(int *)((int)this + 4) != 0) {
              pHVar2 = *(HDC *)(*(int *)((int)this + 4) + 4);
            }
            BitBlt(local_6c,0,0,cx,local_34,pHVar2,~-(uint)(local_18 != 0) & param_3,param_2,
                   0xcc0020);
          }
          if (local_1c != (CMenu *)0x0) {
            pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)((int)this + 4) + 4),local_24,cx + 1);
            CMenu::Attach(local_1c,(HMENU__ *)pHVar4);
            CDC::SelectGdiObject(local_6c,*(void **)(local_1c + 4));
            iVar10 = param_1;
            if (local_18 != 0) {
              iVar10 = param_1 - cx;
            }
            if (*(int *)((int)this + 4) == 0) {
              pHVar2 = (HDC)0x0;
            }
            else {
              pHVar2 = *(HDC *)(*(int *)((int)this + 4) + 4);
            }
            BitBlt(local_6c,0,0,local_24,cx,pHVar2,iVar10,param_4,0xcc0020);
          }
          pvVar7 = (void *)0x0;
          if (pCVar5 != (CGdiObject *)0x0) {
            pvVar7 = *(void **)(pCVar5 + 4);
          }
          CDC::SelectGdiObject(local_6c,pvVar7);
          DeleteObject(local_7c);
          local_8 = local_8 & 0xffffff00;
          local_50 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_50);
          local_8 = 0xffffffff;
          CDC::~CDC(local_70);
          goto LAB_1009e8d9;
        }
      }
      local_8 = local_8 & 0xffffff00;
      local_50 = CBitmap::vftable;
      CImageList::~CImageList((CImageList *)&local_50);
    }
    local_8 = 0xffffffff;
    CDC::~CDC(local_70);
    uVar8 = 0;
  }
  return uVar8;
}

