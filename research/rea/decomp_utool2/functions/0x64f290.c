// rea decompile_all
// name: FUN_0064f290
// address: 0x64f290
// body: available
// range: 0x64f290-0x64f4e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64f4e4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064f290(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int in_ECX;
  uint extraout_ECX;
  ushort *puVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *local_28;
  char local_24;
  void *local_20;
  uint local_1c;
  char *local_14;
  char local_9;
  uint uVar6;
  
  iVar3 = *(int *)(in_ECX + 0x240);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      FUN_00650a40();
      return;
    }
    *(int *)(in_ECX + 0x240) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      FUN_006563b0();
      FUN_00650a40();
      return;
    }
  }
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 4) != 0) {
    FUN_00650a40();
    FUN_00655fd0();
    return;
  }
  pcVar2 = (char *)FUN_00650920(2);
  local_14 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    FUN_00650a40();
    FUN_00655fd0();
    return;
  }
  FUN_00650b50(param_1);
  iVar3 = FUN_00650a40();
  if (iVar3 == 0) {
    pcVar2[param_1] = '\0';
    cVar1 = *pcVar2;
    pcVar8 = pcVar2;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar8;
    }
    if (pcVar2 + param_1 + -2 < pcVar8 + 1) {
      FUN_006563b0();
      return;
    }
    local_24 = pcVar8[1];
    pbVar9 = (byte *)(pcVar8 + 2);
    uVar6 = (uint)(local_24 != '\b') * 4 + 6;
    uVar4 = (uint)(pcVar2 + (param_1 - (int)pbVar9)) / uVar6;
    local_9 = local_24;
    if ((uint)(pcVar2 + (param_1 - (int)pbVar9)) % uVar6 != 0) {
      FUN_006563b0();
      return;
    }
    if (0x19999999 < uVar4) {
      FUN_006563b0();
      return;
    }
    local_1c = uVar4;
    local_20 = (void *)FUN_00655c00();
    if (local_20 == (void *)0x0) {
      FUN_006563b0();
      return;
    }
    uVar6 = extraout_ECX;
    if (0 < (int)uVar4) {
      puVar7 = (ushort *)((int)local_20 + 4);
      do {
        if (local_9 == '\b') {
          puVar7[-2] = (ushort)*pbVar9;
          puVar7[-1] = (ushort)pbVar9[1];
          *puVar7 = (ushort)pbVar9[2];
          pbVar10 = pbVar9 + 4;
          puVar7[1] = (ushort)pbVar9[3];
        }
        else {
          puVar7[-2] = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
          puVar7[-1] = (ushort)pbVar9[2] * 0x100 + (ushort)pbVar9[3];
          *puVar7 = (ushort)pbVar9[4] * 0x100 + (ushort)pbVar9[5];
          pbVar10 = pbVar9 + 8;
          puVar7[1] = (ushort)pbVar9[6] * 0x100 + (ushort)pbVar9[7];
        }
        pbVar9 = pbVar10 + 2;
        uVar5 = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
        uVar6 = (uint)uVar5;
        puVar7[2] = uVar5;
        puVar7 = puVar7 + 5;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    local_28 = local_14;
    FUN_0064b7c0(&local_28,uVar6);
    if (local_20 != (void *)0x0) {
      FID_conflict__free(local_20);
    }
  }
  return;
}

