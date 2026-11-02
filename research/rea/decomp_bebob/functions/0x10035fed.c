// rea decompile_all
// name: CMFCVisualManager::DoDrawHeaderSortArrow
// address: 0x10035fed
// body: available
// range: 0x10035fed-0x1003610c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCVisualManager::DoDrawHeaderSortArrow(class CDC *,class
   CRect,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::DoDrawHeaderSortArrow
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  ulong uVar1;
  CPen *pCVar2;
  undefined1 local_28 [8];
  undefined **local_20 [2];
  undefined **local_18 [4];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10035ff9;
  uVar1 = DAT_10166abc;
  if (param_8 == 0) {
    uVar1 = DAT_10166af4;
  }
  CPen::CPen((CPen *)local_20,0,1,uVar1);
  local_8 = 0;
  uVar1 = DAT_10166ac8;
  if (param_8 == 0) {
    uVar1 = DAT_10166af8;
  }
  CPen::CPen((CPen *)local_18,0,1,uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  pCVar2 = CDC::SelectObject(param_1,(CPen *)local_20);
  if (param_7 == 0) {
    CDC::MoveTo(param_1,(int)local_28,param_5);
    CDC::LineTo(param_1,(param_5 + param_3) / 2,param_6);
    CDC::SelectObject(param_1,(CPen *)local_18);
    CDC::LineTo(param_1,param_3,param_4);
  }
  else {
    CDC::MoveTo(param_1,(int)local_28,param_3);
    CDC::LineTo(param_1,param_5,param_6);
    CDC::LineTo(param_1,(param_5 + param_3) / 2,param_4);
    CDC::SelectObject(param_1,(CPen *)local_18);
    param_5 = param_3;
    param_4 = param_6;
  }
  CDC::LineTo(param_1,param_5,param_4);
  CDC::SelectObject(param_1,pCVar2);
  local_8 = local_8 & 0xffffff00;
  local_18[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_18);
  local_8 = 0xffffffff;
  local_20[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_20);
  return;
}

