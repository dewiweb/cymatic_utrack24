// rea decompile_all
// name: CPreviewView::SetScaledSize
// address: 0x100d9cdb
// body: available
// range: 0x100d9cdb-0x100d9e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::SetScaledSize(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewView::SetScaledSize(CPreviewView *this,uint param_1)

{
  int iVar1;
  bool bVar2;
  tagSIZE tVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  LPRECT lprc;
  tagSIZE local_c;
  
  iVar6 = param_1 * 0x28 + *(int *)(this + 0xd4);
  CalcPageDisplaySize(this);
  iVar5 = *(int *)(iVar6 + 0x24);
  iVar1 = *(int *)(this + 0x130);
  bVar2 = iVar5 <= *(int *)(iVar6 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0x20);
    uVar4 = *(undefined4 *)(iVar6 + 0x24);
LAB_100d9d5b:
    *(undefined4 *)(iVar6 + 0x1c) = uVar4;
  }
  else {
    if (iVar1 == 1) {
      *(int *)(iVar6 + 0x1c) = iVar5;
      if (bVar2) {
        iVar5 = *(int *)(iVar6 + 0x20) * 3 - iVar5;
      }
      else {
        iVar5 = *(int *)(iVar6 + 0x20) + iVar5;
      }
      iVar5 = iVar5 / 2;
    }
    else {
      if (iVar1 != 2) goto LAB_100d9d5e;
      if (!bVar2) {
        *(undefined4 *)(iVar6 + 0x18) = 1;
        uVar4 = 1;
        goto LAB_100d9d5b;
      }
      *(int *)(iVar6 + 0x1c) = iVar5;
      iVar5 = *(int *)(iVar6 + 0x20) * 2 - *(int *)(iVar6 + 0x24);
    }
    *(int *)(iVar6 + 0x18) = iVar5;
  }
LAB_100d9d5e:
  iVar5 = MulDiv(*(int *)(iVar6 + 0x10),*(int *)(iVar6 + 0x18),*(int *)(iVar6 + 0x1c));
  iVar6 = MulDiv(*(int *)(iVar6 + 0x14),*(int *)(iVar6 + 0x18),*(int *)(iVar6 + 0x1c));
  lprc = (LPRECT)(*(int *)(this + 0xd4) + param_1 * 0x28);
  SetRect(lprc,8,8,iVar5 + 0xb,iVar6 + 0xb);
  if (*(int *)(this + 0x130) == 0) {
    OffsetRect(lprc,((lprc->left - lprc->right) + local_c.cx) / 2 + -1,
               ((lprc->top - lprc->bottom) + local_c.cy) / 2 + -1);
    if (param_1 == 1) {
      OffsetRect(lprc,*(int *)(this + 0x140),0);
    }
  }
  else {
    tVar3.cy = (lprc->bottom - lprc->top) + 0x10;
    tVar3.cx = (lprc->right - lprc->left) + 0x10;
    CScrollView::SetScrollSizes((CScrollView *)this,1,tVar3,&local_c,(tagSIZE *)&DAT_10138f78);
  }
  return;
}

