// rea decompile_all
// name: CMFCColorBar::Rebuild
// address: 0x100aa402
// body: available
// range: 0x100aa402-0x100aa6c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100aa59c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorBar::Rebuild(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorBar::Rebuild(CMFCColorBar *this)

{
  ulong *puVar1;
  ulong uVar2;
  CMFCToolBarColorButton *pCVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if ((this != (CMFCColorBar *)0x0) && (*(int *)(this + 0x20) != 0)) {
    (**(code **)(*(int *)this + 0x350))();
    bVar7 = false;
    if (*(int *)(*(int *)(this + 0xdd8) + -0xc) != 0) {
      pCVar3 = FUN_1000858a(0x90);
      if (pCVar3 == (CMFCToolBarColorButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CMFCToolBarColorButton::CMFCToolBarColorButton
                          (pCVar3,*(ulong *)(this + 0xdd4),1,0,*(char **)(this + 0xdd8),
                           (uint)(*(int *)(this + 0xdd0) == -1),0,0);
      }
      (**(code **)(*(int *)this + 0x340))(uVar4,0xffffffff);
      bVar7 = *(int *)(this + 0xdd0) == -1;
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0xd98)) {
      do {
        pCVar3 = FUN_1000858a(0x90);
        if (pCVar3 == (CMFCToolBarColorButton *)0x0) {
          uVar4 = 0;
        }
        else {
          if ((iVar5 < 0) || (*(int *)(this + 0xd98) <= iVar5)) goto LAB_100aa59c;
          puVar1 = (ulong *)(*(int *)(this + 0xd94) + iVar5 * 4);
          uVar4 = CMFCToolBarColorButton::CMFCToolBarColorButton
                            (pCVar3,*puVar1,0,0,(char *)0x0,
                             (uint)(*(ulong *)(this + 0xdd0) == *puVar1),0,0);
        }
        (**(code **)(*(int *)this + 0x340))(uVar4,0xffffffff);
        if (!bVar7) {
          if ((iVar5 < 0) || (*(int *)(this + 0xd98) <= iVar5)) {
LAB_100aa59c:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          bVar7 = *(int *)(this + 0xdd0) == *(int *)(*(int *)(this + 0xd94) + iVar5 * 4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0xd98));
    }
    if ((*(int *)(*(int *)(this + 0xde0) + -0xc) != 0) && (*(int *)(this + 0xdb0) != 0)) {
      (**(code **)(*(int *)this + 0x348))(0xffffffff);
      pCVar3 = FUN_1000858a(0x90);
      if (pCVar3 == (CMFCToolBarColorButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CMFCToolBarColorButton::CMFCToolBarColorButton(pCVar3,*(char **)(this + 0xde0),1);
      }
      (**(code **)(*(int *)this + 0x340))(uVar4,0xffffffff);
      puVar6 = *(undefined4 **)(this + 0xda8);
      while (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar6[2];
        puVar6 = (undefined4 *)*puVar6;
        pCVar3 = FUN_1000858a(0x90);
        if (pCVar3 == (CMFCToolBarColorButton *)0x0) {
          uVar4 = 0;
        }
        else {
          if ((bVar7) || (*(ulong *)(this + 0xdd0) != uVar2)) {
            iVar5 = 0;
          }
          else {
            iVar5 = 1;
          }
          uVar4 = CMFCToolBarColorButton::CMFCToolBarColorButton
                            (pCVar3,uVar2,0,0,(char *)0x0,iVar5,1,0);
        }
        (**(code **)(*(int *)this + 0x340))(uVar4,0xffffffff);
      }
    }
    if (*(int *)(*(int *)(this + 0xddc) + -0xc) != 0) {
      (**(code **)(*(int *)this + 0x348))(0xffffffff);
      pCVar3 = FUN_1000858a(0x90);
      if (pCVar3 == (CMFCToolBarColorButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CMFCToolBarColorButton::CMFCToolBarColorButton
                          (pCVar3,0xffffffff,0,1,*(char **)(this + 0xddc),0,0,0);
      }
      (**(code **)(*(int *)this + 0x340))(uVar4,0xffffffff);
      pCVar3 = FUN_1000858a(0x90);
      if (pCVar3 == (CMFCToolBarColorButton *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CMFCToolBarColorButton::CMFCToolBarColorButton
                          (pCVar3,*(ulong *)(this + 0xdd0),0,0,(char *)0x0,(uint)!bVar7,0,1);
      }
      (**(code **)(*(int *)this + 0x340))(uVar4,0xffffffff);
    }
  }
  return;
}

