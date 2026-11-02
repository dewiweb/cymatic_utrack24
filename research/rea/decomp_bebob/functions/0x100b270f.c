// rea decompile_all
// name: FUN_100b270f
// address: 0x100b270f
// body: available
// range: 0x100b270f-0x100b28e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100b270f(void *this,CDC *param_1,UINT param_2,int param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  bool bVar2;
  CObject *pCVar3;
  CMFCVisualManager *pCVar4;
  CMFCRibbonBar *this_00;
  ulong uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar6;
  CObject *pCVar7;
  int local_c;
  int local_8;
  
  pCVar7 = *(CObject **)((int)this + 0x30);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonDefaultPanelButton_10132f88,pCVar7);
  if (pCVar3 == (CObject *)0x0) {
    if (*(int *)((int)this + 0x164) == 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x260))(param_1,param_3,param_4,param_5,param_6,0,0,0);
    }
    else {
      dVar1 = 1.0;
      local_c = 0x10;
      local_8 = 0x10;
      if (DAT_10166c84 != 0) {
        dVar1 = _DAT_10166c7c;
      }
      if (dVar1 != 1.0) {
        uVar6 = FUN_100f8660(pCVar7,extraout_EDX);
        local_c = (int)uVar6;
        uVar6 = FUN_100f8660(extraout_ECX,(int)(uVar6 >> 0x20));
        local_8 = (int)uVar6;
      }
      bVar2 = false;
      this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar(this);
      if ((this_00 != (CMFCRibbonBar *)0x0) &&
         (uVar5 = CWnd::GetExStyle((CWnd *)this_00), (uVar5 & 0x400000) != 0)) {
        bVar2 = true;
      }
      dVar1 = _DAT_10166c7c;
      if (DAT_10166c84 == 0) {
        dVar1 = 1.0;
      }
      if ((dVar1 != 1.0) || (bVar2)) {
        param_2 = 3;
        if (bVar2) {
          param_2 = 0x13;
        }
        if (param_1 == (CDC *)0x0) {
          param_1 = (CDC *)0x0;
        }
        else {
          param_1 = *(CDC **)(param_1 + 4);
        }
        DrawIconEx((HDC)param_1,(param_3 + param_5) / 2 - local_c / 2,
                   (param_6 + param_4) / 2 - local_8 / 2,*(HICON *)((int)this + 0x164),local_c,
                   local_8,0,(HBRUSH)0x0,param_2);
      }
      else {
        CDC::DrawState(param_1,(param_3 + param_5) / 2 - local_c / 2,
                       (param_6 + param_4) / 2 - local_8 / 2,local_c,local_8,
                       *(undefined4 *)((int)this + 0x164),0,0);
      }
    }
  }
  else {
    (**(code **)(*(int *)pCVar3 + 0x7c))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

