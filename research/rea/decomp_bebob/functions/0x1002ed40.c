// rea decompile_all
// name: EnableCustomizeButton
// address: 0x1002ed40
// body: available
// range: 0x1002ed40-0x1002ee1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMFCToolBar::EnableCustomizeButton(int,int,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,int)
    public: void __thiscall CMFCToolBar::EnableCustomizeButton(int,int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
EnableCustomizeButton
          (void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  CMFCToolBarMenuButton *pCVar1;
  int iVar2;
  CObject *pCVar3;
  CMFCCustomizeButton local_140 [312];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x134;
  local_8 = 0x1002ed4f;
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xca0) != 0) {
      CObList::RemoveTail((CObList *)((int)this + 0xbc8));
      if (*(int **)((int)this + 0xca0) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0xca0) + 4))(1);
      }
      *(undefined4 *)((int)this + 0xca0) = 0;
    }
  }
  else {
    if (*(int *)((int)this + 0xca0) == 0) {
      pCVar1 = CMFCCustomizeButton(local_140,param_2,param_3);
      local_8 = 0;
      iVar2 = (**(code **)(*(int *)this + 0x344))(pCVar1,0xffffffff);
      local_8 = 0xffffffff;
      CMFCCustomizeButton::~CMFCCustomizeButton(local_140);
      if (iVar2 < 0) goto LAB_1002ee16;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18,
                                  *(CObject **)(*(int *)((int)this + 0xbd0) + 8));
      *(CObject **)((int)this + 0xca0) = pCVar3;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0xca0) + 0xe8) = param_2;
      FUN_10007c90((void *)(*(int *)((int)this + 0xca0) + 0x2c),param_3);
    }
    *(undefined4 *)((int)this + 0xb54) = param_4;
  }
  CPane::UpdateVirtualRect(this);
LAB_1002ee16:
  FUN_100f90cf();
  return;
}

