// rea decompile_all
// name: CMFCColorPickerCtrl::DrawPicker
// address: 0x100f5117
// body: available
// range: 0x100f5117-0x100f52e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::DrawPicker(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPickerCtrl::DrawPicker(CMFCColorPickerCtrl *this,CDC *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  HDC pHVar4;
  int iVar5;
  HBITMAP pHVar6;
  void *pvVar7;
  uint color;
  int iVar8;
  CMenu *this_00;
  int cy;
  CDC local_70 [4];
  HDC__ *local_6c;
  CMenu *local_60;
  int local_5c;
  undefined **local_58;
  HBRUSH local_54;
  CGdiObject *local_50;
  int local_4c;
  int local_44;
  CDC *local_40;
  int local_3c;
  int local_38;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x100f5123;
  local_40 = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  cy = local_24.bottom - local_24.top;
  iVar8 = local_24.right - local_24.left;
  this_00 = (CMenu *)(this + 0xa0);
  local_60 = this_00;
  local_5c = cy;
  local_4c = iVar8;
  if ((this_00 == (CMenu *)0x0) || (*(int *)(this + 0xa4) == 0)) {
    FUN_1001714b((undefined4 *)local_70);
    local_8 = 0;
    pHVar4 = (HDC)0x0;
    if (local_40 != (CDC *)0x0) {
      pHVar4 = *(HDC *)(local_40 + 4);
    }
    pHVar4 = CreateCompatibleDC(pHVar4);
    iVar5 = CDC::Attach(local_70,pHVar4);
    if (iVar5 != 0) {
      pHVar6 = CreateCompatibleBitmap(*(HDC *)(local_40 + 4),iVar8,cy);
      iVar5 = CMenu::Attach(this_00,(HMENU__ *)pHVar6);
      if (iVar5 != 0) {
        if (this_00 == (CMenu *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = *(void **)(this + 0xa4);
        }
        local_50 = CDC::SelectGdiObject(local_6c,pvVar7);
        local_3c = 0;
        iVar8 = ((DAT_10166c4c < 9) - 1 & 0xfffffffd) + 4;
        if (0 < cy) {
          local_44 = -iVar8;
          iVar5 = cy - iVar8;
          do {
            local_38 = 0;
            if (0 < local_4c) {
              dVar2 = (double)local_3c;
              dVar1 = (double)local_5c;
              dVar3 = (double)local_4c;
              do {
                color = FUN_1009c879((double)local_38 / dVar3,0.5,dVar2 / dVar1);
                if (DAT_10166c4c < 9) {
                  CBrush::CBrush((CBrush *)&local_58,color);
                  local_34.left = local_38;
                  local_34.right = local_38 + iVar8;
                  local_34.bottom = iVar5 + iVar8;
                  local_34.top = iVar5;
                  FillRect(local_6c,&local_34,local_54);
                  local_58 = CBrush::vftable;
                  CImageList::~CImageList((CImageList *)&local_58);
                }
                else {
                  SetPixelV(local_6c,local_38,iVar5,color);
                }
                local_38 = local_38 + iVar8;
              } while (local_38 < local_4c);
            }
            local_3c = local_3c + iVar8;
            iVar5 = iVar5 + local_44;
            this_00 = local_60;
          } while (local_3c < cy);
        }
        pvVar7 = (void *)0x0;
        if (local_50 != (CGdiObject *)0x0) {
          pvVar7 = *(void **)(local_50 + 4);
        }
        CDC::SelectGdiObject(local_6c,pvVar7);
        iVar8 = local_4c;
      }
    }
    local_8 = 0xffffffff;
    CDC::~CDC(local_70);
  }
  CDC::DrawState(local_40,0,0,iVar8,cy,this_00,0,0);
  FUN_100f90cf();
  return;
}

