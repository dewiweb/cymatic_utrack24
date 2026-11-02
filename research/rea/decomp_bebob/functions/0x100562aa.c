// rea decompile_all
// name: CFrameWnd::BeginModalState
// address: 0x100562aa
// body: available
// range: 0x100562aa-0x100563db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100562da to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::BeginModalState(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)

{
  longlong lVar1;
  HWND pHVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  int iVar5;
  LRESULT LVar6;
  void *pvVar7;
  rsize_t rVar8;
  int iVar9;
  UINT uCmd;
  undefined **local_2c;
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CFrameWnd *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100562b6;
  *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
  if (*(uint *)(this + 0xd8) < 2) {
    local_18 = this;
    local_14 = CWnd::GetTopLevelParent((CWnd *)this);
    if (local_14 == (CWnd *)0x0) goto LAB_100562da;
    iVar9 = 0;
    local_2c = CArray<HWND__*,HWND__*>::vftable;
    local_28 = (void *)0x0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    uCmd = 5;
    local_8 = 0;
    pHVar2 = GetDesktopWindow();
    pHVar2 = GetWindow(pHVar2,uCmd);
    if (pHVar2 != (HWND)0x0) {
      do {
        BVar3 = IsWindowEnabled(pHVar2);
        if (BVar3 != 0) {
          pCVar4 = CWnd::FromHandlePermanent(pHVar2);
          if (pCVar4 != (CWnd *)0x0) {
            iVar5 = AfxIsDescendant(*(HWND__ **)(local_14 + 0x20),pHVar2);
            if (iVar5 != 0) {
              LVar6 = SendMessageW(pHVar2,0x36c,0,0);
              if (LVar6 == 0) {
                EnableWindow(pHVar2,0);
                CArray<int,int>::SetAtGrow((CArray<int,int> *)&local_2c,iVar9,(int)pHVar2);
                iVar9 = local_24;
              }
            }
          }
        }
        pHVar2 = GetWindow(pHVar2,2);
      } while (pHVar2 != (HWND)0x0);
      if (iVar9 != 0) {
        if (iVar9 < 1) {
LAB_100562da:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        lVar1 = (ulonglong)(iVar9 + 1) * 4;
        pvVar7 = FUN_1000858a(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        rVar8 = iVar9 * 4;
        *(void **)(local_18 + 0xdc) = pvVar7;
        *(undefined4 *)(rVar8 + (int)pvVar7) = 0;
        if (local_28 == (void *)0x0) goto LAB_100562da;
        FUN_10004cd0(*(void **)(local_18 + 0xdc),rVar8,local_28,rVar8);
      }
    }
    local_8 = 0xffffffff;
    FUN_10056197(&local_2c);
  }
  return;
}

