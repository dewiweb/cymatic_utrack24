// rea decompile_all
// name: CDrawingManager::GrayRect
// address: 0x1009d945
// body: available
// range: 0x1009d945-0x1009dc21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009da29 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CDrawingManager::GrayRect(class CRect,int,unsigned long,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDrawingManager::GrayRect
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,int param_6,
          uint param_7,uint param_8)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  int iVar8;
  int cy;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_stack_ffffff8c;
  double local_64;
  double local_5c;
  int local_54;
  CGdiObject *local_50;
  undefined8 local_4c;
  CDrawingManager *local_44;
  int local_40;
  HBITMAP__ *local_3c;
  CDC local_38 [4];
  HDC__ *local_34;
  int local_28;
  uint local_24;
  int local_20;
  undefined **local_1c;
  void *local_18;
  uint *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x1009d951;
  cy = param_5 - param_3;
  if ((0 < cy) && (iVar8 = param_4 - param_2, 0 < iVar8)) {
    local_54 = cy;
    local_44 = this;
    local_20 = iVar8;
    if (8 < DAT_10166c4c) {
      FUN_1001714b((undefined4 *)local_38);
      local_8 = 0;
      pHVar1 = (HDC)0x0;
      if (*(int *)(this + 4) != 0) {
        pHVar1 = *(HDC *)(*(int *)(this + 4) + 4);
      }
      pHVar1 = CreateCompatibleDC(pHVar1);
      iVar2 = CDC::Attach(local_38,pHVar1);
      if (iVar2 != 0) {
        local_18 = (void *)0x0;
        local_1c = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar3 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),iVar8,cy);
        iVar2 = CMenu::Attach((CMenu *)&local_1c,(HMENU__ *)pHVar3);
        if (iVar2 != 0) {
          local_50 = CDC::SelectGdiObject(local_34,local_18);
          if (local_50 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_40 = iVar8;
          local_3c = (HBITMAP__ *)cy;
          local_3c = CreateBitmap_32((CSize *)&local_40,local_14);
          if ((local_3c != (HBITMAP__ *)0x0) && (local_14[0] != (uint *)0x0)) {
            SelectObject(local_34,local_3c);
            pHVar1 = (HDC)0x0;
            if (*(int *)(this + 4) != 0) {
              pHVar1 = *(HDC *)(*(int *)(this + 4) + 4);
            }
            BitBlt(local_34,0,0,iVar8,cy,pHVar1,param_2,param_3,0xcc0020);
            if (param_7 != 0xffffffff) {
              param_7 = (param_7 >> 8 & 0xff | (param_7 & 0xff) << 8) << 8 | param_7 >> 0x10 & 0xff;
            }
            if (param_8 == 0xffffffff) {
              param_8 = DAT_10166abc;
            }
            iVar8 = cy * local_20;
            if (0 < cy * local_20) {
              do {
                local_28 = iVar8;
                if (*local_14[0] != param_7) {
                  FUN_1009caa5(*local_14[0],&local_64,(double *)&local_4c,&local_5c);
                  uVar4 = FUN_1009c879(local_64,local_5c,0.0);
                  if (param_6 == -1) {
                    uVar5 = (int)((param_8 >> 0x10 & 0xff) - (uVar4 & 0xff)) / 2 + (uVar4 & 0xff);
                    local_4c._4_4_ = 0xff;
                    if ((int)uVar5 < 0x100) {
                      local_4c._4_4_ = uVar5;
                    }
                    uVar5 = uVar4 >> 8 & 0xff;
                    uVar5 = (int)((param_8 >> 8 & 0xff) - uVar5) / 2 + uVar5;
                    local_24 = 0xff;
                    if ((int)uVar5 < 0x100) {
                      local_24 = uVar5;
                    }
                    uVar4 = uVar4 >> 0x10 & 0xff;
                    uVar4 = (int)((param_8 & 0xff) - uVar4) / 2 + uVar4;
                    if (0xff < (int)uVar4) {
                      uVar4 = 0xff;
                    }
                    uVar4 = ((uVar4 & 0xff | 0xffffff00) << 8 | local_24 & 0xff) << 8 |
                            local_4c._4_4_ & 0xff;
                    cy = local_54;
                  }
                  else {
                    uVar9 = SUB84((double)param_6 * 0.01,0);
                    uVar10 = (undefined4)((ulonglong)((double)param_6 * 0.01) >> 0x20);
                    uVar6 = PixelAlpha(uVar4,(double)CONCAT44(uVar9,uVar10),
                                       (double)CONCAT44(uVar9,uVar10),
                                       (double)CONCAT44(in_stack_ffffff8c,uVar10));
                    uVar4 = uVar6 | 0xff000000;
                  }
                  *local_14[0] = uVar4;
                }
                local_14[0] = local_14[0] + 1;
                iVar8 = local_28 + -1;
              } while (local_28 + -1 != 0);
              local_28 = 0;
              this = local_44;
            }
            BitBlt(*(HDC *)(*(int *)(this + 4) + 4),param_2,param_3,local_20,cy,local_34,0,0,
                   0xcc0020);
            pvVar7 = (void *)0x0;
            if (local_50 != (CGdiObject *)0x0) {
              pvVar7 = *(void **)(local_50 + 4);
            }
            CDC::SelectGdiObject(local_34,pvVar7);
            DeleteObject(local_3c);
            local_8 = local_8 & 0xffffff00;
            local_1c = CBitmap::vftable;
            CImageList::~CImageList((CImageList *)&local_1c);
            local_8 = 0xffffffff;
            CDC::~CDC(local_38);
            return 1;
          }
        }
        local_8 = local_8 & 0xffffff00;
        local_1c = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_1c);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_38);
      return 0;
    }
    CMFCToolBarImages::FillDitheredRect(*(CDC **)(this + 4),(CRect *)&param_2);
  }
  return 1;
}

