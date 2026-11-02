// rea decompile_all
// name: CMFCToolBarImages::UpdateInternalImage
// address: 0x10080cb6
// body: available
// range: 0x10080cb6-0x10080f95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCToolBarImages::UpdateInternalImage(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarImages::UpdateInternalImage(CMFCToolBarImages *this,int param_1)

{
  int iVar1;
  HDC pHVar2;
  HBITMAP h;
  CMFCVisualManager *pCVar3;
  ulong uVar4;
  CMFCToolBarImages *pCVar5;
  code *pcVar6;
  undefined1 local_ac [4];
  int local_a8;
  int local_a4;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  HGDIOBJ local_84;
  void *local_80;
  CDC local_7c [4];
  HDC local_78;
  CDrawingManager local_6c [4];
  ulong local_68;
  CDC local_64 [4];
  HDC local_60;
  CMFCToolBarImages *local_54;
  int local_50;
  HGDIOBJ local_4c;
  int local_48;
  CMFCToolBarImages *local_44;
  BITMAPINFO local_40;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0x10080cc5;
  if (param_1 == 0) {
    pCVar5 = this + 0x8c;
    local_44 = pCVar5;
    if (((4 < *(int *)(this + 8)) && (*(int *)(this + 0x34) == 0)) || (*(int *)(this + 8) == 0))
    goto LAB_10080cea;
  }
  else {
    pCVar5 = this + 0x90;
  }
  local_44 = pCVar5;
  AfxDeleteObject((void **)pCVar5);
  *(undefined4 *)pCVar5 = 0;
  if ((*(int *)(this + 0x88) != 0) && (8 < DAT_10166c4c)) {
    FUN_1001714b((undefined4 *)local_64);
    local_8 = 0;
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_64,pHVar2);
    iVar1 = GetObjectW(*(HANDLE *)(this + 0x88),0x18,local_ac);
    pcVar6 = SelectObject_exref;
    if (iVar1 != 0) {
      local_48 = local_a8;
      local_50 = local_a4;
      if (*(HGDIOBJ *)(this + 0x88) == (HGDIOBJ)0x0) {
        local_4c = (HGDIOBJ)0x0;
      }
      else {
        local_4c = SelectObject(local_60,*(HGDIOBJ *)(this + 0x88));
      }
      if (local_4c != (HGDIOBJ)0x0) {
        FUN_1001714b((undefined4 *)local_7c);
        local_8._0_1_ = 1;
        pHVar2 = CreateCompatibleDC(local_60);
        CDC::Attach(local_7c,pHVar2);
        local_40.bmiHeader.biPlanes = 1;
        local_40.bmiHeader.biWidth = local_48;
        local_40.bmiHeader.biHeight = local_50;
        local_40.bmiHeader.biSizeImage = local_50 * local_48;
        local_40.bmiHeader.biSize = 0x28;
        local_40.bmiHeader.biBitCount = 0x20;
        local_40.bmiHeader.biCompression = 0;
        local_40.bmiHeader.biXPelsPerMeter = 0;
        local_40.bmiHeader.biYPelsPerMeter = 0;
        local_40.bmiHeader.biClrUsed = 0;
        local_40.bmiHeader.biClrImportant = 0;
        local_80 = (void *)0x0;
        h = CreateDIBSection(local_78,&local_40,0,&local_80,(HANDLE)0x0,0);
        *(HBITMAP *)local_44 = h;
        if (h != (HBITMAP)0x0) {
          local_84 = SelectObject(local_78,h);
          if (local_84 == (HGDIOBJ)0x0) {
            SelectObject(local_60,local_4c);
            pCVar5 = local_44;
            DeleteObject(*(HGDIOBJ *)local_44);
            *(undefined4 *)pCVar5 = 0;
          }
          else {
            if (*(int *)(this + 8) == 0x20) {
              local_44 = (CMFCToolBarImages *)0xffffffff;
            }
            else {
              local_44 = *(CMFCToolBarImages **)(this + 0xa4);
            }
            BitBlt(local_78,0,0,local_48,local_50,local_60,0,0,0xcc0020);
            if (param_1 == 0) {
              CDrawingManager::CDrawingManager(local_6c,local_7c);
              local_8._0_1_ = 2;
              pCVar5 = local_44;
              if (local_44 == (CMFCToolBarImages *)0xffffffff) {
                pCVar5 = DAT_10166ab4;
              }
              local_8c = local_48;
              local_88 = local_50;
              local_94 = 0;
              local_90 = 0;
              CDrawingManager::HighlightRect
                        (local_6c,0,0,local_48,local_50,*(undefined4 *)(this + 0x10),pCVar5,0,
                         0xffffffff);
              local_8._0_1_ = 1;
              FUN_1009c588((undefined4 *)local_6c);
              pcVar6 = SelectObject_exref;
            }
            else {
              local_54 = local_44;
              if (local_44 == (CMFCToolBarImages *)0xffffffff) {
                local_54 = DAT_10166ab4;
              }
              pCVar3 = CMFCVisualManager::GetInstance();
              uVar4 = (**(code **)(*(int *)pCVar3 + 0xc0))();
              local_68 = DAT_10166ab8;
              if (8 < DAT_10166c4c) {
                local_68 = CDrawingManager::PixelAlpha(uVar4,0x43);
              }
              local_44 = (CMFCToolBarImages *)0x0;
              if (0 < local_48) {
                do {
                  iVar1 = 0;
                  if (0 < local_50) {
                    do {
                      pCVar5 = (CMFCToolBarImages *)GetPixel(local_78,(int)local_44,iVar1);
                      if (pCVar5 != local_54) {
                        SetPixel(local_78,(int)local_44,iVar1,local_68);
                      }
                      iVar1 = iVar1 + 1;
                    } while (iVar1 < local_50);
                  }
                  local_44 = local_44 + 1;
                } while ((int)local_44 < local_48);
              }
            }
            (*pcVar6)(local_78,local_84);
            (*pcVar6)(local_60,local_4c);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          CDC::~CDC(local_7c);
          local_8 = 0xffffffff;
          CDC::~CDC(local_64);
          goto LAB_10080cea;
        }
        SelectObject(local_60,local_4c);
        local_8 = (uint)local_8._1_3_ << 8;
        CDC::~CDC(local_7c);
      }
    }
    local_8 = 0xffffffff;
    CDC::~CDC(local_64);
  }
LAB_10080cea:
  iVar1 = FUN_100f90cf();
  return iVar1;
}

