// rea decompile_all
// name: FUN_00669750
// address: 0x669750
// body: available
// range: 0x669750-0x6697c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00669750(int *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  puVar1 = (undefined4 *)param_1[6];
  sVar2 = _fread((void *)puVar1[8],1,0x1000,(FILE *)puVar1[7]);
  if (sVar2 == 0) {
    if (*(char *)(puVar1 + 9) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x2a;
      (**(code **)*param_1)(param_1);
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x78;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    sVar2 = 2;
    *(undefined1 *)puVar1[8] = 0xff;
    *(undefined1 *)(puVar1[8] + 1) = 0xd9;
  }
  *puVar1 = puVar1[8];
  puVar1[1] = sVar2;
  *(undefined1 *)(puVar1 + 9) = 0;
  return CONCAT31((int3)((uint)puVar1[8] >> 8),1);
}

