// rea decompile_all
// name: FUN_0001204c
// address: 0x1204c
// body: available
// range: 0x1204c-0x120fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001204c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  short local_18 [8];
  
  RtlInitUnicodeString(local_18,param_3);
  *param_4 = 0;
  param_4[1] = local_18[0] + 2U;
  puVar2 = FUN_00011878((uint)(ushort)(local_18[0] + 2U),0x644f4342,'\x01');
  *(ulonglong **)(param_4 + 4) = puVar2;
  if (puVar2 == (ulonglong *)0x0) {
    param_4[1] = 0;
    iVar1 = -0x3fffff66;
  }
  else {
    RtlCopyUnicodeString(param_4,local_18);
    iVar1 = IoCreateSymbolicLink(param_4,param_1 + 0x18);
    if (iVar1 < 0) {
      FUN_000118cc(param_2,0xe0070003,"Unable to create link to static device object.");
      ExFreePoolWithTag(*(undefined8 *)(param_4 + 4),0);
      *(undefined8 *)(param_4 + 4) = 0;
    }
  }
  return iVar1;
}

