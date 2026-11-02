// rea decompile_all
// name: FUN_00669c50
// address: 0x669c50
// body: available
// range: 0x669c50-0x669d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00669c50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  uVar1 = *in_ECX;
  uVar2 = in_ECX[3];
  _memset(in_ECX,0,0x1b0);
  *in_ECX = uVar1;
  in_ECX[3] = uVar2;
  *(undefined1 *)(in_ECX + 4) = 1;
  FUN_0065c7e0();
  in_ECX[2] = 0;
  in_ECX[6] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x43] = 0;
  FUN_00664490();
  puVar3 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[100] = puVar3;
  *puVar3 = FUN_00666840;
  puVar3[1] = FUN_00666800;
  puVar3[2] = FUN_00666930;
  puVar3[3] = FUN_00666910;
  *(undefined2 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 5) = 1;
  in_ECX[5] = 200;
  return;
}

