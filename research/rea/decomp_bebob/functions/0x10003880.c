// rea decompile_all
// name: FUN_10003880
// address: 0x10003880
// body: available
// range: 0x10003880-0x100038a9 inclusive
// range: 0x100038b0-0x10003921 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100038c6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10003880(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar4 = FUN_10009d8b((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0x28);
    iVar1 = *(int *)((int)this + 0x18);
    iVar4 = iVar4 + -0x24 + iVar1 * 0x28;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)((int)this + 0x10);
      *(int *)((int)this + 0x10) = iVar4;
      iVar4 = iVar4 + -0x28;
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[9] = 0;
  puVar2[8] = puVar2[8];
  uVar3 = *(undefined4 *)(*(int *)((int)this + 0x10) + 0x20);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(undefined4 *)((int)this + 0x10) = uVar3;
  *puVar2 = param_1;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  puVar2[4] = 0xffffffff;
  puVar2[5] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  *(undefined2 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1e) = 0;
  return;
}

