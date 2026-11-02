// rea decompile_all
// name: CThreadSlotData::FreeSlot
// address: 0x1000bb1f
// body: available
// range: 0x1000bb1f-0x1000bb86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::FreeSlot(int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CThreadSlotData::FreeSlot(CThreadSlotData *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  if ((0 < param_1) && (param_1 < *(int *)(this + 0xc))) {
    for (iVar3 = *(int *)(this + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      if (param_1 < *(int *)(iVar3 + 8)) {
        puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + param_1 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0xc) + param_1 * 4) = 0;
      }
    }
    puVar1 = (uint *)(*(int *)(this + 0x10) + param_1 * 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}

