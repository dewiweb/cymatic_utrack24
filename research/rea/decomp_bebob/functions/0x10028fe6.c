// rea decompile_all
// name: CMFCToolBar::WrapToolBar
// address: 0x10028fe6
// body: available
// range: 0x10028fe6-0x100291fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002906e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBar::WrapToolBar(int,int,class CDC *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBar::WrapToolBar
          (CMFCToolBar *this,int param_1,int param_2,CDC *param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_58 [8];
  int local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  undefined1 local_40 [4];
  int *local_3c;
  CClientDC *local_38;
  int local_34;
  CFont *local_30;
  int local_2c;
  CDC *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10028ff2;
  local_34 = 0;
  local_30 = (CFont *)0x0;
  local_28 = param_3;
  uVar2 = (**(code **)(*(int *)this + 400))();
  bVar6 = (uVar2 & 0xa000) != 0;
  local_38 = (CClientDC *)0x0;
  if (param_3 == (CDC *)0x0) {
    local_38 = FUN_1000858a(0x14);
    local_8 = 0;
    if (local_38 == (CClientDC *)0x0) {
      local_28 = (CDC *)0x0;
    }
    else {
      local_28 = (CDC *)CClientDC::CClientDC(local_38,(CWnd *)this);
    }
    local_8 = 0xffffffff;
    local_38 = (CClientDC *)0x1;
    if (bVar6) {
      local_30 = CBasePane::SelectDefaultFont((CBasePane *)this,local_28);
    }
    else {
      local_30 = (CFont *)(**(code **)(*(int *)local_28 + 0x28))(&DAT_10166be4);
    }
    param_3 = local_28;
    if (local_30 == (CFont *)0x0) {
LAB_1002906e:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
  }
  local_44 = (int *)0x0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_2c = 0;
  local_48 = local_24.top;
  iVar3 = (**(code **)(*(int *)this + 0x16c))();
  if (iVar3 != 0) {
    param_2 = 0x7fff;
  }
  local_50 = param_4;
  local_4c = (int *)param_5;
  if ((param_4 < 0) || (param_5 < 0)) {
    local_3c = (int *)(**(code **)(*(int *)this + 0x354))();
    local_50 = (**(code **)(*(int *)this + 0x358))();
    local_4c = local_3c;
  }
  iVar3 = (**(code **)(*(int *)this + 0x16c))();
  if (((iVar3 == 0) && (bVar6)) && (*(int *)(this + 0xca0) != 0)) {
    piVar4 = (int *)(**(code **)(**(int **)(this + 0xca0) + 0x1c))(local_40,param_3,&local_50,1);
    local_3c = (int *)piVar4[1];
    param_1 = param_1 - *piVar4;
  }
  piVar4 = *(int **)(this + 0xbcc);
  while (piVar4 != (int *)0x0) {
    if (piVar4 == (int *)0x0) goto LAB_1002906e;
    piVar1 = (int *)piVar4[2];
    local_3c = (int *)*piVar4;
    param_3 = local_28;
    if ((piVar1 == (int *)0x0) ||
       ((piVar1[4] = 0, local_3c == (int *)0x0 && (*(int *)(this + 0xca0) != 0)))) break;
    piVar4 = local_3c;
    if (piVar1[0x14] != 0) {
      piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(local_58,local_28,&local_50,bVar6);
      iVar3 = *piVar4;
      iVar5 = piVar4[1];
      if ((local_2c == 0) && ((*(byte *)(piVar1 + 9) & 1) != 0)) {
        iVar3 = 0;
        iVar5 = 0;
      }
      if ((((param_1 < local_2c + iVar3) && (iVar5 + local_48 < param_2)) &&
          ((*(byte *)(piVar1 + 9) & 1) == 0)) && (local_44 != (int *)0x0)) {
        local_2c = 0;
        local_48 = iVar5 + local_48 + 5;
        local_34 = local_34 + 1;
        local_44[4] = 1;
      }
      local_2c = local_2c + iVar3;
      piVar4 = local_3c;
      param_3 = local_28;
      local_44 = piVar1;
    }
  }
  if (local_38 != (CClientDC *)0x0) {
    (**(code **)(*(int *)param_3 + 0x28))(local_30);
    (**(code **)(*(int *)param_3 + 4))(1);
  }
  iVar3 = FUN_100f90cf();
  return iVar3;
}

