// rea decompile_all
// name: CDrawingManager::HighlightRect
// address: 0x1009d2a4
// body: available
// range: 0x1009d2a4-0x1009d68c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009d3a4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CDrawingManager::HighlightRect(class CRect,int,unsigned long,int,unsigned
   long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDrawingManager::HighlightRect
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,int param_6,
          uint param_7,int param_8,uint param_9)

{
  byte bVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  CGdiObject *pCVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  void *pvVar12;
  int cx;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_stack_ffffff98;
  int local_4c;
  HBITMAP__ *local_48;
  CDC local_44 [4];
  HDC__ *local_40;
  int local_34;
  int local_30;
  uint local_2c;
  undefined **local_28;
  void *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x1009d2b0;
  if (((param_6 != 100) && (local_1c = param_5 - param_3, 0 < local_1c)) &&
     (cx = param_4 - param_2, 0 < cx)) {
    if (8 < DAT_10166c4c) {
      if ((param_9 == 0xffffffff) || (param_6 < 0x65)) {
        FUN_1001714b((undefined4 *)local_44);
        local_8 = 0;
        if (*(int *)(this + 4) == 0) {
          pHVar2 = (HDC)0x0;
        }
        else {
          pHVar2 = *(HDC *)(*(int *)(this + 4) + 4);
        }
        pHVar2 = CreateCompatibleDC(pHVar2);
        iVar3 = CDC::Attach(local_44,pHVar2);
        if (iVar3 != 0) {
          local_24 = (void *)0x0;
          local_28 = CBitmap::vftable;
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),cx,local_1c);
          iVar3 = CMenu::Attach((CMenu *)&local_28,(HMENU__ *)pHVar4);
          if (iVar3 != 0) {
            pCVar5 = CDC::SelectGdiObject(local_40,local_24);
            if (pCVar5 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            local_48 = (HBITMAP__ *)local_1c;
            local_4c = cx;
            local_48 = CreateBitmap_32((CSize *)&local_4c,local_14);
            if ((local_48 != (HBITMAP__ *)0x0) && (local_14[0] != (uint *)0x0)) {
              SelectObject(local_40,local_48);
              if (*(int *)(this + 4) == 0) {
                pHVar2 = (HDC)0x0;
              }
              else {
                pHVar2 = *(HDC *)(*(int *)(this + 4) + 4);
              }
              BitBlt(local_40,0,0,cx,local_1c,pHVar2,param_2,param_3,0xcc0020);
              if (param_7 != 0xffffffff) {
                param_7 = (param_7 >> 8 & 0xff | (param_7 & 0xff) << 8) << 8 |
                          param_7 >> 0x10 & 0xff;
              }
              iVar3 = local_1c * cx;
              if (0 < local_1c * cx) {
                do {
                  local_30 = iVar3;
                  uVar9 = *local_14[0];
                  if (param_8 < 1) {
                    if (uVar9 != param_7) goto LAB_1009d4b4;
                  }
                  else {
                    lVar6 = _labs((uVar9 & 0xff) - (param_7 & 0xff));
                    if (((param_8 <= lVar6) ||
                        (lVar6 = _labs((uVar9 >> 8 & 0xff) - (param_7 >> 8 & 0xff)),
                        param_8 <= lVar6)) ||
                       (lVar6 = _labs((uVar9 >> 0x10 & 0xff) - (param_7 >> 0x10 & 0xff)),
                       param_8 <= lVar6)) {
LAB_1009d4b4:
                      if (param_6 == -1) {
                        uVar7 = ((uint)DAT_10166abc._2_1_ + (uVar9 & 0xff) * 2) / 3;
                        local_18 = 0xff;
                        if (uVar7 < 0x100) {
                          local_18 = uVar7;
                        }
                        uVar8 = ((uint)DAT_10166abc._1_1_ + (uVar9 >> 8 & 0xff) * 2) / 3;
                        uVar7 = 0xff;
                        if (uVar8 < 0x100) {
                          uVar7 = uVar8;
                        }
                        uVar9 = ((uint)(byte)DAT_10166abc + (uVar9 >> 0x10 & 0xff) * 2) / 3;
                        if (0xff < uVar9) {
                          uVar9 = 0xff;
                        }
                        uVar9 = (uVar9 & 0xff | 0xffffff00) << 8 | uVar7 & 0xff;
                        bVar1 = (byte)local_18;
LAB_1009d608:
                        uVar9 = uVar9 << 8 | (uint)bVar1;
                      }
                      else {
                        if (param_9 != 0xffffffff) {
                          local_2c = uVar9 >> 8 & 0xff;
                          local_20 = uVar9 & 0xff;
                          local_18 = uVar9 >> 0x10 & 0xff;
                          iVar11 = (param_9 >> 0x10 & 0xff) - local_20;
                          iVar3 = MulDiv(iVar11,param_6,100);
                          if ((int)(iVar3 + local_20) < 0x100) {
                            local_34 = MulDiv(iVar11,param_6,100);
                            local_34 = local_34 + local_20;
                          }
                          else {
                            local_34 = 0xff;
                          }
                          iVar11 = (param_9 >> 8 & 0xff) - local_2c;
                          iVar3 = MulDiv(iVar11,param_6,100);
                          if ((int)(iVar3 + local_2c) < 0x100) {
                            iVar3 = MulDiv(iVar11,param_6,100);
                            local_20 = iVar3 + local_2c;
                          }
                          else {
                            local_20 = 0xff;
                          }
                          iVar11 = (param_9 & 0xff) - local_18;
                          iVar3 = MulDiv(iVar11,param_6,100);
                          if ((int)(iVar3 + local_18) < 0x100) {
                            iVar3 = MulDiv(iVar11,param_6,100);
                            uVar9 = iVar3 + local_18;
                          }
                          else {
                            uVar9 = 0xff;
                          }
                          uVar9 = (uVar9 & 0xff | 0xffffff00) << 8 | local_20 & 0xff;
                          bVar1 = (byte)local_34;
                          goto LAB_1009d608;
                        }
                        uVar13 = SUB84((double)param_6 * 0.01,0);
                        uVar14 = (undefined4)((ulonglong)((double)param_6 * 0.01) >> 0x20);
                        uVar10 = PixelAlpha(uVar9,(double)CONCAT44(uVar13,uVar14),
                                            (double)CONCAT44(uVar13,uVar14),
                                            (double)CONCAT44(in_stack_ffffff98,uVar14));
                        uVar9 = uVar10 | 0xff000000;
                      }
                      *local_14[0] = uVar9;
                    }
                  }
                  local_14[0] = local_14[0] + 1;
                  iVar3 = local_30 + -1;
                } while (local_30 + -1 != 0);
                local_30 = 0;
              }
              pvVar12 = (void *)0x0;
              BitBlt(*(HDC *)(*(int *)(this + 4) + 4),param_2,param_3,cx,local_1c,local_40,0,0,
                     0xcc0020);
              if (pCVar5 != (CGdiObject *)0x0) {
                pvVar12 = *(void **)(pCVar5 + 4);
              }
              CDC::SelectGdiObject(local_40,pvVar12);
              DeleteObject(local_48);
              local_8 = local_8 & 0xffffff00;
              local_28 = CBitmap::vftable;
              CImageList::~CImageList((CImageList *)&local_28);
              local_8 = 0xffffffff;
              CDC::~CDC(local_44);
              return 1;
            }
          }
          local_8 = local_8 & 0xffffff00;
          local_28 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_28);
        }
        local_8 = 0xffffffff;
        CDC::~CDC(local_44);
      }
      return 0;
    }
    CMFCToolBarImages::FillDitheredRect(*(CDC **)(this + 4),(CRect *)&param_2);
  }
  return 1;
}

