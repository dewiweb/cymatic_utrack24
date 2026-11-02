// rea decompile_all
// name: CreateEx
// address: 0x1006b91f
// body: available
// range: 0x1006b91f-0x1006bb1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CBasePane::CreateEx(unsigned long,char const *,char const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int,unsigned long,struct
   CCreateContext *)
    public: virtual int __thiscall CBasePane::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int,unsigned long,struct
   CCreateContext *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CreateEx(void *this,undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int *param_5,
        CObject *param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  bool bVar1;
  int iVar2;
  CDockingManager *pCVar3;
  CFrameWnd *pCVar4;
  uint uVar5;
  AFX_MODULE_STATE *pAVar6;
  undefined3 extraout_var;
  HBRUSH dwNewLong;
  CObject *pCVar7;
  undefined1 local_60 [4];
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = param_2;
  local_24 = param_3;
  local_30 = param_5;
  local_20 = param_7;
  local_2c = param_9;
  iVar2 = CObject::IsKindOf(param_6,(CRuntimeClass *)&PTR_s_CDialog_1011f594);
  *(int *)((int)this + 0x80) = iVar2;
  if ((*(int *)((int)this + 0x88) != 0) &&
     (pCVar3 = CGlobalUtils::GetDockingManager
                         ((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)param_6),
     pCVar3 == (CDockingManager *)0x0)) {
    pCVar4 = AFXGetParentFrame((CWnd *)param_6);
    pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)pCVar4);
    if (pCVar3 != (CDockingManager *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x24))(local_20,1);
    }
  }
  local_28 = *(int *)this;
  *(uint *)((int)this + 0x74) = *(uint *)((int)this + 0x74) & 0x10000000;
  uVar5 = (**(code **)(local_28 + 0x1bc))();
  (**(code **)(local_28 + 0x1e0))(uVar5 | param_4);
  *(undefined4 *)((int)this + 0x94) = param_8;
  if (*(int *)((int)this + 0xb8) == 0) {
    local_1c = CreateEx(this,param_1,local_1c,local_24,param_4,local_30,(int)param_6,local_20,
                        local_2c);
    if (local_1c == 0) goto LAB_1006bb0c;
  }
  else {
    _memset(local_60,0,0x30);
    local_38 = local_1c;
    local_3c = local_24;
    local_40 = param_4 | 0x40000000;
    local_58 = local_20;
    pAVar6 = AfxGetModuleState();
    local_5c = *(undefined4 *)(pAVar6 + 8);
    if (param_6 == (CObject *)0x0) {
      local_54 = 0;
    }
    else {
      local_54 = *(undefined4 *)(param_6 + 0x20);
    }
    iVar2 = (**(code **)(*(int *)this + 100))(local_60);
    if ((iVar2 == 0) ||
       (bVar1 = CreateDlg(this,*(LPCWSTR *)((int)this + 0xb8),(int)param_6),
       CONCAT31(extraout_var,bVar1) == 0)) goto LAB_1006bb0c;
    dwNewLong = GetSysColorBrush(0xf);
    SetClassLongW(*(HWND *)((int)this + 0x20),-10,(LONG)dwNewLong);
    CWnd::SetDlgCtrlID(this,local_20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
    *(LONG *)((int)this + 0xbc) = local_18.right - local_18.left;
    *(LONG *)((int)this + 0xc0) = local_18.bottom - local_18.top;
    local_1c = 1;
  }
  iVar2 = CObject::IsKindOf(param_6,(CRuntimeClass *)&PTR_s_CFrameWnd_1012733c);
  if (iVar2 == 0) {
    pCVar4 = AFXGetParentFrame((CWnd *)param_6);
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar4);
  }
  else {
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,param_6);
  }
  *(CObject **)((int)this + 0x98) = pCVar7;
  iVar2 = CObject::IsKindOf(param_6,(CRuntimeClass *)&PTR_s_CDialog_1011f594);
  *(int *)((int)this + 0x80) = iVar2;
LAB_1006bb0c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

