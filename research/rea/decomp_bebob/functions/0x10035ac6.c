// rea decompile_all
// name: CMFCVisualManager::OnFillMiniFrameCaption
// address: 0x10035ac6
// body: available
// range: 0x10035ac6-0x10035b44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnFillMiniFrameCaption(class CDC
   *,class CRect,class CPaneFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall CMFCVisualManager::OnFillMiniFrameCaption(undefined4 param_1_00,int param_1)

{
  CObject *pCVar1;
  ulong uVar2;
  int *in_stack_00000018;
  int in_stack_0000001c;
  undefined **local_c;
  HBRUSH local_8;
  
  pCVar1 = (CObject *)(**(code **)(*in_stack_00000018 + 0x1a4))();
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_1012c6f8,pCVar1);
  if (pCVar1 != (CObject *)0x0) {
    in_stack_0000001c = 1;
  }
  uVar2 = DAT_10166b14;
  if (in_stack_0000001c == 0) {
    uVar2 = DAT_10166b18;
  }
  CBrush::CBrush((CBrush *)&local_c,uVar2);
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,local_8);
  uVar2 = DAT_10166b0c;
  if (in_stack_0000001c == 0) {
    uVar2 = DAT_10166b1c;
  }
  local_c = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_c);
  return uVar2;
}

