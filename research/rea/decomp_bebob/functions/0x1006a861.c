// rea decompile_all
// name: CFrameWnd::OnContextHelp
// address: 0x1006a861
// body: available
// range: 0x1006a861-0x1006aa2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::OnContextHelp(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnContextHelp(CFrameWnd *this)

{
  int *piVar1;
  tagPOINT tVar2;
  int iVar3;
  BOOL BVar4;
  AFX_MODULE_STATE *pAVar5;
  HWND pHVar6;
  tagMSG local_38;
  tagPOINT local_1c;
  int *local_14;
  WPARAM local_10;
  ulong local_c;
  int local_8;
  
  if (((*(int *)(this + 0x88) != 1) && (iVar3 = CanEnterHelpMode(this), iVar3 != 0)) &&
     (BVar4 = PeekMessageW(&local_38,*(HWND *)(this + 0x20),0x367,0x367,3), BVar4 == 0)) {
    local_10 = *(WPARAM *)(this + 0x88);
    *(undefined4 *)(this + 0x88) = 1;
    if (((local_10 == 2) || (*(int **)(this + 0xa0) == (int *)0x0)) ||
       (iVar3 = (**(code **)(**(int **)(this + 0xa0) + 0x60))(1), iVar3 != 0)) {
      if (local_10 == 0) {
        PostMessageW(*(HWND *)(this + 0x20),0x111,0xe145,0);
        *(undefined4 *)(this + 0x88) = 2;
      }
      else {
        local_10 = SendMessageW(*(HWND *)(this + 0x20),0x362,0xe002,0);
        if (local_10 == 0) {
          local_10 = 0xe001;
        }
        local_c = 0;
        GetCursorPos(&local_1c);
        tVar2.y = local_1c.y;
        tVar2.x = local_1c.x;
        SetHelpCapture(this,tVar2,(int *)0x0);
        local_8 = 0;
        pAVar5 = AfxGetModuleState();
        piVar1 = *(int **)(pAVar5 + 4);
        local_14 = piVar1;
        do {
          while( true ) {
            if (*(int *)(this + 0x88) == 0) goto LAB_1006a9a6;
            BVar4 = PeekMessageW(&local_38,(HWND)0x0,0,0,0);
            if (BVar4 != 0) break;
            iVar3 = (**(code **)(*piVar1 + 0x60))(local_8);
            local_8 = local_8 + 1;
            if (iVar3 == 0) {
              local_8 = 0;
              WaitMessage();
            }
          }
          iVar3 = ProcessHelpMsg(this,&local_38,&local_c);
        } while (iVar3 != 0);
LAB_1006a9a6:
        *(undefined4 *)(this + 0x88) = 0;
        ReleaseCapture();
        pHVar6 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar6);
        ReleaseCapture();
        SendMessageW(*(HWND *)(this + 0x20),0x362,local_10,0);
        if (*(int **)(this + 0xa0) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0xa0) + 0x60))(0);
        }
        if (local_c != 0) {
          if (local_c == 0xffffffff) {
            SendMessageW(*(HWND *)(this + 0x20),0x111,0xe147,0);
          }
          else {
            (**(code **)(*local_14 + 200))(local_c,1);
          }
        }
        PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
      }
    }
    else {
      (**(code **)(**(int **)(this + 0xa0) + 0x60))(0);
      *(undefined4 *)(this + 0x88) = 0;
    }
  }
  return;
}

