// rea decompile_all
// name: _AFX_CHECKLIST_STATE::_AFX_CHECKLIST_STATE
// address: 0x100e98fd
// body: available
// range: 0x100e98fd-0x100e9979 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall _AFX_CHECKLIST_STATE::_AFX_CHECKLIST_STATE(void)
   
   Library: Visual Studio 2010 Release */

_AFX_CHECKLIST_STATE * __thiscall
_AFX_CHECKLIST_STATE::_AFX_CHECKLIST_STATE(_AFX_CHECKLIST_STATE *this)

{
  void *pvVar1;
  LPCSTR in_stack_ffffffc0;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined **local_18;
  HANDLE local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  local_14 = (HANDLE)0x0;
  local_18 = CBitmap::vftable;
  local_8 = 0;
  FID_conflict_LoadBitmapA((HINSTANCE)0x7914,in_stack_ffffffc0);
  GetObjectW(local_14,0x18,local_30);
  *(int *)(this + 8) = local_2c / 3;
  *(undefined4 *)(this + 0xc) = local_28;
  pvVar1 = CGdiObject::Detach((CGdiObject *)&local_18);
  local_8 = 0xffffffff;
  *(void **)(this + 4) = pvVar1;
  *(undefined4 *)(this + 0x10) = 0;
  local_18 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_18);
  return this;
}

