// rea decompile_all
// name: COutlookCustomizeButton::OnDraw
// address: 0x100a502a
// body: available
// range: 0x100a502a-0x100a50e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COutlookCustomizeButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
COutlookCustomizeButton::OnDraw
          (COutlookCustomizeButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(this + 0x100) = 1;
  if (param_6 == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x70))();
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_100a5052;
  }
  iVar2 = 1;
LAB_100a5052:
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,param_1,param_2,iVar2,0);
  FUN_10037b18(&local_c);
  iVar2 = ((*(int *)(param_2 + 8) - *(int *)param_2) - local_c) / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = *(int *)param_2 + iVar2;
  iVar1 = ((*(int *)(param_2 + 0xc) + local_8 * -2) - *(int *)(param_2 + 4)) / 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = *(int *)(param_2 + 4) + iVar1;
  local_14 = 0;
  local_10 = 0;
  local_1c = iVar2;
  local_18 = iVar1;
  CMenuImages::Draw(param_1,0xb,(CPoint *)&local_1c,0,(CSize *)&local_14);
  local_10 = local_8 + iVar1;
  local_1c = 0;
  local_18 = 0;
  local_14 = iVar2;
  CMenuImages::Draw(param_1,0,(CPoint *)&local_14,0,(CSize *)&local_1c);
  return;
}

