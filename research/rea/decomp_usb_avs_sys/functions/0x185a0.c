// rea decompile_all
// name: FUN_000185a0
// address: 0x185a0
// body: available
// range: 0x185a0-0x186ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000185a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 0x40) = param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x40))();
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x78));
      *(undefined1 *)(param_1 + 0x80) = 0;
      KeCancelTimer(param_1 + 0xa0);
      *(undefined1 *)(param_1 + 0x1b8) = 0;
      KeCancelTimer(param_1 + 0x128);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  else if (param_2 == 1) {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
      uVar2 = (**(code **)(*plVar1 + 0x20))
                        (plVar1,param_1 + 0x54,param_1,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x3fc8));
      *(undefined8 *)(param_1 + 0x78) = uVar2;
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      return 0x80000011;
    }
  }
  else if (param_2 == 2) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x40))();
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x78));
      *(undefined1 *)(param_1 + 0x80) = 0;
      KeCancelTimer(param_1 + 0xa0);
      *(undefined1 *)(param_1 + 0x1b8) = 0;
      KeCancelTimer(param_1 + 0x128);
      return 0;
    }
  }
  else if (param_2 == 3) {
    FUN_000172e0(param_1,1);
    return 0;
  }
  return 0;
}

