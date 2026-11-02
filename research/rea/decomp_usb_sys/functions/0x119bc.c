// rea decompile_all
// name: FUN_000119bc
// address: 0x119bc
// body: available
// range: 0x119bc-0x11ace inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000119bc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  
  puVar2 = (ulonglong *)ExAllocatePoolWithTag(0,0x870,0x5f6e6577);
  if (puVar2 == (ulonglong *)0x0) {
    DAT_00029268 = (longlong *)0x0;
  }
  else {
    FUN_000264d0(puVar2,0,0x870);
    DAT_00029268 = FUN_00013ba8(puVar2);
  }
  plVar1 = DAT_00029268;
  if (DAT_00029268 == (longlong *)0x0) {
    uVar3 = 0xc0000001;
  }
  else {
    DAT_00029268[2] = param_1;
    *(undefined1 **)(param_1 + 0x70) = &LAB_00011c74;
    *(undefined1 **)(param_1 + 0x100) = &LAB_00011c88;
    *(undefined1 **)(param_1 + 0x80) = &LAB_00011c9c;
    *(undefined1 **)(param_1 + 0xe0) = &LAB_00011cb0;
    *(undefined1 **)(param_1 + 0xe8) = &LAB_00011cc4;
    *(undefined1 **)(param_1 + 0x128) = &LAB_00011c60;
    *(undefined1 **)(param_1 + 0x120) = &LAB_00011c4c;
    *(undefined1 **)(param_1 + 0x148) = &LAB_00011c38;
    *(code **)(*(longlong *)(param_1 + 0x30) + 8) = FUN_00011b4c;
    *(code **)(param_1 + 0x68) = FUN_00011ad8;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2);
  }
  return uVar3;
}

