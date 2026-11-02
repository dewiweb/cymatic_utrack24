// rea decompile_all
// name: FUN_00022350
// address: 0x22350
// body: available
// range: 0x22350-0x2243e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022350(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    lVar6 = 0;
    do {
      uVar5 = uVar5 + 1;
      *(undefined1 *)(lVar6 + *(longlong *)(param_1 + 0x110)) = 0;
      lVar6 = lVar6 + 0xc;
    } while (uVar5 < *(uint *)(param_1 + 0x118));
  }
  lVar6 = 0;
  plVar1 = (longlong *)(param_1 + 0xf8);
  do {
    if (lVar6 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_000223d5;
      lVar6 = *plVar1 - *(longlong *)(param_1 + 0x108);
    }
    else {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x108) + lVar6);
      if (plVar7 == plVar1) {
LAB_000223d5:
        *(undefined4 *)(param_1 + 0x128) = 0;
        uVar5 = 0;
        if (*(int *)(param_1 + 0x118) != 0) {
          lVar6 = 0;
          do {
            lVar2 = *(longlong *)(param_1 + 0x110);
            if (*(char *)(lVar6 + lVar2) == '\0') {
              uVar4 = (ulonglong)*(uint *)(param_1 + 0x128);
              lVar3 = *(longlong *)(param_1 + 0x120);
              *(undefined4 *)(lVar3 + uVar4 * 0xc) = *(undefined4 *)(lVar6 + lVar2);
              *(undefined4 *)(lVar3 + 4 + uVar4 * 0xc) = *(undefined4 *)(lVar6 + 4 + lVar2);
              *(undefined4 *)(lVar3 + 8 + uVar4 * 0xc) = *(undefined4 *)(lVar6 + 8 + lVar2);
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
            }
            uVar5 = uVar5 + 1;
            lVar6 = lVar6 + 0xc;
          } while (uVar5 < *(uint *)(param_1 + 0x118));
        }
        return;
      }
      lVar6 = (longlong)plVar7 - *(longlong *)(param_1 + 0x108);
    }
    if (lVar6 == 0) goto LAB_000223d5;
    for (plVar7 = (longlong *)(lVar6 + 0x28); *plVar7 != 0; plVar7 = plVar7 + 1) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x110) + (ulonglong)*(uint *)(*plVar7 + 0x30) * 0xc) =
           1;
    }
  } while( true );
}

