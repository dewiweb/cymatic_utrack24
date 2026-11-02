// rea decompile_all
// name: CPaneFrameWnd::AddPane
// address: 0x1003c998
// body: available
// range: 0x1003c998-0x1003cac0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::AddPane(class CBasePane *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::AddPane(CPaneFrameWnd *this,CBasePane *param_1)

{
  code *pcVar1;
  CBasePane *this_00;
  int iVar2;
  undefined **ppuVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uStackY_34;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 0;
  local_8 = 0x1003c9a4;
  iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
  puVar13 = auStack_20;
  *(int *)(this + 0x90) = iVar2;
  if (this_00 == (CBasePane *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this_00 + 0x20);
  }
  if (*(int *)(this + 200) != iVar2) {
    if (this_00 == (CBasePane *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(this_00 + 0x20);
    }
    *(undefined4 *)(this + 200) = uVar5;
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&param_1,(int *)ppuVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this_00,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1);
    CWnd::SetWindowTextW((CWnd *)this,(wchar_t *)param_1);
    puVar6 = &uStackY_34;
    uStackY_34 = 0x1003ca1a;
    LVar4 = SendMessageW(*(HWND *)(this_00 + 0x20),0x7f,0,0);
    puVar6[-1] = LVar4;
    puVar6[-2] = 0;
    puVar6[-3] = 0x80;
    puVar6[-4] = *(undefined4 *)(this + 0x20);
    puVar7 = puVar6 + -5;
    puVar6[-5] = 0x1003ca27;
    SendMessageW((HWND)puVar6[-4],puVar6[-3],puVar6[-2],puVar6[-1]);
    *(undefined4 *)((int)puVar7 + -4) = 0;
    *(undefined4 *)((int)puVar7 + -8) = 1;
    *(undefined4 *)((int)puVar7 + -0xc) = 0x7f;
    *(undefined4 *)((int)puVar7 + -0x10) = *(undefined4 *)(this_00 + 0x20);
    puVar8 = (undefined1 *)((int)puVar7 + -0x14);
    *(undefined4 *)((int)puVar7 + -0x14) = 0x1003ca32;
    LVar4 = SendMessageW(*(HWND *)((int)puVar7 + -0x10),*(UINT *)((int)puVar7 + -0xc),
                         *(WPARAM *)((int)puVar7 + -8),*(LPARAM *)((int)puVar7 + -4));
    *(LRESULT *)(puVar8 + -4) = LVar4;
    *(undefined4 *)(puVar8 + -8) = 1;
    *(undefined4 *)(puVar8 + -0xc) = 0x80;
    *(undefined4 *)(puVar8 + -0x10) = *(undefined4 *)(this + 0x20);
    puVar9 = puVar8 + -0x14;
    *(undefined4 *)(puVar8 + -0x14) = 0x1003ca3f;
    SendMessageW(*(HWND *)(puVar8 + -0x10),*(UINT *)(puVar8 + -0xc),*(WPARAM *)(puVar8 + -8),
                 *(LPARAM *)(puVar8 + -4));
    *(undefined4 *)(puVar9 + -4) = 1;
    *(CBasePane **)(puVar9 + -8) = this_00;
    *(undefined4 *)(puVar9 + -0xc) = 0x1003ca47;
    AddRemovePaneFromGlobalList(*(CBasePane **)(puVar9 + -8),*(int *)(puVar9 + -4));
    pcVar1 = *(code **)(*(int *)this_00 + 0x1c4);
    puVar10 = puVar9 + -4;
    *(undefined4 *)(puVar9 + -4) = 0x1003ca51;
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      if (((*(int *)(this + 0x90) == 0) || (*(int *)(this_00 + 0xca0) == 0)) ||
         (*(int *)(this_00 + 0xb54) == 0)) {
        *(undefined4 *)(puVar10 + -4) = 2;
      }
      else {
        *(undefined4 *)(puVar10 + -4) = 0x12;
      }
      pcVar1 = *(code **)(*(int *)this + 0x188);
      puVar11 = (undefined4 *)(puVar10 + -8);
      puVar10 = puVar10 + -8;
      *puVar11 = 0x1003ca7f;
      (*pcVar1)();
    }
    *(undefined ***)(puVar10 + -4) = &PTR_s_CMFCMenuBar_1012aa4e_2_101611d0;
    *(undefined4 *)(puVar10 + -8) = 0x1003ca8b;
    iVar2 = CObject::IsKindOf((CObject *)this_00,*(CRuntimeClass **)(puVar10 + -4));
    if ((iVar2 != 0) && (*(int *)(this_00 + 0xca0) != 0)) {
      iVar2 = *(int *)this;
      *(undefined4 *)(puVar10 + -4) = 0x10;
      pcVar1 = *(code **)(iVar2 + 0x188);
      puVar12 = (undefined4 *)(puVar10 + -8);
      puVar10 = puVar10 + -8;
      *puVar12 = 0x1003caa4;
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)this + 0x1f0);
    puVar13 = puVar10 + -4;
    *(undefined4 *)(puVar10 + -4) = 0x1003caae;
    (*pcVar1)();
    *(undefined4 *)(puVar13 + -4) = 0x1003cab9;
    FUN_10001030((undefined4 *)(param_1 + -0x10));
  }
  *(undefined4 *)(puVar13 + -4) = 0x1003cabe;
  return;
}

