// rea decompile_all
// name: FUN_10084be5
// address: 0x10084be5
// body: available
// range: 0x10084be5-0x10084fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10084fb7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

CMFCToolBarImages * __fastcall FUN_10084be5(CMFCToolBarImages *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CMFCToolBarImages *pCVar3;
  int iVar4;
  UINT fuLoad;
  HDC pHVar5;
  COLORREF color;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  short local_82;
  undefined1 local_7c [18];
  ushort local_6a;
  COLORREF local_64;
  undefined4 *local_60;
  undefined **local_5c;
  undefined4 local_58;
  HGDIOBJ local_54;
  undefined4 *local_50;
  CDC local_4c [4];
  HDC local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  HDC local_30;
  undefined4 local_2c;
  undefined4 local_28;
  HMODULE local_24;
  HBITMAP local_20;
  int local_1c;
  int local_18;
  HBITMAP__ *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  pCVar3 = (CMFCToolBarImages *)&LAB_10113ac7;
  local_8 = 0x10084bf4;
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(double *)(param_1 + 0xb0) != 1.0) {
      iVar4 = *(int *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xb0) = 0x3ff0000000000000;
      *(undefined4 *)(param_1 + 8) = 0;
      if (iVar4 != -1) {
        *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
        *(int *)(param_1 + 0xa4) = iVar4;
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
      local_34 = 0;
      local_30 = (HDC)0x0;
      local_2c = 0;
      local_28 = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    pCVar3 = param_1 + 0x88;
    if (*(void **)pCVar3 != (void *)0x0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (*(int *)(param_1 + 0xc4) == 0) {
          return pCVar3;
        }
        AfxDeleteObject((void **)pCVar3);
        puVar1 = *(undefined4 **)(param_1 + 0xbc);
        puVar2 = *(undefined4 **)(param_1 + 0xd8);
        while (puVar1 != (undefined4 *)0x0) {
          if (puVar2 == (undefined4 *)0x0) {
LAB_10084fb7:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_50 = (undefined4 *)*puVar1;
          if (puVar1[2] == 0) goto LAB_10084fb7;
          local_60 = (undefined4 *)*puVar2;
          local_24 = (HMODULE)puVar2[2];
          local_58 = 0;
          local_5c = CPngImage::vftable;
          local_20 = (HBITMAP)(puVar1[2] & 0xffff);
          local_8 = 0;
          iVar4 = Load(&local_5c,(LPCWSTR)local_20,local_24);
          if ((iVar4 == 0) ||
             (local_14 = CGdiObject::Detach((CGdiObject *)&local_5c), local_14 == (HBITMAP__ *)0x0))
          {
            fuLoad = 0x2000;
            if ((*(int *)(param_1 + 0x30) != 0) && ((DAT_10166c28 == 0 && (DAT_10166c24 == 0)))) {
              fuLoad = 0x3000;
            }
            local_14 = LoadImageW(local_24,(LPCWSTR)local_20,0,0,0,fuLoad);
          }
          GetObjectW(local_14,0x18,local_7c);
          *(uint *)(param_1 + 8) = (uint)local_6a;
          if (local_6a < 0x20) {
            if ((((8 < local_6a) && (*(int *)(param_1 + 0x30) != 0)) || (DAT_10166c24 != 0)) &&
               (local_14 != (HBITMAP__ *)0x0)) {
              FUN_1001714b((undefined4 *)local_4c);
              local_8._0_1_ = 1;
              pHVar5 = CreateCompatibleDC((HDC)0x0);
              CDC::Attach(local_4c,pHVar5);
              iVar4 = GetObjectW(local_14,0x18,local_94);
              if ((iVar4 != 0) &&
                 (local_24 = SelectObject(local_48,local_14), local_24 != (HMODULE)0x0)) {
                local_38 = local_90;
                local_3c = local_8c;
                local_20 = CreateCompatibleBitmap(local_48,local_90,local_8c);
                if (local_20 == (HBITMAP)0x0) {
                  SelectObject(local_48,local_24);
                }
                else {
                  FUN_1001714b(&local_34);
                  local_8 = CONCAT31(local_8._1_3_,2);
                  pHVar5 = CreateCompatibleDC(local_48);
                  CDC::Attach((CDC *)&local_34,pHVar5);
                  local_54 = SelectObject(local_30,local_20);
                  if (local_54 == (HGDIOBJ)0x0) {
                    SelectObject(local_48,local_24);
                    DeleteObject(local_20);
                  }
                  else {
                    BitBlt(local_30,0,0,local_38,local_3c,local_48,0,0,0xcc0020);
                    local_18 = 0;
                    if (0 < local_38) {
                      do {
                        local_1c = 0;
                        if (0 < local_3c) {
                          do {
                            local_64 = GetPixel(local_30,local_18,local_1c);
                            if ((local_82 == 0x18) && (DAT_10161460 == 0)) {
                              color = FUN_10080351(local_64);
                            }
                            else {
                              color = CMFCToolBarImages::MapToSysColor(local_64,0);
                            }
                            if (local_64 != color) {
                              SetPixel(local_30,local_18,local_1c,color);
                            }
                            local_1c = local_1c + 1;
                          } while (local_1c < local_3c);
                        }
                        local_18 = local_18 + 1;
                      } while (local_18 < local_38);
                    }
                    SelectObject(local_30,local_54);
                    SelectObject(local_48,local_24);
                    DeleteObject(local_14);
                    local_14 = local_20;
                  }
                  local_8._0_1_ = 1;
                  CDC::~CDC((CDC *)&local_34);
                }
              }
              local_8 = (uint)local_8._1_3_ << 8;
              CDC::~CDC(local_4c);
            }
          }
          else {
            CMFCToolBarImages::PreMultiplyAlpha(local_14,*(int *)(param_1 + 0x38));
          }
          CMFCToolBarImages::AddImage(param_1,local_14,0);
          DeleteObject(local_14);
          local_8 = 0xffffffff;
          local_5c = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_5c);
          puVar1 = local_50;
          puVar2 = local_60;
        }
      }
      else {
        CMFCToolBarImages::Load(param_1,*(wchar_t **)(param_1 + 0x94),0);
      }
    }
    CMFCToolBarImages::UpdateCount(param_1);
    if (DAT_10168920 != 0) {
      CMFCToolBarImages::MirrorBitmap((HBITMAP__ **)(param_1 + 0x88),*(int *)(param_1 + 0x50));
    }
    AfxDeleteObject((void **)(param_1 + 0x8c));
    *(void **)(param_1 + 0x8c) = (void *)0x0;
    AfxDeleteObject((void **)(param_1 + 0x90));
    *(void **)(param_1 + 0x90) = (void *)0x0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      CMFCToolBarImages::GrayImages(param_1,*(int *)(param_1 + 0xc));
    }
    pCVar3 = DAT_10166ab8;
    *(CMFCToolBarImages **)(param_1 + 0xac) = DAT_10166ab8;
  }
  return pCVar3;
}

