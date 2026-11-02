// rea decompile_all
// name: CDockingPanesRow::StretchPaneRect
// address: 0x1008d6fc
// body: available
// range: 0x1008d6fc-0x1008d798 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    protected: int __thiscall CDockingPanesRow::StretchPaneRect(class CPane *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockingPanesRow::StretchPaneRect(CDockingPanesRow *this,CPane *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int local_10;
  int local_c;
  
  iVar3 = (**(code **)(*(int *)param_1 + 0x278))();
  iVar4 = (**(code **)(*(int *)param_1 + 0x27c))();
  if (param_2 < 1) {
    lVar5 = _labs(param_2);
    if (iVar4 < lVar5) {
      param_2 = -iVar4;
    }
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 <= param_2) {
      param_2 = iVar3;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  uVar2 = *(undefined4 *)(param_1 + 0xa0);
  local_10 = *(int *)(param_1 + 0xa4);
  local_c = *(int *)(param_1 + 0xa8);
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    local_c = local_c + param_2;
  }
  else {
    local_10 = local_10 + param_2;
  }
  lVar5 = _labs(param_2);
  if (0 < lVar5) {
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    *(int *)(param_1 + 0xa4) = local_10;
    *(int *)(param_1 + 0xa8) = local_c;
  }
  return param_2;
}

