// rea decompile_all
// name: CMFCRibbonButton::OnCalcTextSize
// address: 0x100bc971
// body: available
// range: 0x100bc971-0x100bcbd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bca4e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonButton::OnCalcTextSize(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonButton::OnCalcTextSize(CMFCRibbonButton *this,CDC *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_3c;
  int local_38;
  wchar_t *local_34;
  CDC *local_30;
  uint local_2c;
  int *local_28;
  int local_24 [2];
  uint local_1c [5];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100bc97d;
  local_30 = param_1;
  if ((*(int *)(*(int *)(this + 4) + -0xc) == 0) ||
     (iVar2 = (**(code **)(*(int *)this + 0x1ac))(), iVar2 != 0)) {
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined4 *)(this + 0xb0) = 0;
    *(undefined4 *)(this + 0xb4) = 0;
    *(undefined4 *)(this + 0xb8) = 0;
  }
  else {
    iVar2 = CSize::operator!=((CSize *)(this + 0xac),(tagSIZE)0x0);
    if ((iVar2 == 0) || (iVar2 = CSize::operator!=((CSize *)(this + 0xb4),(tagSIZE)0x0), iVar2 == 0)
       ) {
      FUN_10006ce0(&local_34,(short *)&DAT_1012bb58);
      local_8 = 0;
      local_28 = FUN_10005e30((int *)(*(int *)(this + 4) + -0x10));
      local_28 = local_28 + 4;
      local_8 = CONCAT31(local_8._1_3_,1);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,
                 L"&&",local_34);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,
                 L'&');
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,
                 local_34,L"&");
      if ((*(int *)(this + 300) == 0) || (*(int *)(*(int *)(this + 0x14) + -0xc) == 0)) {
        puVar3 = (undefined4 *)
                 CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                             *)local_1c);
        *(undefined4 *)(this + 0xac) = *puVar3;
        *(undefined4 *)(this + 0xb0) = puVar3[1];
      }
      else {
        local_2c = (**(code **)(*(int *)param_1 + 0x28))(0x6bc4);
        if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar3 = (undefined4 *)
                 CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                             *)local_1c);
        *(undefined4 *)(this + 0xac) = *puVar3;
        *(undefined4 *)(this + 0xb0) = puVar3[1];
        (**(code **)(*(int *)param_1 + 0x28))(local_2c);
        iVar2 = 0;
        FUN_10007c90(&local_28,(undefined4 *)(this + 0x14));
        local_2c = *(uint *)(this + 0xac);
        if ((int)local_2c < (int)(local_2c * 10)) {
          do {
            local_24[0] = 0;
            local_24[1] = 0;
            local_1c[1] = 10000;
            local_1c[0] = local_2c;
            iVar4 = (**(code **)(*(int *)local_30 + 0x68))(local_28,local_28[-3],local_24,0x410);
            iVar2 = local_1c[0] - local_24[0];
            if (iVar4 <= *(int *)(this + 0xb0) * 2) break;
            local_2c = local_2c + 10;
          } while ((int)local_2c < *(int *)(this + 0xac) * 10);
        }
        else {
          iVar4 = 0;
        }
        if (iVar2 < *(int *)(this + 0xac)) {
          iVar2 = *(int *)(this + 0xac);
        }
        iVar1 = *(int *)(this + 0xb0) * 2;
        *(int *)(this + 0xac) = iVar2;
        if (iVar1 < iVar4) {
          iVar4 = iVar1;
        }
        *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + *(int *)(this + 0xc0) * 2 + iVar4;
        param_1 = local_30;
      }
      (**(code **)(*(int *)this + 0x70))(&local_3c,0);
      if ((local_3c == 0) && (local_38 == 0)) {
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined4 *)(this + 0xb8) = 0;
      }
      else {
        puVar3 = (undefined4 *)FUN_100bc498(this,local_1c,param_1,1);
        *(undefined4 *)(this + 0xb4) = *puVar3;
        *(undefined4 *)(this + 0xb8) = puVar3[1];
      }
      FUN_10001030(local_28 + -4);
      FUN_10001030((undefined4 *)(local_34 + -8));
    }
  }
  FUN_100f90cf();
  return;
}

