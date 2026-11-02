// rea decompile_all
// name: CFrameImpl::GetCaptionRect
// address: 0x10060fd0
// body: available
// range: 0x10060fd0-0x100610f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CRect __thiscall CFrameImpl::GetCaptionRect(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::GetCaptionRect(CFrameImpl *this)

{
  BOOL BVar1;
  ulong uVar2;
  int iVar3;
  int *in_stack_00000004;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = GetSystemMetrics(0x21);
  local_20 = GetSystemMetrics(0x20);
  BVar1 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if ((BVar1 != 0) || (uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0)), (uVar2 & 0x1000000) != 0))
  {
    local_20 = 0;
    local_1c = 0;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_18);
  CWnd::ScreenToClient(*(CWnd **)(this + 0xb0),&local_18);
  BVar1 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  iVar3 = local_1c;
  if (BVar1 == 0) {
    iVar3 = GetSystemMetrics(4);
    iVar3 = iVar3 + local_1c;
  }
  OffsetRect(&local_18,local_20,iVar3);
  iVar3 = GetSystemMetrics(4);
  *in_stack_00000004 = local_18.left + local_20;
  in_stack_00000004[1] = local_18.top + local_1c;
  in_stack_00000004[3] = iVar3 + local_18.top + local_1c;
  in_stack_00000004[2] = local_18.right - local_20;
  BVar1 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if (BVar1 != 0) {
    iVar3 = GetSystemMetrics(0x21);
    in_stack_00000004[1] = in_stack_00000004[1] + iVar3;
    iVar3 = GetSystemMetrics(0x20);
    in_stack_00000004[2] = in_stack_00000004[2] - iVar3;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

