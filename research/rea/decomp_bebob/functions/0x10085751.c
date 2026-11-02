// rea decompile_all
// name: LoadStr
// address: 0x10085751
// body: available
// range: 0x10085751-0x10085adc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CMFCToolBarImages::LoadStr(char const *,struct HINSTANCE__ *,int)
    public: int __thiscall CMFCToolBarImages::LoadStr(wchar_t const *,struct HINSTANCE__ *,int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall LoadStr(void *this,HBITMAP__ *param_1,HINSTANCE param_2,int param_3)

{
  int iVar1;
  __POSITION *p_Var2;
  AFX_MODULE_STATE *pAVar3;
  UINT fuLoad;
  HDC pHVar4;
  COLORREF color;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  HWND__ *pHVar8;
  undefined1 local_8c [18];
  ushort local_7a;
  undefined1 local_74 [4];
  int local_70;
  int local_6c;
  short local_62;
  CDC local_5c [4];
  HDC local_58;
  CDC local_4c [4];
  HDC local_48;
  undefined **local_3c;
  undefined4 local_38;
  HGDIOBJ local_34;
  COLORREF local_30;
  HBITMAP local_2c;
  HGDIOBJ local_28;
  int local_24;
  int local_20;
  HWND__ *local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x1008575d;
  uVar7 = 0;
  if ((*(int *)((int)this + 0x24) == 0) && (param_1 != (HBITMAP__ *)0x0)) {
    pHVar8 = (HWND__ *)(~-(uint)(((uint)param_1 & 0xffff0000) != 0) & (uint)param_1);
    local_1c = pHVar8;
    if (param_3 == 0) {
      AfxDeleteObject((void **)((int)this + 0x88));
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)((int)this + 0xb8));
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)((int)this + 0xd4));
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)((int)this + 0xf0));
    }
    else if ((pHVar8 != (HWND__ *)0x0) &&
            (p_Var2 = CList<unsigned_int,unsigned_int>::Find
                                ((CList<unsigned_int,unsigned_int> *)((int)this + 0xb8),(uint)pHVar8
                                 ,(__POSITION *)0x0), p_Var2 != (__POSITION *)0x0)) {
      return 1;
    }
    local_38 = 0;
    local_3c = CPngImage::vftable;
    local_8 = 0;
    iVar1 = Load(&local_3c,(LPCWSTR)param_1,param_2);
    if (iVar1 == 0) {
      if (param_2 == (HINSTANCE)0x0) {
        pAVar3 = AfxGetModuleState();
        param_2 = *(HINSTANCE *)(pAVar3 + 0xc);
      }
      fuLoad = 0x2000;
      if ((*(int *)((int)this + 0x30) != 0) && (DAT_10166c24 == 0)) {
        fuLoad = 0x3000;
      }
      param_1 = LoadImageW(param_2,(LPCWSTR)param_1,0,0,0,fuLoad);
    }
    else {
      param_1 = CGdiObject::Detach((CGdiObject *)&local_3c);
    }
    if (param_1 != (HBITMAP__ *)0x0) {
      iVar1 = GetObjectW(param_1,0x18,local_8c);
      if (iVar1 == 0) {
        DeleteObject(param_1);
      }
      else {
        if (local_7a < 0x20) {
          if (((8 < local_7a) && (*(int *)((int)this + 0x30) != 0)) || (DAT_10166c24 != 0)) {
            FUN_1001714b((undefined4 *)local_4c);
            local_8._0_1_ = 1;
            pHVar4 = CreateCompatibleDC((HDC)0x0);
            CDC::Attach(local_4c,pHVar4);
            iVar1 = GetObjectW(param_1,0x18,local_74);
            if (iVar1 == 0) {
              local_8 = (uint)local_8._1_3_ << 8;
              CDC::~CDC(local_4c);
            }
            else {
              local_28 = SelectObject(local_48,param_1);
              if (local_28 != (HGDIOBJ)0x0) {
                local_24 = local_70;
                local_20 = local_6c;
                local_2c = CreateCompatibleBitmap(local_48,local_70,local_6c);
                if (local_2c == (HBITMAP)0x0) {
                  SelectObject(local_48,local_28);
                }
                else {
                  FUN_1001714b((undefined4 *)local_5c);
                  local_8 = CONCAT31(local_8._1_3_,2);
                  pHVar4 = CreateCompatibleDC(local_48);
                  CDC::Attach(local_5c,pHVar4);
                  local_34 = SelectObject(local_58,local_2c);
                  if (local_34 == (HGDIOBJ)0x0) {
                    SelectObject(local_48,local_28);
                    DeleteObject(local_2c);
                  }
                  else {
                    BitBlt(local_58,0,0,local_24,local_20,local_48,0,0,0xcc0020);
                    local_18 = 0;
                    if (0 < local_24) {
                      do {
                        local_14 = 0;
                        if (0 < local_20) {
                          do {
                            local_30 = GetPixel(local_58,local_18,local_14);
                            if ((local_62 == 0x18) && (DAT_10161460 == 0)) {
                              color = FUN_10080351(local_30);
                            }
                            else {
                              color = CMFCToolBarImages::MapToSysColor(local_30,0);
                            }
                            if (local_30 != color) {
                              SetPixel(local_58,local_18,local_14,color);
                            }
                            local_14 = local_14 + 1;
                          } while (local_14 < local_20);
                        }
                        local_18 = local_18 + 1;
                      } while (local_18 < local_24);
                    }
                    SelectObject(local_58,local_34);
                    SelectObject(local_48,local_28);
                    DeleteObject(param_1);
                    param_1 = local_2c;
                  }
                  local_8._0_1_ = 1;
                  CDC::~CDC(local_5c);
                }
              }
              local_8 = (uint)local_8._1_3_ << 8;
              CDC::~CDC(local_4c);
              pHVar8 = local_1c;
            }
          }
        }
        else {
          CMFCToolBarImages::PreMultiplyAlpha(param_1,*(int *)((int)this + 0x38));
        }
        uVar5 = (uint)local_7a;
        if ((int)(uint)local_7a < (int)*(uint *)((int)this + 8)) {
          uVar5 = *(uint *)((int)this + 8);
        }
        *(uint *)((int)this + 8) = uVar5;
        if (param_3 == 0) {
          *(HBITMAP__ **)((int)this + 0x88) = param_1;
        }
        else {
          if (pHVar8 != (HWND__ *)0x0) {
            iVar1 = *(int *)((int)this + 4);
            piVar6 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                               ((CMap<unsigned_int,unsigned_int,int,int> *)((int)this + 0xf0),
                                (uint)pHVar8);
            *piVar6 = iVar1;
          }
          CMFCToolBarImages::AddImage(this,param_1,0);
          if (pHVar8 != (HWND__ *)0x0) {
            CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)((int)this + 0xb8),pHVar8);
            CList<HWND__*,HWND__*>::AddTail
                      ((CList<HWND__*,HWND__*> *)((int)this + 0xd4),(HWND__ *)param_2);
          }
          DeleteObject(param_1);
        }
        CMFCToolBarImages::UpdateCount(this);
        AfxDeleteObject((void **)((int)this + 0x8c));
        *(void **)((int)this + 0x8c) = (void *)0x0;
        AfxDeleteObject((void **)((int)this + 0x90));
        *(void **)((int)this + 0x90) = (void *)0x0;
        uVar7 = 1;
      }
      local_8 = 0xffffffff;
      local_3c = CBitmap::vftable;
      CImageList::~CImageList((CImageList *)&local_3c);
      return uVar7;
    }
    local_8 = 0xffffffff;
    local_3c = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_3c);
  }
  return 0;
}

