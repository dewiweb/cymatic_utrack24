// rea decompile_all
// name: CDockablePane::OnSlide
// address: 0x1007b830
// body: available
// range: 0x1007b830-0x1007b9b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::OnSlide(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::OnSlide(CDockablePane *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  CWnd *pCVar3;
  ulong uVar4;
  uint uVar5;
  tagRECT *ptVar6;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x1d8))();
  if (iVar1 == 0) {
    BVar2 = IsWindow(*(HWND *)(this + 0x33c));
    if (BVar2 == 0) goto LAB_1007b9a2;
  }
  pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  uVar4 = CWnd::GetExStyle(pCVar3);
  uVar5 = uVar4 & 0x400000;
  *(int *)(this + 0x2f0) = *(int *)(this + 0x2f0) + 1;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  ptVar6 = &local_18;
  pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  CWnd::ScreenToClient(pCVar3,ptVar6);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x33c),&local_28);
  ptVar6 = &local_28;
  pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  CWnd::ScreenToClient(pCVar3,ptVar6);
  if (*(int *)(this + 0x314) == 1) {
    OffsetRectForSliding(this,(CRect *)&local_18,param_1,uVar5);
    OffsetRectForSliding(this,(CRect *)&local_28,param_1,uVar5);
    if (param_1 != 0) {
      CalcCorrectOffset(this,&local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,
                        uVar5);
      OffsetRect(&local_18,local_30,local_2c);
      OffsetRect(&local_28,local_30,local_2c);
    }
  }
  else {
    CalcRectForSliding(this,(CRect *)&local_18,(CRect *)&local_28,param_1);
  }
  (**(code **)(*(int *)this + 0x234))
            (0,local_18.left,local_18.top,local_18.right - local_18.left,
             local_18.bottom - local_18.top,0x14,0);
  SetWindowPos(*(HWND *)(this + 0x33c),(HWND)0x0,local_28.left,local_28.top,
               local_28.right - local_28.left,local_28.bottom - local_28.top,0x14);
LAB_1007b9a2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

