// rea decompile_all
// name: CMFCCaptionBar::CheckRectangle
// address: 0x100bd7ee
// body: available
// range: 0x100bd7ee-0x100bd8a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCCaptionBar::CheckRectangle(class CRect &,class CRect const &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCCaptionBar::CheckRectangle(CMFCCaptionBar *this,CRect *param_1,CRect *param_2,int param_3)

{
  BOOL BVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = IsRectEmpty((RECT *)param_1);
  if ((BVar1 != 0) || (BVar1 = IsRectEmpty((RECT *)param_2), BVar1 != 0)) goto LAB_100bd896;
  local_18.left = *(LONG *)param_2;
  local_18.top = *(LONG *)(param_2 + 4);
  local_18.right = *(LONG *)(param_2 + 8);
  local_18.bottom = *(LONG *)(param_2 + 0xc);
  InflateRect(&local_18,*(int *)(this + 0x474),*(int *)(this + 0x474));
  if ((*(int *)param_1 <= local_18.right) && (local_18.left <= *(int *)param_1)) {
    *(LONG *)param_1 = local_18.right;
  }
  if ((local_18.left <= *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) <= local_18.right)) {
    *(LONG *)(param_1 + 8) = local_18.left;
  }
  iVar2 = *(int *)param_1;
  if (iVar2 < local_18.left) {
LAB_100bd86e:
    if (local_18.right <= *(int *)(param_1 + 8)) {
      if (param_3 == 0) {
        *(LONG *)param_1 = local_18.right;
      }
      else {
        *(LONG *)(param_1 + 8) = local_18.left;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 8) <= local_18.right) {
      *(int *)(param_1 + 8) = iVar2;
    }
    if (iVar2 <= local_18.left) goto LAB_100bd86e;
  }
  if (param_3 == 0) {
    if (local_18.left < *(int *)(param_1 + 8)) goto LAB_100bd896;
  }
  else if (*(int *)param_1 < local_18.right) goto LAB_100bd896;
  *(undefined4 *)param_1 = *(undefined4 *)(param_1 + 8);
LAB_100bd896:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

