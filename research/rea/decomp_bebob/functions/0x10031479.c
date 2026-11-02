// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonStatusBarPane
// address: 0x10031479
// body: available
// range: 0x10031479-0x10031511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonStatusBarPane(class CDC
   *,class CMFCRibbonStatusBar *,class CMFCRibbonStatusBarPane *)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonStatusBarPane
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonStatusBar *param_2,
          CMFCRibbonStatusBarPane *param_3)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  LVar1 = *(LONG *)(param_3 + 0x18);
  LVar2 = *(LONG *)(param_3 + 0x1c);
  LVar3 = *(LONG *)(param_3 + 0x20);
  LVar4 = *(LONG *)(param_3 + 0x24);
  iVar5 = (**(code **)(*(int *)param_3 + 0x2c))();
  if (iVar5 != 0) {
    local_18.left = LVar1;
    local_18.top = LVar2;
    local_18.right = LVar3;
    local_18.bottom = LVar4;
    InflateRect(&local_18,-1,-1);
    iVar5 = (**(code **)(*(int *)param_3 + 0x34))();
    uVar7 = DAT_10166af4;
    if (iVar5 == 0) {
      uVar7 = DAT_10166af0;
    }
    iVar5 = (**(code **)(*(int *)param_3 + 0x34))();
    uVar6 = DAT_10166af0;
    if (iVar5 == 0) {
      uVar6 = DAT_10166af4;
    }
    CDC::Draw3dRect(param_1,&local_18,uVar6,uVar7);
  }
  uVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar7;
}

