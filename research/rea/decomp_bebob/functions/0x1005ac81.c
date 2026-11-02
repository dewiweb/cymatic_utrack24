// rea decompile_all
// name: OnCreate
// address: 0x1005ac81
// body: available
// range: 0x1005ac81-0x1005ade3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCPopupMenu::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCPopupMenu::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

int __thiscall OnCreate(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  ANIMATION_TYPE AVar3;
  int *piVar4;
  int iVar5;
  CMFCPopupMenu *pCVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CMFCShadowWnd *this_00;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x1005ac8d;
  iVar2 = OnCreate(this,param_1);
  puVar11 = auStack_20;
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    uVar9 = 0x50402808;
    AVar3 = CMFCPopupMenu::GetAnimationType(0);
    if (((AVar3 != 0) && (DAT_10166e54 == 0)) && (*(int *)((int)this + 0xeec) == 0)) {
      uVar9 = 0x40402808;
    }
    puVar10 = &stack0xffffffdc;
    piVar4 = (int *)(**(code **)(*(int *)this + 0x1c0))();
    piVar4[0x33e] = *(int *)((int)this + 0xeb0);
    if ((*(int *)((int)this + 0x148) != 0) && (*(int *)(*(int *)((int)this + 0x148) + 0xb0) != 0)) {
      piVar4[0x340] = 1;
      piVar4[0x332] = 1;
      piVar4[0x341] = *(int *)(*(int *)((int)this + 0x148) + 0xc0);
    }
    iVar2 = *piVar4;
    *(undefined4 *)(puVar10 + -4) = 1;
    *(uint *)(puVar10 + -8) = uVar9 | 0x30;
    *(void **)(puVar10 + -0xc) = this;
    pcVar1 = *(code **)(iVar2 + 800);
    puVar11 = puVar10 + -0x10;
    *(undefined4 *)(puVar10 + -0x10) = 0x1005ad25;
    iVar5 = (*pcVar1)();
    iVar2 = 0;
    if (iVar5 != 0) {
      *(undefined4 *)(puVar11 + -4) = 0x1005ad34;
      pCVar6 = CMFCPopupMenu::GetParentPopupMenu(this);
      if (pCVar6 != (CMFCPopupMenu *)0x0) {
        *(undefined4 *)((int)this + 0xec8) = *(undefined4 *)(pCVar6 + 0xec8);
      }
      piVar4[0x338] = *(int *)((int)this + 0xec8);
      piVar4[0x339] = DAT_10168448;
      *(undefined4 *)(puVar11 + -4) = *(undefined4 *)((int)this + 0x20);
      puVar12 = puVar11 + -8;
      *(undefined4 *)(puVar11 + -8) = 0x1005ad66;
      pHVar7 = GetParent(*(HWND *)(puVar11 + -4));
      *(HWND *)(puVar12 + -4) = pHVar7;
      *(undefined4 *)(puVar12 + -8) = 0x1005ad6c;
      pCVar8 = CWnd::FromHandle(*(HWND__ **)(puVar12 + -4));
      if (pCVar8 == (CWnd *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pCVar8 + 0x20);
      }
      piVar4[0x15] = iVar2;
      if ((0 < *(int *)((int)this + 0xfc0)) && (*(int *)((int)this + 0x10bc) != 0)) {
        *(undefined4 *)(puVar12 + -4) = 0x294;
        *(undefined4 *)(puVar12 + -8) = 0x1005ad94;
        this_00 = FUN_1000858a(*(size_t *)(puVar12 + -4));
        local_8 = 0;
        if (this_00 == (CMFCShadowWnd *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *(undefined4 *)(puVar12 + -4) = *(undefined4 *)((int)this + 0xfc0);
          *(void **)(puVar12 + -8) = this;
          *(undefined4 *)(puVar12 + -0xc) = 0x1005adad;
          piVar4 = (int *)CMFCShadowWnd::CMFCShadowWnd
                                    (this_00,*(CMFCPopupMenu **)(puVar12 + -8),
                                     *(int *)(puVar12 + -4));
        }
        local_8 = 0xffffffff;
        *(int **)((int)this + 0xfd4) = piVar4;
        *(undefined4 *)((int)this + 0xfc0) = 0;
        pcVar1 = *(code **)(*piVar4 + 0x1c0);
        puVar13 = (undefined4 *)(puVar12 + -4);
        puVar12 = puVar12 + -4;
        *puVar13 = 0x1005adcb;
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)this + 0x1ec);
      puVar11 = puVar12 + -4;
      *(undefined4 *)(puVar12 + -4) = 0x1005add5;
      iVar2 = (*pcVar1)();
      iVar2 = (iVar2 != 0) - 1;
    }
  }
  *(undefined4 *)(puVar11 + -4) = 0x1005ade1;
  return iVar2;
}

