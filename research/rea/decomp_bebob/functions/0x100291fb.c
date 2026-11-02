// rea decompile_all
// name: CMFCToolBar::SizeToolBar
// address: 0x100291fb
// body: available
// range: 0x100291fb-0x100293af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029269 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::SizeToolBar(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::SizeToolBar(CMFCToolBar *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  CClientDC local_40 [20];
  undefined1 local_2c [4];
  int local_28;
  CFont *local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x10029207;
  local_18 = (**(code **)(*(int *)this + 0x358))();
  local_14 = (**(code **)(*(int *)this + 0x354))();
  CClientDC::CClientDC(local_40,(CWnd *)this);
  iVar4 = 0;
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)this + 400))();
  if ((uVar1 & 0xa000) == 0) {
    local_24 = (CFont *)CDC::SelectObject((CDC *)local_40,(CPen *)&DAT_10166be4);
  }
  else {
    local_24 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_40);
  }
  if (local_24 == (CFont *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (param_2 == 0) {
    param_2 = 0;
    iVar4 = WrapToolBar(this,0,0x7fff,(CDC *)local_40,local_18,local_14);
    local_1c = param_1;
    local_28 = WrapToolBar(this,param_1,0x7fff,(CDC *)local_40,local_18,local_14);
    if ((iVar4 != local_28) && (0 < param_1)) {
      do {
        iVar4 = (local_1c + param_2) / 2;
        iVar2 = WrapToolBar(this,iVar4,0x7fff,(CDC *)local_40,local_18,local_14);
        if ((iVar2 != local_28) &&
           (bVar5 = param_2 == iVar4, param_2 = iVar4, iVar4 = local_1c, bVar5)) {
          WrapToolBar(this,local_1c,0x7fff,(CDC *)local_40,local_18,local_14);
          break;
        }
        local_1c = iVar4;
      } while (param_2 < local_1c);
    }
    piVar3 = (int *)(**(code **)(*(int *)this + 0x2a4))(local_2c,0);
    iVar2 = *piVar3;
    local_28 = piVar3[1];
  }
  else {
    WrapToolBar(this,0x7fff,0x7fff,(CDC *)local_40,local_18,local_14);
    piVar3 = (int *)(**(code **)(*(int *)this + 0x2a4))(local_2c,0);
    iVar2 = *piVar3;
    if (piVar3[1] < param_1) {
      do {
        piVar3 = (int *)GetButtonSize(this);
        iVar4 = iVar4 + *piVar3;
        WrapToolBar(this,iVar4,0x7fff,(CDC *)local_40,local_18,local_14);
        piVar3 = (int *)(**(code **)(*(int *)this + 0x2a4))(local_20,0);
        iVar2 = *piVar3;
      } while (param_1 < piVar3[1]);
    }
  }
  WrapToolBar(this,iVar2,0x7fff,(CDC *)local_40,local_18,local_14);
  CDC::SelectObject((CDC *)local_40,(CPen *)local_24);
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_40);
  return;
}

