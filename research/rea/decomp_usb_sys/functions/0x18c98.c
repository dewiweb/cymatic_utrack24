// rea decompile_all
// name: FUN_00018c98
// address: 0x18c98
// body: available
// range: 0x18c98-0x18d80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00018c98(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = DAT_00029268;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    return;
  }
  plVar4 = (longlong *)(param_1 + 0x20);
  if ((longlong *)*plVar4 != plVar4) {
    plVar4 = (longlong *)((longlong)plVar4 + *(longlong *)(DAT_00029268 + 0x180));
    *(longlong *)plVar4[1] = *plVar4;
    *(longlong *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (longlong)plVar4;
    *plVar4 = (longlong)plVar4;
  }
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)(param_1 + 0x60);
  do {
    if (plVar5 == (longlong *)0x0) {
      if ((longlong *)*plVar4 == plVar4) goto LAB_00018d6a;
      plVar5 = (longlong *)(*plVar4 - *(longlong *)(param_1 + 0x70));
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)plVar5);
      if (plVar5 == plVar4) {
LAB_00018d6a:
        *(undefined1 *)(param_1 + 0xa1) = 0;
        return;
      }
      plVar5 = (longlong *)((longlong)plVar5 - *(longlong *)(param_1 + 0x70));
    }
    if (plVar5 == (longlong *)0x0) goto LAB_00018d6a;
    plVar3 = *(longlong **)(plVar5[4] + 0x28);
    if ((longlong *)*plVar5 != plVar5) {
      plVar2 = (longlong *)((longlong)plVar5 + *(longlong *)(plVar5[4] + 0x68));
      *(longlong *)plVar2[1] = *plVar2;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      piVar1 = (int *)((longlong)plVar3 + 0x6c);
      *piVar1 = *piVar1 + -1;
      *(int *)(lVar6 + 0x784) = *(int *)(lVar6 + 0x784) + -1;
      FUN_00023248(plVar3);
      lVar6 = DAT_00029268;
    }
  } while( true );
}

