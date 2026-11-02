// rea decompile_all
// name: FUN_100bfefd
// address: 0x100bfefd
// body: available
// range: 0x100bfefd-0x100c020e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c020a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100bfefd(void *this,CDC *param_1)

{
  CDC *pCVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  BOOL BVar4;
  int *this_00;
  undefined4 uVar5;
  CDC *this_01;
  tagAFXDrawState local_b4 [12];
  int *local_a8;
  undefined4 local_a4;
  int local_a0;
  int *local_9c;
  CDC *local_98;
  CDC *local_94;
  CMemDC local_90 [4];
  CDC *local_8c;
  int local_88;
  CDC local_80 [44];
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa4;
  local_8 = 0x100bff0c;
  local_94 = param_1;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  local_9c = this;
  GetClientRect(*(HWND *)((int)this + 0x20),&local_44);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)((int)this + 0x20),&local_24);
  CMemDC::CMemDC(local_90,local_94,this);
  local_8 = 0;
  local_98 = local_80;
  if (local_88 == 0) {
    local_98 = local_8c;
  }
  pCVar2 = CMFCVisualManager::GetInstance();
  this_01 = local_98;
  this_00 = local_9c;
  (**(code **)(*(int *)pCVar2 + 0x34))
            (local_98,local_9c,local_24.left,local_24.top,local_24.right,local_24.bottom,
             local_24.left,local_24.top,local_24.right,local_24.bottom,0);
  if (this_00[0x2f5] != 0) {
    (**(code **)(*(int *)this_01 + 0x30))(DAT_10166ac0);
    CDC::SetBkMode(this_01,1);
    iVar3 = CMFCToolBarImages::PrepareDrawImage((CMFCToolBarImages *)&DAT_101691d0,local_b4,0,0,0);
    if (iVar3 != 0) {
      local_a4 = (**(code **)(*(int *)this_01 + 0x28))(&DAT_10166bb4);
      local_a0 = 0;
      pCVar1 = (CDC *)this_00[0x2f3];
      while (pCVar1 != (CDC *)0x0) {
        if (pCVar1 == (CDC *)0x0) goto LAB_100c020a;
        local_94 = *(CDC **)pCVar1;
        local_a8 = *(int **)(pCVar1 + 8);
        local_34.left = local_a8[0x15];
        local_34.top = local_a8[0x16];
        local_34.right = local_a8[0x17];
        local_34.bottom = local_a8[0x18];
        if ((((DAT_10166e54 == 0) || (local_9c[0x2c1] != 0)) &&
            ((local_a0 == local_9c[0x2df] || (local_a0 == local_9c[0x2de])))) &&
           ((local_9c[0x2de] == -1 || (local_a0 == local_9c[0x2de])))) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        local_54.left = 0;
        local_54.top = 0;
        local_54.right = 0;
        local_54.bottom = 0;
        BVar4 = IntersectRect(&local_54,&local_34,&local_44);
        if (BVar4 != 0) {
          (**(code **)(*local_a8 + 0x18))(local_98,&local_34,&DAT_101691d0,0,DAT_10166e54,uVar5,1,1)
          ;
        }
        local_a0 = local_a0 + 1;
        pCVar1 = local_94;
        this_00 = local_9c;
        this_01 = local_98;
      }
      if (this_00[0x2f5] <= this_00[0x2e0]) {
        this_00[0x2e0] = -1;
      }
      if (DAT_10166e54 != 0) {
        if ((-1 < this_00[0x2e0]) && (this_00[0x2c1] == 0)) {
          local_94 = (CDC *)FUN_100261ef(this_00,this_00[0x2e0]);
          if (local_94 == (CDC *)0x0) {
LAB_100c020a:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          if ((local_94 != (CDC *)0x0) &&
             (iVar3 = (**(code **)(*(int *)local_94 + 0x50))(), iVar3 != 0)) {
            local_34.left = *(LONG *)(local_94 + 0x54);
            local_34.top = *(LONG *)(local_94 + 0x58);
            local_34.right = *(LONG *)(local_94 + 0x5c);
            local_34.bottom = *(LONG *)(local_94 + 0x60);
            iVar3 = (**(code **)(*(int *)local_94 + 0x38))();
            if (iVar3 != 0) {
              InflateRect(&local_34,0,1);
            }
            CDC::DrawDragRect(local_98,&local_34,(tagSIZE)0x200000002,(tagRECT *)0x0,
                              (tagSIZE)0x200000002,(CBrush *)0x0,(CBrush *)0x0);
            this_00 = local_9c;
            this_01 = local_98;
          }
        }
        if (((DAT_10166e54 != 0) && (-1 < this_00[0x2e3])) && (this_00[0x2c1] == 0)) {
          (**(code **)(*this_00 + 0x3c0))(this_01);
        }
      }
      CDC::SelectClipRgn(this_01,(CRgn *)0x0);
      (**(code **)(*(int *)this_01 + 0x28))(local_a4);
      CMFCToolBarImages::EndDrawImage((CMFCToolBarImages *)&DAT_101691d0,local_b4);
    }
  }
  local_8 = 0xffffffff;
  CMemDC::~CMemDC(local_90);
  FUN_100f90cf();
  return;
}

