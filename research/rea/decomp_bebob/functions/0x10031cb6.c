// rea decompile_all
// name: CMFCVisualManager::OnDrawPaneBorder
// address: 0x10031cb6
// body: available
// range: 0x10031cb6-0x10031e1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawPaneBorder(class CDC *,class CBasePane
   *,class CRect &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawPaneBorder
          (CMFCVisualManager *this,CDC *param_1,CBasePane *param_2,CRect *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  COLORREF CVar4;
  ulong uVar5;
  
  iVar2 = (**(code **)(*(int *)param_2 + 0x16c))();
  if ((iVar2 == 0) && (uVar3 = (**(code **)(*(int *)param_2 + 0x1bc))(), (uVar3 & 0xf00) != 0)) {
    CVar4 = GetBkColor(*(HDC *)(param_1 + 8));
    uVar5 = DAT_10166ab8;
    uVar1 = DAT_10166abc;
    if (*(int *)(param_2 + 0x80) == 0) {
      uVar5 = DAT_10166af0;
      uVar1 = DAT_10166af4;
    }
    if ((uVar3 & 0x100) != 0) {
      CDC::FillSolidRect(param_1,0,0,1,(*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) + -1,uVar1)
      ;
    }
    if ((uVar3 & 0x200) != 0) {
      CDC::FillSolidRect(param_1,0,0,(*(int *)(param_3 + 8) - *(int *)param_3) + -1,1,uVar1);
    }
    if ((uVar3 & 0x400) != 0) {
      CDC::FillSolidRect(param_1,*(int *)(param_3 + 8),0,-1,
                         *(int *)(param_3 + 0xc) - *(int *)(param_3 + 4),uVar5);
    }
    if ((uVar3 & 0x800) != 0) {
      CDC::FillSolidRect(param_1,0,*(int *)(param_3 + 0xc),
                         (*(int *)(param_3 + 8) - *(int *)param_3) + -1,-1,uVar5);
    }
    iVar2 = (**(code **)(*(int *)param_2 + 0x1c8))();
    if (iVar2 == 0) {
      CDC::FillSolidRect(param_1,0,0,*(int *)(param_3 + 8) - *(int *)param_3,1,uVar5);
      CDC::FillSolidRect(param_1,0,1,*(int *)(param_3 + 8) - *(int *)param_3,1,uVar1);
    }
    if ((uVar3 & 0x100) != 0) {
      *(int *)param_3 = *(int *)param_3 + 1;
    }
    if ((uVar3 & 0x200) != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    if ((uVar3 & 0x400) != 0) {
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
    }
    if ((uVar3 & 0x800) != 0) {
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + -1;
    }
    (**(code **)(*(int *)param_1 + 0x2c))(CVar4);
  }
  return;
}

