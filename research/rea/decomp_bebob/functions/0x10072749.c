// rea decompile_all
// name: CSmartDockingManager::Start
// address: 0x10072749
// body: available
// range: 0x10072749-0x1007283b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::Start(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CSmartDockingManager::Start(CSmartDockingManager *this,CWnd *param_1)

{
  uint uVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  CSmartDockingManager *pCVar4;
  LONG LStack_1c;
  
  if ((*(int *)(this + 8) != 0) && (*(int *)(this + 4) == 0)) {
    *(undefined4 *)(this + 0x100) = 0xffffffff;
    *(CWnd **)(this + 0x18) = param_1;
    *(CWnd **)(this + 0xa8) = param_1;
    *(undefined4 *)(this + 0x1c) = 0xf000;
    if (param_1 != (CWnd *)0x0) {
      LStack_1c = 0x10072790;
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)param_1)
      ;
      if (pCVar2 != (CObject *)0x0) {
        pCVar2 = (CObject *)(**(code **)(*(int *)pCVar2 + 0x1a8))();
        LStack_1c = 0x100727ab;
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
        if (pCVar2 != (CObject *)0x0) {
          uVar3 = (**(code **)(*(int *)pCVar2 + 0x194))();
          *(undefined4 *)(this + 0x1c) = uVar3;
        }
      }
    }
    param_1 = (CWnd *)0x0;
    pCVar4 = this + 0xd8;
    do {
      CopyRect((LPRECT)&stack0xffffffe0,(RECT *)(this + 0x20));
      (**(code **)(**(int **)pCVar4 + 0x18))();
      uVar1 = *(uint *)(this + 0x1c);
      if ((((((uVar1 & 0x1000) != 0) && (param_1 == (CWnd *)0x0)) ||
           (((uVar1 & 0x4000) != 0 && (param_1 == (CWnd *)0x1)))) ||
          (((uVar1 & 0x2000) != 0 && (param_1 == (CWnd *)0x2)))) ||
         (((uVar1 & 0x8000) != 0 && (param_1 == (CWnd *)0x3)))) {
        (**(code **)(**(int **)pCVar4 + 0x14))();
      }
      param_1 = param_1 + 1;
      pCVar4 = pCVar4 + 4;
    } while ((int)param_1 < 4);
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0xc) = 1;
    *(undefined4 *)(this + 4) = 1;
  }
  return;
}

