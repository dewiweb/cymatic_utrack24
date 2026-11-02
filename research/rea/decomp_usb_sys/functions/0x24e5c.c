// rea decompile_all
// name: FUN_00024e5c
// address: 0x24e5c
// body: available
// range: 0x24e5c-0x24f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_00024e5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = IoAllocateIrp(*(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + 0x4c),
                        0);
  if (lVar2 == 0) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    uVar3 = 0xc000009a;
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0xb8);
    *(undefined1 *)(lVar1 + -0x48) = 0xf;
    *(undefined4 *)(lVar1 + -0x30) = 0x220003;
    *(undefined8 *)(lVar1 + -0x40) = param_2;
    lVar2 = *(longlong *)(lVar2 + 0xb8);
    *(undefined8 *)(lVar2 + -0x10) = param_3;
    *(undefined8 *)(lVar2 + -8) = param_4;
    *(undefined1 *)(lVar2 + -0x45) = 0xe0;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    uVar3 = IofCallDriver(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68));
  }
  return uVar3;
}

