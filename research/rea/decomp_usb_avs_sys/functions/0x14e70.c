// rea decompile_all
// name: FUN_00014e70
// address: 0x14e70
// body: available
// range: 0x14e70-0x14f32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00014e70(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar4 = KeAcquireSpinLockRaiseToDpc(param_2 + 0x80);
  pcVar1 = *(code **)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    IoFreeWorkItem();
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  KeReleaseSpinLock(param_2 + 0x80,uVar4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,uVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeSetEvent(param_2 + 0xd0,0,0);
  return;
}

