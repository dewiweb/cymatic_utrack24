// rea decompile_all
// name: CMFCToolBarColorButton::OnToolHitTest
// address: 0x100aa2a9
// body: available
// range: 0x100aa2a9-0x100aa379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarColorButton::OnToolHitTest(class CWnd const
   *,struct tagTOOLINFOW *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarColorButton::OnToolHitTest
          (CMFCToolBarColorButton *this,CWnd *param_1,tagTOOLINFOW *param_2)

{
  LPCWSTR lpString2;
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  LPWSTR lpString1;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100aa2b5;
  if ((((*(uint *)(this + 0x24) & 0x40000) == 0) && (DAT_101603d8 != 0)) &&
     (param_2 != (tagTOOLINFOW *)0x0)) {
    piVar2 = FUN_10005e30((int *)(*(int *)(this + 0x2c) + -0x10));
    local_14[0] = (LPCWSTR)(piVar2 + 4);
    local_8 = 0;
    if (((*(int *)(this + 0x78) == 0) && (*(int *)(this + 0x7c) == 0)) &&
       ((*(int *)(this + 0x80) == 0 &&
        (bVar1 = Lookup(&PTR_vftable_10161da0,*(ulong *)(this + 0x70),local_14),
        CONCAT31(extraout_var,bVar1) == 0)))) {
      FUN_100022f0(local_14,L"Hex={%02X,%02X,%02X}");
    }
    lpString2 = local_14[0];
    lpString1 = _calloc(*(int *)(local_14[0] + -6) + 1,2);
    *(LPWSTR *)(param_2 + 0x24) = lpString1;
    if (lpString1 != (LPWSTR)0x0) {
      lstrcpyW(lpString1,lpString2);
      FUN_10001030((undefined4 *)(lpString2 + -8));
      return 1;
    }
    FUN_10001030((undefined4 *)(lpString2 + -8));
  }
  return 0;
}

