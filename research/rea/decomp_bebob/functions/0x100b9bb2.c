// rea decompile_all
// name: CMFCOutlookBarPaneButton::OnCalculateSize
// address: 0x100b9bb2
// body: available
// range: 0x100b9bb2-0x100b9d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCOutlookBarPaneButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCOutlookBarPaneButton::OnCalculateSize
          (CMFCOutlookBarPaneButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tagSIZE tVar6;
  int in_stack_00000010;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_34 [8];
  int local_2c;
  CDC *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_24 = *(undefined4 *)param_3;
  local_20 = *(undefined4 *)(param_3 + 4);
  if (in_stack_00000010 == 0) {
    FUN_10006ce0(&local_2c,(short *)&DAT_10132b54);
    piVar2 = (int *)CDC::GetTextExtent((CDC *)param_2,local_34);
    local_1c = *piVar2;
    FUN_10001030((undefined4 *)(local_2c + -0x10));
    local_10 = *(int *)param_3 - local_1c;
    iVar3 = 0;
    local_18 = 0;
    local_14 = 0;
    local_c = 1;
    if (*(int *)(this + 0x18) != 0) {
      iVar3 = (**(code **)(*(int *)param_2 + 0x68))
                        (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),
                         &local_18,0x410);
    }
    iVar1 = *(int *)param_3;
    iVar5 = local_10 - local_18;
    local_20 = *(int *)(param_3 + 4) + 10 + iVar3;
    iVar4 = iVar1;
    if (iVar5 <= iVar1) {
      iVar4 = iVar5;
    }
    iVar3 = *(int *)(this + 0x74) + 4;
    if ((*(int *)(this + 0x74) + 4 <= iVar4) && (iVar3 = iVar1, iVar5 <= iVar1)) {
      iVar3 = iVar5;
    }
    *(uint *)(this + 0x7c) = (uint)(iVar5 <= iVar1);
  }
  else {
    local_c = *(int *)(param_3 + 4);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    if (*(int *)(this + 0x18) != 0) {
      do {
        local_10 = local_10 + 1;
        local_1c = (**(code **)(*(int *)param_2 + 0x68))
                             (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),
                              &local_18,0x410);
        iVar3 = CDC::GetTextExtent((CDC *)param_2,local_34);
        if (*(int *)(iVar3 + 4) <= local_1c) break;
      } while (*(int *)(param_3 + 4) < local_c - local_14);
    }
    iVar1 = *(int *)(param_3 + 4);
    iVar3 = (*(int *)param_3 - local_18) + 10 + local_10;
    iVar5 = local_c - local_14;
    iVar4 = iVar1;
    if (iVar5 <= iVar1) {
      iVar4 = iVar5;
    }
    local_20 = *(int *)(this + 0x78);
    if ((local_20 <= iVar4) && (local_20 = iVar1, iVar5 <= iVar1)) {
      local_20 = iVar5;
    }
    *(undefined4 *)(this + 0x7c) = 1;
  }
  *(int *)(local_28 + 4) = local_20;
  *(int *)local_28 = iVar3;
  tVar6 = (tagSIZE)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return tVar6;
}

