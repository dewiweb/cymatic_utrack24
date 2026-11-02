// rea decompile_all
// name: CDrawingManager::DrawRect
// address: 0x1009f584
// body: available
// range: 0x1009f584-0x1009f842 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009f652 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::DrawRect(class CRect const &,unsigned long,unsigned
   long)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDrawingManager::DrawRect(CDrawingManager *this,CRect *param_1,ulong param_2,ulong param_3)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  CRect *_Dst;
  int iVar7;
  size_t sVar8;
  CRect *pCVar9;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CDC local_44 [4];
  HDC__ *local_40;
  undefined **local_34;
  void *local_30;
  int local_2c;
  int local_28;
  HBITMAP__ *local_24;
  CGdiObject *local_20;
  CDrawingManager *local_1c;
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x1009f590;
  if ((param_2 != 0xffffffff) || (param_3 != 0xffffffff)) {
    local_54 = *(int *)param_1;
    local_50 = *(int *)(param_1 + 4);
    local_4c = *(int *)(param_1 + 8);
    local_48 = *(int *)(param_1 + 0xc);
    local_1c = this;
    CRect::NormalizeRect((CRect *)&local_54);
    iVar6 = local_48 - local_50;
    iVar7 = local_4c - local_54;
    if ((iVar7 != 0) && (iVar6 != 0)) {
      local_2c = iVar7;
      local_28 = iVar6;
      FUN_1001714b((undefined4 *)local_44);
      local_8 = 0;
      pHVar1 = (HDC)0x0;
      if (*(int *)(this + 4) != 0) {
        pHVar1 = *(HDC *)(*(int *)(this + 4) + 4);
      }
      pHVar1 = CreateCompatibleDC(pHVar1);
      iVar2 = CDC::Attach(local_44,pHVar1);
      if (iVar2 != 0) {
        local_30 = (void *)0x0;
        local_34 = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar3 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_1c + 4) + 4),iVar7,iVar6);
        iVar6 = CMenu::Attach((CMenu *)&local_34,(HMENU__ *)pHVar3);
        if (iVar6 != 0) {
          local_20 = CDC::SelectGdiObject(local_40,local_30);
          if (local_20 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_24 = CreateBitmap_32((CSize *)&local_2c,&param_1);
          _Dst = param_1;
          if ((local_24 != (HBITMAP__ *)0x0) && (param_1 != (CRect *)0x0)) {
            SelectObject(local_40,local_24);
            local_14 = 0;
            param_1 = (CRect *)0x1;
            local_18 = local_28;
            iVar6 = local_2c;
            if (param_3 != 0xffffffff) {
              uVar5 = ((param_3 & 0xff | 0xffffff00) << 8 | param_3 >> 8 & 0xff) << 8 |
                      param_3 >> 0x10 & 0xff;
              pCVar9 = _Dst;
              if (0 < local_2c) {
                for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(uint *)pCVar9 = uVar5;
                  pCVar9 = pCVar9 + 4;
                }
                _Dst = _Dst + local_2c * 4;
              }
              if (1 < local_28) {
                sVar8 = local_2c * 4;
                FID_conflict__memcpy
                          (_Dst + (local_28 + -2) * local_2c * 4,_Dst + local_2c * -4,sVar8);
                if (2 < local_28) {
                  *(uint *)_Dst = uVar5;
                  if (1 < local_2c) {
                    *(uint *)(_Dst + (sVar8 - 4)) = uVar5;
                  }
                  _Dst = _Dst + 4;
                }
              }
              local_18 = local_28 + -1;
              local_14 = 1;
              iVar6 = local_2c + -1;
              param_1 = (CRect *)0x2;
            }
            iVar7 = local_2c;
            if (((int)param_1 <= local_18) && (local_14 < iVar6)) {
              pCVar9 = _Dst;
              for (iVar2 = iVar6 - local_14; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(uint *)pCVar9 =
                     -(uint)(param_2 != 0xffffffff) &
                     (((param_2 & 0xff | 0xffffff00) << 8 | param_2 >> 8 & 0xff) << 8 |
                     param_2 >> 0x10 & 0xff);
                pCVar9 = pCVar9 + 4;
              }
              _Dst = _Dst + (iVar6 - local_14) * 4;
              if (param_3 != 0xffffffff) {
                _Dst = _Dst + 4;
              }
            }
            if ((int)param_1 < local_18) {
              sVar8 = local_2c * 4;
              iVar6 = local_18 - (int)param_1;
              do {
                FID_conflict__memcpy(_Dst,_Dst + iVar7 * -4,sVar8);
                _Dst = _Dst + sVar8;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            if (param_2 == 0xffffffff) {
              local_64 = 0;
              local_60 = 0;
              local_58 = local_28;
              local_5c = local_2c;
              DrawAlpha(local_1c,*(CDC **)(local_1c + 4),(CRect *)&local_54,local_44,
                        (CRect *)&local_64);
            }
            else {
              BitBlt(*(HDC *)(*(int *)(local_1c + 4) + 4),local_54,local_50,local_2c,local_28,
                     local_40,0,0,0xcc0020);
            }
            pvVar4 = (void *)0x0;
            if (local_20 != (CGdiObject *)0x0) {
              pvVar4 = *(void **)(local_20 + 4);
            }
            CDC::SelectGdiObject(local_40,pvVar4);
            DeleteObject(local_24);
          }
        }
        local_34 = CBitmap::vftable;
        local_8 = local_8 & 0xffffff00;
        CImageList::~CImageList((CImageList *)&local_34);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_44);
    }
  }
  return;
}

