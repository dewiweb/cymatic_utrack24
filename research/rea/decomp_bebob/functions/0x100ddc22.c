// rea decompile_all
// name: CSmartDockingStandaloneGuide::InitImages
// address: 0x100ddc22
// body: available
// range: 0x100ddc22-0x100dddc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CSmartDockingStandaloneGuide::InitImages(class
   CSmartDockingInfo &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingStandaloneGuide::InitImages
          (CSmartDockingStandaloneGuide *this,CSmartDockingInfo *param_1)

{
  CSmartDockingInfo *pCVar1;
  HWND hwnd;
  CSmartDockingInfo *pCVar2;
  AFX_SMARTDOCK_THEME AVar3;
  CMFCVisualManager *pCVar4;
  uint uVar5;
  HBITMAP__ *pHVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  pCVar2 = param_1;
  FUN_100822ef((int)(this + 0x90));
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  FUN_100822ef((int)(this + 0x19c));
  switch(*(undefined4 *)(this + 4)) {
  case 0:
  case 4:
    iVar8 = 0;
    break;
  case 1:
  case 5:
    iVar8 = 1;
    break;
  case 2:
  case 6:
    iVar8 = 2;
    break;
  case 3:
  case 7:
    iVar8 = 3;
    break;
  case 8:
    iVar8 = 4;
    break;
  default:
    goto switchD_100ddc55_default;
  }
  pCVar1 = *(CSmartDockingInfo **)(param_1 + iVar8 * 4 + 0x38);
  local_8 = *(uint *)(param_1 + iVar8 * 4 + 0x24);
  *(uint *)(this + 0x2c0) = (uint)(local_8 == 0);
  param_1 = pCVar1;
  if ((local_8 == 0) != 0) {
    AVar3 = GetVMTheme();
    if (AVar3 == 1) {
      local_8 = *(uint *)(iVar8 * 4 + 0x10162b14);
    }
    else if (AVar3 == 2) {
      local_8 = *(uint *)(iVar8 * 4 + 0x10162b3c);
      param_1 = *(CSmartDockingInfo **)(iVar8 * 4 + 0x10162b28);
    }
  }
  *(undefined4 *)(this + 0xc0) = 0;
  *(uint *)(this + 0xc4) = (uint)(param_1 == (CSmartDockingInfo *)0x0);
  CMFCToolBarImages::Load((CMFCToolBarImages *)(this + 0x90),local_8,(HINSTANCE__ *)0x0,0);
  CMFCToolBarImages::SetSingleImage((CMFCToolBarImages *)(this + 0x90));
  CMFCToolBarImages::SetTransparentColor
            ((CMFCToolBarImages *)(this + 0x90),*(ulong *)(pCVar2 + 0x10));
  if (param_1 != (CSmartDockingInfo *)0x0) {
    *(undefined4 *)(this + 0x1cc) = 0;
    CMFCToolBarImages::Load((CMFCToolBarImages *)(this + 0x19c),(uint)param_1,(HINSTANCE__ *)0x0,0);
    CMFCToolBarImages::SetSingleImage((CMFCToolBarImages *)(this + 0x19c));
    CMFCToolBarImages::SetTransparentColor
              ((CMFCToolBarImages *)(this + 0x19c),*(ulong *)(pCVar2 + 0x10));
  }
  if (*(int *)(this + 0x2c0) == 0) {
    uVar7 = *(uint *)(pCVar2 + 0x14);
LAB_100ddd62:
    uVar5 = *(uint *)(pCVar2 + 0x18);
  }
  else {
    uVar7 = 0xffffffff;
    if (*(int *)(pCVar2 + 0x18) != -1) goto LAB_100ddd62;
    pCVar4 = CMFCVisualManager::GetInstance();
    uVar5 = (**(code **)(*(int *)pCVar4 + 0x1d0))();
  }
  if ((uVar7 != 0xffffffff) && (uVar5 != 0xffffffff)) {
    FUN_100818d7(this + 0x90,uVar7,uVar5);
  }
  if (((CSmartDockingStandaloneGuideWnd *)(this + 8) != (CSmartDockingStandaloneGuideWnd *)0x0) &&
     (hwnd = *(HWND *)(this + 0x28), hwnd != (HWND)0x0)) {
    pHVar6 = *(HBITMAP__ **)(this + 0x11c);
    if (pHVar6 == (HBITMAP__ *)0x0) {
      pHVar6 = *(HBITMAP__ **)(this + 0x118);
    }
    CSmartDockingStandaloneGuideWnd::Assign((CSmartDockingStandaloneGuideWnd *)(this + 8),pHVar6,0);
    if ((*(int *)(pCVar2 + 0x54) == 0) && (AVar3 = GetVMTheme(), AVar3 != 2)) {
      SetLayeredWindowAttributes(hwnd,*(COLORREF *)(pCVar2 + 0x10),'\0',1);
    }
  }
switchD_100ddc55_default:
  return;
}

