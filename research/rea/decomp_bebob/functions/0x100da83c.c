// rea decompile_all
// name: CPreviewView::OnEraseBkgnd
// address: 0x100da83c
// body: available
// range: 0x100da83c-0x100da8cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CPreviewView::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPreviewView::OnEraseBkgnd(CPreviewView *this,CDC *param_1)

{
  DWORD DVar1;
  CPen *pCVar2;
  int iVar3;
  undefined **local_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100da848;
  DVar1 = GetSysColor(0xc);
  CBrush::CBrush((CBrush *)local_2c,DVar1);
  local_8 = 0;
  pCVar2 = CDC::SelectObject(param_1,(CPen *)local_2c);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  (**(code **)(*(int *)param_1 + 0x50))(&local_24);
  PatBlt(*(HDC *)(param_1 + 4),local_24,local_20,local_1c - local_24,local_18 - local_20,0xf00021);
  CDC::SelectObject(param_1,pCVar2);
  local_8 = 0xffffffff;
  local_2c[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_2c);
  iVar3 = FUN_100f90cf();
  return iVar3;
}

