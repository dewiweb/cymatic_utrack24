// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawIcon
// address: 0x100db8c1
// body: available
// range: 0x100db8c1-0x100db9ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolTipCtrl::OnDrawIcon(class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolTipCtrl::OnDrawIcon
          (CMFCToolTipCtrl *this,CDC *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  tagAFXDrawState local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  CDC *local_8;
  
  iVar1 = *(int *)(this + 0x9c);
  local_8 = param_1;
  if (iVar1 == 0) {
    if ((*(int *)(this + 0x98) == 0) ||
       (*(CMFCToolBarImages **)(this + 0x94) == (CMFCToolBarImages *)0x0)) {
      iVar1 = 0;
    }
    else {
      CMFCToolBarImages::PrepareDrawImage(*(CMFCToolBarImages **)(this + 0x94),local_24,0,0,0);
      local_14 = DAT_10166e5c;
      iVar1 = *(int *)(this + 0x98);
      local_18 = *(undefined4 *)(iVar1 + 0x24);
      local_c = *(undefined4 *)(iVar1 + 8);
      local_10 = *(undefined4 *)(iVar1 + 0xc);
      DAT_10166e5c = 0;
      *(undefined4 *)(*(int *)(this + 0x98) + 8) = 0;
      iVar1 = 1;
      *(undefined4 *)(*(int *)(this + 0x98) + 0xc) = 1;
      *(undefined4 *)(*(int *)(this + 0x98) + 0x24) = 0;
      CMFCToolBarButton::OnDraw
                (*(CMFCToolBarButton **)(this + 0x98),local_8,(CRect *)&param_3,
                 *(CMFCToolBarImages **)(this + 0x94),1,0,0,1,1);
      *(undefined4 *)(*(int *)(this + 0x98) + 0x24) = local_18;
      *(undefined4 *)(*(int *)(this + 0x98) + 8) = local_c;
      *(undefined4 *)(*(int *)(this + 0x98) + 0xc) = local_10;
      DAT_10166e5c = local_14;
      CMFCToolBarImages::EndDrawImage(*(CMFCToolBarImages **)(this + 0x94),local_24);
    }
  }
  else {
    local_8 = *(CDC **)(iVar1 + 0x78);
    *(undefined4 *)(iVar1 + 0x78) = 0;
    (**(code **)(**(int **)(this + 0x9c) + 0x7c))
              (param_1,*(undefined4 *)(this + 0xd4),param_3,param_4,param_5,param_6);
    *(CDC **)(*(int *)(this + 0x9c) + 0x78) = local_8;
    iVar1 = 1;
  }
  return iVar1;
}

