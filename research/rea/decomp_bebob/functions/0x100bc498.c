// rea decompile_all
// name: FUN_100bc498
// address: 0x100bc498
// body: available
// range: 0x100bc498-0x100bc970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bc700 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100bc498(void *this,uint *param_1,CDC *param_2,int param_3)

{
  undefined4 uVar1;
  double dVar2;
  CDC *pCVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  BOOL BVar9;
  uint uVar10;
  IMAGES_IDS IVar11;
  bool bVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int local_84;
  int local_80;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_7c [8];
  uint *local_74;
  uint local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  CDC *local_50;
  int local_4c;
  wchar_t *local_48;
  undefined1 local_44 [8];
  int local_3c;
  int iStack_38;
  int local_34;
  wchar_t *local_30;
  int local_2c;
  int iStack_28;
  RECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x100bc4a4;
  local_74 = param_1;
  local_50 = param_2;
  if (((*(CMFCRibbonCategory **)((int)this + 0x2c) == (CMFCRibbonCategory *)0x0) ||
      (*(int *)(*(int *)((int)this + 4) + -0xc) == 0)) ||
     ((CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)((int)this + 0x2c),(int)&local_84),
      local_84 == 0 && (local_80 == 0)))) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    CDC::GetTextExtent(local_50,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_70);
    iVar4 = (**(code **)(*(int *)this + 0x98))();
    if ((iVar4 == 0) && (iVar4 = (**(code **)(*(int *)this + 0x1a8))(), iVar4 == 0)) {
      local_54 = 0;
    }
    else {
      uVar13 = FUN_10037b18(&local_68);
      local_54 = *(int *)uVar13;
      if (local_54 != 0) {
        dVar2 = _DAT_10166c7c;
        if (DAT_10166c84 == 0) {
          dVar2 = 1.0;
        }
        if (1.0 < dVar2) {
          uVar14 = FUN_100f8660(DAT_10166c84,(int)((ulonglong)uVar13 >> 0x20));
          local_54 = (int)uVar14;
        }
      }
    }
    if (param_3 == 0) {
      local_48 = (wchar_t *)(*(int *)((int)this + 0x1c) + 6 + local_80);
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      iVar4 = (**(code **)(*(int *)this + 0x1a8))();
      if (iVar4 != 0) {
        local_48 = local_48 + 1;
      }
      local_34 = *(int *)((int)this + 0x18);
      local_2c = *(int *)((int)this + 0x20);
      iStack_28 = *(int *)((int)this + 0x24);
      local_30 = local_48;
      local_64 = 0x21;
      iVar4 = (**(code **)(*(int *)this + 0x1a8))();
      if (iVar4 != 0) {
        local_64 = 0x821;
      }
      if (*(int *)((int)this + 0xf4) == -1) {
        (**(code **)(*(int *)local_50 + 0x68))
                  (*(int *)((int)this + 4),*(undefined4 *)(*(int *)((int)this + 4) + -0xc),&local_34
                   ,local_64);
        iVar4 = (**(code **)(*(int *)this + 0x98))();
        if ((iVar4 != 0) || (iVar4 = (**(code **)(*(int *)this + 0x1a8))(), iVar4 != 0)) {
          local_24.left = *(LONG *)((int)this + 0x18);
          local_24.right = *(int *)((int)this + 0x20);
          local_24.top = (int)local_48 + local_6c + 2;
          local_24.bottom = *(int *)((int)this + 0x24);
          iVar4 = *(int *)((int)this + 0x20);
          iVar8 = *(int *)((int)this + 0x18);
          piVar7 = (int *)FUN_10037b18((undefined4 *)local_7c);
          local_24.left = ((iVar4 + iVar8) / 2 - *piVar7 / 2) + -1;
        }
      }
      else {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   ((int)this + 4),(int)&local_4c);
        pCVar3 = local_50;
        local_8 = 3;
        (**(code **)(*(int *)local_50 + 0x68))
                  (local_4c,*(undefined4 *)(local_4c + -0xc),&local_34,local_64);
        local_2c = local_2c - local_54;
        local_30 = (wchar_t *)((int)local_48 + local_6c);
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   ((int)this + 4),(int)&local_5c);
        iVar4 = local_5c;
        local_8 = CONCAT31(local_8._1_3_,4);
        (**(code **)(*(int *)pCVar3 + 0x68))
                  (local_5c,*(undefined4 *)(local_5c + -0xc),&local_34,local_64);
        iVar8 = (**(code **)(*(int *)this + 0x98))();
        if ((iVar8 != 0) || (iVar8 = (**(code **)(*(int *)this + 0x1a8))(), iVar8 != 0)) {
          local_24.left = local_34;
          local_24.right = local_2c;
          local_24.top = (LONG)(local_30 + 1);
          local_24.bottom = iStack_28;
          iVar4 = local_2c - local_34;
          piVar7 = (int *)CDC::GetTextExtent(local_50,local_7c);
          local_24.left = local_2c - (iVar4 - *piVar7) / 2;
          iVar4 = local_5c;
        }
        FUN_10001030((undefined4 *)(iVar4 + -0x10));
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_4c + -0x10));
      }
      BVar9 = IsRectEmpty(&local_24);
      if (BVar9 == 0) {
        iVar4 = FUN_10037b18((undefined4 *)local_7c);
        iStack_38 = *(int *)(iVar4 + 4) + local_24.top;
        local_3c = local_24.left + local_54;
        local_44._0_4_ = local_24.left;
        local_44._4_4_ = local_24.top;
        local_24.right = local_3c;
        local_24.bottom = iStack_38;
        OffsetRect((LPRECT)local_44,0,1);
        dVar2 = _DAT_10166c7c;
        if (DAT_10166c84 == 0) {
          dVar2 = 1.0;
        }
        if (dVar2 <= 1.0) {
          IVar11 = 0;
        }
        else {
          IVar11 = 0xd;
        }
        local_70 = 0;
        local_6c = 0;
        CMenuImages::Draw(local_50,IVar11,(CRect *)local_44,3,(CSize *)&local_70);
        local_60 = 0;
        local_5c = 0;
        CMenuImages::Draw(local_50,IVar11,(CRect *)&local_24,(uint)(*(int *)((int)this + 0x78) != 0)
                          ,(CSize *)&local_60);
      }
      *local_74 = 0;
      local_74[1] = 0;
    }
    else {
      FUN_10006ce0(&local_48,(short *)&DAT_1012bb58);
      *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
      local_8 = 0;
      uVar10 = local_70;
      if (*(int *)((int)this + 0x144) != 0) {
        local_64 = 0x7fff;
        local_5c = 0;
        uVar10 = local_64;
        if (0 < *(int *)((int)this + 0x144)) {
          do {
            if ((local_5c < 0) || (*(int *)((int)this + 0x144) <= local_5c)) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            uVar1 = *(undefined4 *)(*(int *)((int)this + 0x140) + local_5c * 4);
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       ((int)this + 4),(int)&local_4c);
            local_8 = CONCAT31(local_8._1_3_,1);
            iVar4 = (**(code **)(*(int *)this + 0x1a8))();
            if (iVar4 == 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_4c,L"&&",local_48);
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_4c,L'&');
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_4c,local_48,L"&");
            }
            puVar6 = (uint *)CDC::GetTextExtent(local_50,(
                                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                  *)&local_3c);
            uVar10 = *puVar6;
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       ((int)this + 4),(int)&local_58);
            local_8 = CONCAT31(local_8._1_3_,2);
            iVar4 = (**(code **)(*(int *)this + 0x1a8))();
            if (iVar4 == 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_58,L"&&",local_48);
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_58,L'&');
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_58,local_48,L"&");
            }
            piVar7 = (int *)CDC::GetTextExtent(local_50,local_7c);
            uVar5 = *piVar7 + local_54;
            if (*piVar7 + local_54 < (int)uVar10) {
              uVar5 = uVar10;
            }
            if ((int)uVar5 < (int)local_64) {
              *(undefined4 *)((int)this + 0xf4) = uVar1;
              local_64 = uVar5;
            }
            FUN_10001030((undefined4 *)(local_58 + -0x10));
            local_8 = local_8 & 0xffffff00;
            FUN_10001030((undefined4 *)(local_4c + -0x10));
            local_5c = local_5c + 1;
            uVar10 = local_64;
            param_1 = local_74;
          } while (local_5c < *(int *)((int)this + 0x144));
        }
      }
      uVar5 = uVar10 & 0x80000001;
      bVar12 = uVar5 == 0;
      if ((int)uVar5 < 0) {
        bVar12 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar12) {
        uVar10 = uVar10 - 1;
      }
      *param_1 = uVar10;
      param_1[1] = local_6c * 2;
      FUN_10001030((undefined4 *)(local_48 + -8));
    }
  }
  FUN_100f90cf();
  return;
}

