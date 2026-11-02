// rea decompile_all
// name: FUN_00021568
// address: 0x21568
// body: available
// range: 0x21568-0x2161f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00021568(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((int)param_1[0x8f] == 2) {
    lVar3 = 0;
    plVar1 = param_1 + 3;
    while (lVar3 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_0002160b;
      lVar3 = *plVar1 - param_1[5];
LAB_000215f2:
      if (lVar3 == 0) goto LAB_0002160b;
      if (*(char *)(lVar3 + 0xb4) == '\0') {
        return;
      }
      if (*(char *)(lVar3 + 0xe74) == '\0') {
        return;
      }
    }
    plVar2 = *(longlong **)(lVar3 + param_1[5]);
    if (plVar2 != plVar1) {
      lVar3 = (longlong)plVar2 - param_1[5];
      goto LAB_000215f2;
    }
LAB_0002160b:
    *(undefined4 *)(param_1 + 0x8f) = 3;
    *(undefined4 *)((longlong)param_1 + 0x47c) = 10000;
  }
  else if ((int)param_1[0x8f] == 3) {
    lVar3 = 0;
    do {
      if (lVar3 == 0) {
        if ((longlong *)*param_1 == param_1) {
          return;
        }
        lVar3 = *param_1 - param_1[2];
      }
      else {
        plVar1 = *(longlong **)(lVar3 + param_1[2]);
        if (plVar1 == param_1) {
          return;
        }
        lVar3 = (longlong)plVar1 - param_1[2];
      }
      if (lVar3 == 0) {
        return;
      }
    } while (*(int *)(lVar3 + 0x1a0) == 1);
    if (0 < *(int *)((longlong)param_1 + 0x47c)) {
      *(int *)((longlong)param_1 + 0x47c) = *(int *)((longlong)param_1 + 0x47c) + -400;
      return;
    }
  }
  return;
}

