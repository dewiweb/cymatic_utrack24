// rea decompile_all
// name: CWnd::RunModalLoop
// address: 0x10010a5e
// body: available
// range: 0x10010a5e-0x10010ba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::RunModalLoop(unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  HWND hWnd;
  LPMSG lpMsg;
  LRESULT LVar4;
  int iVar5;
  BOOL BVar6;
  int local_c;
  
  bVar2 = true;
  local_c = 0;
  if ((param_1 & 4) != 0) {
    uVar3 = GetExStyle(this);
    bVar1 = true;
    if ((uVar3 & 0x10000000) == 0) goto LAB_10010a8e;
  }
  bVar1 = false;
LAB_10010a8e:
  hWnd = GetParent(*(HWND *)(this + 0x20));
  *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 0x18;
  lpMsg = (LPMSG)FUN_1000c326();
LAB_10010b19:
  while ((!bVar2 || (BVar6 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0), BVar6 != 0))) {
    do {
      iVar5 = FUN_1000c57e();
      if (iVar5 == 0) {
        AfxPostQuitMessage(0);
        return -1;
      }
      if ((bVar1) && ((lpMsg->message == 0x118 || (lpMsg->message == 0x104)))) {
        ShowWindow(this,1);
        UpdateWindow(*(HWND *)(this + 0x20));
        bVar1 = false;
      }
      iVar5 = (**(code **)(*(int *)this + 0x88))();
      if (iVar5 == 0) {
        *(uint *)(this + 0x58) = *(uint *)(this + 0x58) & 0xffffffe7;
        return *(int *)(this + 0x60);
      }
      iVar5 = AfxIsIdleMessage(lpMsg);
      if (iVar5 != 0) {
        bVar2 = true;
        local_c = 0;
      }
      BVar6 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0);
    } while (BVar6 != 0);
  }
  if (bVar1) {
    ShowWindow(this,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    bVar1 = false;
  }
  if ((((param_1 & 1) == 0) && (hWnd != (HWND)0x0)) && (local_c == 0)) {
    SendMessageW(hWnd,0x121,0,*(LPARAM *)(this + 0x20));
  }
  if ((param_1 & 2) == 0) goto code_r0x10010afd;
  goto LAB_10010b16;
code_r0x10010afd:
  LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x36a,0,local_c);
  local_c = local_c + 1;
  if (LVar4 == 0) {
LAB_10010b16:
    bVar2 = false;
  }
  goto LAB_10010b19;
}

