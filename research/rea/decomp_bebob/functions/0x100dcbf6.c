// rea decompile_all
// name: CMFCRibbonLabel::OnCalcTextSize
// address: 0x100dcbf6
// body: available
// range: 0x100dcbf6-0x100dccf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonLabel::OnCalcTextSize(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonLabel::OnCalcTextSize(CMFCRibbonLabel *this,CDC *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [3];
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100dcc02;
  iVar1 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
  if ((iVar1 == 0) && (*(int *)(this + 0x94) != 0)) {
    CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)(this + 0x2c),(int)&local_34);
    if ((local_34 != 0) || (local_30 != 0)) {
      local_2c = local_30 * 2;
      piVar2 = FUN_10005e30((int *)(*(int *)(this + 4) + -0x10));
      local_8 = 0;
      local_28 = 10;
      do {
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = local_28;
        local_18 = 10000;
        iVar1 = (**(code **)(*(int *)param_1 + 0x68))(piVar2 + 4,piVar2[1],local_24,0x410);
        if ((iVar1 <= local_2c) && (iVar1 <= local_24[2] - local_24[0])) break;
        local_28 = local_28 + 10;
      } while (local_28 < 200);
      *(int *)(this + 0xac) = local_24[2] - local_24[0];
      *(int *)(this + 0xb0) = iVar1;
      FUN_10001030(piVar2);
    }
  }
  else {
    iVar3 = 0;
    iVar1 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if (iVar1 != 0) {
      iVar3 = (**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bc4);
    }
    CMFCRibbonButton::OnCalcTextSize((CMFCRibbonButton *)this,param_1);
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1 + 0x28))(iVar3);
    }
  }
  FUN_100f90cf();
  return;
}

