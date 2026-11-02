// rea decompile_all
// name: CMFCToolBar::CalcLayout
// address: 0x1002e8e9
// body: available
// range: 0x1002e8e9-0x1002ead5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CSize __thiscall CMFCToolBar::CalcLayout(unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::CalcLayout(CMFCToolBar *this,ulong param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_stack_0000000c;
  uint uVar5;
  int local_20;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xca0) != 0) {
    *(undefined4 *)(*(int *)(this + 0xca0) + 0xfc) = 0;
  }
  uVar1 = (**(code **)(*(int *)this + 0x418))();
  *(undefined4 *)(this + 0xb74) = uVar1;
  uVar2 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar5 = *(uint *)(this + 0x90);
  if ((uVar5 & 2) != 0) goto LAB_1002e9cc;
  if ((uVar5 & 4) == 0) {
LAB_1002e9b3:
    uVar2 = -(uint)((param_2 & 2U) != 0) & 0x7fff;
LAB_1002e9c4:
    uVar5 = 0;
  }
  else if ((param_2 & 4U) == 0) {
    if ((param_2 & 8U) == 0) {
      if ((param_2 & 0x10U) != 0) goto LAB_1002e9c4;
      if (in_stack_0000000c == -1) {
        if ((uVar5 & 1) == 0) goto LAB_1002e9b3;
        goto LAB_1002e947;
      }
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SetRectEmpty(&local_18);
      CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,param_2 & 2);
      uVar5 = param_2 & 0x20;
      if (uVar5 == 0) {
        iVar4 = local_18.right - local_18.left;
      }
      else {
        iVar4 = local_18.bottom - local_18.top;
      }
      uVar2 = iVar4 + in_stack_0000000c;
    }
    else {
      uVar5 = 0;
      uVar2 = 0x7fff;
    }
  }
  else {
LAB_1002e947:
    uVar5 = 0;
    uVar2 = *(uint *)(this + 300);
  }
  SizeToolBar(this,uVar2,uVar5);
LAB_1002e9cc:
  local_1c = ~((uint)param_2 >> 1) & 1;
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x2a4))(&local_18.right,local_1c);
  *(undefined4 *)param_1 = *puVar3;
  *(undefined4 *)(param_1 + 4) = puVar3[1];
  iVar4 = *(int *)(this + 0xca0);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0xe8) < 1)) && (*(int *)(iVar4 + 0x11c) == 0)) {
    *(undefined4 *)(iVar4 + 0xfc) = 1;
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x2a4))(&local_18.right,local_1c);
    *(undefined4 *)param_1 = *puVar3;
    *(undefined4 *)(param_1 + 4) = puVar3[1];
  }
  if ((((param_2 & 0x40U) != 0) && ((*(uint *)(this + 0x90) & 1) != 0)) &&
     (((*(uint *)(this + 0x90) & 4) != 0 && ((param_2 & 2U) != 0)))) {
    *(undefined4 *)(this + 300) = *(undefined4 *)param_1;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_1c = param_2 & 2;
  CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,local_1c);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (local_18.top - local_18.bottom);
  *(int *)param_1 = *(int *)param_1 + (local_18.left - local_18.right);
  CControlBar::CalcFixedLayout((CControlBar *)this,(int)&local_20,param_2 & 1);
  iVar4 = *(int *)param_1;
  if (*(int *)param_1 <= local_20) {
    iVar4 = local_20;
  }
  *(int *)param_1 = iVar4;
  uVar5 = *(uint *)(param_1 + 4);
  if ((int)*(uint *)(param_1 + 4) <= (int)local_1c) {
    uVar5 = local_1c;
  }
  *(uint *)(param_1 + 4) = uVar5;
  FUN_1002de91((int)this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

