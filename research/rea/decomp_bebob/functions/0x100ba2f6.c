// rea decompile_all
// name: FUN_100ba2f6
// address: 0x100ba2f6
// body: available
// range: 0x100ba2f6-0x100ba431 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_100ba2f6(void *this,undefined4 *param_1,int param_2)

{
  CMFCRibbonButtonsGroup *this_00;
  CMFCRibbonCategory *this_01;
  double dVar1;
  CObject *pCVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_10133868,
                              *(CObject **)((int)this + 0x30));
  if (pCVar2 == (CObject *)0x0) {
    if (*(int *)((int)this + 0xfc) == 0) {
      if (param_2 == 0) {
        iVar4 = *(int *)((int)this + 0xe8);
      }
      else {
        iVar4 = *(int *)((int)this + 0xe4);
      }
      if (-1 < iVar4) {
        this_00 = *(CMFCRibbonButtonsGroup **)((int)this + 0x34);
        if ((this_00 != (CMFCRibbonButtonsGroup *)0x0) && (0 < *(int *)(this_00 + 0xc4))) {
          CMFCRibbonButtonsGroup::GetImageSize(this_00);
          return param_1;
        }
        this_01 = *(CMFCRibbonCategory **)((int)this + 0x2c);
        if (this_01 != (CMFCRibbonCategory *)0x0) {
          if (param_2 == 0) {
            iVar3 = *(int *)(this_01 + 0x508);
          }
          else {
            iVar3 = *(int *)(this_01 + 0x3fc);
          }
          if (iVar4 < iVar3) {
            CMFCRibbonCategory::GetImageSize(this_01,(int)param_1);
            return param_1;
          }
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (param_2 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = 0x10;
      }
      dVar1 = 1.0;
      if (DAT_10166c84 != 0) {
        dVar1 = _DAT_10166c7c;
      }
      uVar5 = uVar8;
      if (dVar1 != 1.0) {
        uVar6 = FUN_100f8660(uVar8,extraout_EDX);
        uVar7 = FUN_100f8660(extraout_ECX,(int)(uVar6 >> 0x20));
        uVar8 = (undefined4)uVar7;
        uVar5 = (int)uVar6;
      }
      *param_1 = uVar5;
      param_1[1] = uVar8;
    }
  }
  else {
    (**(code **)(*(int *)pCVar2 + 0x70))(param_1,param_2);
  }
  return param_1;
}

