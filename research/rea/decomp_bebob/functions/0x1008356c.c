// rea decompile_all
// name: CMFCToolBarImages::TransparentBlt
// address: 0x1008356c
// body: available
// range: 0x1008356c-0x10083814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static void __stdcall CMFCToolBarImages::TransparentBlt(struct HDC__
   *,int,int,int,int,class CDC *,int,int,unsigned long,int,int)
   
   Library: Visual Studio 2010 Release */

void CMFCToolBarImages::TransparentBlt
               (HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,CDC *param_6,
               int param_7,int param_8,ulong param_9,int param_10,int param_11)

{
  HDC pHVar1;
  BOOL BVar2;
  HBITMAP pHVar3;
  CGdiObject *pCVar4;
  CGdiObject *pCVar5;
  CDC local_58 [4];
  HDC__ *local_54;
  CDC local_48 [4];
  HDC local_44;
  CDC local_38 [4];
  HDC__ *local_34;
  undefined **local_28;
  void *local_24;
  undefined **local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10083578;
  local_18 = param_10;
  if (param_10 == -1) {
    local_18 = param_4;
  }
  local_14 = param_11;
  if (param_11 == -1) {
    local_14 = param_5;
  }
  if (DAT_10168920 == 0) {
    if (param_6 == (CDC *)0x0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(param_6 + 4);
    }
    BVar2 = ::TransparentBlt(param_1,param_2,param_3,local_18,local_14,pHVar1,param_7,param_8,
                             param_4,param_5,param_9);
    if (BVar2 != 0) {
      return;
    }
  }
  FUN_1001714b((undefined4 *)local_48);
  local_8 = 0;
  FUN_1001714b((undefined4 *)local_38);
  local_8._0_1_ = 1;
  FUN_1001714b((undefined4 *)local_58);
  local_8._0_1_ = 2;
  CDC::Attach(local_48,param_1);
  pHVar1 = CreateCompatibleDC(local_44);
  CDC::Attach(local_58,pHVar1);
  local_24 = (void *)0x0;
  local_28 = CBitmap::vftable;
  local_8._0_1_ = 3;
  pHVar1 = CreateCompatibleDC(local_44);
  CDC::Attach(local_38,pHVar1);
  local_1c = (void *)0x0;
  local_20 = CBitmap::vftable;
  local_8 = CONCAT31(local_8._1_3_,4);
  pHVar3 = CreateCompatibleBitmap(local_44,local_18,local_14);
  CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar3);
  pCVar4 = CDC::SelectGdiObject(local_34,local_1c);
  if ((param_10 == -1) || ((param_10 == param_4 && (param_11 == param_5)))) {
    if (param_6 == (CDC *)0x0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(param_6 + 4);
    }
    BitBlt(local_34,0,0,param_4,param_5,pHVar1,param_7,param_8,0xcc0020);
  }
  else {
    if (param_6 == (CDC *)0x0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(param_6 + 4);
    }
    StretchBlt(local_34,0,0,param_10,param_11,pHVar1,param_7,param_8,param_4,param_5,0xcc0020);
  }
  pHVar3 = CreateBitmap(local_18,local_14,1,1,(void *)0x0);
  CMenu::Attach((CMenu *)&local_28,(HMENU__ *)pHVar3);
  pCVar5 = CDC::SelectGdiObject(local_54,local_24);
  CDC::SetBkColor(local_38,param_9);
  BitBlt(local_54,0,0,local_18,local_14,local_34,0,0,0xcc0020);
  CDC::SetBkColor(local_38,0);
  CDC::SetTextColor(local_38,0xffffff);
  BitBlt(local_34,0,0,local_18,local_14,local_54,0,0,0x8800c6);
  CDC::SetBkColor(local_48,0xffffff);
  CDC::SetTextColor(local_48,0);
  BitBlt(local_44,param_2,param_3,local_18,local_14,local_54,0,0,0x8800c6);
  BitBlt(local_44,param_2,param_3,local_18,local_14,local_34,0,0,0xee0086);
  if (pCVar5 != (CGdiObject *)0x0) {
    CDC::SelectGdiObject(local_54,*(void **)(pCVar5 + 4));
  }
  if (pCVar4 != (CGdiObject *)0x0) {
    CDC::SelectGdiObject(local_34,*(void **)(pCVar4 + 4));
  }
  CDC::Detach(local_48);
  local_8._0_1_ = 3;
  local_20 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_20);
  local_8._0_1_ = 2;
  local_28 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_28);
  local_8._0_1_ = 1;
  CDC::~CDC(local_58);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC(local_38);
  local_8 = 0xffffffff;
  CDC::~CDC(local_48);
  return;
}

