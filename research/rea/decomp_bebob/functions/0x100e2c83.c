// rea decompile_all
// name: COleDropTarget::OnDragScroll
// address: 0x100e2c83
// body: available
// range: 0x100e2c83-0x100e2e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall COleDropTarget::OnDragScroll(class CWnd *,unsigned
   long,class CPoint)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
COleDropTarget::OnDragScroll
          (COleDropTarget *this,CObject *param_1,undefined4 param_2,int param_4,int param_5)

{
  POINT pt;
  POINT pt_00;
  int iVar1;
  BOOL BVar2;
  CSplitterWnd *pCVar3;
  ulong uVar4;
  COleDataObject local_50 [16];
  DWORD local_40;
  CObject *local_3c;
  uint local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100e2c8f;
  local_3c = param_1;
  iVar1 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CView_10127358);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0x180))(param_2,param_4,param_5), iVar1 == -0x80000000)
     ) {
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_34);
    local_24.left = local_34.left;
    local_24.top = local_34.top;
    local_24.right = local_34.right;
    local_24.bottom = local_34.bottom;
    local_38 = 0xffff;
    InflateRect(&local_24,-DAT_10169c8c,-DAT_10169c8c);
    pt.y = param_5;
    pt.x = param_4;
    BVar2 = PtInRect(&local_34,pt);
    if ((BVar2 != 0) &&
       (pt_00.y = param_5, pt_00.x = param_4, BVar2 = PtInRect(&local_24,pt_00), BVar2 == 0)) {
      if (param_4 < local_24.left) {
        local_38 = 0xff00;
      }
      else if (local_24.right <= param_4) {
        local_38 = 0xff01;
      }
      if (param_5 < local_24.top) {
        local_38 = local_38 & 0xff;
      }
      else if (local_24.bottom <= param_5) {
        local_38 = local_38 & 0xff | 0x100;
      }
      pCVar3 = CView::GetParentSplitter((CWnd *)local_3c,0);
      if (pCVar3 == (CSplitterWnd *)0x0) {
        iVar1 = (**(code **)(*(int *)local_3c + 0x164))(local_38,0,0);
      }
      else {
        iVar1 = (**(code **)(*(int *)pCVar3 + 0x1a8))(local_3c,local_38);
      }
      if (iVar1 == 0) {
        local_38 = 0xffff;
      }
      if (local_38 != 0xffff) {
        local_40 = GetTickCount();
        if (local_38 != *(uint *)(this + 0x28)) {
          *(DWORD *)(this + 0x2c) = local_40;
          *(undefined4 *)(this + 0x30) = DAT_10169c90;
        }
        if (*(uint *)(this + 0x30) < local_40 - *(int *)(this + 0x2c)) {
          if (pCVar3 == (CSplitterWnd *)0x0) {
            (**(code **)(*(int *)local_3c + 0x164))(local_38,0,1);
          }
          else {
            (**(code **)(*(int *)pCVar3 + 0x1a8))(local_3c,local_38);
          }
          *(DWORD *)(this + 0x2c) = local_40;
          *(undefined4 *)(this + 0x30) = DAT_10169c94;
        }
        if (*(int *)(this + 0x28) == 0xffff) {
          (**(code **)(*(int *)this + 100))(local_3c);
        }
        *(uint *)(this + 0x28) = local_38;
        goto LAB_100e2e88;
      }
    }
    if (*(int *)(this + 0x28) != 0xffff) {
      COleDataObject::COleDataObject(local_50);
      local_8 = 0;
      COleDataObject::Attach(local_50,*(IDataObject **)(this + 0x24),0);
      (**(code **)(*(int *)this + 0x54))(local_3c,local_50,param_2,param_4,param_5);
      local_8 = 0xffffffff;
      *(undefined4 *)(this + 0x28) = 0xffff;
      COleDataObject::Release(local_50);
    }
  }
LAB_100e2e88:
  uVar4 = FUN_100f90cf();
  return uVar4;
}

