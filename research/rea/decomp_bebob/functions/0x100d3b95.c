// rea decompile_all
// name: CDialogEx::OnEraseBkgnd
// address: 0x100d3b95
// body: available
// range: 0x100d3b95-0x100d3cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogEx::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDialogEx::OnEraseBkgnd(CDialogEx *this,CDC *param_1)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  LONG LVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((this == (CDialogEx *)0xffffff60) || (*(int *)(this + 0xa4) == 0)) &&
     (*(int *)(this + 0x94) == 0)) {
    CWnd::Default((CWnd *)this);
    goto LAB_100d3cdf;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if ((*(int *)(this + 0xa8) != 0) || (*(int *)(this + 0x94) == 0)) {
    if ((this == (CDialogEx *)0xffffff60) || (*(HBRUSH *)(this + 0xa4) == (HBRUSH)0x0)) {
      CWnd::Default((CWnd *)this);
    }
    else {
      FillRect(*(HDC *)(param_1 + 4),&local_18,*(HBRUSH *)(this + 0xa4));
    }
  }
  if (*(int *)(this + 0x94) == 0) goto LAB_100d3cdf;
  iVar2 = *(int *)(this + 0xa8);
  if (iVar2 == 0) {
    if (local_18.left < local_18.right - local_18.left) {
      iVar2 = local_18.bottom - local_18.top;
      LVar1 = local_18.left;
      do {
        LVar4 = local_18.top;
        if (local_18.top < iVar2) {
          do {
            CDC::DrawState(param_1,LVar1,LVar4,*(undefined4 *)(this + 0x98),
                           *(undefined4 *)(this + 0x9c),*(undefined4 *)(this + 0x94),0,0);
            LVar4 = LVar4 + *(int *)(this + 0x9c);
            iVar2 = local_18.bottom - local_18.top;
          } while (LVar4 < iVar2);
        }
        LVar1 = LVar1 + *(int *)(this + 0x98);
      } while (LVar1 < local_18.right - local_18.left);
    }
    goto LAB_100d3cdf;
  }
  iVar3 = local_18.top;
  if (iVar2 == 2) {
    LVar1 = local_18.right - *(int *)(this + 0x98);
  }
  else {
    LVar1 = local_18.left;
    if (iVar2 != 3) {
      if (iVar2 != 4) goto LAB_100d3c68;
      LVar1 = local_18.right - *(int *)(this + 0x98);
    }
    iVar3 = local_18.bottom - *(int *)(this + 0x9c);
  }
LAB_100d3c68:
  CDC::DrawState(param_1,LVar1,iVar3,*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x9c),
                 *(int *)(this + 0x94),0,0);
LAB_100d3cdf:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

