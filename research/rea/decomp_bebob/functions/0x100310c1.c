// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext
// address: 0x100310c1
// body: available
// range: 0x100310c1-0x1003113c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext(class
   CDC *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonDefaultPaneButtonContext
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_c [2];
  
  if (*(int *)(param_2 + 0x68) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    iVar2 = *(int *)(param_2 + 0x1c);
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    iVar4 = (**(code **)(*(int *)param_2 + 0x70))(local_c,1);
    (**(code **)(*(int *)param_2 + 0x7c))
              (param_1,1,uVar1,iVar2 + 10,uVar3,*(int *)(iVar4 + 4) + iVar2 + 10);
    FUN_100bc498(param_2,local_c,param_1,0);
  }
  else {
    (**(code **)(*(int *)param_2 + 0x7c))
              (param_1,1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  }
  return;
}

