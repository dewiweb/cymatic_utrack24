// rea decompile_all
// name: CMFCBaseTabCtrl::SetImageList
// address: 0x10095a4f
// body: available
// range: 0x10095a4f-0x10095b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::SetImageList(unsigned int,int,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCBaseTabCtrl::SetImageList(CMFCBaseTabCtrl *this,uint param_1,int param_2,ulong param_3)

{
  CImageList *this_00;
  HBITMAP pHVar1;
  uint uVar2;
  int iVar3;
  LPCSTR in_stack_ffffffc0;
  undefined1 local_30 [8];
  int local_28;
  short local_1e;
  undefined **local_18;
  HBITMAP__ *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_14 = (HBITMAP__ *)0x0;
  local_18 = CBitmap::vftable;
  local_8 = 0;
  pHVar1 = FID_conflict_LoadBitmapA((HINSTANCE)param_1,in_stack_ffffffc0);
  if (pHVar1 == (HBITMAP)0x0) {
    iVar3 = 0;
  }
  else {
    this_00 = (CImageList *)(this + 0xa8);
    if ((this_00 != (CImageList *)0x0) && (*(int *)(this + 0xac) != 0)) {
      CImageList::DeleteImageList(this_00);
    }
    GetObjectW(local_14,0x18,local_30);
    uVar2 = (uint)(param_3 != 0xffffffff);
    if (local_1e == 8) {
      uVar2 = uVar2 | 8;
    }
    else if (local_1e == 0x10) {
      uVar2 = uVar2 | 0x10;
    }
    else if (local_1e == 0x18) {
      uVar2 = uVar2 | 0x18;
    }
    else if (local_1e == 0x20) {
      uVar2 = uVar2 | 0x20;
    }
    else {
      uVar2 = uVar2 | 4;
    }
    CImageList::Create(this_00,param_2,local_28,uVar2,0,0);
    AfxImageList_AddMasked(*(_IMAGELIST **)(this + 0xac),local_14,param_3);
    *(int *)(this + 0xb8) = local_28;
    *(int *)(this + 0xb4) = param_2;
    (**(code **)(*(int *)this + 0x174))();
    iVar3 = 1;
  }
  local_8 = 0xffffffff;
  local_18 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_18);
  return iVar3;
}

