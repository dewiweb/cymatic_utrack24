// rea decompile_all
// name: CDrawingManager::FillGradient2
// address: 0x1009e0b1
// body: available
// range: 0x1009e0b1-0x1009e431 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009e1d3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::FillGradient2(class CRect,unsigned long,unsigned
   long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDrawingManager::FillGradient2
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,ulong param_6,
          ulong param_7,int param_8)

{
  double dVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  CGdiObject *pCVar5;
  long lVar6;
  int iVar7;
  CPen *pCVar8;
  void *pvVar9;
  void *this_00;
  undefined4 extraout_ECX;
  uint uVar10;
  int iVar11;
  undefined4 extraout_EDX;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined **local_84 [2];
  undefined **local_7c;
  CGdiObject *local_78;
  CDC local_74 [4];
  HDC__ *local_70;
  int local_64;
  undefined **local_60;
  void *local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulong local_48;
  int local_44;
  int local_40;
  undefined1 local_39;
  ushort local_38;
  ushort local_36;
  POINT local_34;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x1009e0c0;
  local_48 = param_6;
  if (param_6 == param_7) {
    CBrush::CBrush((CBrush *)&local_7c,param_6);
    FillRect(*(HDC *)(*(int *)(this + 4) + 4),(RECT *)&param_2,(HBRUSH)local_78);
    local_7c = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_7c);
    goto LAB_1009e42a;
  }
  uVar16 = param_6;
  if (param_8 == 0) {
LAB_1009e412:
    uVar18 = 0;
    uVar17 = param_7;
  }
  else if (param_8 == 0x5a) {
    uVar18 = 1;
    uVar17 = param_7;
  }
  else {
    uVar17 = param_6;
    if (param_8 == 0xb4) {
      uVar18 = 0;
      uVar16 = param_7;
    }
    else {
      if (param_8 != 0x10e) {
        if (param_8 != 0x168) {
          FUN_1001714b((undefined4 *)local_74);
          local_8 = 0;
          if (*(int *)(this + 4) == 0) {
            pHVar2 = (HDC)0x0;
          }
          else {
            pHVar2 = *(HDC *)(*(int *)(this + 4) + 4);
          }
          pHVar2 = CreateCompatibleDC(pHVar2);
          iVar3 = CDC::Attach(local_74,pHVar2);
          if (iVar3 != 0) {
            local_5c = (void *)0x0;
            local_60 = CBitmap::vftable;
            local_8 = CONCAT31(local_8._1_3_,1);
            pHVar4 = CreateCompatibleBitmap
                               (*(HDC *)(*(int *)(this + 4) + 4),param_4 - param_2,param_5 - param_3
                               );
            iVar3 = CMenu::Attach((CMenu *)&local_60,(HMENU__ *)pHVar4);
            if (iVar3 != 0) {
              local_78 = CDC::SelectGdiObject(local_70,local_5c);
              if (local_78 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_10009068();
              }
              pCVar5 = CDC::SelectStockObject(local_74,8);
              local_40 = param_5 - param_3;
              dVar1 = ((double)(param_8 + 0xb4) * 3.1415926) / 180.0;
              FUN_100fd030(this_00,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
              uVar15 = FUN_100f8660(extraout_ECX,extraout_EDX);
              iVar3 = (int)uVar15;
              iVar13 = param_4 - param_2;
              lVar6 = _labs(iVar3);
              iVar14 = 0;
              iVar13 = iVar13 + lVar6;
              if (iVar3 < 1) {
                local_50 = 0;
              }
              else {
                local_50 = -iVar3;
              }
              local_38 = (ushort)local_48 >> 8;
              local_36 = (ushort)param_7 >> 8;
              local_58 = local_48 >> 0x10;
              local_54 = param_7 >> 0x10;
              local_64 = -(local_48 & 0xff);
              uVar12 = param_7 & 0xff;
              local_40 = (local_48 & 0xff) << 6;
              local_4c = 0;
              local_48 = 0;
              local_44 = 0x40;
              do {
                uVar10 = (int)((uint)(byte)local_38 * local_44 + (uint)(byte)local_36 * local_4c) >>
                         6;
                local_39 = (undefined1)uVar10;
                CBrush::CBrush((CBrush *)local_84,
                               (((int)((local_58 & 0xff) * local_44 + (local_54 & 0xff) * local_4c)
                                 >> 6 & 0xffU) << 8 | uVar10 & 0xff) << 8 |
                               (int)(local_40 + local_48) >> 6 & 0xffU);
                iVar7 = (iVar14 >> 6) + local_50;
                iVar11 = (iVar14 + iVar13 >> 6) + local_50;
                local_8._0_1_ = 2;
                if (iVar7 == iVar11) {
                  local_8 = CONCAT31(local_8._1_3_,1);
                  local_84[0] = CBrush::vftable;
                  CImageList::~CImageList((CImageList *)local_84);
                }
                else {
                  local_34.y = 0;
                  local_28 = 0;
                  local_1c = iVar3 + iVar7;
                  local_20 = param_5 - param_3;
                  local_24 = (local_1c - iVar7) + iVar11;
                  local_34.x = iVar7;
                  local_2c = iVar11;
                  local_18 = local_20;
                  pCVar8 = CDC::SelectObject(local_74,(CPen *)local_84);
                  Polygon(local_70,&local_34,4);
                  CDC::SelectObject(local_74,pCVar8);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  local_84[0] = CBrush::vftable;
                  CImageList::~CImageList((CImageList *)local_84);
                }
                local_48 = local_48 + uVar12;
                local_40 = local_40 + local_64;
                local_4c = local_4c + 1;
                local_44 = local_44 + -1;
                iVar14 = iVar14 + iVar13;
              } while (0 < local_44);
              CDC::SelectObject(local_74,(CPen *)pCVar5);
              BitBlt(*(HDC *)(*(int *)(this + 4) + 4),param_2,param_3,param_4 - param_2,
                     param_5 - param_3,local_70,0,0,0xcc0020);
              pvVar9 = (void *)0x0;
              if (local_78 != (CGdiObject *)0x0) {
                pvVar9 = *(void **)(local_78 + 4);
              }
              CDC::SelectGdiObject(local_70,pvVar9);
            }
            local_60 = CBitmap::vftable;
            local_8 = local_8 & 0xffffff00;
            CImageList::~CImageList((CImageList *)&local_60);
          }
          local_8 = 0xffffffff;
          CDC::~CDC(local_74);
          goto LAB_1009e42a;
        }
        goto LAB_1009e412;
      }
      uVar18 = 1;
      uVar16 = param_7;
    }
  }
  FillGradient(this,param_2,param_3,param_4,param_5,uVar16,uVar17,uVar18,0);
LAB_1009e42a:
  FUN_100f90cf();
  return;
}

