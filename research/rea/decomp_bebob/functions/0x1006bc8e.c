// rea decompile_all
// name: CBasePane::MoveWindow
// address: 0x1006bc8e
// body: available
// range: 0x1006bc8e-0x1006bd58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void * __thiscall CBasePane::MoveWindow(class CRect &,int,void *)
   
   Library: Visual Studio 2010 Release */

void * __thiscall CBasePane::MoveWindow(CBasePane *this,CRect *param_1,int param_2,void *param_3)

{
  int iVar1;
  CWnd *this_00;
  BOOL BVar2;
  void *pvVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  iVar1 = (**(code **)(*(int *)this + 0x16c))();
  if (iVar1 == 0) {
    this_00 = *(CWnd **)(this + 0x98);
    if (this_00 == (CWnd *)0x0) goto LAB_1006bcfd;
  }
  else {
    this_00 = (CWnd *)(**(code **)(*(int *)this + 0x224))(0);
  }
  CWnd::ScreenToClient(this_00,&local_18);
LAB_1006bcfd:
  BVar2 = EqualRect(&local_18,(RECT *)param_1);
  if (BVar2 == 0) {
    if (param_3 == (void *)0x0) {
      CWnd::MoveWindow((CWnd *)this,(tagRECT *)param_1,param_2);
    }
    else {
      DeferWindowPos(param_3,*(HWND *)(this + 0x20),(HWND)0x0,*(int *)param_1,*(int *)(param_1 + 4),
                     *(int *)(param_1 + 8) - *(int *)param_1,
                     *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4),0x14);
    }
  }
  pvVar3 = (void *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pvVar3;
}

