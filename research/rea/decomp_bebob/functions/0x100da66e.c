// rea decompile_all
// name: CPreviewView::OnDisplayPageNumber
// address: 0x100da66e
// body: available
// range: 0x100da66e-0x100da745 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewView::OnDisplayPageNumber(unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewView::OnDisplayPageNumber(CPreviewView *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  wchar_t *local_b8;
  wchar_t local_b4 [86];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb0;
  local_8 = 0x100da67d;
  iVar1 = FUN_1000c31d();
  iVar1 = *(int *)(iVar1 + 0x20);
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&local_b8,(int *)ppuVar2);
  local_8 = 0;
  iVar3 = AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_b8,*(wchar_t **)(*(int *)(this + 0x158) + 0x1c),
                              (uint)(param_2 != 1),L'\n');
  if (iVar3 != 0) {
    if ((param_2 != 1) == 0) {
      iVar3 = _swprintf_s(local_b4,0x50,local_b8,param_1);
    }
    else {
      iVar3 = _swprintf_s(local_b4,0x50,local_b8,param_1,(param_1 - 1) + param_2);
    }
    if (0 < iVar3) {
      SendMessageW(*(HWND *)(iVar1 + 0x20),0x362,0,(LPARAM)local_b4);
    }
  }
  FUN_10001030((undefined4 *)(local_b8 + -8));
  FUN_100f90cf();
  return;
}

