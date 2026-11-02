// rea decompile_all
// name: AfxGetGrayBitmap
// address: 0x10017cb7
// body: available
// range: 0x10017cb7-0x10017f36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxGetGrayBitmap(class CBitmap const &,class CBitmap *,unsigned long)
   
   Library: Visual Studio 2010 Release */

void AfxGetGrayBitmap(CBitmap *param_1,CBitmap *param_2,ulong param_3)

{
  DWORD DVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  CGdiObject *pCVar5;
  COLORREF CVar6;
  void *pvVar7;
  CGdiObject *pCVar8;
  CPen *pCVar9;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  ushort local_58;
  ushort local_56;
  undefined **local_50;
  HDC__ *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined **local_40;
  HDC__ *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined **local_30 [2];
  undefined **local_28 [2];
  undefined **local_20;
  void *local_1c;
  CGdiObject *local_18;
  ulong local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_40 = CDC::vftable;
  local_3c = (HDC__ *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_50 = CDC::vftable;
  local_4c = (HDC__ *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_1c = (void *)0x0;
  local_20 = CBitmap::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  DVar1 = GetSysColor(0x14);
  CBrush::CBrush((CBrush *)local_30,DVar1);
  local_8._0_1_ = 3;
  DVar1 = GetSysColor(0x10);
  CBrush::CBrush((CBrush *)local_28,DVar1);
  local_8 = CONCAT31(local_8._1_3_,4);
  pHVar2 = CreateCompatibleDC((HDC)0x0);
  iVar3 = CDC::Attach((CDC *)&local_40,pHVar2);
  if (iVar3 != 0) {
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    iVar3 = CDC::Attach((CDC *)&local_50,pHVar2);
    if (iVar3 != 0) {
      GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_68);
      CGdiObject::DeleteObject((CGdiObject *)param_2);
      pHVar4 = CreateBitmap(local_64,local_60,(uint)local_58,(uint)local_56,(void *)0x0);
      iVar3 = CMenu::Attach((CMenu *)param_2,(HMENU__ *)pHVar4);
      if (iVar3 != 0) {
        pHVar4 = CreateBitmap(local_64,local_60,1,1,(void *)0x0);
        iVar3 = CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar4);
        if (iVar3 != 0) {
          pCVar5 = CDC::SelectGdiObject(local_3c,*(void **)(param_1 + 4));
          local_18 = CDC::SelectGdiObject(local_4c,local_1c);
          if ((pCVar5 != (CGdiObject *)0x0) && (local_18 != (CGdiObject *)0x0)) {
            CVar6 = GetPixel(local_3c,0,0);
            local_14 = CDC::SetBkColor((CDC *)&local_40,CVar6);
            BitBlt(local_4c,0,0,local_64,local_60,local_3c,0,0,0xcc0020);
            CDC::SetBkColor((CDC *)&local_40,0xffffff);
            BitBlt(local_4c,0,0,local_64,local_60,local_3c,0,0,0x1100a6);
            if (param_2 == (CBitmap *)0x0) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = *(void **)(param_2 + 4);
            }
            pCVar8 = CDC::SelectGdiObject(local_3c,pvVar7);
            if (pCVar8 != (CGdiObject *)0x0) {
              CDC::FillSolidRect((CDC *)&local_40,0,0,local_64,local_60,param_3);
              CDC::SetBkColor((CDC *)&local_40,0xffffff);
              pCVar9 = CDC::SelectObject((CDC *)&local_40,(CPen *)local_30);
              BitBlt(local_3c,1,1,local_64,local_60,local_4c,0,0,0xe20746);
              CDC::SelectObject((CDC *)&local_40,(CPen *)local_28);
              BitBlt(local_3c,0,0,local_64,local_60,local_4c,0,0,0xe20746);
              CDC::SelectObject((CDC *)&local_40,pCVar9);
              CDC::SetBkColor((CDC *)&local_40,local_14);
            }
            CDC::SelectGdiObject(local_4c,*(void **)(local_18 + 4));
            CDC::SelectGdiObject(local_3c,*(void **)(pCVar5 + 4));
          }
        }
      }
    }
  }
  local_8._0_1_ = 3;
  local_28[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_28);
  local_8._0_1_ = 2;
  local_30[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_30);
  local_8._0_1_ = 1;
  local_20 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_20);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC((CDC *)&local_50);
  local_8 = 0xffffffff;
  CDC::~CDC((CDC *)&local_40);
  return;
}

