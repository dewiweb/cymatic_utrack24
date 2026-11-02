// rea decompile_all
// name: AfxGetDitheredBitmap
// address: 0x10017f3a
// body: available
// range: 0x10017f3a-0x1001822f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __stdcall AfxGetDitheredBitmap(class CBitmap const &,class CBitmap *,unsigned long,unsigned
   long)
   
   Library: Visual Studio 2010 Release */

void AfxGetDitheredBitmap(CBitmap *param_1,CBitmap *param_2,ulong param_3,ulong param_4)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  CGdiObject *pCVar5;
  CGdiObject *pCVar6;
  COLORREF CVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined **local_80;
  HDC__ *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  int local_6c;
  int local_68;
  ushort local_60;
  ushort local_5e;
  undefined **local_58;
  HBRUSH local_54;
  undefined **local_50;
  HDC__ *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined **local_40;
  HDC__ *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined **local_30;
  HBITMAP local_2c;
  CGdiObject *local_28;
  RECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_28 = (CGdiObject *)param_2;
  local_50 = CDC::vftable;
  local_4c = (HDC__ *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_80 = CDC::vftable;
  local_7c = (HDC__ *)0x0;
  local_78 = 0;
  local_74 = 0;
  local_40 = CDC::vftable;
  local_3c = (HDC__ *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_2c = (HBITMAP)0x0;
  local_30 = CBitmap::vftable;
  local_54 = (HBRUSH)0x0;
  local_58 = CBrush::vftable;
  local_8 = 4;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  iVar2 = CDC::Attach((CDC *)&local_50,pHVar1);
  if (iVar2 != 0) {
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    iVar2 = CDC::Attach((CDC *)&local_80,pHVar1);
    if (iVar2 != 0) {
      pHVar1 = CreateCompatibleDC((HDC)0x0);
      iVar2 = CDC::Attach((CDC *)&local_40,pHVar1);
      if (iVar2 != 0) {
        iVar2 = GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_70);
        if (iVar2 != 0) {
          CGdiObject::DeleteObject(local_28);
          pHVar3 = CreateBitmap(local_6c,local_68,(uint)local_60,(uint)local_5e,(void *)0x0);
          iVar2 = CMenu::Attach((CMenu *)local_28,(HMENU__ *)pHVar3);
          if (iVar2 != 0) {
            pHVar3 = CreateBitmap(8,8,1,1,&DAT_1011f094);
            CMenu::Attach((CMenu *)&local_30,(HMENU__ *)pHVar3);
            pHVar4 = CreatePatternBrush(local_2c);
            CMenu::Attach((CMenu *)&local_58,(HMENU__ *)pHVar4);
            CGdiObject::DeleteObject((CGdiObject *)&local_30);
            pHVar3 = CreateBitmap(local_6c,local_68,1,1,(void *)0x0);
            CMenu::Attach((CMenu *)&local_30,(HMENU__ *)pHVar3);
            pCVar5 = CDC::SelectGdiObject(local_4c,*(void **)(param_1 + 4));
            pCVar6 = CDC::SelectGdiObject(local_7c,local_2c);
            if ((pCVar5 != (CGdiObject *)0x0) && (pCVar6 != (CGdiObject *)0x0)) {
              CVar7 = GetPixel(local_4c,0,0);
              uVar8 = CDC::SetBkColor((CDC *)&local_50,CVar7);
              BitBlt(local_7c,0,0,local_6c,local_68,local_4c,0,0,0xcc0020);
              CDC::SetBkColor((CDC *)&local_50,0xffffff);
              BitBlt(local_7c,0,0,local_6c,local_68,local_4c,0,0,0xee0086);
              CDC::SetBkColor((CDC *)&local_50,uVar8);
              if (local_28 == (CGdiObject *)0x0) {
                pvVar9 = (void *)0x0;
              }
              else {
                pvVar9 = *(void **)(local_28 + 4);
              }
              local_28 = CDC::SelectGdiObject(local_3c,pvVar9);
              if (local_28 == (CGdiObject *)0x0) {
                pvVar9 = (void *)0x0;
              }
              else {
                uVar8 = CDC::SetTextColor((CDC *)&local_40,param_3);
                uVar10 = CDC::SetBkColor((CDC *)&local_40,param_4);
                local_24.right = local_6c;
                local_24.bottom = local_68;
                local_24.left = 0;
                local_24.top = 0;
                FillRect(local_3c,&local_24,local_54);
                CDC::SetTextColor((CDC *)&local_40,uVar8);
                CDC::SetBkColor((CDC *)&local_40,uVar10);
                BitBlt(local_3c,0,0,local_6c,local_68,local_4c,0,0,0x660046);
                BitBlt(local_3c,0,0,local_6c,local_68,local_7c,0,0,0x8800c6);
                BitBlt(local_3c,0,0,local_6c,local_68,local_4c,0,0,0x660046);
                pvVar9 = *(void **)(local_28 + 4);
              }
              CDC::SelectGdiObject(local_3c,pvVar9);
              CDC::SelectGdiObject(local_7c,*(void **)(pCVar6 + 4));
              CDC::SelectGdiObject(local_4c,*(void **)(pCVar5 + 4));
            }
          }
        }
      }
    }
  }
  local_8._0_1_ = 3;
  local_58 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_58);
  local_8._0_1_ = 2;
  local_30 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_30);
  local_8._0_1_ = 1;
  CDC::~CDC((CDC *)&local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC((CDC *)&local_80);
  local_8 = 0xffffffff;
  CDC::~CDC((CDC *)&local_50);
  FUN_100f90cf();
  return;
}

