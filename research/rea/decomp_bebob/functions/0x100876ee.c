// rea decompile_all
// name: CMFCToolBarButton::ResetImageToDefault
// address: 0x100876ee
// body: available
// range: 0x100876ee-0x100877d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarButton::ResetImageToDefault(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarButton::ResetImageToDefault(CMFCToolBarButton *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  HMODULE pHVar5;
  undefined4 *puVar6;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100876fa;
  if ((*(int *)(this + 4) == 0) && (0 < (int)*(uint *)(this + 0x20))) {
    if ((DAT_101685b0 != (void *)0x0) &&
       (iVar2 = FUN_1006a40b(DAT_101685b0,*(uint *)(this + 0x20)), iVar2 != 0)) {
      return;
    }
    iVar2 = *(int *)(this + 0xc);
    iVar3 = CMFCToolBar::GetDefaultImage(*(uint *)(this + 0x20));
    if (iVar3 < 0) {
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 8) = 1;
        if (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0) {
          ppuVar4 = FUN_1000ad47();
          FUN_10005e00(local_14,(int *)ppuVar4);
          uVar1 = *(uint *)(this + 0x20);
          local_8 = 0;
          pHVar5 = (HMODULE)FUN_1000ac62();
          if (((pHVar5 != (HMODULE)0x0) && (iVar2 = FUN_10006200(local_14,pHVar5,uVar1), iVar2 != 0)
              ) && (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)local_14,L'\n',0), iVar2 != -1)) {
            puVar6 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                               ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)local_14,(int)&local_18);
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_10007c90(this + 0x2c,puVar6);
            FUN_10001030((undefined4 *)(local_18 + -0x10));
          }
          FUN_10001030((undefined4 *)(local_14[0] + -0x10));
        }
      }
    }
    else {
      (**(code **)(*(int *)this + 0xbc))(iVar3);
    }
  }
  return;
}

