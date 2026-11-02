// rea decompile_all
// name: FUN_00605a90
// address: 0x605a90
// body: available
// range: 0x605a90-0x605b25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00605a90(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = 2;
  puVar1 = &local_14;
  FUN_006e6400(local_24);
  FUN_00418db0(puVar1,uVar2);
  puVar1 = (undefined4 *)FUN_00418d70(local_24,0x18);
  FUN_006e9790(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  uVar2 = FUN_006c65e0(0x18);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x15c),*(undefined4 *)(in_ECX + 0x160),uVar2,0x18);
  FUN_00418d70(local_24,3);
  FUN_006e9790(local_14,local_10,local_c,local_8);
  return;
}

