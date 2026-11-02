// rea decompile_all
// name: CreateEx
// address: 0x1003c5e7
// body: available
// range: 0x1003c5e7-0x1003c6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CPaneFrameWnd::CreateEx(unsigned long,char const *,unsigned
   long,struct tagRECT const &,class CWnd *,struct CCreateContext *)
    public: virtual int __thiscall CPaneFrameWnd::CreateEx(unsigned long,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,struct CCreateContext *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
CreateEx(void *this,uint param_1,undefined4 param_2,uint param_3,int *param_4,CWnd *param_5,
        undefined4 param_6)

{
  CWnd *pCVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  CObject *pCVar6;
  CDockingManager *pCVar7;
  undefined1 *puVar8;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar1 = param_5;
  uStack_4 = 0;
  local_8 = 0x1003c5f3;
  puVar8 = auStack_20;
  if (param_5 == (CWnd *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar2 = CWnd::GetExStyle(param_5);
    if ((uVar2 & 0x400000) != 0) {
      param_1 = param_1 | 0x400000;
    }
    uVar5 = *(undefined4 *)(pCVar1 + 0x20);
  }
  *(undefined4 *)((int)this + 0xbc) = uVar5;
  puVar3 = RegisterWindowClass(&param_5,0x10122cb8);
  local_8 = 0;
  iVar4 = CreateEx(this,param_1,*puVar3,param_2,param_3 | 0x80000000,param_4,(int)pCVar1,0,param_6);
  local_8 = 0xffffffff;
  FUN_10001030((undefined4 *)(param_5 + -0x10));
  if (iVar4 == 0) {
LAB_1003c66f:
    uVar5 = 0;
  }
  else {
    if (pCVar1 != (CWnd *)0x0) {
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar1);
      if (pCVar6 == (CObject *)0x0) goto LAB_1003c66f;
      pCVar7 = *(CDockingManager **)((int)this + 0x178);
      if (pCVar7 == (CDockingManager *)0x0) {
        pCVar7 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar1);
        if (pCVar7 == (CDockingManager *)0x0) goto LAB_1003c66f;
      }
      puVar8 = &stack0xffffffd8;
      (**(code **)(*(int *)pCVar7 + 0x1c))();
    }
    *(void **)(puVar8 + -4) = this;
    *(undefined4 *)(puVar8 + -8) = 0x1003c6b5;
    CMFCDragFrameImpl::Init((CMFCDragFrameImpl *)((int)this + 0x120),*(CWnd **)(puVar8 + -4));
    uVar5 = 1;
  }
  *(undefined4 *)(puVar8 + -4) = 0x1003c6bd;
  return uVar5;
}

