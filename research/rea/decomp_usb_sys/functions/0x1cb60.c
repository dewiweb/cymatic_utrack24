// rea decompile_all
// name: FUN_0001cb60
// address: 0x1cb60
// body: available
// range: 0x1cb60-0x1cbcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001cb60(longlong param_1,undefined1 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,undefined2 param_6,undefined8 param_7)

{
  char local_18 [10];
  short sStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  local_18[1] = '\x01';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\x01';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = 1;
  local_18[0] = '\0';
  sStack_e = (ushort)param_4 << 8;
  uStack_c = CONCAT11(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x1b80) + 2));
  uStack_a = param_6;
  FUN_0001bcd4(param_1,local_18,param_7);
  return;
}

