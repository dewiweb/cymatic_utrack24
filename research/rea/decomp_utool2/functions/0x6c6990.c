// rea decompile_all
// name: FUN_006c6990
// address: 0x6c6990
// body: available
// range: 0x6c6990-0x6c6af6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6990(float param_1)

{
  uint *puVar1;
  int in_ECX;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint *puStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [4];
  undefined1 local_18 [16];
  float local_8;
  
  puStack_3c = (uint *)param_1;
  iStack_40 = 0x6c69a8;
  FUN_006825f0();
  puStack_3c = (uint *)&param_1;
  *(undefined1 *)(in_ECX + 0x134) = 1;
  iStack_40 = 0x6c69c5;
  FUN_006842b0();
  *(float *)(in_ECX + 0xf4) = param_1;
  *(undefined4 *)(in_ECX + 0xf8) = 3;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  if (*(int *)(in_ECX + 0x3c) != in_ECX + 0xf0) {
    *(int *)(in_ECX + 0x3c) = in_ECX + 0xf0;
    FUN_006e6400(&uStack_48);
    FUN_006ce9f0(1);
  }
  puStack_3c = (uint *)local_18;
  iStack_40 = 0x6c6a1d;
  FUN_00683770();
  puStack_3c = local_28;
  iStack_40 = 0x6c6a31;
  puVar1 = (uint *)FUN_0040ef50();
  local_8 = (float)puVar1[2];
  local_28[0] = *puVar1 ^ 0x80000000;
  local_28[3] = puVar1[1] ^ 0x80000000;
  param_1 = (float)puVar1[3];
  puStack_3c = &local_30;
  local_30 = 0x3f800000;
  local_2c = 0;
  local_28[1] = 0;
  local_28[2] = 0x3f800000;
  iStack_40 = 0x6c6a91;
  FUN_00680060();
  puStack_3c = (uint *)(*(int *)(in_ECX + 0x124) + 1 +
                       (int)(*(float *)(in_ECX + 0x138) + param_1) + *(int *)(in_ECX + 300));
  iStack_40 = *(int *)(in_ECX + 0x128) + 1 +
              (int)(*(float *)(in_ECX + 0x138) + local_8) + *(int *)(in_ECX + 0x130);
  uStack_44 = *(undefined4 *)(in_ECX + 0x14);
  uStack_48 = *(undefined4 *)(in_ECX + 0x10);
  FUN_006e9790();
  FUN_006e6400(&uStack_48);
  FUN_006ce9f0(1);
  return;
}

