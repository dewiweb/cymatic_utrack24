// rea decompile_all
// name: CMFCVisualManager::OnDrawStatusBarProgress
// address: 0x10035bd5
// body: available
// range: 0x10035bd5-0x10035d65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawStatusBarProgress(class CDC *,class
   CMFCStatusBar *,class CRect,int,int,unsigned long,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawStatusBarProgress
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_4,LONG param_5,
          int param_6,LONG param_7,int param_8,int param_9,ulong param_10,int param_11,int param_12,
          int param_13)

{
  ulong uVar1;
  undefined **ppuVar2;
  HRGN pHVar3;
  int iVar4;
  undefined **local_38;
  undefined4 local_34;
  undefined **local_30;
  HBRUSH local_2c;
  ulong local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10035be1;
  local_28 = param_10;
  if (param_8 != 0) {
    local_24.left = param_4;
    local_24.top = param_5;
    local_24.bottom = param_7;
    local_24.right = ((param_6 - param_4) * param_9) / param_8 + param_4;
    if (param_11 == -1) {
      CBrush::CBrush((CBrush *)&local_30,param_10);
      FillRect(*(HDC *)(param_1 + 4),&local_24,local_2c);
      local_30 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_30);
    }
    else {
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_30,param_1);
      local_8 = 0;
      CDrawingManager::FillGradient
                ((CDrawingManager *)&local_30,local_24.left,local_24.top,local_24.right,
                 local_24.bottom,local_28,param_11,0,0,0);
      local_8 = 0xffffffff;
      FUN_1009c588(&local_30);
    }
    if (param_13 != 0) {
      ppuVar2 = FUN_1000ad47();
      FUN_10005e00(&local_28,(int *)ppuVar2);
      local_8 = 1;
      FUN_100022f0(&local_28,L"%d%%");
      local_2c = (HBRUSH)(**(code **)(*(int *)param_1 + 0x30))(DAT_10166b00);
      uVar1 = local_28;
      (**(code **)(*(int *)param_1 + 0x68))(local_28,*(undefined4 *)(local_28 - 0xc),&param_4,0x825)
      ;
      local_34 = 0;
      local_38 = CRgn::vftable;
      local_8._0_1_ = 2;
      pHVar3 = CreateRectRgnIndirect(&local_24);
      CMenu::Attach((CMenu *)&local_38,(HMENU__ *)pHVar3);
      CDC::SelectClipRgn(param_1,(CRgn *)&local_38);
      iVar4 = param_12;
      if (param_12 == -1) {
        iVar4 = DAT_10166ad8;
      }
      (**(code **)(*(int *)param_1 + 0x30))(iVar4);
      (**(code **)(*(int *)param_1 + 0x68))(uVar1,*(undefined4 *)(uVar1 - 0xc),&param_4,0x825);
      CDC::SelectClipRgn(param_1,(CRgn *)0x0);
      (**(code **)(*(int *)param_1 + 0x30))(local_2c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_38 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_38);
      FUN_10001030((undefined4 *)(uVar1 - 0x10));
    }
  }
  FUN_100f90cf();
  return;
}

