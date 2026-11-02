// rea decompile_all
// name: CDockSite::ResizeRow
// address: 0x100914ef
// body: available
// range: 0x100914ef-0x10091580 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockSite::ResizeRow(class CDockingPanesRow *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockSite::ResizeRow(CDockSite *this,CDockingPanesRow *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CDockSite *local_c;
  CDockSite *local_8;
  
  iVar3 = *(int *)(param_1 + 0xc);
  local_c = this;
  local_8 = this;
  if ((param_2 - iVar3 < 0) && (iVar1 = (**(code **)(*(int *)param_1 + 0x40))(), iVar1 == 0)) {
    iVar1 = *(int *)param_1;
    uVar2 = (**(code **)(*(int *)this + 0x160))();
    (**(code **)(iVar1 + 0x18))(&local_c,1,uVar2);
    iVar1 = (**(code **)(*(int *)this + 0x160))();
    if (((iVar1 != 0) && (param_2 - (int)local_8 < 0)) ||
       ((iVar1 = (**(code **)(*(int *)this + 0x160))(), iVar1 == 0 && (param_2 - (int)local_c < 0)))
       ) {
      return 0;
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x288))(param_1,param_2 - iVar3);
  ResizeDockSiteByOffset(this,iVar3,param_3);
  return iVar3;
}

