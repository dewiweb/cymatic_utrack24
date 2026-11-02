// rea decompile_all
// name: FUN_00020370
// address: 0x20370
// body: available
// range: 0x20370-0x20426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00020370(longlong param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_000275b0;
  uVar1 = 32000;
  do {
    if (uVar1 == param_2) goto LAB_000203a1;
    puVar2 = puVar2 + 5;
    uVar1 = *puVar2;
  } while (uVar1 != 0);
  puVar2 = (uint *)0x0;
LAB_000203a1:
  if (puVar2 != (uint *)0x0) {
    FUN_00022448(param_1 + 0x100,puVar2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x1d0);
    uVar1 = param_4 >> 3;
    *(uint *)(param_1 + 0x1c) = param_4;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x1d0) * param_4;
    *(uint *)(param_1 + 0x20) = param_4;
    if (uVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 6;
      *(undefined4 *)(param_1 + 0x18) = 0x18;
    }
    else if ((uVar1 == 2) || (uVar1 == 3)) {
      *(undefined4 *)(param_1 + 0x10) = 5;
      *(undefined4 *)(param_1 + 0x18) = 0x20;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(uint *)(param_1 + 0x18) = param_4;
    }
    *(uint *)(param_1 + 0xe44) = *puVar2 * param_4;
  }
  return;
}

