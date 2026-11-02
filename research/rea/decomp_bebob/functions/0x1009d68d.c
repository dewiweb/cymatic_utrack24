// rea decompile_all
// name: CDrawingManager::MirrorRect
// address: 0x1009d68d
// body: available
// range: 0x1009d68d-0x1009d944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009d791 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::MirrorRect(class CRect,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDrawingManager::MirrorRect
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  BOOL BVar2;
  HDC pHVar3;
  int iVar4;
  HBITMAP pHVar5;
  CGdiObject *pCVar6;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  int cx;
  int cy;
  int local_78;
  HBITMAP__ *local_74;
  CDC local_70 [4];
  HDC__ *local_6c;
  int local_60;
  CDrawingManager *local_5c;
  undefined **local_58;
  void *local_54;
  int local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  tagRECT local_34;
  RECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x1009d699;
  local_5c = this;
  if ((param_5 != param_3 && -1 < param_5 - param_3) &&
     (param_4 != param_2 && -1 < param_4 - param_2)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    (**(code **)(**(int **)(this + 4) + 0x50))(&local_24);
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    UnionRect(&local_34,&local_24,(RECT *)&param_2);
    BVar2 = EqualRect(&local_34,&local_24);
    if (BVar2 != 0) {
      cx = param_4 - param_2;
      cy = param_5 - param_3;
      FUN_1001714b((undefined4 *)local_70);
      local_8 = 0;
      if (*(int *)(local_5c + 4) == 0) {
        pHVar3 = (HDC)0x0;
      }
      else {
        pHVar3 = *(HDC *)(*(int *)(local_5c + 4) + 4);
      }
      pHVar3 = CreateCompatibleDC(pHVar3);
      iVar4 = CDC::Attach(local_70,pHVar3);
      if (iVar4 != 0) {
        local_54 = (void *)0x0;
        local_58 = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar5 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_5c + 4) + 4),cx,cy);
        iVar4 = CMenu::Attach((CMenu *)&local_58,(HMENU__ *)pHVar5);
        if (iVar4 != 0) {
          pCVar6 = CDC::SelectGdiObject(local_6c,local_54);
          if (pCVar6 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_78 = cx;
          local_74 = (HBITMAP__ *)cy;
          local_74 = CreateBitmap_32((CSize *)&local_78,&local_4c);
          if ((local_74 != (HBITMAP__ *)0x0) && (local_4c != (int *)0x0)) {
            SelectObject(local_6c,local_74);
            if (*(int *)(local_5c + 4) == 0) {
              pHVar3 = (HDC)0x0;
            }
            else {
              pHVar3 = *(HDC *)(*(int *)(local_5c + 4) + 4);
            }
            BitBlt(local_6c,0,0,cx,cy,pHVar3,param_2,param_3,0xcc0020);
            if (param_6 == 0) {
              if (-1 < cy / 2) {
                local_3c = local_4c;
                iVar4 = (cy + -1) * cx;
                local_40 = -cx;
                local_44 = cy / 2 + 1;
                do {
                  local_38 = 0;
                  piVar7 = local_3c;
                  if (0 < cx) {
                    do {
                      local_48 = *piVar7;
                      iVar8 = local_38 + iVar4;
                      local_38 = local_38 + 1;
                      *piVar7 = local_4c[iVar8];
                      local_4c[iVar8] = local_48;
                      piVar7 = piVar7 + 1;
                    } while (local_38 < cx);
                  }
                  iVar4 = iVar4 + local_40;
                  local_3c = local_3c + cx;
                  local_44 = local_44 + -1;
                } while (local_44 != 0);
              }
            }
            else if (-1 < cy) {
              local_38 = cx / 2;
              piVar7 = (int *)(cy * cx);
              local_40 = -cx;
              local_44 = cy + 1;
              local_3c = piVar7;
              do {
                local_50 = 0;
                if (-1 < local_38) {
                  local_60 = cx + -1;
                  do {
                    local_48 = local_50 + (int)local_3c;
                    if ((local_48 < (int)piVar7) && ((int)local_3c + local_60 < (int)piVar7)) {
                      piVar1 = local_4c + local_48;
                      local_48 = *piVar1;
                      *piVar1 = local_4c[(int)local_3c + local_60];
                      local_4c[(int)local_3c + local_60] = local_48;
                    }
                    local_50 = local_50 + 1;
                    local_60 = local_60 + -1;
                  } while (local_50 <= local_38);
                }
                local_3c = (int *)((int)local_3c + local_40);
                local_44 = local_44 + -1;
              } while (local_44 != 0);
              local_44 = 0;
            }
            BitBlt(*(HDC *)(*(int *)(local_5c + 4) + 4),param_2,param_3,cx,cy,local_6c,0,0,0xcc0020)
            ;
            if (pCVar6 == (CGdiObject *)0x0) {
              pvVar9 = (void *)0x0;
            }
            else {
              pvVar9 = *(void **)(pCVar6 + 4);
            }
            CDC::SelectGdiObject(local_6c,pvVar9);
            DeleteObject(local_74);
          }
        }
        local_8 = local_8 & 0xffffff00;
        local_58 = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_58);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_70);
    }
  }
  FUN_100f90cf();
  return;
}

