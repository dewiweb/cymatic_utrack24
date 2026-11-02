// rea decompile_all
// name: FUN_006417c0
// address: 0x6417c0
// body: available
// range: 0x6417c0-0x6418ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006417c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (0 < in_ECX[2]) {
    FUN_00641b90(&local_14);
    iVar5 = in_ECX[2];
    while (iVar5 = iVar5 + -1, 0 < iVar5) {
      uVar3 = FUN_00641b90(local_24);
      pfVar4 = (float *)FUN_0046f9b0(local_34,uVar3);
      local_14 = *pfVar4;
      local_10 = pfVar4[1];
      local_c = pfVar4[2];
      local_8 = pfVar4[3];
    }
    iVar5 = in_ECX[2] + -1;
    if (-1 < iVar5) {
      if (3 < in_ECX[2]) {
        iVar1 = *in_ECX;
        do {
          iVar2 = *(int *)(iVar1 + iVar5 * 4);
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) - local_14;
          iVar2 = *(int *)(iVar1 + -4 + iVar5 * 4);
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) - local_14;
          iVar2 = *(int *)(iVar1 + -8 + iVar5 * 4);
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) - local_14;
          iVar2 = *(int *)(iVar1 + -0xc + iVar5 * 4);
          iVar5 = iVar5 + -4;
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) - local_14;
        } while (2 < iVar5);
      }
      if (-1 < iVar5) {
        iVar1 = *in_ECX;
        do {
          iVar2 = *(int *)(iVar1 + iVar5 * 4);
          iVar5 = iVar5 + -1;
          *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) - local_14;
        } while (-1 < iVar5);
      }
    }
    in_ECX[3] = (int)local_c;
    in_ECX[4] = (int)local_8;
    return;
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}

