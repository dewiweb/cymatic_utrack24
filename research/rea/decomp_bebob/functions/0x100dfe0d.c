// rea decompile_all
// name: FUN_100dfe0d
// address: 0x100dfe0d
// body: available
// range: 0x100dfe0d-0x100e0007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e0003 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100dfe0d(void *this,int param_1)

{
  int *piVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CMFCToolBarComboBoxButton *pCVar8;
  tagAFXDrawState local_144 [12];
  undefined4 local_138;
  CDC *local_134;
  CMFCVisualManager *local_130;
  CWnd *local_12c;
  CMFCToolBarComboBoxButton local_128 [244];
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x134;
  local_8 = 0x100dfe1c;
  local_12c = this;
  if (*(int *)((int)this + 0x120) == 0) {
    FUN_100dfae3(this);
  }
  local_134 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  CopyRect(&local_34,(RECT *)(param_1 + 0x1c));
  if (*(CMFCToolBarImages **)((int)this + 0x90) != (CMFCToolBarImages *)0x0) {
    CMFCToolBarImages::SetTransparentColor(*(CMFCToolBarImages **)((int)this + 0x90),DAT_10166ab4);
    iVar3 = CMFCToolBarImages::PrepareDrawImage
                      (*(CMFCToolBarImages **)((int)this + 0x90),local_144,0,0,0);
    if (iVar3 == 0) goto LAB_100dfffb;
    pCVar2 = *(CMFCVisualManager **)((int)this + 0x78);
    while (pCVar2 != (CMFCVisualManager *)0x0) {
      if (pCVar2 == (CMFCVisualManager *)0x0) {
LAB_100e0003:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_130 = *(CMFCVisualManager **)pCVar2;
      piVar1 = *(int **)(pCVar2 + 8);
      if (piVar1 == (int *)0x0) goto LAB_100e0003;
      local_24.left = piVar1[0x15];
      local_24.top = piVar1[0x16];
      local_24.right = piVar1[0x17];
      local_24.bottom = piVar1[0x18];
      OffsetRect(&local_24,0,-*(int *)(local_12c + 0x114));
      this = local_12c;
      if (local_34.bottom <= local_24.top) break;
      pCVar2 = local_130;
      if (local_34.top < local_24.bottom) {
        iVar3 = piVar1[9];
        iVar5 = piVar1[0xf];
        local_138 = 0;
        iVar4 = CWnd::IsWindowEnabled(local_12c);
        if (iVar4 == 0) {
          piVar1[9] = piVar1[9] | 0x40000;
        }
        else if (piVar1 == *(int **)(local_12c + 0x110)) {
          local_138 = 1;
        }
        piVar1[0xf] = 1;
        (**(code **)(*piVar1 + 0x18))
                  (local_134,&local_24,*(undefined4 *)(local_12c + 0x90),1,0,local_138,1,1);
        piVar1[9] = iVar3;
        piVar1[0xf] = iVar5;
        pCVar2 = local_130;
        this = local_12c;
      }
    }
    CMFCToolBarImages::EndDrawImage(*(CMFCToolBarImages **)((int)this + 0x90),local_144);
  }
  CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(local_128);
  local_8 = 0;
  InflateRect(&local_34,1,1);
  local_130 = CMFCVisualManager::GetInstance();
  iVar3 = *(int *)local_130;
  pCVar8 = local_128;
  uVar7 = 1;
  uVar6 = 0;
  iVar5 = CWnd::IsWindowEnabled(this);
  (**(code **)(iVar3 + 0x70))
            (local_134,local_34.left,local_34.top,local_34.right,local_34.bottom,iVar5 == 0,uVar6,
             uVar7,pCVar8);
  local_8 = 0xffffffff;
  CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton(local_128);
LAB_100dfffb:
  FUN_100f90cf();
  return;
}

