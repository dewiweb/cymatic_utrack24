// rea decompile_all
// name: FUN_10007af0
// address: 0x10007af0
// body: available
// range: 0x10007af0-0x10007b18 inclusive
// range: 0x10007b20-0x10007b35 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10007af0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  iVar1 = param_1[2];
  uVar2 = 0;
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 != 0) {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x10) + uVar2 * 4) = param_1[uVar2 + 3];
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  return;
}

