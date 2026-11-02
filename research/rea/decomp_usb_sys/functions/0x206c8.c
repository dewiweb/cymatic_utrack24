// rea decompile_all
// name: FUN_000206c8
// address: 0x206c8
// body: available
// range: 0x206c8-0x207c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000206c8(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  FUN_000205e4(param_1);
  if (*(longlong *)(param_1 + 0xe48) == 0) {
    FUN_0002262c(param_1 + 0x100,(uint *)(param_1 + 0x244),param_2,0);
  }
  else {
    iVar3 = FUN_0002262c(param_1 + 0x100,
                         (uint *)((ulonglong)*(uint *)(param_1 + 0xe78) +
                                 *(longlong *)(*(longlong *)(param_1 + 0xe48) + 0x18)),param_2,
                         *(int *)(param_1 + 0xe50) + *(int *)(param_1 + 0x38) * 8);
    *(int *)(*(longlong *)(param_1 + 0xe8) + 4) = iVar3;
    **(undefined4 **)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe78);
    *(int *)(param_1 + 0xe78) = *(int *)(param_1 + 0xe78) + iVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 0xe48) + 0x2c) = *(undefined4 *)(param_1 + 0xe78);
    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe48) + 0x10) + 0xc) - 1U <=
        *(uint *)(param_1 + 0xe50)) {
      plVar1 = *(longlong **)(param_1 + 0xe60);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe48) + *(longlong *)(param_1 + 0xe68));
      lVar2 = *plVar1;
      plVar4[1] = (longlong)plVar1;
      *plVar4 = lVar2;
      *(longlong **)(*plVar1 + 8) = plVar4;
      *plVar1 = (longlong)plVar4;
      *(undefined8 *)(param_1 + 0xe48) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xe78) = 0;
      *(undefined4 *)(param_1 + 0xe50) = 0;
    }
  }
  return;
}

