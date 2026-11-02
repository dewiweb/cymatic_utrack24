// rea decompile_all
// name: CFrameWndEx::RecalcLayout
// address: 0x1002517d
// body: available
// range: 0x1002517d-0x100252f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWndEx::RecalcLayout(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWndEx::RecalcLayout(CFrameWndEx *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  CObject *this_00;
  ulong uVar4;
  
  if (*(int *)(this + 0xe8) != 0) {
    return;
  }
  iVar1 = *(int *)(this + 0x150);
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined4 *)(this + 0x150) = 0;
  iVar2 = (**(code **)(*(int *)this + 0x1c4))();
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x60) != 0)) && (*(int *)(iVar2 + 0x50) == 4)) {
    *(undefined4 *)(this + 0x150) = 1;
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    *(uint *)(this + 0x154) = (uint)((uVar3 & 0xc00000) != 0);
  }
  if (*(int *)(this + 0x11c) != 0) goto LAB_1002529e;
  this_00 = (CObject *)FUN_10054804((int)this);
  if ((*(int *)(this + 0x358) == 0) && (*(int *)(this + 0xa0) == 0)) {
    (**(code **)(*(int *)(this + 0x228) + 0x34))(param_1);
  }
  else {
    if ((this_00 != (CObject *)0x0) &&
       (iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CPreviewViewEx_101290b8),
       iVar2 != 0)) {
      (**(code **)(*(int *)(this + 0x228) + 0x34))(param_1);
      CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,*(int *)(this + 800),*(int *)(this + 0x324),
                         *(int *)(this + 0x328) - *(int *)(this + 800),
                         *(int *)(this + 0x32c) - *(int *)(this + 0x324),0x14);
      goto LAB_1002529e;
    }
    if ((param_1 != 0) && (*(int *)(this + 0xa0) != 0)) {
      ActiveItemRecalcLayout(this);
      goto LAB_1002529e;
    }
    *(undefined4 *)(this + 0xe8) = 0;
    CFrameWnd::RecalcLayout((CFrameWnd *)this,param_1);
  }
  (**(code **)(*(int *)this + 0x1c0))();
LAB_1002529e:
  *(undefined4 *)(this + 0xe8) = 0;
  if (iVar1 != *(int *)(this + 0x150)) {
    if (*(int *)(this + 0x154) == 0) {
      if (*(int *)(this + 0x150) == 0) {
        uVar4 = 0;
        uVar3 = 0xc00000;
      }
      else {
        uVar4 = 0xc00000;
        uVar3 = 0;
      }
      CWnd::ModifyStyle((CWnd *)this,uVar3,uVar4,0);
    }
    CFrameImpl::OnChangeVisualManager((CFrameImpl *)(this + 0x124));
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,-1,-1,0x37);
  }
  return;
}

