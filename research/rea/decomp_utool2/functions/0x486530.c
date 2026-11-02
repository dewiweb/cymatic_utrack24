// rea decompile_all
// name: FUN_00486530
// address: 0x486530
// body: available
// range: 0x486530-0x4865d6 inclusive
// range: 0x4865e0-0x48660d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486530(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (*(int *)(in_ECX + 0x6c) < param_2) {
    *(int *)(in_ECX + 0x6c) = param_2;
    FID_conflict__free(*(void **)(in_ECX + 0x68));
    uVar2 = FUN_004c554b(param_2);
    *(undefined4 *)(in_ECX + 0x68) = uVar2;
  }
  pbVar6 = *(byte **)(in_ECX + 0x68);
  FUN_0048b680(pbVar6,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  pbVar3 = (byte *)(iVar1 * param_1 + *(int *)(in_ECX + 100));
  iVar4 = *(int *)(in_ECX + 0x50) * param_3 >> 8;
  if (iVar4 < 0xfe) {
    do {
      uVar5 = (uint)*pbVar6 * (iVar4 + 1);
      param_2 = param_2 + -1;
      *pbVar3 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar3 >> 8) + (char)(uVar5 >> 8);
      pbVar6 = pbVar6 + 1;
      pbVar3 = pbVar3 + iVar1;
    } while (0 < param_2);
    return;
  }
  do {
    param_2 = param_2 + -1;
    *pbVar3 = (char)((0x100 - (uint)*pbVar6) * (uint)*pbVar3 >> 8) + *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar3 = pbVar3 + iVar1;
  } while (0 < param_2);
  return;
}

