// rea decompile_all
// name: CMFCToolBar::CalcSize
// address: 0x10026992
// body: available
// range: 0x10026992-0x10026ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100269fd to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolBar::CalcSize(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::CalcSize(CMFCToolBar *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_stack_00000008;
  undefined1 local_7c [8];
  uint local_74;
  CClientDC local_6c [20];
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint *local_48;
  int *local_44;
  uint local_40;
  uint local_3c;
  CFont *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x1002699e;
  local_48 = (uint *)param_1;
  local_50 = in_stack_00000008;
  if (*(int *)(this + 0xbd4) == 0) {
    GetButtonSize(this);
  }
  else {
    CClientDC::CClientDC(local_6c,(CWnd *)this);
    local_8 = 0;
    if (in_stack_00000008 == 0) {
      local_38 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_6c);
    }
    else {
      local_38 = (CFont *)CDC::SelectObject((CDC *)local_6c,(CPen *)&DAT_10166be4);
    }
    if (local_38 == (CFont *)0x0) {
LAB_100269fd:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_40 = (**(code **)(*(int *)this + 0x354))();
    local_74 = (**(code **)(*(int *)this + 0x358))();
    local_30 = local_40;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    local_34 = local_74;
    SetRectEmpty(&local_24);
    local_4c = (uint)(in_stack_00000008 == 0);
    CPane::CalcInsideRect((CPane *)this,(CRect *)&local_24,local_4c);
    local_3c = (uint)(in_stack_00000008 == 0);
    local_28 = (uint)(in_stack_00000008 != 0);
    piVar4 = *(int **)(this + 0xbcc);
    local_2c = local_3c;
    while (piVar4 != (int *)0x0) {
      if (piVar4 == (int *)0x0) goto LAB_100269fd;
      piVar1 = (int *)piVar4[2];
      local_44 = (int *)*piVar4;
      if ((piVar1 == (int *)0x0) ||
         (((local_44 == (int *)0x0 && (*(int *)(this + 0xca0) != 0)) &&
          (iVar2 = (**(code **)(*(int *)this + 0x16c))(), iVar2 != 0)))) break;
      uVar3 = local_40;
      if (*(int *)(this + 0xb18) != 0) {
        iVar2 = GetButtonSize(this);
        uVar3 = *(uint *)(iVar2 + 4);
      }
      local_58 = local_74;
      local_54 = uVar3;
      piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(local_7c,local_6c,&local_58,local_4c);
      iVar2 = *piVar4;
      iVar5 = piVar4[1];
      if (*(int *)(this + 0xb18) != 0) {
        iVar5 = *(int *)(this + 0xb74);
      }
      piVar4 = local_44;
      if (local_50 == 0) {
        if (((local_2c == local_3c) || (piVar1[4] != 0)) && ((*(byte *)(piVar1 + 9) & 1) != 0)) {
          iVar2 = 0;
          iVar5 = 0;
        }
        local_2c = iVar2 + local_2c;
        if ((int)local_34 < (int)local_2c) {
          local_34 = local_2c;
        }
        if ((int)local_30 < (int)(iVar5 + local_28)) {
          local_30 = iVar5 + local_28;
        }
        if (piVar1[4] != 0) {
          local_28 = local_28 + 5 + local_40;
          local_2c = local_3c;
        }
      }
      else {
        if ((int)local_34 < (int)(iVar2 + local_2c)) {
          local_34 = iVar2 + local_2c;
        }
        local_28 = iVar5 + local_28;
        local_2c = local_3c;
        if ((int)local_30 < (int)local_28) {
          local_30 = local_28;
        }
      }
    }
    CDC::SelectObject((CDC *)local_6c,(CPen *)local_38);
    local_8 = 0xffffffff;
    *local_48 = local_34;
    local_48[1] = local_30;
    CClientDC::~CClientDC(local_6c);
  }
  FUN_100f90cf();
  return;
}

