// rea decompile_all
// name: FUN_004f26d0
// address: 0x4f26d0
// body: available
// range: 0x4f26d0-0x4f281c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f26d0(void)

{
  int in_ECX;
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  fVar2 = (float)*(int *)(in_ECX + 0x18);
  *(float *)(in_ECX + 0x80) = fVar2;
  fVar3 = fVar2 * 0.05;
  *(float *)(in_ECX + 0x84) = (float)*(int *)(in_ECX + 0x1c);
  *(float *)(in_ECX + 500) = ((float)*(int *)(in_ECX + 0x1c) - (fVar3 + fVar3)) * 0.5;
  FUN_006e9790((int)(*(float *)(in_ECX + 0x78) + fVar3),
               (int)(((*(float *)(in_ECX + 0x84) + *(float *)(in_ECX + 0x7c)) - fVar3) - 60.0),
               (int)(fVar2 - (fVar3 + fVar3)),0x3c);
  iVar1 = (int)(*(float *)(in_ECX + 0x7c) + fVar3);
  FUN_006e9790((int)(*(float *)(in_ECX + 0x78) + fVar3),iVar1,
               (int)((((*(float *)(in_ECX + 0x80) - *(float *)(in_ECX + 500)) - fVar3) - fVar3) -
                    fVar3),(int)((float)(*(int *)(in_ECX + 0x150) - iVar1) * 0.4));
  FUN_006e9790(*(int *)(in_ECX + 0x14c) + *(int *)(in_ECX + 0x154) + -0x78,
               (*(int *)(in_ECX + 0xa4) + -0x1e) / 2 + *(int *)(in_ECX + 0x9c),0x78,0x1e);
  return;
}

