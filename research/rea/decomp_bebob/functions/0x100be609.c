// rea decompile_all
// name: FUN_100be609
// address: 0x100be609
// body: available
// range: 0x100be609-0x100be754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100be750 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_100be609(void *this,CDC *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)

{
  int iVar1;
  int local_38 [2];
  int local_30;
  CDC *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  if (*(int *)((int)this + 0x3f8) == 1) {
    (**(code **)(*(int *)param_1 + 0x68))(*param_6,*(undefined4 *)(*param_6 + -0xc),&param_2,0x8024)
    ;
  }
  else {
    local_24 = param_2;
    local_28 = 0;
    local_1c = 0;
    if (0 < *(int *)((int)this + 0x3f8)) {
      do {
        if ((local_1c < 0) || (*(int *)((int)this + 0x3f8) <= local_1c)) goto LAB_100be750;
        if (*(int *)(*(int *)(*(int *)((int)this + 0x3f4) + local_1c * 4) + -0xc) != 0) {
          local_20 = 0;
          if (local_28 != 0) {
            local_20 = (**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bc4);
          }
          iVar1 = local_1c;
          param_1 = local_2c;
          uStack_14 = param_3;
          uStack_10 = param_4;
          uStack_c = param_5;
          local_18 = local_24;
          if (*(int *)((int)this + 0x3f8) <= local_1c) {
LAB_100be750:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_30 = local_1c * 4;
          CDC::GetTextExtent(local_2c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                       *)local_38);
          if (*(int *)((int)this + 0x3f8) <= iVar1) goto LAB_100be750;
          iVar1 = *(int *)(*(int *)((int)this + 0x3f4) + local_30);
          (**(code **)(*(int *)param_1 + 0x68))
                    (iVar1,*(undefined4 *)(iVar1 + -0xc),&local_18,0x8024);
          if (local_20 != 0) {
            (**(code **)(*(int *)param_1 + 0x28))(local_20);
          }
          local_24 = local_24 + local_38[0];
        }
        local_28 = (uint)(local_28 == 0);
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)((int)this + 0x3f8));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

