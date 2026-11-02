// rea decompile_all
// name: CWnd::OnNcDestroy
// address: 0x100110ee
// body: available
// range: 0x100110ee-0x10011214 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnNcDestroy(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CWnd::OnNcDestroy(CWnd *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_1000c31d();
  if (iVar1 == 0) goto LAB_10011145;
  if (*(CWnd **)(iVar1 + 0x20) == this) {
    pAVar2 = AfxGetModuleState();
    if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar2 = AfxGetModuleState();
      if (iVar1 == *(int *)(pAVar2 + 4)) {
        iVar3 = AfxOleCanExitApp();
        if (iVar3 == 0) goto LAB_1001113a;
      }
      AfxPostQuitMessage(0);
    }
LAB_1001113a:
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar1 + 0x24) == this) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
LAB_10011145:
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 0x50))();
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))(1);
  }
  *(undefined4 *)(this + 0x68) = 0;
  if (((byte)this[0x58] & 1) != 0) {
    pAVar4 = AfxGetModuleThreadState();
    iVar1 = *(int *)(pAVar4 + 0x3c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
      _memset(&local_38,0,0x30);
      local_30 = *(undefined4 *)(this + 0x20);
      local_38 = 0x2c;
      local_34 = 1;
      local_2c = local_30;
      SendMessageW(*(HWND *)(iVar1 + 0x20),0x433,0,(LPARAM)&local_38);
    }
  }
  LVar5 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  Default(this);
  LVar6 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*(int *)this + 0xfc))();
    if (*piVar7 != 0) {
      SetWindowLongW(*(HWND *)(this + 0x20),-4,*piVar7);
    }
  }
  Detach(this);
  (**(code **)(*(int *)this + 0x120))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

