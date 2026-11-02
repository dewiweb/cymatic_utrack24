// rea decompile_all
// name: CDrawingManager::FillGradient
// address: 0x1009dec9
// body: available
// range: 0x1009dec9-0x1009e0b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009dfb3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::FillGradient(class CRect,unsigned long,unsigned
   long,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDrawingManager::FillGradient
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  void *pvVar4;
  int iVar5;
  int cx;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  CDC local_48 [4];
  HDC__ *local_44;
  undefined **local_38;
  CDC *local_34;
  int local_30;
  int local_2c;
  undefined **local_28;
  void *local_24;
  HBITMAP__ *local_20;
  CGdiObject *local_1c;
  CDrawingManager *local_18;
  uint *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1009ded5;
  local_18 = this;
  if (DAT_1016891c == 0) {
    _FillGradient(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    local_58 = param_2;
    local_54 = param_3;
    local_50 = param_4;
    local_4c = param_5;
    CRect::NormalizeRect((CRect *)&local_58);
    iVar5 = local_4c - local_54;
    cx = local_50 - local_58;
    if ((cx != 0) && (iVar5 != 0)) {
      local_30 = cx;
      local_2c = iVar5;
      FUN_1001714b((undefined4 *)local_48);
      local_8 = 0;
      if (*(int *)(local_18 + 4) == 0) {
        pHVar1 = (HDC)0x0;
      }
      else {
        pHVar1 = *(HDC *)(*(int *)(local_18 + 4) + 4);
      }
      pHVar1 = CreateCompatibleDC(pHVar1);
      iVar2 = CDC::Attach(local_48,pHVar1);
      if (iVar2 != 0) {
        local_24 = (void *)0x0;
        local_28 = CBitmap::vftable;
        local_8._0_1_ = 1;
        pHVar3 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_18 + 4) + 4),cx,iVar5);
        iVar5 = CMenu::Attach((CMenu *)&local_28,(HMENU__ *)pHVar3);
        if (iVar5 != 0) {
          local_1c = CDC::SelectGdiObject(local_44,local_24);
          if (local_1c == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_20 = CreateBitmap_32((CSize *)&local_30,local_14);
          if ((local_20 != (HBITMAP__ *)0x0) && (local_14[0] != (uint *)0x0)) {
            SelectObject(local_44,local_20);
            local_34 = local_48;
            local_38 = vftable;
            local_8._0_1_ = 2;
            _FillGradient((CDrawingManager *)&local_38,0,0,local_30,local_2c,param_6,param_7,param_8
                          ,param_9,param_10);
            iVar5 = local_2c * local_30;
            if (0 < iVar5) {
              do {
                *local_14[0] = *local_14[0] | 0xff000000;
                local_14[0] = local_14[0] + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            BitBlt(*(HDC *)(*(int *)(local_18 + 4) + 4),local_58,local_54,local_30,local_2c,local_44
                   ,0,0,0xcc0020);
            if (local_1c == (CGdiObject *)0x0) {
              pvVar4 = (void *)0x0;
            }
            else {
              pvVar4 = *(void **)(local_1c + 4);
            }
            CDC::SelectGdiObject(local_44,pvVar4);
            DeleteObject(local_20);
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_28 = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_28);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_48);
    }
  }
  return;
}

