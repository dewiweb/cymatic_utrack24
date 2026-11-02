// rea decompile_all
// name: CMFCToolBarImages::Load
// address: 0x10085add
// body: available
// range: 0x10085add-0x10085e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::Load(unsigned int,struct HINSTANCE__ *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarImages::Load(CMFCToolBarImages *this,uint param_1,HINSTANCE__ *param_2,int param_3)

{
  HWND__ *pHVar1;
  __POSITION *p_Var2;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  UINT fuLoad;
  HDC pHVar5;
  COLORREF color;
  uint uVar6;
  int *piVar7;
  int iVar8;
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
  HINSTANCE__ *local_2c;
  HBITMAP local_28;
  HGDIOBJ local_24;
  int local_20;
  int local_1c;
  HWND__ *local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x10085ae9;
  iVar8 = 0;
  local_2c = param_2;
  pHVar1 = (HWND__ *)(param_1 & 0xffff);
  if (*(int *)(this + 0x24) != 0) {
    return 0;
  }
  if (pHVar1 == (HWND__ *)0x0) {
    return 0;
  }
  local_18 = pHVar1;
  if (param_3 == 0) {
    AfxDeleteObject((void **)(this + 0x88));
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xb8));
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd4));
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xf0));
LAB_10085b68:
    local_38 = 0;
    local_3c = CPngImage::vftable;
    local_8 = 0;
    iVar3 = ::Load(&local_3c,(LPCWSTR)(param_1 & 0xffff),param_2);
    if (iVar3 == 0) {
      if (param_2 == (HINSTANCE__ *)0x0) {
        pAVar4 = AfxGetModuleState();
        local_2c = *(HINSTANCE__ **)(pAVar4 + 0xc);
      }
      fuLoad = 0x2000;
      if ((*(int *)(this + 0x30) != 0) && (DAT_10166c24 == 0)) {
        fuLoad = 0x3000;
      }
      param_2 = LoadImageW(local_2c,(LPCWSTR)(param_1 & 0xffff),0,0,0,fuLoad);
    }
    else {
      param_2 = CGdiObject::Detach((CGdiObject *)&local_3c);
    }
    if (param_2 != (HINSTANCE__ *)0x0) {
      iVar3 = GetObjectW(param_2,0x18,local_8c);
      if (iVar3 != 0) {
        if (local_7a < 0x20) {
          if (((8 < local_7a) && (*(int *)(this + 0x30) != 0)) || (DAT_10166c24 != 0)) {
            FUN_1001714b((undefined4 *)local_4c);
            local_8._0_1_ = 1;
            pHVar5 = CreateCompatibleDC((HDC)0x0);
            CDC::Attach(local_4c,pHVar5);
            iVar8 = GetObjectW(param_2,0x18,local_74);
            if (iVar8 == 0) {
              local_8 = (uint)local_8._1_3_ << 8;
              CDC::~CDC(local_4c);
            }
            else {
              local_24 = SelectObject(local_48,param_2);
              if (local_24 != (HGDIOBJ)0x0) {
                local_20 = local_70;
                local_1c = local_6c;
                local_28 = CreateCompatibleBitmap(local_48,local_70,local_6c);
                if (local_28 == (HBITMAP)0x0) {
                  SelectObject(local_48,local_24);
                }
                else {
                  FUN_1001714b((undefined4 *)local_5c);
                  local_8 = CONCAT31(local_8._1_3_,2);
                  pHVar5 = CreateCompatibleDC(local_48);
                  CDC::Attach(local_5c,pHVar5);
                  local_34 = SelectObject(local_58,local_28);
                  if (local_34 == (HGDIOBJ)0x0) {
                    SelectObject(local_48,local_24);
                    DeleteObject(local_28);
                  }
                  else {
                    BitBlt(local_58,0,0,local_20,local_1c,local_48,0,0,0xcc0020);
                    local_14 = 0;
                    if (0 < local_20) {
                      do {
                        param_1 = 0;
                        if (0 < local_1c) {
                          do {
                            local_30 = GetPixel(local_58,local_14,param_1);
                            if ((local_62 == 0x18) && (DAT_10161460 == 0)) {
                              color = FUN_10080351(local_30);
                            }
                            else {
                              color = MapToSysColor(local_30,0);
                            }
                            if (local_30 != color) {
                              SetPixel(local_58,local_14,param_1,color);
                            }
                            param_1 = param_1 + 1;
                          } while ((int)param_1 < local_1c);
                        }
                        local_14 = local_14 + 1;
                      } while (local_14 < local_20);
                    }
                    SelectObject(local_58,local_34);
                    SelectObject(local_48,local_24);
                    DeleteObject(param_2);
                    param_2 = (HINSTANCE__ *)local_28;
                  }
                  local_8._0_1_ = 1;
                  CDC::~CDC(local_5c);
                }
              }
              local_8 = (uint)local_8._1_3_ << 8;
              CDC::~CDC(local_4c);
              pHVar1 = local_18;
            }
          }
        }
        else {
          PreMultiplyAlpha((HBITMAP__ *)param_2,*(int *)(this + 0x38));
        }
        uVar6 = (uint)local_7a;
        if ((int)(uint)local_7a < (int)*(uint *)(this + 8)) {
          uVar6 = *(uint *)(this + 8);
        }
        *(uint *)(this + 8) = uVar6;
        if (param_3 == 0) {
          *(HINSTANCE__ **)(this + 0x88) = param_2;
        }
        else {
          if (pHVar1 != (HWND__ *)0x0) {
            iVar8 = *(int *)(this + 4);
            piVar7 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                               ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0xf0),
                                (uint)pHVar1);
            *piVar7 = iVar8;
          }
          AddImage(this,(HBITMAP__ *)param_2,0);
          if (pHVar1 != (HWND__ *)0x0) {
            CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xb8),pHVar1);
            CList<HWND__*,HWND__*>::AddTail
                      ((CList<HWND__*,HWND__*> *)(this + 0xd4),(HWND__ *)local_2c);
          }
          DeleteObject(param_2);
        }
        UpdateCount(this);
        AfxDeleteObject((void **)(this + 0x8c));
        *(void **)(this + 0x8c) = (void *)0x0;
        AfxDeleteObject((void **)(this + 0x90));
        local_8 = 0xffffffff;
        *(void **)(this + 0x90) = (void *)0x0;
        local_3c = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_3c);
        goto LAB_10085e63;
      }
      DeleteObject(param_2);
    }
    local_8 = 0xffffffff;
    local_3c = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_3c);
  }
  else {
    if ((pHVar1 == (HWND__ *)0x0) ||
       (p_Var2 = CList<unsigned_int,unsigned_int>::Find
                           ((CList<unsigned_int,unsigned_int> *)(this + 0xb8),(uint)pHVar1,
                            (__POSITION *)0x0), p_Var2 == (__POSITION *)0x0)) goto LAB_10085b68;
LAB_10085e63:
    iVar8 = 1;
  }
  return iVar8;
}

