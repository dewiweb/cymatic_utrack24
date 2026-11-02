// rea decompile_all
// name: FUN_00013fbc
// address: 0x13fbc
// body: available
// range: 0x13fbc-0x1405c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00013fbc(longlong param_1,undefined8 param_2,short *param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  uVar3 = *param_3 + 2;
  puVar1 = (ulonglong *)ExAllocatePoolWithTag(1,(ulonglong)uVar3,0x644f4342);
  if (puVar1 != (ulonglong *)0x0) {
    FUN_000264d0(puVar1,0,(ulonglong)uVar3);
  }
  *(ulonglong **)(param_1 + 0x7b8) = puVar1;
  if (puVar1 == (ulonglong *)0x0) {
    uVar2 = 0xc000009a;
  }
  else {
    *(ushort *)(param_1 + 0x7b2) = uVar3;
    *(undefined2 *)(param_1 + 0x7b0) = 0;
    RtlCopyUnicodeString((undefined2 *)(param_1 + 0x7b0),param_3);
    uVar2 = 0;
  }
  return uVar2;
}

