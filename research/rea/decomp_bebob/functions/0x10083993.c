// rea decompile_all
// name: CMFCToolBarImages::Draw
// address: 0x10083993
// body: available
// range: 0x10083993-0x100841cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::Draw(class CDC
   *,int,int,int,int,int,int,int,int,unsigned char)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarImages::Draw
          (CMFCToolBarImages *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,uchar param_10)

{
  RECT *lprc;
  CMFCToolBarImages CVar1;
  CMFCToolBarImages CVar2;
  CMFCToolBarImages CVar3;
  int3 iVar4;
  BOOL BVar5;
  CMFCToolBarImages *pCVar6;
  HBITMAP pHVar7;
  HDC pHVar8;
  DWORD DVar9;
  void *pvVar10;
  int iVar11;
  CDC *pCVar12;
  CMFCVisualManager *pCVar13;
  undefined4 uVar14;
  HDC__ *pHVar15;
  int iVar16;
  CPen *pCVar17;
  CMFCToolBarImages *this_00;
  int iVar18;
  int iVar19;
  _BLENDFUNCTION _Var20;
  int iVar21;
  undefined **local_c4;
  HBRUSH local_c0;
  int local_bc;
  HDC__ *local_b8;
  int local_b4;
  int local_b0;
  undefined **local_ac;
  void *local_a8;
  CGdiObject *local_a4;
  HGDIOBJ local_a0;
  int local_9c;
  CMFCToolBarImages *local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  LONG local_84;
  int local_80;
  CPen *local_7c;
  CMFCToolBarImages *local_78;
  CPen *local_74;
  _BLENDFUNCTION local_70;
  DWORD local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  HGDIOBJ local_5c;
  int local_58;
  int local_54;
  BITMAPINFO local_50;
  RECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 200;
  local_8 = 0x100839a2;
  local_98 = (CMFCToolBarImages *)param_1;
  local_8c = param_3;
  local_9c = param_2;
  if (((param_4 < 0) || (*(int *)(this + 4) <= param_4)) || ((param_8 != 0 && (DAT_10166c4c < 9))))
  goto LAB_100841c6;
  local_b4 = *(int *)(this + 0x60) + param_2;
  local_b8 = (HDC__ *)param_3;
  local_b0 = param_3 + *(int *)(this + 100);
  local_bc = param_2;
  *(int *)(this + 0x68) = param_2;
  *(int *)(this + 0x6c) = param_3;
  *(int *)(this + 0x70) = local_b4;
  *(int *)(this + 0x74) = local_b0;
  if (*(int *)(this + 0x1c) != 0) {
    param_5 = 0;
    param_7 = 0;
  }
  local_a0 = (HGDIOBJ)0x0;
  if ((((param_9 == 0) || (param_6 != 0)) && (*(int *)(this + 0x28) != 0)) &&
     (*(int *)(this + 8) < 0x20)) {
    local_a0 = SelectObject(DAT_10168924,*(HGDIOBJ *)(this + 0x88));
  }
  iVar16 = *(int *)(this + 0x1c);
  if ((*(int *)(this + 8) == 0x20) && (iVar16 != 0)) {
    local_60 = (uint *)0x1;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  else {
    local_60 = (uint *)0x0;
  }
  if ((*(int *)(this + 8) == 0x20) || (DAT_1016891c != 0)) {
    local_7c = (CPen *)0xffffffff;
  }
  else {
    local_7c = *(CPen **)(this + 0xa4);
  }
  local_88 = (uint)(local_7c != (CPen *)0xffffffff);
  iVar21 = *(int *)(this + 0x1c);
  if ((iVar21 != 0) || (local_78 = local_98, local_88 != 0)) {
    local_78 = this + 0x40;
  }
  if ((iVar21 != 0) || (local_68 = local_9c, local_88 != 0)) {
    local_68 = 0;
  }
  if ((iVar21 == 0) && (local_88 == 0)) {
    local_64 = local_8c;
  }
  else {
    local_64 = 0;
  }
  lprc = (RECT *)(this + 0x78);
  local_84 = lprc->left;
  local_80 = *(int *)(this + 0x7c);
  local_74 = local_7c;
  BVar5 = IsRectEmpty(lprc);
  if (BVar5 == 0) {
    local_58 = *(int *)(this + 0x80) - lprc->left;
  }
  else {
    local_58 = *(int *)(this + 0x50);
  }
  BVar5 = IsRectEmpty(lprc);
  this_00 = local_78;
  if (BVar5 == 0) {
    local_54 = *(int *)(this + 0x84) - *(int *)(this + 0x7c);
  }
  else {
    local_54 = *(int *)(this + 0x54);
  }
  if ((*(int *)(this + 0x1c) != 0) || (local_88 != 0)) {
    local_24.right = *(LONG *)(this + 0x50);
    local_24.bottom = *(LONG *)(this + 0x54);
    local_24.left = 0;
    local_24.top = 0;
    if ((local_88 == 0) || (local_7c == DAT_10166ab4)) {
      FillRect(*(HDC *)(local_78 + 4),&local_24,DAT_10166b34);
    }
    else {
      CBrush::CBrush((CBrush *)&local_c4,(ulong)local_7c);
      this_00 = local_78;
      FillRect(*(HDC *)(local_78 + 4),&local_24,local_c0);
      local_c4 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_c4);
    }
    if ((param_6 != 0) && (DAT_10166c4c == 0x10)) {
      local_74 = (CPen *)GetPixel(*(HDC *)(this_00 + 4),local_24.left,local_24.top);
    }
  }
  local_5c = (HGDIOBJ)0x0;
  if ((param_6 != 0) && (0x17 < *(int *)(this + 8))) {
    param_6 = 0;
    local_5c = (HGDIOBJ)0x1;
  }
  if ((param_8 != 0) && (*(int *)(this + 8) == 0x20)) {
    param_8 = 0;
  }
  if ((param_5 == 0) && (param_6 == 0)) {
    if (param_8 == 0) {
      if ((*(int *)(this + 8) == 0x20) || (DAT_1016891c != 0)) {
        if (local_5c != (HGDIOBJ)0x0) {
          param_10 = DAT_10161464;
        }
        iVar4 = (uint3)param_10 << 0x10;
        local_70.AlphaFormat = '\x01';
        local_70.BlendOp = (char)iVar4;
        local_70.BlendFlags = (char)((uint3)iVar4 >> 8);
        local_70.SourceConstantAlpha = (char)((uint3)iVar4 >> 0x10);
        if ((param_9 != 0) && (*(int *)(this + 0x28) != 0)) {
          local_70._0_3_ = (uint3)DAT_10161465 << 0x10;
          local_70.AlphaFormat = '\x01';
        }
        pCVar6 = this + 0x60;
        if (local_60 == (uint *)0x0) {
          pCVar6 = this + 0x50;
        }
        local_94 = *(int *)pCVar6;
        local_90 = *(int *)(pCVar6 + 4);
        if (*(int *)(this + 8) == 0x20) {
          iVar11 = *(int *)(this + 0x50) * param_4 + local_84;
          iVar21 = local_80;
          iVar19 = local_58;
          iVar18 = local_54;
          _Var20 = local_70;
          pCVar12 = CDC::FromHandle(DAT_10168924);
          local_6c = CDC::AlphaBlend((CDC *)this_00,local_68,local_64,local_94,local_90,pCVar12,
                                     iVar11,iVar21,iVar19,iVar18,_Var20);
        }
        else {
          local_50.bmiHeader.biHeight = local_54;
          local_6c = local_54 * local_58;
          local_50.bmiHeader.biPlanes = 1;
          local_50.bmiHeader.biSize = 0x28;
          local_50.bmiHeader.biWidth = local_58;
          local_50.bmiHeader.biBitCount = 0x20;
          local_50.bmiHeader.biCompression = 0;
          local_50.bmiHeader.biXPelsPerMeter = 0;
          local_50.bmiHeader.biYPelsPerMeter = 0;
          local_50.bmiHeader.biClrUsed = 0;
          local_50.bmiHeader.biClrImportant = 0;
          local_60 = (uint *)0x0;
          local_50.bmiHeader.biSizeImage = local_6c;
          pHVar7 = CreateDIBSection((HDC)0x0,&local_50,0,&local_60,(HANDLE)0x0,0);
          if (pHVar7 == (HBITMAP)0x0) goto LAB_100841c6;
          local_a8 = (void *)0x0;
          local_ac = CBitmap::vftable;
          local_8 = 0;
          CMenu::Attach((CMenu *)&local_ac,(HMENU__ *)pHVar7);
          FUN_1001714b(&local_bc);
          local_8._0_1_ = 1;
          pHVar8 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach((CDC *)&local_bc,pHVar8);
          local_a4 = CDC::SelectGdiObject(local_b8,local_a8);
          BitBlt(local_b8,0,0,local_58,local_54,DAT_10168924,
                 *(int *)(this + 0x50) * param_4 + local_84,local_80,0xcc0020);
          if (*(int *)(this + 0xa4) == -1) {
            DVar9 = local_6c;
            if (0 < (int)local_6c) {
              do {
                *local_60 = *local_60 | 0xff000000;
                local_60 = local_60 + 1;
                DVar9 = DVar9 - 1;
              } while (DVar9 != 0);
            }
          }
          else {
            CVar1 = this[0xa4];
            CVar2 = this[0xa5];
            CVar3 = this[0xa6];
            if (0 < (int)local_6c) {
              do {
                if (*local_60 == (uint)CONCAT21(CONCAT11(CVar1,CVar2),CVar3)) {
                  *local_60 = 0;
                }
                else {
                  *local_60 = *local_60 | 0xff000000;
                }
                local_60 = local_60 + 1;
                local_6c = local_6c - 1;
              } while (local_6c != 0);
            }
          }
          local_6c = AlphaBlend(*(HDC *)(this_00 + 4),local_68,local_64,local_94,local_90,local_b8,0
                                ,0,local_58,local_54,local_70);
          if (local_a4 == (CGdiObject *)0x0) {
            pvVar10 = (void *)0x0;
          }
          else {
            pvVar10 = *(void **)(local_a4 + 4);
          }
          CDC::SelectGdiObject(local_b8,pvVar10);
          local_8 = (uint)local_8._1_3_ << 8;
          CDC::~CDC((CDC *)&local_bc);
          local_8 = 0xffffffff;
          local_ac = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_ac);
        }
        if (local_6c != 0) goto LAB_10084131;
      }
      BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58,local_54,DAT_10168924,
             *(int *)(this + 0x50) * param_4 + local_84,local_80,0xcc0020);
      if (local_5c != (HGDIOBJ)0x0) {
        CDrawingManager::CDrawingManager((CDrawingManager *)&local_94,(CDC *)this_00);
        local_8 = 2;
        pCVar17 = local_74;
        if (local_74 == (CPen *)0xffffffff) {
          pCVar17 = DAT_10166ab4;
        }
        pCVar13 = CMFCVisualManager::GetInstance();
        iVar11 = local_64;
        iVar18 = local_68;
        iVar21 = local_58 + 2 + local_68;
        iVar19 = local_54 + 2 + local_64;
        uVar14 = (**(code **)(*(int *)pCVar13 + 0xb8))();
        CDrawingManager::GrayRect
                  ((CDrawingManager *)&local_94,iVar18,iVar11,iVar21,iVar19,0xffffffff,pCVar17,
                   uVar14);
        local_8 = 0xffffffff;
        FUN_1009c588(&local_94);
        this_00 = local_78;
      }
    }
    else {
LAB_10083f60:
      if (*(HGDIOBJ *)(this + 0x90) == (HGDIOBJ)0x0) goto LAB_10083fbc;
      local_74 = SelectObject(DAT_10168924,*(HGDIOBJ *)(this + 0x90));
      BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58,local_54,DAT_10168924,
             *(int *)(this + 0x50) * param_4 + local_84,local_80,0xcc0020);
      SelectObject(DAT_10168924,local_74);
    }
  }
  else {
    if (param_8 != 0) goto LAB_10083f60;
LAB_10083fbc:
    if (((param_6 != 0) || (param_7 != 0)) || (param_8 != 0)) {
      CreateMask(this,param_4,1,0);
      if (param_8 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)(this + 0xac);
      }
      (**(code **)(*(int *)this_00 + 0x30))(uVar14);
      (**(code **)(*(int *)this_00 + 0x2c))(0xffffff);
      if ((param_6 != 0) &&
         (pCVar13 = CMFCVisualManager::GetInstance(), *(int *)(pCVar13 + 0x74) != 0)) {
        if (DAT_10166aa8 == (HGDIOBJ)0x0) {
          local_5c = (HGDIOBJ)0x0;
        }
        else {
          local_5c = SelectObject(*(HDC *)(this_00 + 4),DAT_10166aa8);
        }
        if (local_5c != (HGDIOBJ)0x0) {
          BitBlt(*(HDC *)(this_00 + 4),local_68 + 1,local_64 + 1,local_58 + 2,local_54 + 2,
                 DAT_10168928,0,0,0xb8074a);
          SelectObject(*(HDC *)(this_00 + 4),local_5c);
        }
      }
      if (DAT_10166aac == (HGDIOBJ)0x0) {
        local_5c = (HGDIOBJ)0x0;
      }
      else {
        local_5c = SelectObject(*(HDC *)(this_00 + 4),DAT_10166aac);
      }
      if (local_5c != (HGDIOBJ)0x0) {
        BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58 + 2,local_54 + 2,DAT_10168928,0,0,
               0xb8074a);
        SelectObject(*(HDC *)(this_00 + 4),local_5c);
      }
    }
    if (((param_5 != 0) || (param_7 != 0)) &&
       (local_74 = CDC::SelectObject((CDC *)this_00,(CPen *)&DAT_10166b40), local_74 != (CPen *)0x0)
       ) {
      CreateMask(this,param_4,(uint)(param_7 == 0),param_6);
      (**(code **)(*(int *)this_00 + 0x30))(0);
      (**(code **)(*(int *)this_00 + 0x2c))(0xffffff);
      BitBlt(*(HDC *)(this_00 + 4),local_68,local_64,local_58,local_54,DAT_10168928,0,0,0xe20746);
      CDC::SelectObject((CDC *)this_00,local_74);
    }
  }
LAB_10084131:
  pCVar17 = local_7c;
  if (*(int *)(this + 0x1c) == 0) {
    if (local_88 != 0) {
      if (local_98 == (CMFCToolBarImages *)0x0) {
        pHVar15 = (HDC__ *)0x0;
      }
      else {
        pHVar15 = *(HDC__ **)(local_98 + 4);
      }
      iVar21 = -1;
      iVar19 = -1;
      goto LAB_10084181;
    }
  }
  else {
    if (local_88 == 0) {
      pCVar17 = DAT_10166ab4;
    }
    if (local_98 == (CMFCToolBarImages *)0x0) {
      pHVar15 = (HDC__ *)0x0;
    }
    else {
      pHVar15 = *(HDC__ **)(local_98 + 4);
    }
    iVar21 = *(int *)(this + 100);
    iVar19 = *(int *)(this + 0x60);
LAB_10084181:
    TransparentBlt(pHVar15,local_9c,local_8c,local_58,local_54,(CDC *)this_00,0,0,(ulong)pCVar17,
                   iVar19,iVar21);
  }
  if (local_a0 != (HGDIOBJ)0x0) {
    SelectObject(DAT_10168924,local_a0);
  }
  *(int *)(this + 0x1c) = iVar16;
LAB_100841c6:
  iVar16 = FUN_100f90cf();
  return iVar16;
}

