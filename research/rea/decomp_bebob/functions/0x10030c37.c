// rea decompile_all
// name: CMFCVisualManager::GetTabFrameColors
// address: 0x10030c37
// body: available
// range: 0x10030c37-0x10030d44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::GetTabFrameColors(class CMFCBaseTabCtrl const
   *,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long
   &,class CBrush * &,class CBrush * &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::GetTabFrameColors
          (CMFCVisualManager *this,CMFCBaseTabCtrl *param_1,ulong *param_2,ulong *param_3,
          ulong *param_4,ulong *param_5,ulong *param_6,ulong *param_7,CBrush **param_8,
          CBrush **param_9)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = *(int *)param_1;
  uVar1 = (**(code **)(iVar3 + 0x208))();
  uVar2 = (**(code **)(iVar3 + 0x1d8))(uVar1);
  iVar3 = (**(code **)(*(int *)param_1 + 0x284))();
  if ((iVar3 == 0) || (uVar2 == 0xffffffff)) {
    uVar2 = DAT_10166ab4;
    if (*(int *)(param_1 + 0x114) == 0) {
      uVar2 = DAT_10166aec;
    }
    *param_5 = uVar2;
  }
  else {
    *param_5 = uVar2;
  }
  if (*(int *)(param_1 + 0x114) == 0) {
    *param_2 = DAT_10166af0;
    *param_3 = DAT_10166b00;
    iVar3 = (**(code **)(*(int *)param_1 + 0x288))();
    uVar2 = DAT_10166af0;
    if (iVar3 == 0) {
      uVar2 = DAT_10166af4;
    }
    *param_4 = uVar2;
    *param_6 = DAT_10166af8;
    *param_7 = DAT_10166afc;
    *param_8 = (CBrush *)&DAT_10166b68;
  }
  else {
    *param_2 = DAT_10166ab8;
    *param_3 = DAT_10166ac0;
    iVar3 = (**(code **)(*(int *)param_1 + 0x288))();
    uVar2 = DAT_10166ab8;
    if (iVar3 == 0) {
      uVar2 = DAT_10166abc;
    }
    *param_4 = uVar2;
    *param_6 = DAT_10166ac8;
    *param_7 = DAT_10166acc;
    *param_8 = (CBrush *)&DAT_10166b30;
  }
  *param_9 = (CBrush *)&DAT_10166b48;
  return;
}

