// rea decompile_all
// name: FUN_00515a70
// address: 0x515a70
// body: available
// range: 0x515a70-0x515b28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515a70(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  
  if (*(int *)(in_ECX + 0x2ec) != 0) {
    local_2c = *(undefined1 **)(in_ECX + 0xf8);
    piStack_38 = &local_10;
    uStack_34 = DAT_00c8a5d4;
    local_30 = 0;
    FUN_006e0d50();
    iVar1 = *(int *)(in_ECX + 0x2ec);
    *(undefined4 *)(iVar1 + 0x80) = 0x43960000;
    *(undefined4 *)(iVar1 + 0x84) = 0x43960000;
    *(float *)(iVar1 + 0x78) = (float)local_10;
    *(float *)(iVar1 + 0x7c) = (float)local_c;
    FUN_006e6400(&piStack_38);
    FUN_006ce9f0(1);
    local_2c = local_20;
    local_30 = 0x515b0f;
    puVar2 = (undefined4 *)FUN_006e6400();
    local_2c = (undefined1 *)puVar2[3];
    local_30 = puVar2[2];
    uStack_34 = puVar2[1];
    piStack_38 = (int *)*puVar2;
    FUN_006e9790();
  }
  return;
}

