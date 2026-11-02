// rea decompile_all
// name: CSmartDockingStandaloneGuide::Create
// address: 0x100df1a7
// body: available
// range: 0x100df1a7-0x100df2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CSmartDockingStandaloneGuide::Create(enum
   CSmartDockingStandaloneGuide::SDMarkerPlace,class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingStandaloneGuide::Create
          (CSmartDockingStandaloneGuide *this,SDMarkerPlace param_1,CWnd *param_2)

{
  CSmartDockingStandaloneGuideWnd *this_00;
  bool bVar1;
  AFX_SMARTDOCK_THEME AVar2;
  HRGN__ *pHVar3;
  HBITMAP__ *pHVar4;
  HWND__ *pHVar5;
  int iVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(SDMarkerPlace *)(this + 4) = param_1;
  if (DAT_10168164 == 0) {
    AVar2 = GetVMTheme();
    bVar1 = false;
    if (AVar2 != 2) goto LAB_100df1e8;
  }
  bVar1 = true;
LAB_100df1e8:
  (**(code **)(*(int *)this + 0x24))(&DAT_10168110);
  pHVar3 = CMFCToolBarImages::CreateRegionFromImage(*(HBITMAP__ **)(this + 0x118),DAT_10168120);
  CMenu::Attach((CMenu *)(this + 0x2a8),(HMENU__ *)pHVar3);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetRgnBox(*(HRGN *)(this + 0x2ac),&local_18);
  *(LONG *)(this + 0x2b0) = local_18.right - local_18.left;
  *(LONG *)(this + 0x2b4) = local_18.bottom - local_18.top;
  pHVar4 = *(HBITMAP__ **)(this + 0x11c);
  if (pHVar4 == (HBITMAP__ *)0x0) {
    pHVar4 = *(HBITMAP__ **)(this + 0x118);
  }
  if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  this_00 = (CSmartDockingStandaloneGuideWnd *)(this + 8);
  CSmartDockingStandaloneGuideWnd::Create
            (this_00,&local_18,pHVar4,(HRGN__ *)0x0,param_2,*(int *)(this + 0x2c0),iVar6);
  CWnd::ModifyStyleEx((CWnd *)this_00,0,0x80000,0);
  if (!bVar1) {
    if (this_00 == (CSmartDockingStandaloneGuideWnd *)0x0) {
      pHVar5 = (HWND__ *)0x0;
    }
    else {
      pHVar5 = *(HWND__ **)(this + 0x28);
    }
    AFX_GLOBAL_DATA::SetLayeredAttrib((AFX_GLOBAL_DATA *)&DAT_10166aa0,pHVar5,DAT_10168120,'\0',1);
  }
  *(undefined4 *)(this + 700) = 1;
  CWnd::ModifyStyleEx((CWnd *)this_00,0,8,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

