// rea decompile_all
// name: CMFCToolBarButton::OnCalculateSize
// address: 0x10086869
// body: available
// range: 0x10086869-0x10086a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarButton::OnCalculateSize(class CDC *,class
   CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCToolBarButton::OnCalculateSize(CMFCToolBarButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  tagSIZE tVar7;
  int in_stack_00000010;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_38 [4];
  CSize *local_34;
  CDC *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10086875;
  local_30 = param_1;
  local_34 = param_2;
  if (*(int *)(this + 0x50) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    goto LAB_10086a51;
  }
  local_2c = *(int *)param_3;
  local_28 = *(int *)(param_3 + 4);
  if (((byte)this[0x24] & 1) == 0) {
    bVar1 = 1;
    iVar3 = IsDrawImage(this);
    if (iVar3 == 0) {
LAB_100868f7:
      bVar1 = 0;
      if (*(int *)(this + 0x48) == 0) {
        local_1c = 0;
        local_18[0] = (int *)0x0;
        piVar5 = &local_1c;
      }
      else {
        pCVar4 = CMFCVisualManager::GetInstance();
        piVar5 = (int *)(**(code **)(*(int *)pCVar4 + 0x13c))(&local_1c);
      }
      iVar2 = piVar5[1];
      if (in_stack_00000010 != 0) {
        local_2c = *piVar5;
        iVar2 = local_28;
      }
    }
    else {
      if (*(int *)(this + 4) == 0) {
        iVar3 = *(int *)(this + 0x34);
      }
      else {
        iVar3 = *(int *)(this + 0x38);
      }
      iVar2 = local_28;
      if (iVar3 < 0) goto LAB_100868f7;
    }
    local_28 = iVar2;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    iVar3 = *(int *)(*(int *)(this + 0x2c) + -0xc);
    if (iVar3 != 0) {
      if ((*(int *)(this + 0x18) == 0) || (in_stack_00000010 == 0)) {
        if ((*(int *)(this + 8) != 0) && (iVar3 != 0)) {
          local_18[0] = FUN_10005e30((int *)(*(int *)(this + 0x2c) + -0x10));
          local_18[0] = local_18[0] + 4;
          local_8 = 0;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18,
                     L"&&",DAT_101689a8);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18,
                     L'&');
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18,
                     DAT_101689a8,L"&");
          piVar5 = (int *)CDC::GetTextExtent((CDC *)local_34,local_38);
          iVar3 = (-(uint)bVar1 & 0xfffffffd) + 9 + *piVar5;
          if (in_stack_00000010 == 0) {
            local_28 = local_28 + iVar3;
          }
          else {
            local_2c = local_2c + iVar3;
          }
          FUN_10001030(local_18[0] + -4);
        }
      }
      else {
        local_18[0] = *(int **)(param_3 + 4);
        local_1c = *(int *)param_3 * 3;
        local_24 = 0;
        local_20 = 0;
        uVar6 = 0x401;
        if (DAT_10161568 != 0) {
          uVar6 = 0x411;
        }
        (**(code **)(*(int *)local_34 + 0x68))
                  (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_24,
                   uVar6);
        *(int *)(this + 100) = local_1c - local_24;
        *(int *)(this + 100) = *(int *)(this + 100) + 6;
        *(int *)(this + 0x68) = (int)local_18[0] - local_20;
        iVar3 = *(int *)(this + 100);
        if (*(int *)(this + 100) < local_2c) {
          iVar3 = local_2c;
        }
        local_2c = iVar3 + 0xc;
        local_28 = local_28 + 1 + ((int)local_18[0] - local_20);
      }
    }
  }
  else if (in_stack_00000010 == 0) {
    local_28 = 8;
  }
  else {
    local_2c = *(int *)(this + 0x34);
    if (local_2c < 1) {
      local_2c = 8;
    }
  }
  *(int *)local_30 = local_2c;
  *(int *)(local_30 + 4) = local_28;
LAB_10086a51:
  tVar7 = (tagSIZE)FUN_100f90cf();
  return tVar7;
}

