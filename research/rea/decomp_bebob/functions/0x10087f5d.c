// rea decompile_all
// name: CPane::CreateDefaultMiniframe
// address: 0x10087f5d
// body: available
// range: 0x10087f5d-0x10087fee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPaneFrameWnd * __thiscall CPane::CreateDefaultMiniframe(class CRect)
   
   Library: Visual Studio 2010 Release */

CPaneFrameWnd * __thiscall
CPane::CreateDefaultMiniframe
          (CPane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  CObject *pCVar1;
  CFrameWnd *pCVar2;
  CWnd *pCVar3;
  CDockingManager *pCVar4;
  int iVar5;
  CPaneFrameWnd *pCVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  uStack_c = param_5;
  pCVar1 = CRuntimeClass::CreateObject(*(CRuntimeClass **)(this + 0x178));
  if (pCVar1 != (CObject *)0x0) {
    pCVar2 = AFXGetParentFrame((CWnd *)this);
    pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
    pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
    *(CDockingManager **)(pCVar1 + 0x178) = pCVar4;
    iVar5 = (**(code **)(*(int *)pCVar1 + 0x200))(0,0x80000000,&local_18,pCVar2,0);
    if (iVar5 == 0) {
      (**(code **)(*(int *)pCVar1 + 4))(1);
    }
  }
  pCVar6 = (CPaneFrameWnd *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}

