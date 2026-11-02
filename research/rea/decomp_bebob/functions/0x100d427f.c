// rea decompile_all
// name: CMFCCustomizeMenuButton::DrawCheckBox
// address: 0x100d427f
// body: available
// range: 0x100d427f-0x100d4366 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCustomizeMenuButton::DrawCheckBox(class CDC *,class CRect
   const &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCCustomizeMenuButton::DrawCheckBox
          (CMFCCustomizeMenuButton *this,CDC *param_1,CRect *param_2,int param_3)

{
  uint uVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xec) != 0) {
    local_18 = *(undefined4 *)param_2;
    local_14 = *(int *)(param_2 + 4) + 1;
    local_10 = *(int *)(param_2 + 8) + -1;
    local_c = *(int *)(param_2 + 0xc) + -1;
    pCVar2 = CMFCVisualManager::GetInstance();
    iVar3 = (**(code **)(*(int *)pCVar2 + 0xb0))();
    if (iVar3 == 0) {
      uVar1 = *(uint *)(this + 0x24);
      *(uint *)(this + 0x24) = uVar1 | 0x10000;
      CMFCToolBarButton::FillInterior
                ((CMFCToolBarButton *)this,param_1,(CRect *)&local_18,param_3,1);
      if (param_3 != 0) {
        pCVar2 = CMFCVisualManager::GetInstance();
        if (*(int *)(pCVar2 + 0x80) != 0) {
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x800000;
        }
      }
      pCVar2 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar2 + 0x88))(param_1,this,local_18,local_14,local_10,local_c,1);
      *(uint *)(this + 0x24) = uVar1;
    }
    pCVar2 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar2 + 0xa4))(param_1,this,local_18,local_14,local_10,local_c,param_3,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

