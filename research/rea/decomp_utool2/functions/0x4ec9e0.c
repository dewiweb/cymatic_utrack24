// rea decompile_all
// name: FUN_004ec9e0
// address: 0x4ec9e0
// body: available
// range: 0x4ec9e0-0x4ecb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec9e0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  
  uStack_10 = 0x4ec9ef;
  FUN_0063eab0();
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  iVar2 = 100;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x270);
  do {
    puVar1[-100] = 0;
    *puVar1 = 0;
    puVar1[100] = 0;
    puVar1[200] = 0;
    puVar1[300] = 0;
    puVar1[400] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0xa40) = 0;
  *(undefined4 *)(in_ECX + 0xa44) = 0;
  *(undefined4 *)(in_ECX + 0xa48) = 0;
  *(undefined4 *)(in_ECX + 0xa4c) = 0;
  *(undefined4 *)(in_ECX + 0xa50) = 0;
  *(undefined4 *)(in_ECX + 0xa58) = 0;
  *(undefined4 *)(in_ECX + 0xa5c) = 0;
  *(undefined4 *)(in_ECX + 0xa60) = 0;
  *(undefined4 *)(in_ECX + 0xa64) = 0xbf800000;
  FUN_006e6400(auStack_1c);
  FUN_006ce9f0(1);
  return;
}

