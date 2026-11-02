// rea decompile_all
// name: CMFCToolBarImages::CreateRegionFromImage
// address: 0x10083815
// body: available
// range: 0x10083815-0x10083959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static struct HRGN__ * __stdcall CMFCToolBarImages::CreateRegionFromImage(struct
   HBITMAP__ *,unsigned long)
   
   Library: Visual Studio 2010 Release */

HRGN__ * CMFCToolBarImages::CreateRegionFromImage(HBITMAP__ *param_1,ulong param_2)

{
  int iVar1;
  HDC pHVar2;
  HRGN pHVar3;
  COLORREF CVar4;
  HRGN__ *pHVar5;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  CDC local_40 [4];
  HDC local_3c;
  undefined **local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  HGDIOBJ local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10083821;
  if ((param_1 != (HBITMAP__ *)0x0) && (iVar1 = GetObjectW(param_1,0x18,local_58), iVar1 != 0)) {
    FUN_1001714b((undefined4 *)local_40);
    local_8 = 0;
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_40,pHVar2);
    local_20 = SelectObject(local_3c,param_1);
    local_18 = local_54;
    local_1c = local_50;
    local_24 = 0;
    local_28 = CRgn::vftable;
    local_8 = CONCAT31(local_8._1_3_,1);
    pHVar3 = CreateRectRgn(0,0,local_54,local_50);
    CMenu::Attach((CMenu *)&local_28,(HMENU__ *)pHVar3);
    local_14 = 0;
    if (0 < local_1c) {
      do {
        param_1 = (HBITMAP__ *)0x0;
        if (0 < local_18) {
          do {
            CVar4 = GetPixel(local_3c,(int)param_1,local_14);
            if (CVar4 == param_2) {
              local_2c = 0;
              local_30 = CRgn::vftable;
              local_8._0_1_ = 2;
              pHVar3 = CreateRectRgn((int)param_1,local_14,(int)((int)&param_1->unused + 1),
                                     local_14 + 1);
              CMenu::Attach((CMenu *)&local_30,(HMENU__ *)pHVar3);
              CRgn::CombineRgn((CRgn *)&local_28,(CRgn *)&local_28,(CRgn *)&local_30,4);
              local_8 = CONCAT31(local_8._1_3_,1);
              local_30 = CRgn::vftable;
              CImageList::~CImageList((CImageList *)&local_30);
            }
            param_1 = (HBITMAP__ *)((int)&param_1->unused + 1);
          } while ((int)param_1 < local_18);
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_1c);
    }
    if (local_20 != (HGDIOBJ)0x0) {
      SelectObject(local_3c,local_20);
    }
    pHVar5 = CGdiObject::Detach((CGdiObject *)&local_28);
    local_8 = local_8 & 0xffffff00;
    local_28 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_28);
    local_8 = 0xffffffff;
    CDC::~CDC(local_40);
    return pHVar5;
  }
  return (HRGN__ *)0x0;
}

