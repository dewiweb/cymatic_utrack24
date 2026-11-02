// rea decompile_all
// name: FUN_100acb24
// address: 0x100acb24
// body: available
// range: 0x100acb24-0x100acc71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100acc6d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100acb24(void *this,CDC *param_1)

{
  BOOL BVar1;
  CMFCVisualManager *pCVar2;
  HRGN pHVar3;
  int iVar4;
  undefined **local_34;
  undefined4 local_30;
  int local_2c;
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100acb30;
  local_28 = param_1;
  BVar1 = IsRectEmpty((RECT *)((int)this + 0x20));
  if (BVar1 != 0) goto LAB_100acc65;
  pCVar2 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar2 + 0x210))
            (local_28,this,((RECT *)((int)this + 0x20))->left,*(undefined4 *)((int)this + 0x24),
             *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c));
  local_2c = 0;
  local_30 = 0;
  local_34 = CRgn::vftable;
  local_24.left = *(LONG *)((int)this + 0x104);
  local_24.top = *(LONG *)((int)this + 0x108);
  local_24.right = *(LONG *)((int)this + 0x10c);
  local_8 = 0;
  local_24.bottom = *(LONG *)((int)this + 0x110);
  BVar1 = IsRectEmpty(&local_24);
  if (BVar1 == 0) {
LAB_100acbae:
    local_24.left = *(int *)((int)this + 0x20) + 2;
    local_24.top = *(int *)((int)this + 0x24) + 3;
    local_24.right = *(int *)((int)this + 0x28) + -2;
    local_24.bottom = *(int *)((int)this + 0x2c) + -4;
    pHVar3 = CreateRectRgnIndirect(&local_24);
    CMenu::Attach((CMenu *)&local_34,(HMENU__ *)pHVar3);
    CDC::SelectClipRgn(local_28,(CRgn *)&local_34);
    local_2c = 1;
  }
  else {
    local_24.left = *(int *)((int)this + 0x26c);
    local_24.top = *(int *)((int)this + 0x270);
    local_24.right = *(int *)((int)this + 0x274);
    local_24.bottom = *(int *)((int)this + 0x278);
    BVar1 = IsRectEmpty(&local_24);
    if (BVar1 == 0) goto LAB_100acbae;
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 1000)) {
    do {
      if ((iVar4 < 0) || (*(int *)((int)this + 1000) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(**(int **)(*(int *)((int)this + 0x3e4) + iVar4 * 4) + 0x44))(local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 1000));
  }
  if (local_2c != 0) {
    CDC::SelectClipRgn(local_28,(CRgn *)0x0);
  }
  (**(code **)(*(int *)((int)this + 0xec) + 0xdc))(local_28);
  (**(code **)(*(int *)((int)this + 0x254) + 0xdc))(local_28);
  local_8 = 0xffffffff;
  local_34 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_34);
LAB_100acc65:
  FUN_100f90cf();
  return;
}

