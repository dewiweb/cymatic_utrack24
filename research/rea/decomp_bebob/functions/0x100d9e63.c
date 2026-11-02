// rea decompile_all
// name: CPreviewView::FindPageRect
// address: 0x100d9e63
// body: available
// range: 0x100d9e63-0x100d9fcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CPreviewView::FindPageRect(class CPoint &,unsigned int &)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPreviewView::FindPageRect(CPreviewView *this,CPoint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  int dx;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x130) != 0) {
    piVar1 = (int *)CScrollView::GetDeviceScrollPosition((CScrollView *)this);
    iVar2 = piVar1[1];
    *(int *)param_1 = *(int *)param_1 + *piVar1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar2;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  *param_2 = 0;
  if (*(int *)(this + 0x13c) != 0) {
    do {
      piVar1 = (int *)(*param_2 * 0x28 + *(int *)(this + 0xd4));
      local_28.left = *piVar1;
      local_28.top = piVar1[1];
      local_28.right = piVar1[2];
      local_28.bottom = piVar1[3];
      if (*(int *)(this + 0x130) != 0) {
        iVar2 = (((local_28.top - local_28.bottom) - local_18.top) + -0x10 + local_18.bottom) / 2 +
                -1;
        dx = (((local_18.right - local_28.right) - local_18.left) + -0x10 + local_28.left) / 2 + -1;
        if (dx < 0) {
          dx = 0;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        OffsetRect(&local_28,dx,iVar2);
      }
      BVar3 = PtInRect(&local_28,*(POINT *)param_1);
      if (BVar3 != 0) {
        iVar2 = *(int *)(*param_2 * 0x28 + 4 + *(int *)(this + 0xd4));
        *(int *)param_1 = *(int *)param_1 - *(int *)(*param_2 * 0x28 + *(int *)(this + 0xd4));
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar2;
        iVar2 = MulDiv(*(int *)param_1,*(int *)(*param_2 * 0x28 + 0x1c + *(int *)(this + 0xd4)),
                       *(int *)(*param_2 * 0x28 + 0x18 + *(int *)(this + 0xd4)));
        *(int *)param_1 = iVar2;
        iVar2 = MulDiv(*(int *)(param_1 + 4),
                       *(int *)(*param_2 * 0x28 + 0x1c + *(int *)(this + 0xd4)),
                       *(int *)(*param_2 * 0x28 + 0x18 + *(int *)(this + 0xd4)));
        *(int *)(param_1 + 4) = iVar2;
        break;
      }
      *param_2 = *param_2 + 1;
    } while (*param_2 < *(uint *)(this + 0x13c));
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

