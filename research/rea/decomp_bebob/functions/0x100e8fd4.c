// rea decompile_all
// name: CCheckListBox::PreDeleteItem
// address: 0x100e8fd4
// body: available
// range: 0x100e8fd4-0x100e903c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::PreDeleteItem(struct tagDELETEITEMSTRUCT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall CCheckListBox::PreDeleteItem(CCheckListBox *this,tagDELETEITEMSTRUCT *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18 [4];
  void *local_8;
  
  puVar3 = local_18;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    puVar3 = puVar3 + 1;
  }
  if (local_8 == (void *)0x0) {
    pvVar1 = (void *)(**(code **)(*(int *)this + 0x11c))(0x199,local_18[2],0);
    if (pvVar1 != (void *)0xffffffff) {
      local_8 = pvVar1;
    }
    if (local_8 == (void *)0x0) goto LAB_100e9028;
  }
  pvVar1 = local_8;
  if (local_8 != (void *)0xffffffff) {
    local_8 = *(void **)((int)local_8 + 8);
    FUN_100085b9(pvVar1);
  }
LAB_100e9028:
  (**(code **)(*(int *)this + 0x170))(local_18);
  return;
}

