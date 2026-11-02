// rea decompile_all
// name: CMFCToolBar::OnToolHitTest
// address: 0x1002f75e
// body: available
// range: 0x1002f75e-0x1002fa75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::OnToolHitTest(class CPoint,struct tagTOOLINFOW
   *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::OnToolHitTest(CMFCToolBar *this,LONG param_2,LONG param_3,uint *param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  CFrameWnd *pCVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int local_228;
  uint local_224;
  CFrameWnd *local_220;
  wchar_t *local_21c;
  int local_218;
  wchar_t local_214 [262];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x218;
  local_8 = 0x1002f76d;
  if ((((DAT_101603d8 == 0) || (iVar7 = ::OnToolHitTest(this,param_2,param_3,param_4), iVar7 != -1))
      || (local_224 = (**(code **)(*(int *)this + 0x390))(), local_224 == 0xffffffff)) ||
     (iVar7 = FUN_100261ef(this,local_224), iVar7 == 0)) goto LAB_1002fa6e;
  if (param_4 != (uint *)0x0) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_218,(int *)ppuVar2);
    local_8 = 0;
    iVar3 = (**(code **)(*(int *)this + 0x3ac))();
    if (iVar3 == 0) {
      uVar1 = *(uint *)(iVar7 + 0x20);
      if ((((uVar1 == 0) || (uVar1 == 0xffffffff)) || (*(int *)(iVar7 + 4) != 0)) &&
         (*(int *)(*(int *)(iVar7 + 0x2c) + -0xc) != 0)) {
        FUN_10007c90(&local_218,(int *)(iVar7 + 0x2c));
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_218,
                   L'&');
      }
      else if (((DAT_101685b0 == 0) || (uVar1 < *(uint *)(DAT_101685b0 + 0x24))) ||
              (*(uint *)(DAT_101685b0 + 0x28) < uVar1)) {
        FUN_1000abfa(uVar1,local_214,0x100);
        AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_218,local_214,1,L'\n');
      }
      else {
        FUN_10007c90(&local_218,(undefined4 *)(iVar7 + 0x2c));
      }
    }
    if (*(int *)(local_218 + -0xc) == 0) {
      FUN_10001030((undefined4 *)(local_218 + -0x10));
      goto LAB_1002fa6e;
    }
    if (((*(int *)(iVar7 + 0x20) != 0) && (*(int *)(iVar7 + 0x20) != -1)) && (DAT_101603dc != 0)) {
      ppuVar2 = FUN_1000ad47();
      FUN_10005e00(&local_21c,(int *)ppuVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      pCVar4 = AFXGetParentFrame((CWnd *)this);
      if (pCVar4 != (CFrameWnd *)0x0) {
        pCVar4 = AFXGetParentFrame((CWnd *)this);
        if (DAT_10168578 == (CFrameWnd *)0x0) {
          local_220 = CWnd::GetTopLevelFrame((CWnd *)pCVar4);
        }
        else {
          local_220 = DAT_10168578;
        }
        if (local_220 != (CFrameWnd *)0x0) {
          iVar3 = CKeyboardManager::FindDefaultAccelerator
                            (*(uint *)(iVar7 + 0x20),
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_21c,local_220,1);
          if (iVar3 == 0) {
            pCVar4 = (CFrameWnd *)(**(code **)(*(int *)local_220 + 0x16c))();
            iVar3 = CKeyboardManager::FindDefaultAccelerator
                              (*(uint *)(iVar7 + 0x20),
                               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_21c,pCVar4,iVar3);
            if (iVar3 == 0) goto LAB_1002f989;
          }
          sVar5 = _wcslen(L" (");
          ATL::CSimpleStringT<wchar_t,0>::Append
                    ((CSimpleStringT<wchar_t,0> *)&local_218,L" (",sVar5);
          ATL::CSimpleStringT<wchar_t,0>::Append
                    ((CSimpleStringT<wchar_t,0> *)&local_218,local_21c,*(int *)(local_21c + -6));
          ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_218,L')');
        }
      }
LAB_1002f989:
      local_8 = local_8 & 0xffffff00;
      FUN_10001030((undefined4 *)(local_21c + -8));
    }
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_228,(int *)ppuVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    pCVar4 = CWnd::GetParentFrame((CWnd *)this);
    if ((pCVar4 != (CFrameWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != 0)) {
      (**(code **)(*(int *)pCVar4 + 0x170))();
    }
    local_21c = (wchar_t *)&stack0xfffffdc0;
    piVar6 = FUN_10005e30((int *)(local_218 + -0x10));
    uVar8 = 2;
    *(int **)local_21c = piVar6 + 4;
    CTooltipManager::SetTooltipText(param_4,*(undefined4 *)(this + 0xc94),uVar8);
    (**(code **)(*(int *)this + 0x36c))();
    param_4[3] = -(uint)(*(uint *)(iVar7 + 0x20) != 0xffffffff) & *(uint *)(iVar7 + 0x20);
    param_4[2] = *(uint *)(this + 0x20);
    FUN_10001030((undefined4 *)(local_228 + -0x10));
    FUN_10001030((undefined4 *)(local_218 + -0x10));
  }
  local_224 = -(uint)(*(uint *)(iVar7 + 0x20) != 0xffffffff) & *(uint *)(iVar7 + 0x20);
LAB_1002fa6e:
  iVar7 = FUN_100f90cf();
  return iVar7;
}

