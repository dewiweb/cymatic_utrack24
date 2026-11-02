// rea decompile_all
// name: FUN_000126fc
// address: 0x126fc
// body: available
// range: 0x126fc-0x127cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000126fc(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong local_res8;
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(code **)(lVar1 + -0x10) = FUN_000127d4;
  *(undefined1 *)(lVar1 + -0x45) = 0xe0;
  *(undefined1 **)(lVar1 + -8) = local_28;
  IofCallDriver(*(undefined8 *)(param_1 + 0x68),param_2);
  if (param_3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    local_res8 = (ulonglong)param_3 * -10000;
    plVar4 = &local_res8;
  }
  iVar2 = KeWaitForSingleObject(local_28,5,0,0,plVar4);
  if (iVar2 == 0x102) {
    IoCancelIrp(param_2);
    KeWaitForSingleObject(local_28,5,0,0,0);
    uVar3 = 0xc00000b5;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x30);
  }
  return uVar3;
}

