// rea decompile_all
// name: CSmartDockingGroupGuide::Create
// address: 0x100dda41
// body: available
// range: 0x100dda41-0x100ddba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CSmartDockingGroupGuide::Create(enum
   CSmartDockingStandaloneGuide::SDMarkerPlace,class CSmartDockingGroupGuidesManager *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingGroupGuide::Create
          (CSmartDockingGroupGuide *this,SDMarkerPlace param_1,
          CSmartDockingGroupGuidesManager *param_2)

{
  int iVar1;
  AFX_SMARTDOCK_THEME AVar2;
  CMFCVisualManager *pCVar3;
  HPEN pHVar4;
  int iVar5;
  HRGN__ *pHVar6;
  int iVar7;
  
  *(SDMarkerPlace *)(this + 4) = param_1;
  *(CSmartDockingGroupGuidesManager **)(this + 0x2c4) = param_2;
  (**(code **)(*(int *)this + 0x24))(&DAT_10168110);
  if (*(int *)(this + 0x2c0) != 0) {
    AVar2 = GetVMTheme();
    if (AVar2 == 1) {
      DAT_1016811c = 9;
      DAT_10168114 = 0x58;
      DAT_10168118 = DAT_10168114;
    }
    else if (AVar2 == 2) {
      DAT_1016811c = 5;
      DAT_10168114 = 0x6e;
      DAT_10168118 = DAT_10168114;
    }
  }
  pCVar3 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar3 + 0x1cc))(&param_1,this + 0x2c8);
  pHVar4 = CreatePen(0,1,*(COLORREF *)(this + 0x2c8));
  CMenu::Attach((CMenu *)(this + 0x2cc),(HMENU__ *)pHVar4);
  pHVar4 = CreatePen(0,1,0xca7041);
  CMenu::Attach((CMenu *)(this + 0x2d4),(HMENU__ *)pHVar4);
  iVar1 = DAT_10168118;
  iVar7 = *(int *)(this + 4);
  iVar5 = *(int *)(this + 0xe0);
  if (iVar7 == 4) {
    *(undefined4 *)(this + 0x2dc) = 0;
  }
  else {
    if (iVar7 == 5) {
      iVar5 = DAT_10168114 - iVar5;
    }
    else {
      if (iVar7 == 6) {
        iVar5 = DAT_10168114 - iVar5;
        *(undefined4 *)(this + 0x2e0) = 0;
        *(int *)(this + 0x2dc) = iVar5 / 2;
        goto LAB_100ddb6b;
      }
      if (iVar7 == 7) {
        iVar7 = DAT_10168118 - *(int *)(this + 0xe4);
        *(int *)(this + 0x2dc) = (DAT_10168114 - iVar5) / 2;
        *(int *)(this + 0x2e0) = iVar7;
        goto LAB_100ddb6b;
      }
      if (iVar7 != 8) goto LAB_100ddb6b;
      iVar5 = (DAT_10168114 - iVar5) / 2;
    }
    *(int *)(this + 0x2dc) = iVar5;
  }
  *(int *)(this + 0x2e0) = (iVar1 - *(int *)(this + 0xe4)) / 2;
LAB_100ddb6b:
  pHVar6 = CMFCToolBarImages::CreateRegionFromImage(*(HBITMAP__ **)(this + 0x118),DAT_10168120);
  CMenu::Attach((CMenu *)(this + 0x2a8),(HMENU__ *)pHVar6);
  OffsetRgn(*(HRGN *)(this + 0x2ac),*(int *)(this + 0x2dc),*(int *)(this + 0x2e0));
  return;
}

