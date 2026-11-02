// rea decompile_all
// name: CPropertySheet::Create
// address: 0x100d7339
// body: available
// range: 0x100d7339-0x100d7453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d7352 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::Create(class CWnd *,unsigned long,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPropertySheet::Create(CPropertySheet *this,CWnd *param_1,ulong param_2,ulong param_3)

{
  _AFX_THREAD_STATE *p_Var1;
  undefined4 uVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  int iVar5;
  HGLOBAL hMem;
  undefined4 *puVar6;
  BOOL BVar7;
  CPropertySheet *pCVar8;
  
  if ((~(byte)(*(uint *)(this + 0x78) >> 0xe) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  p_Var1 = AfxGetThreadState();
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(p_Var1 + 0x1c) = 0x90c020c4;
    if ((*(uint *)(this + 0x78) & 0x1000020) == 0) {
      *(undefined4 *)(p_Var1 + 0x1c) = 0x90c820c4;
    }
  }
  else {
    *(ulong *)(p_Var1 + 0x1c) = param_2;
  }
  *(ulong *)(p_Var1 + 0x20) = param_3;
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0xfc000);
  AfxInitNetworkAddressControl();
  (**(code **)(*(int *)this + 0x16c))();
  *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x500;
  *(undefined4 *)(this + 200) = 1;
  *(code **)(this + 0x98) = AfxPropSheetCallback;
  uVar2 = 0;
  if (param_1 != (CWnd *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined4 *)(this + 0x7c) = uVar2;
  AfxHookWindowCreate((CWnd *)this);
  pCVar8 = this + 0x74;
  pAVar3 = AfxGetModuleState();
  iVar4 = CComCtlWrapper::_PropertySheetW
                    ((CComCtlWrapper *)**(undefined4 **)(pAVar3 + 0x78),
                     (_PROPSHEETHEADERW_V2 *)pCVar8);
  iVar5 = AfxUnhookWindowCreate();
  if (iVar5 == 0) {
    (**(code **)(*(int *)this + 0x120))();
  }
  hMem = GlobalAlloc(0x40,4);
  puVar6 = GlobalLock(hMem);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 1;
    GlobalUnlock(hMem);
    BVar7 = SetPropW(*(HWND *)(this + 0x20),(LPCWSTR)PTR_u_AfxClosePending_101626f8,hMem);
    if (BVar7 != 0) {
      if (iVar4 == 0) {
        return 0;
      }
      if (iVar4 == -1) {
        return 0;
      }
      return 1;
    }
    GlobalFree(hMem);
  }
  (**(code **)(*(int *)this + 0x60))();
  return 0;
}

