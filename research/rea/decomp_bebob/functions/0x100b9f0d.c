// rea decompile_all
// name: CMFCShowAllButton::OnToolHitTest
// address: 0x100b9f0d
// body: available
// range: 0x100b9f0d-0x100b9fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCShowAllButton::OnToolHitTest(class CWnd const *,struct
   tagTOOLINFOW *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCShowAllButton::OnToolHitTest(CMFCShowAllButton *this,CWnd *param_1,tagTOOLINFOW *param_2)

{
  tagTOOLINFOW *ptVar1;
  uint uVar2;
  undefined **ppuVar3;
  LPWSTR lpString1;
  CMFCAcceleratorKey local_24 [8];
  tagACCEL local_1c;
  LPCWSTR local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  ptVar1 = param_2;
  uStack_4 = 0x14;
  local_8 = 0x100b9f19;
  if (param_2 == (tagTOOLINFOW *)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&param_2,(int *)ppuVar3);
    local_8 = 0;
    local_1c.key = 0x28;
    local_1c.fVirt = '\t';
    CMFCAcceleratorKey::CMFCAcceleratorKey(local_24,&local_1c);
    local_8._0_1_ = 1;
    CMFCAcceleratorKey::Format
              (local_24,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &param_2);
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)local_14,0x3e99);
    lpString1 = _calloc(*(int *)(local_14[0] + -6) + 1,2);
    *(LPWSTR *)(ptVar1 + 0x24) = lpString1;
    if (lpString1 != (LPWSTR)0x0) {
      lstrcpyW(lpString1,local_14[0]);
      *(undefined4 *)(ptVar1 + 0xc) = 0;
      FUN_10001030((undefined4 *)(local_14[0] + -8));
    }
    else {
      FUN_10001030((undefined4 *)(local_14[0] + -8));
    }
    uVar2 = (uint)(lpString1 != (LPWSTR)0x0);
    local_8 = local_8 & 0xffffff00;
    FUN_100c185e((undefined4 *)local_24);
    FUN_10001030((undefined4 *)(param_2 + -0x10));
  }
  return uVar2;
}

