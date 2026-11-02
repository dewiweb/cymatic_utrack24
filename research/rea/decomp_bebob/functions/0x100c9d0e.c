// rea decompile_all
// name: CPaneContainer::StretchPaneContainer
// address: 0x100c9d0e
// body: available
// range: 0x100c9d0e-0x100c9f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainer::StretchPaneContainer(int,int,int,int,void * &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainer::StretchPaneContainer
          (CPaneContainer *this,int param_1,int param_2,int param_3,int param_4,void **param_5)

{
  int iVar1;
  CWnd *pCVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  HWND pHVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  tagRECT *ptVar13;
  undefined1 local_20 [4];
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar2 = AfxGetMainWnd();
  uVar3 = CWnd::GetExStyle(pCVar2);
  iVar10 = 0;
  if (((uVar3 & 0x400000) != 0) && (param_2 != 0)) {
    param_1 = -param_1;
  }
  iVar1 = (uint)(-1 < param_1) * 2 + -1;
  iVar4 = param_1;
  if (param_2 != 0) {
    iVar4 = 0;
    iVar10 = param_1;
  }
  if (param_2 == 0) {
    iVar10 = (**(code **)(*(int *)this + 0x44))(local_20,iVar10,iVar4,param_3);
    lVar7 = *(long *)(iVar10 + 4);
  }
  else {
    plVar5 = (long *)(**(code **)(*(int *)this + 0x44))(&local_18.right);
    lVar7 = *plVar5;
  }
  local_1c = _labs(lVar7);
  lVar6 = _labs(param_1);
  if (lVar6 < local_1c) {
    lVar7 = param_1;
  }
  lVar7 = _labs(lVar7);
  local_1c = lVar7 * iVar1;
  lVar7 = _labs(local_1c);
  if (lVar7 != 0) {
    if (((*(int *)(this + 0xc) == 0) ||
        ((iVar10 = (**(code **)(**(int **)(this + 0xc) + 0x160))(), iVar10 != 0 && (param_2 != 0))))
       || ((iVar10 = (**(code **)(**(int **)(this + 0xc) + 0x160))(), iVar10 == 0 && (param_2 == 0))
          )) {
      (**(code **)(*(int *)this + 0x3c))
                (local_1c,*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10),param_2,param_3,
                 param_5);
      (**(code **)(*(int *)this + 0x3c))
                (local_1c,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),param_2,param_3,
                 param_5);
      if ((param_4 != 0) && (*(int *)(this + 0xc) != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        ::GetWindowRect(*(HWND *)(*(int *)(this + 0xc) + 0x20),&local_18);
        iVar10 = (**(code **)(**(int **)(this + 0xc) + 0x160))();
        if (iVar10 == 0) {
          if (param_3 == 0) {
            local_18.top = local_18.top + local_1c;
          }
          else {
            local_18.bottom = local_18.bottom + local_1c;
          }
        }
        else if (param_3 == 0) {
          local_18.left = local_18.left + local_1c;
        }
        else {
          local_18.right = local_18.right + local_1c;
        }
        uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0xc));
        if ((uVar3 & 0x10000000) != 0) {
          ptVar13 = &local_18;
          pHVar9 = GetParent(*(HWND *)(*(int *)(this + 0xc) + 0x20));
          pCVar2 = CWnd::FromHandle(pHVar9);
          CWnd::ScreenToClient(pCVar2,ptVar13);
          (**(code **)(**(int **)(this + 0xc) + 0x230))(&local_18,0,*param_5);
        }
      }
    }
    else {
      lVar7 = (**(code **)(*(int *)this + 0x40))
                        (param_1,*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10),param_3);
      lVar6 = (**(code **)(*(int *)this + 0x40))
                        (param_1,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),param_3);
      lVar6 = _labs(lVar6);
      lVar8 = _labs(lVar7);
      iVar10 = local_1c;
      if (lVar8 == lVar6) {
        lVar7 = _labs(lVar7);
        iVar10 = (lVar7 / 2 + 1) * iVar1;
      }
      local_18.right = 0;
      local_18.bottom = 0;
      if (param_2 != 0) {
        local_18.right = iVar10;
        iVar10 = local_18.bottom;
      }
      local_18.bottom = iVar10;
      if (param_4 != 0) {
        (**(code **)(**(int **)(this + 0xc) + 0x268))(&local_18.right,1);
      }
      if (param_3 == 0) {
        param_3 = 0;
        uVar12 = *(undefined4 *)(this + 0x10);
        uVar11 = *(undefined4 *)(this + 4);
      }
      else {
        uVar12 = *(undefined4 *)(this + 0x14);
        uVar11 = *(undefined4 *)(this + 8);
      }
      (**(code **)(*(int *)this + 0x3c))(local_1c,uVar11,uVar12,param_2,param_3,param_5);
    }
  }
  iVar10 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar10;
}

