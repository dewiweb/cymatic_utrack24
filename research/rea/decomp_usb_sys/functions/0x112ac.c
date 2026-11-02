// rea decompile_all
// name: FUN_000112ac
// address: 0x112ac
// body: available
// range: 0x112ac-0x11344 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000112ac(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  code *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  
  local_88 = param_5;
  local_80 = -0x3fffffff;
  local_98[0] = param_3;
  local_90 = param_4;
  FUN_000264d0((ulonglong *)&local_78,0,0x70);
  local_60 = local_98;
  local_78 = FUN_0001117c;
  local_70 = 4;
  local_68 = param_2;
  iVar1 = RtlQueryRegistryValues(0x40000000,param_1,&local_78,0,0);
  if (iVar1 == 0) {
    iVar1 = local_80;
  }
  return iVar1;
}

