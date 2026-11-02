// rea decompile_all
// name: AFX_GLOBAL_DATA::DrawTextOnGlass
// address: 0x10019024
// body: available
// range: 0x10019024-0x10019170 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019100 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall AFX_GLOBAL_DATA::DrawTextOnGlass(void *,class CDC *,int,int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,class
   CRect,unsigned long,int,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
AFX_GLOBAL_DATA::DrawTextOnGlass
          (AFX_GLOBAL_DATA *this,int param_1,int *param_2,undefined4 param_3,undefined4 param_4,
          int param_6)

{
  longlong lVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *_Dst;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  wchar_t *_Src;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  int local_2c;
  int *local_20;
  AFX_GLOBAL_DATA *local_1c;
  wchar_t *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_14 = param_1;
  local_20 = param_2;
  local_8 = 0;
  local_1c = this;
  if (((param_1 != 0) && (*(int *)(this + 0x1f8) != 0)) &&
     (iVar3 = DwmIsCompositionEnabled(this), iVar3 != 0)) {
    if (param_6 == 0) {
      local_18 = (wchar_t *)0x0;
    }
    else {
      local_18 = (wchar_t *)Ordinal_2(param_6);
      if (local_18 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10001000((undefined4 *)0x8007000e);
      }
    }
    pwVar2 = local_18;
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar3 = Ordinal_7(local_18);
    lVar1 = (ulonglong)(iVar3 + 1) * 2;
    _Dst = FUN_1000858a(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    _Src = pwVar2;
    iVar3 = Ordinal_7(pwVar2,pwVar2);
    _wcscpy_s(_Dst,iVar3 + 1,_Src);
    _memset(&local_60,0,0x40);
    local_60 = 0x40;
    local_5c = 0x2000;
    if (0 < in_stack_0000002c) {
      local_5c = 0x2800;
      local_2c = in_stack_0000002c;
    }
    if (in_stack_00000030 != -1) {
      local_5c = local_5c | 1;
      local_58 = in_stack_00000030;
    }
    if (local_20 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_20[1];
    }
    (**(code **)(local_1c + 0x1f8))
              (local_14,iVar3,param_3,param_4,_Dst,0xffffffff,in_stack_00000028,&stack0x00000018,
               &local_60);
    FUN_100085b9(_Dst);
    Ordinal_6(pwVar2);
    FUN_10001030((undefined4 *)(param_6 + -0x10));
    return 1;
  }
  (**(code **)(*param_2 + 0x68))
            (param_6,*(undefined4 *)(param_6 + -0xc),&stack0x00000018,in_stack_00000028);
  FUN_10001030((undefined4 *)(param_6 + -0x10));
  return 0;
}

