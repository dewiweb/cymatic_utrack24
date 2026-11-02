// rea decompile_all
// name: CMFCButton::DrawBorder
// address: 0x10051a80
// body: available
// range: 0x10051a80-0x10051c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::DrawBorder(class CDC *,class CRect &,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCButton::DrawBorder(CMFCButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  bool bVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  
  bVar1 = false;
  if (*(int *)(this + 0x74) != 3) {
    if ((DAT_10168378 != 0) && (*(int *)(this + 0x98) == 0)) {
      pCVar2 = CMFCVisualManager::GetInstance();
      iVar3 = (**(code **)(*(int *)pCVar2 + 0x1c0))
                        (param_1,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),this,param_3);
      if (iVar3 != 0) {
        bVar1 = true;
      }
    }
    if ((((*(int *)(this + 0xa0) != 0) && (*(int *)(this + 0xa8) != 0)) || ((param_3 & 1) != 0)) ||
       (*(int *)(this + 0xb4) != 0)) {
      if (bVar1) {
        InflateRect((LPRECT)param_2,-2,-2);
      }
      else {
        CDC::Draw3dRect(param_1,(tagRECT *)param_2,DAT_10166ac8,DAT_10166abc);
        InflateRect((LPRECT)param_2,-1,-1);
        if (*(int *)(this + 0x74) != 1) {
          CDC::Draw3dRect(param_1,(tagRECT *)param_2,DAT_10166ab8,DAT_10166acc);
        }
        InflateRect((LPRECT)param_2,-1,-1);
      }
      if ((DAT_10168378 != 0) && (*(int *)(this + 0x98) == 0)) {
        return;
      }
      *(int *)param_2 = *(int *)param_2 + *(int *)(this + 0xdc);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(this + 0xe0);
      return;
    }
    if ((!bVar1) && ((*(int *)(this + 0x74) != 1 || (*(int *)(this + 0xa8) != 0)))) {
      CDC::Draw3dRect(param_1,(tagRECT *)param_2,DAT_10166abc,DAT_10166ac8);
      InflateRect((LPRECT)param_2,-1,-1);
      if ((*(int *)(this + 0x74) == 0) ||
         ((*(int *)(this + 0x74) == 2 && (*(int *)(this + 0xa8) != 0)))) {
        CDC::Draw3dRect(param_1,(tagRECT *)param_2,DAT_10166acc,DAT_10166ab8);
      }
      InflateRect((LPRECT)param_2,-1,-1);
      return;
    }
  }
  InflateRect((LPRECT)param_2,-2,-2);
  return;
}

