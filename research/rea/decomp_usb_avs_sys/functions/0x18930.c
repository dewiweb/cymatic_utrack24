// rea decompile_all
// name: FUN_00018930
// address: 0x18930
// body: available
// range: 0x18930-0x18a9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00018930(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  *(int *)(param_1 + 0x40) = param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
        uVar3 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,param_1 + 0x54,param_1,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x3fc8));
        *(undefined8 *)(param_1 + 0x78) = uVar3;
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        return 0;
      }
      return 0x80000011;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined1 *)(param_1 + 0x24c) = 0;
      *(undefined1 *)(param_1 + 0x24d) = 0;
      *(undefined4 *)(param_1 + 0x250) = 0;
      *(longlong *)(param_1 + 0x240) = param_1 + 0x1f8;
      *(undefined1 *)(param_1 + 0x2e0) = 1;
      *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined1 *)(param_1 + 0x2e1) = 0;
      lVar2 = KeQueryPerformanceCounter(local_res8);
      lVar2 = ((lVar2 * 10000000) / local_res8[0]) / 10000;
      *(int *)(param_1 + 600) = (int)lVar2;
      *(undefined4 *)(param_1 + 0x238) = 0x40;
      FUN_000172e0(param_1,lVar2);
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x40))();
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0x80) = 0;
    KeCancelTimer(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    KeCancelTimer(param_1 + 0x128);
  }
  return 0;
}

