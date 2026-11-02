// rea decompile_all
// name: CVSToolsListBox::OnAfterRenameItem
// address: 0x100e66d0
// body: available
// range: 0x100e66d0-0x100e671b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual void __thiscall CVSToolsListBox::OnAfterRenameItem(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CVSToolsListBox::OnAfterRenameItem(CVSToolsListBox *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x100e66dc;
  iStack_24 = param_1;
  puVar5 = &uStack_28;
  uStack_28 = 0x100e66e9;
  iVar3 = (**(code **)(*(int *)this + 0x184))();
  puVar5[-1] = param_1;
  iVar1 = *(int *)this;
  puVar5[-2] = &param_1;
  pcVar2 = *(code **)(iVar1 + 0x17c);
  puVar6 = puVar5 + -3;
  puVar5[-3] = 0x100e66fc;
  uVar4 = (*pcVar2)();
  local_8 = 0;
  *(undefined4 *)((int)puVar6 + -4) = uVar4;
  *(undefined4 *)((int)puVar6 + -8) = 0x100e6709;
  FUN_10007c90((void *)(iVar3 + 4),*(undefined4 **)((int)puVar6 + -4));
  puVar5 = (undefined4 *)(param_1 + -0x10);
  *(undefined4 *)((int)puVar6 + -4) = 0x100e6714;
  FUN_10001030(puVar5);
  *(undefined4 *)((int)puVar6 + -4) = 0x100e6719;
  return;
}

