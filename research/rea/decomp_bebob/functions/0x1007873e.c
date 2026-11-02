// rea decompile_all
// name: CDockablePane::CreateDefaultPaneDivider
// address: 0x1007873e
// body: available
// range: 0x1007873e-0x10078815 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CPaneDivider * __stdcall CDockablePane::CreateDefaultPaneDivider(unsigned
   long,class CWnd *,struct CRuntimeClass *)
   
   Library: Visual Studio 2010 Release */

CPaneDivider *
CDockablePane::CreateDefaultPaneDivider(ulong param_1,CWnd *param_2,CRuntimeClass *param_3)

{
  CObject *pCVar1;
  int iVar2;
  CPaneDivider *pCVar3;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = DAT_10161280;
  local_c = DAT_10161280;
  local_1c = 1;
  if ((param_1 & 0x5000) != 0) {
    local_1c = 2;
  }
  if (param_3 == (CRuntimeClass *)0x0) {
    pCVar1 = CRuntimeClass::CreateObject((CRuntimeClass *)PTR_PTR_10161288);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar1);
    CPaneDivider::Init((CPaneDivider *)pCVar1,1,(CWnd *)0x0);
  }
  else {
    pCVar1 = CRuntimeClass::CreateObject(param_3);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar1);
    *(undefined4 *)(pCVar1 + 0x11c) = 1;
  }
  iVar2 = (**(code **)(*(int *)pCVar1 + 0x2a4))
                    (0,local_1c | 0x10000000,&local_18,param_2,0xffffffff,0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)pCVar1 + 4))(1);
  }
  else {
    (**(code **)(*(int *)pCVar1 + 0x1dc))(param_1);
  }
  pCVar3 = (CPaneDivider *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}

