// rea decompile_all
// name: CFileDialog::CFileDialog
// address: 0x1001c9f2
// body: available
// range: 0x1001c9f2-0x1001ccca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001cacd to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001cc84 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CFileDialog::CFileDialog(int,wchar_t const *,wchar_t const *,unsigned
   long,wchar_t const *,class CWnd *,unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CFileDialog::CFileDialog
          (CFileDialog *this,int param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4,
          wchar_t *param_5,CWnd *param_6,ulong param_7,int param_8)

{
  CFileDialog *_Dst;
  undefined **ppuVar1;
  void *_Dst_00;
  AFX_MODULE_STATE *pAVar2;
  errno_t eVar3;
  wchar_t *pwVar4;
  HRESULT HVar5;
  int iVar6;
  IID *rclsid;
  undefined4 local_13c;
  wchar_t *local_138;
  wchar_t *local_134;
  int *local_130;
  size_t local_12c;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x130;
  local_8 = 0x1001ca01;
  local_138 = param_3;
  local_134 = param_5;
  local_12c = param_7;
  CDialog::CDialog((CDialog *)this,0,param_6);
  local_8 = 0;
  *(undefined ***)this = vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0xb0,(int *)ppuVar1);
  *(undefined4 *)(this + 0x340) = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(this + 0x344) = 0;
  _memset(&local_128,0,0x114);
  local_128.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_128);
  if (local_128.dwMajorVersion < 6) {
    *(undefined4 *)(this + 0x98) = 0;
  }
  else {
    *(int *)(this + 0x98) = param_8;
  }
  *(undefined4 *)(this + 0x9c) = 0;
  if (local_12c == 0) {
    local_12c = 0x58;
  }
  _Dst_00 = _malloc(local_12c);
  *(void **)(this + 0x94) = _Dst_00;
  if (_Dst_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009030();
  }
  _memset(_Dst_00,0,local_12c);
  *(undefined2 *)(this + 0xb4) = 0;
  _Dst = this + 0x134;
  *(wchar_t *)_Dst = L'\0';
  *(int *)(this + 0xac) = param_1;
  *(uint *)(this + 0x74) = 0x7005 - (uint)(param_1 != 0);
  *(undefined4 *)(this + 0x33c) = 0;
  **(size_t **)(this + 0x94) = local_12c;
  *(CFileDialog **)(*(int *)(this + 0x94) + 0x1c) = _Dst;
  *(undefined4 *)(*(int *)(this + 0x94) + 0x20) = 0x104;
  *(wchar_t **)(*(int *)(this + 0x94) + 0x3c) = param_2;
  *(CFileDialog **)(*(int *)(this + 0x94) + 0x24) = this + 0xb4;
  *(undefined4 *)(*(int *)(this + 0x94) + 0x28) = 0x40;
  *(uint *)(*(int *)(this + 0x94) + 0x34) =
       *(uint *)(*(int *)(this + 0x94) + 0x34) | param_4 | 0x80020;
  if ((param_4 & 0x40) != 0) {
    *(uint *)(*(int *)(this + 0x94) + 0x34) = *(uint *)(*(int *)(this + 0x94) + 0x34) & 0xff7fffff;
  }
  pAVar2 = AfxGetModuleState();
  *(undefined4 *)(*(int *)(this + 0x94) + 8) = *(undefined4 *)(pAVar2 + 0xc);
  *(code **)(*(int *)(this + 0x94) + 0x44) = _AfxCommDlgProc;
  if (local_138 != (wchar_t *)0x0) {
    eVar3 = _wcsncpy_s((wchar_t *)_Dst,0x104,local_138,0xffffffff);
    FUN_10004c40(eVar3);
  }
  if (local_134 != (wchar_t *)0x0) {
    FUN_100022b0(this + 0xb0,local_134);
    pwVar4 = (wchar_t *)FUN_10002140(this + 0xb0,0);
    while( true ) {
      pwVar4 = _wcschr(pwVar4,L'|');
      if (pwVar4 == (wchar_t *)0x0) break;
      *pwVar4 = L'\0';
      pwVar4 = pwVar4 + 1;
    }
    *(undefined4 *)(*(int *)(this + 0x94) + 0xc) = *(undefined4 *)(this + 0xb0);
  }
  if (*(int *)(this + 0x98) == 1) {
    HVar5 = CoInitializeEx((LPVOID)0x0,2);
    if (-1 < HVar5) {
      *(undefined ***)(this + 0x340) = XFileDialogEvents::vftable;
      *(undefined ***)(this + 0x344) = XFileDialogControlEvents::vftable;
      if (*(int *)(this + 0xac) == 0) {
        rclsid = (IID *)&DAT_10145164;
      }
      else {
        rclsid = (IID *)&DAT_10145154;
      }
      HVar5 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_1011fc74,&local_130);
      if (-1 < HVar5) {
        iVar6 = (**(code **)*local_130)(local_130,&DAT_1011fa2c,&local_13c);
        if (-1 < iVar6) {
          iVar6 = (**(code **)(*local_130 + 0x1c))(local_130,this + 0x340,this + 0xa0);
          if (-1 < iVar6) {
            *(int **)(this + 0xa4) = local_130;
            *(undefined4 *)(this + 0xa8) = local_13c;
            goto LAB_1001ccc1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
LAB_1001ccc1:
  FUN_100f90cf();
  return;
}

