// rea decompile_all
// name: FUN_000117f4
// address: 0x117f4
// body: available
// range: 0x117f4-0x11871 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000117f4(char *param_1,undefined8 param_2,char *param_3,char param_4,char *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *param_3;
  uVar3 = 0;
  while ((cVar1 != '\0' && (uVar3 < 0x27))) {
    if ((cVar1 == '$') && (param_3[1] == param_4)) {
      param_3 = param_3 + 2;
      uVar2 = FUN_000117c0(param_1,param_5,0x28 - uVar3);
      param_1 = param_1 + uVar2;
      uVar3 = uVar3 + uVar2;
    }
    else {
      *param_1 = cVar1;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1;
    }
    cVar1 = *param_3;
  }
  *param_1 = '\0';
  return uVar3;
}

