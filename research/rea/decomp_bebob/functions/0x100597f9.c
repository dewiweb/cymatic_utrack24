// rea decompile_all
// name: Create
// address: 0x100597f9
// body: available
// range: 0x100597f9-0x1005996a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10059816 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMDIChildWnd::Create(char const *,char const *,unsigned
   long,struct tagRECT const &,class CMDIFrameWnd *,struct CCreateContext *)
    public: virtual int __thiscall CMDIChildWnd::Create(wchar_t const *,wchar_t const *,unsigned
   long,struct tagRECT const &,class CMDIFrameWnd *,struct CCreateContext *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __thiscall
Create(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,
      CMDIFrameWnd *param_5,undefined4 param_6)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  HWND hWnd;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  if ((param_5 == (CMDIFrameWnd *)0x0) &&
     ((iVar1 = FUN_1000c31d(), iVar1 == 0 ||
      (param_5 = *(CMDIFrameWnd **)(iVar1 + 0x20), param_5 == (CMDIFrameWnd *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  (**(code **)(*(int *)param_5 + 0x174))(1);
  local_2c = 0;
  local_30 = param_1;
  local_34 = param_2;
  local_38 = param_3;
  local_3c = *param_4;
  local_40 = param_4[1];
  local_48 = param_4[3] - local_40;
  local_44 = param_4[2] - local_3c;
  local_4c = *(undefined4 *)(param_5 + 0x20);
  local_50 = 0;
  pAVar2 = AfxGetModuleState();
  local_54 = *(undefined4 *)(pAVar2 + 8);
  local_58 = param_6;
  iVar1 = (**(code **)(*(int *)this + 100))(&local_58);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x120))();
  }
  else {
    local_28 = local_30;
    local_24 = local_34;
    local_20 = local_54;
    local_1c = local_3c;
    local_18 = local_40;
    local_14 = local_44;
    local_10 = local_48;
    local_c = local_38 & 0xeeffffff;
    local_8 = local_58;
    AfxHookWindowCreate(this);
    hWnd = (HWND)SendMessageW(*(HWND *)(param_5 + 0x110),0x220,0,(LPARAM)&local_28);
    iVar1 = AfxUnhookWindowCreate();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x120))();
    }
    if (hWnd != (HWND)0x0) {
      if ((local_38 & 0x10000000) != 0) {
        BringWindowToTop(hWnd);
        if ((local_38 & 0x20000000) == 0) {
          if ((local_38 & 0x1000000) == 0) {
            iVar1 = 1;
          }
          else {
            iVar1 = 3;
          }
        }
        else {
          iVar1 = 2;
        }
        CWnd::ShowWindow(this,iVar1);
        CMDIFrameWnd::MDIActivate(param_5,this);
        SendMessageW(*(HWND *)(param_5 + 0x110),0x234,0,0);
      }
      return 1;
    }
  }
  return 0;
}

