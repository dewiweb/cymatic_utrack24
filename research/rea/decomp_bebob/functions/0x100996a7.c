// rea decompile_all
// name: CToolTipCtrl::GetText
// address: 0x100996a7
// body: available
// range: 0x100996a7-0x1009976a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009974e to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::GetText(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,class CWnd *,unsigned int)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall
CToolTipCtrl::GetText
          (CToolTipCtrl *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,CWnd *param_2,
          uint param_3)

{
  errno_t eVar1;
  int iVar2;
  tagTOOLINFOW local_44 [36];
  void *local_20;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  FillInToolInfo(this,local_44,param_2,param_3);
  local_14 = 0x4d;
  uStack_10 = 0x430046;
  uStack_c = 0;
  local_20 = (void *)FUN_10002140(param_1,0x405);
  _memset(local_20,0,0x800);
  eVar1 = _memcpy_s((void *)((int)local_20 + 0x800),10,&local_14,10);
  FUN_10004c40(eVar1);
  SendMessageW(*(HWND *)(this + 0x20),0x438,0,(LPARAM)local_44);
  iVar2 = _memcmp(&local_14,(void *)((int)local_20 + 0x800),10);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009030();
  }
  ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)param_1,-1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

