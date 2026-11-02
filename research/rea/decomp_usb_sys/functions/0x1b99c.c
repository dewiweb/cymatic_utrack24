// rea decompile_all
// name: FUN_0001b99c
// address: 0x1b99c
// body: available
// range: 0x1b99c-0x1ba72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0001b99c(longlong param_1,short param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  lVar3 = IoAllocateIrp(*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x4c),0);
  if (lVar3 == 0) {
    uVar2 = 0xe0000002;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0xb8);
    *(undefined4 *)(lVar3 + 0x30) = 0xc00000bb;
    uVar4 = 0x48;
    *(undefined1 *)(lVar1 + -0x48) = 0x1b;
    *(undefined1 *)(lVar1 + -0x47) = 8;
    if (param_2 == 0) {
      uVar4 = 0x40;
    }
    else if (param_2 != 1) {
      IoFreeIrp(lVar3);
      return 0xc0000001;
    }
    *(undefined8 *)(lVar1 + -0x28) = 0;
    *(undefined2 *)(lVar1 + -0x38) = uVar4;
    *(undefined **)(lVar1 + -0x40) = &DAT_00027f28;
    *(undefined8 *)(lVar1 + -0x30) = param_3;
    *(short *)(lVar1 + -0x36) = param_2;
    uVar2 = FUN_000126fc(param_1,lVar3,0);
    IoFreeIrp(lVar3);
  }
  return uVar2;
}

