// rea decompile_all
// name: FUN_005a13a0
// address: 0x5a13a0
// body: available
// range: 0x5a13a0-0x5a146e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a13a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(in_ECX + 0x1f60) = param_1;
  *(undefined4 *)(in_ECX + 0x1f64) = param_2;
  if ((char)param_3 == '\0') {
    if (*(int *)(in_ECX + 0x1d7c) != 0) {
      uStack_14 = 0x5a13df;
      FUN_0063eab0();
      *(undefined4 *)(in_ECX + 0x1e28) = 0;
      *(undefined4 *)(in_ECX + 0x1d7c) = 0;
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
    }
    if (*(int *)(in_ECX + 0x1eb0) != 0) {
      uStack_14 = 0x5a1421;
      FUN_0063eab0();
      *(undefined4 *)(in_ECX + 0x1f5c) = 0;
      *(undefined4 *)(in_ECX + 0x1eb0) = 0;
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
    }
  }
  uStack_14 = param_3;
  uStack_18 = 0x5a1455;
  FUN_004f8300();
  uStack_14 = param_3;
  uStack_18 = 0x5a1461;
  FUN_004f8300();
  uStack_14 = 0x5a1468;
  FUN_005a1500();
  return;
}

