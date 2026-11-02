// rea decompile_all
// name: CControlBar::PreTranslateMessage
// address: 0x1005881e
// body: available
// range: 0x1005881e-0x10058a34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CControlBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CControlBar::PreTranslateMessage(CControlBar *this,tagMSG *param_1)

{
  SHORT SVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CWnd *this_00;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  tagPOINT local_50;
  CWnd *local_48;
  int local_44;
  AFX_MODULE_THREAD_STATE *local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  void *local_14;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar2 != 0) goto LAB_10058a25;
  uVar5 = param_1->message;
  local_48 = CWnd::GetOwner((CWnd *)this);
  if ((((((byte)this[0xa4] & 0x20) != 0) || (uVar5 == 0x201)) || (uVar5 == 0x202)) &&
     (((0x1ff < uVar5 && (uVar5 < 0x20a)) || (uVar5 - 0xa0 < 10)))) {
    local_40 = AfxGetModuleThreadState();
    local_50.x = (param_1->pt).x;
    local_50.y = (param_1->pt).y;
    ScreenToClient(*(HWND *)(this + 0x20),&local_50);
    _memset(&local_38,0,0x2c);
    local_38 = 0x30;
    local_3c = (**(code **)(*(int *)this + 0x74))(local_50.x,local_50.y,&local_38);
    if (local_14 != (void *)0xffffffff) {
      _free(local_14);
    }
    if ((uVar5 == 0x201) && ((local_34 & 0x80000000) != 0)) {
      local_44 = 1;
    }
    else {
      local_44 = 0;
      if ((uVar5 != 0x201) && (SVar1 = GetKeyState(1), SVar1 < 0)) {
        local_3c = *(int *)(local_40 + 0x4c);
      }
    }
    if ((local_3c < 0) || (local_44 != 0)) {
      SVar1 = GetKeyState(1);
      if ((-1 < SVar1) || (local_44 != 0)) {
        (**(code **)(*(int *)this + 0x19c))(0xffffffff);
        KillTimer(*(HWND *)(this + 0x20),0xe001);
      }
    }
    else if (uVar5 == 0x202) {
      (**(code **)(*(int *)this + 0x19c))(0xffffffff);
      uVar6 = 200;
      uVar5 = 0xe001;
LAB_10058951:
      ResetTimer(this,uVar5,uVar6);
    }
    else if ((((byte)this[0xa0] & 8) == 0) && (SVar1 = GetKeyState(1), -1 < SVar1)) {
      if (local_3c != *(int *)(local_40 + 0x4c)) {
        uVar6 = 300;
        uVar5 = 0xe000;
        goto LAB_10058951;
      }
    }
    else {
      (**(code **)(*(int *)this + 0x19c))(local_3c);
    }
    *(int *)(local_40 + 0x4c) = local_3c;
  }
  pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
  this_00 = local_48;
  if ((pCVar3 == (CFrameWnd *)0x0) || (*(int *)(pCVar3 + 0x88) == 0)) {
    for (; local_48 = this_00, this_00 != (CWnd *)0x0;
        this_00 = (CWnd *)CWnd::GetParentFrame(this_00)) {
      iVar2 = (**(code **)(*(int *)this_00 + 0x10c))(param_1);
      if (iVar2 != 0) goto LAB_10058a25;
    }
    BVar4 = IsWindow(*(HWND *)(this + 0x20));
    if (BVar4 != 0) {
      CWnd::PreTranslateInput((CWnd *)this,param_1);
    }
  }
LAB_10058a25:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

