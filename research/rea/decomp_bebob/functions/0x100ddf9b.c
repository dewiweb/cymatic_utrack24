// rea decompile_all
// name: CSmartDockingStandaloneGuide::IsPtIn
// address: 0x100ddf9b
// body: available
// range: 0x100ddf9b-0x100de04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CSmartDockingStandaloneGuide::IsPtIn(class CPoint)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CSmartDockingStandaloneGuide::IsPtIn(CSmartDockingStandaloneGuide *this,int param_2,int param_3)

{
  BOOL BVar1;
  HRGN pHVar2;
  undefined **local_18;
  HRGN local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100ddfa7;
  if (((this != (CSmartDockingStandaloneGuide *)0xfffffff8) && (*(int *)(this + 0x28) != 0)) &&
     (BVar1 = IsWindowVisible(*(HWND *)(this + 0x28)), BVar1 != 0)) {
    ScreenToClient(*(HWND *)(this + 0x28),(LPPOINT)&param_2);
    if (*(int *)(this + 700) != 0) {
      BVar1 = PtInRegion(*(HRGN *)(this + 0x2ac),param_2,param_3);
      return BVar1;
    }
    local_14 = (HRGN)0x0;
    local_18 = CRgn::vftable;
    local_8 = 0;
    pHVar2 = CreateRectRgn(0,0,0,0);
    CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar2);
    GetWindowRgn(*(HWND *)(this + 0x28),local_14);
    BVar1 = PtInRegion(local_14,param_2,param_3);
    local_8 = 0xffffffff;
    local_18 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
    return BVar1;
  }
  return 0;
}

