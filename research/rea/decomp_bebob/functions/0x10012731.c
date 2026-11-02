// rea decompile_all
// name: CWnd::UpdateDialogControls
// address: 0x10012731
// body: available
// range: 0x10012731-0x1001283a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CWnd::UpdateDialogControls(class CCmdTarget *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CWnd::UpdateDialogControls(CWnd *this,CCmdTarget *param_1,int param_2)

{
  HWND hWnd;
  CWnd *this_00;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  CWnd local_b0 [32];
  HWND local_90;
  CCmdUI local_3c [4];
  uint local_38;
  CWnd *local_28;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x10012740;
  local_14 = this;
  CCmdUI::CCmdUI(local_3c);
  CWnd(local_b0);
  local_8 = 0;
  hWnd = GetTopWindow(*(HWND *)(this + 0x20));
  do {
    if (hWnd == (HWND)0x0) {
      local_8 = 0xffffffff;
      local_90 = (HWND)0x0;
      ~CWnd(local_b0);
      return;
    }
    local_90 = hWnd;
    local_38 = ::GetDlgCtrlID(hWnd);
    local_28 = local_b0;
    this_00 = FromHandlePermanent(hWnd);
    if (this_00 == (CWnd *)0x0) {
LAB_100127a4:
      iVar1 = CCmdTarget::OnCmdMsg
                        ((CCmdTarget *)local_14,local_38,-1,local_3c,(AFX_CMDHANDLERINFO *)0x0);
      if (iVar1 == 0) {
        iVar1 = param_2;
        if (param_2 != 0) {
          uVar2 = SendMessageW(local_90,0x87,0,0);
          if ((uVar2 & 0x2000) != 0) {
            uVar3 = GetExStyle(local_b0);
            uVar2 = uVar3 & 0xf;
            if ((((uVar2 != 3) && (uVar2 != 6)) && (uVar2 != 7)) && (uVar2 != 9)) goto LAB_100127ff;
          }
          iVar1 = 0;
        }
LAB_100127ff:
        CCmdUI::DoUpdate(local_3c,param_1,iVar1);
      }
    }
    else {
      iVar1 = CCmdTarget::OnCmdMsg
                        ((CCmdTarget *)this_00,0,-0x42ee0001,local_3c,(AFX_CMDHANDLERINFO *)0x0);
      if (iVar1 == 0) goto LAB_100127a4;
    }
    hWnd = GetWindow(hWnd,2);
  } while( true );
}

