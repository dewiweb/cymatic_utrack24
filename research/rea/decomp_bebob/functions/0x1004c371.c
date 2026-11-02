// rea decompile_all
// name: CMFCPropertyGridCtrl::get_accName
// address: 0x1004c371
// body: available
// range: 0x1004c371-0x1004c422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCPropertyGridCtrl::get_accName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMFCPropertyGridCtrl::get_accName
          (CMFCPropertyGridCtrl *this,short param_2,undefined4 param_3,int param_4,
          undefined4 param_5,int *param_6)

{
  undefined **ppuVar1;
  int iVar2;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1004c37d;
  if (param_2 != 3) goto LAB_1004c3d9;
  if (param_4 != 0) goto LAB_1004c3d9;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  if (*(int *)(local_14[0] + -0xc) == 0) {
    iVar2 = Ordinal_2(L"PropertyList");
  }
  else {
    iVar2 = Ordinal_4(local_14[0],*(int *)(local_14[0] + -0xc));
    if (iVar2 == 0) {
      do {
        FUN_10001120();
LAB_1004c3d9:
        if (*(int *)(this + 0x3c4) == 0) {
          return 0;
        }
        FUN_10006ce0(&local_18,*(short **)(*(int *)(this + 0x3c4) + 0x84));
        local_8 = 1;
        iVar2 = Ordinal_4(local_18,*(undefined4 *)(local_18 + -0xc));
      } while (iVar2 == 0);
      *param_6 = iVar2;
      local_14[0] = local_18;
      goto LAB_1004c411;
    }
  }
  *param_6 = iVar2;
LAB_1004c411:
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return 0;
}

