// rea decompile_all
// name: CCheckListBox::PreMeasureItem
// address: 0x100ea1f7
// body: available
// range: 0x100ea1f7-0x100ea298 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::PreMeasureItem(struct tagMEASUREITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CCheckListBox::PreMeasureItem(CCheckListBox *this,tagMEASUREITEMSTRUCT *param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  tagMEASUREITEMSTRUCT *ptVar5;
  uint *puVar6;
  uint local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar1 = CalcMinimumItemHeight(this);
  ptVar5 = param_1;
  puVar6 = local_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *(uint *)ptVar5;
    ptVar5 = ptVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  local_20[3] = 0xffffffff;
  local_20[4] = uVar1;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x20) != 0) {
    local_c = (**(code **)(*(int *)this + 0x11c))(0x199,local_20[2],0);
    local_c = -(uint)(local_c != 0xffffffff) & local_c;
    if ((local_c != 0) && (local_c != 0xffffffff)) {
      local_c = *(uint *)(local_c + 8);
    }
  }
  (**(code **)(*(int *)this + 0x168))(local_20);
  uVar4 = local_20[4];
  if (local_20[4] <= uVar1) {
    uVar4 = uVar1;
  }
  *(uint *)(param_1 + 0x10) = uVar4;
  *(uint *)(param_1 + 0xc) = local_20[3];
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

