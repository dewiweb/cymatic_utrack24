// rea decompile_all
// name: FUN_00016af0
// address: 0x16af0
// body: available
// range: 0x16af0-0x16ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_00016af0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_0001ede0;
  puVar1 = param_1 + 1;
  param_1[2] = puVar1;
  *puVar1 = puVar1;
  param_1[3] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  KeInitializeDpc(param_1 + 0x1c,0,0);
  KeInitializeTimer(param_1 + 0x14);
  KeInitializeDpc(param_1 + 0x1c,0,0);
  param_1[0x24] = 0;
  KeInitializeDpc(param_1 + 0x2d,0,0);
  KeInitializeTimer(param_1 + 0x25);
  KeInitializeDpc(param_1 + 0x2d,0,0);
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar3 = *(longlong **)(param_1[6] + 0x30);
  plVar2 = (longlong *)((longlong)param_1 + *(longlong *)(param_1[6] + 0x38));
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  lVar4 = KsGetParent(*(undefined8 *)(param_3 + 0x18));
  param_1[4] = *(undefined8 *)(lVar4 + 0x10);
  *(uint *)((longlong)param_1 + 0x84) = (uint)(*(int *)(param_1[7] + 0x74) != 1);
  KeInitializeTimer(param_1 + 0x14);
  KeInitializeDpc(param_1 + 0x1c,FUN_00016e80,param_1);
  param_1[0x24] = 0xffffffffffb3b4c0;
  KeInitializeTimer(param_1 + 0x25);
  KeInitializeDpc(param_1 + 0x2d,FUN_00016f10,param_1);
  param_1[0x35] = 0xfffffffffffe7960;
  return param_1;
}

