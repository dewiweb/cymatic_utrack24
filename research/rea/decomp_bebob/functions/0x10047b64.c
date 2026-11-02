// rea decompile_all
// name: CMFCPropertyGridProperty::Reposition
// address: 0x10047b64
// body: available
// range: 0x10047b64-0x10047d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridProperty::Reposition(int &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridProperty::Reposition(CMFCPropertyGridProperty *this,int *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  CWnd *pCVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  BOOL BVar12;
  HWND hWnd;
  LPRECT extraout_EDX;
  LPRECT extraout_EDX_00;
  LPRECT ptVar13;
  int extraout_EDX_01;
  undefined4 *puVar14;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ptVar13 = (LPRECT)(this + 0x2c);
  LVar2 = ptVar13->left;
  uVar3 = *(undefined4 *)(this + 0x30);
  uVar4 = *(undefined4 *)(this + 0x34);
  uVar5 = *(undefined4 *)(this + 0x38);
  bVar8 = false;
  if ((*(int *)(this + 0x78) != 0) &&
     ((iVar9 = IsParentExpanded(this), ptVar13 = extraout_EDX, iVar9 != 0 ||
      (*(int *)(*(int *)(this + 0xc0) + 0x2c4) != 0)))) {
    bVar8 = true;
  }
  iVar9 = *(int *)(this + 0xc0);
  if ((((*(int *)(iVar9 + 0x2c4) != 0) && (*(int *)(this + 0xc4) != 0)) &&
      (*(int *)(*(int *)(this + 0xc4) + 0x68) != 0)) &&
     (iVar10 = IsParentExpanded(this), ptVar13 = extraout_EDX_00, iVar10 == 0)) {
    bVar8 = false;
  }
  if (bVar8) {
    iVar10 = *(int *)(iVar9 + 0x2c4);
    iVar6 = *(int *)(iVar9 + 0x314);
    iVar11 = iVar6;
    if (iVar10 == 0) {
      iVar10 = GetHierarchyLevel(this);
      iVar11 = iVar10 * iVar6;
      iVar10 = extraout_EDX_01;
    }
    if ((iVar10 != 0) && (*(int *)(this + 0x68) != 0)) {
      iVar11 = 0;
    }
    local_18.left = *(int *)(iVar9 + 0x2e8) + iVar11;
    local_18.top = *param_1;
    local_18.bottom = local_18.top + iVar6;
    local_18.right = *(LONG *)(iVar9 + 0x2f0);
    *(LONG *)(this + 0x2c) = local_18.left;
    *(LONG *)(this + 0x30) = local_18.top;
    *(LONG *)(this + 0x34) = local_18.right;
    *(LONG *)(this + 0x38) = local_18.bottom;
    BVar12 = IsRectEmpty((RECT *)(this + 0x3c));
    if (BVar12 == 0) {
      *(int *)(this + 0x40) = *(int *)(this + 0x30) + 1;
      *(undefined4 *)(this + 0x48) = *(undefined4 *)(this + 0x38);
    }
    *param_1 = *param_1 + *(int *)(*(int *)(this + 0xc0) + 0x314);
    iVar9 = *(int *)(this + 0xc0);
    local_18.left = *(LONG *)(this + 0x2c);
    local_18.top = *(LONG *)(this + 0x30);
    local_18.bottom = *(LONG *)(this + 0x38);
    local_18.right = *(int *)(iVar9 + 0x318) + *(int *)(iVar9 + 0x2e8);
    hWnd = (HWND)0x0;
    if (iVar9 != -0x74) {
      hWnd = *(HWND *)(iVar9 + 0x94);
    }
    BVar12 = IsWindow(hWnd);
    if (BVar12 != 0) {
      pCVar7 = *(CWnd **)(this + 0xc0);
      CToolTipCtrl::AddTool
                ((CToolTipCtrl *)(pCVar7 + 0x74),pCVar7,(wchar_t *)0xffffffff,&local_18,
                 *(int *)(pCVar7 + 0x300) + 1);
      *(int *)(*(int *)(this + 0xc0) + 0x300) = *(int *)(*(int *)(this + 0xc0) + 0x300) + 1;
      if (*(int *)(this + 0x58) == 0) {
        local_28.top = *(LONG *)(this + 0x30);
        local_28.right = *(LONG *)(this + 0x34);
        local_28.left = local_18.right + 1;
        local_28.bottom = *(LONG *)(this + 0x38);
        pCVar7 = *(CWnd **)(this + 0xc0);
        CToolTipCtrl::AddTool
                  ((CToolTipCtrl *)(pCVar7 + 0x74),pCVar7,(wchar_t *)0xffffffff,&local_28,
                   *(int *)(pCVar7 + 0x300) + 1);
        *(int *)(*(int *)(this + 0xc0) + 0x300) = *(int *)(*(int *)(this + 0xc0) + 0x300) + 1;
      }
    }
  }
  else {
    SetRectEmpty(ptVar13);
    SetRectEmpty((LPRECT)(this + 0x3c));
  }
  puVar14 = *(undefined4 **)(this + 0xcc);
  while (puVar14 != (undefined4 *)0x0) {
    puVar1 = puVar14 + 2;
    puVar14 = (undefined4 *)*puVar14;
    Reposition((CMFCPropertyGridProperty *)*puVar1,param_1);
  }
  (**(code **)(*(int *)this + 0x6c))(LVar2,uVar3,uVar4,uVar5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

